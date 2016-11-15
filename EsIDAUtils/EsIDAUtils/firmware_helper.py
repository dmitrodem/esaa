# -*- coding: utf-8 -*-
import json
from collections import OrderedDict
from PySide import QtCore, QtGui

class calibr_categories_descr(OrderedDict):
    def toJSON(self):
        return json.dumps(self)    
    
    @staticmethod
    def fromJSON(source):
        return json.loads(source, object_pairs_hook=calibr_categories_descr)

class axis_descr(object):
    """class containes axis object desrc"""
    def __init__(self, id, name, size, func):
        self.id = id
        self.name = name
        self.size = size
        self.func = func 
           
    def eval(self, x):
        return x if self.func == None else eval("lambda x:" + self.func)(x)

class axis(object):
    """class containes axis object"""
    def __init__(self, id, addr, count):
        self.id = id
        self.addr = addr
        self.count = count

class calibr_descr(object):
    """class containes calibr object desrc"""
    def __init__(self, name, type, addr, category='unknown', comment=None, func=''):
        self.name = name
        self.type = type
        self.addr = addr    
        self.category = category
        self.comment = comment
        self.func = func
    
    def toJSON(self, enc='utf-8'):
        return firmware_helper.toJSON(self, enc)

    @staticmethod
    def fromJSON(source):
        json_dict = json.loads(source)
        cdescr = calibr_descr(**json_dict)
        return cdescr

class vector_descr(object):
    """class containes table 2D object desrc"""
    def __init__(self, name, el_size, addr, descr_addr, axis, category='unknown', comment=None, func=''):
        self.name = name
        self.el_size = el_size
        self.addr = addr
        self.descr_addr = descr_addr
        self.axis = axis        
        self.category = category
        self.comment = comment
        self.func = func

    def toJSON(self, enc='utf-8'):
        return firmware_helper.toJSON(self, enc)

    @staticmethod
    def fromJSON(source):
        json_dict = json.loads(source)
        json_dict.setdefault("descr_addr")
        vdescr = vector_descr(**json_dict)
        vdescr.axis = axis(**json_dict["axis"])
        return vdescr

class matrix_descr(object):
    """class containes table 3D object desrc"""
    def __init__(self, name, el_size, addr, descr_addr, axisX, axisY, category='unknown', comment=None, func=''):
        self.name = name
        self.el_size = el_size
        self.addr = addr
        self.descr_addr = descr_addr
        self.axisX = axisX
        self.axisY = axisY        
        self.category = category
        self.comment = comment
        self.func = func

    def toJSON(self, enc='utf-8'):
        return firmware_helper.toJSON(self, enc)

    @staticmethod
    def fromJSON(source):
        json_dict = json.loads(source)
        json_dict.setdefault("descr_addr")
        mdescr = matrix_descr(**json_dict)
        mdescr.axisX = axis(**json_dict["axisX"])
        mdescr.axisY = axis(**json_dict["axisY"])
        return mdescr

class firmware_helper(object):
    """class containes firmware object desrc"""    
    @staticmethod
    def toJSON(source, enc="utf-8"):
        return json.dumps(source, ensure_ascii=False, default=lambda o: o.__dict__, indent=4, encoding=enc)

    @staticmethod
    def fillTreeWidget(tree, items, parent_key="root"):
        for key, value in items.items():
            if (isinstance(value, dict)):
                firmware_helper.fillTreeWidget(tree, value, key)
            else:
                node = tree.findItems(parent_key, QtCore.Qt.MatchExactly | QtCore.Qt.MatchRecursive, 1);

                sub_node = QtGui.QTreeWidgetItem()
                sub_node.setText(0, value)
                sub_node.setText(1, key)
                
                if len(node) == 0:
                    tree.addTopLevelItem(sub_node)
                else:
                    node[0].addChild(sub_node)

    @staticmethod
    def selectTreeWidgetNode(tree, node_key):
         node = tree.findItems(node_key, QtCore.Qt.MatchExactly | QtCore.Qt.MatchRecursive, 1)         
         if len(node) == 1:
             tree.setCurrentItem(node[0])

    @staticmethod
    def toUtf8(text):
        return QtGui.QApplication.translate("vector_editor", text, None, QtGui.QApplication.UnicodeUTF8)
                                                           
#=============================================================

element_sizes = ["byte", "sbyte", "word", "sword"]
calibr_types = ["flag", "byte", "sbyte", "word", "sword"]

calibr_axis = json.loads(
    u"""{
    "twat": {
        "size": 1, 
        "id": "twat", 
        "func": "x - 45", 
        "name": "Ось ТОЖ, град С"
    }, 
    "percent": {
        "size": 1, 
        "id": "percent", 
        "func": "x*100/255", 
        "name": "Процентное отношение, %"
    }, 
    "rpm": {
        "size": 2, 
        "id": "rpm", 
        "func": "x", 
        "name": "Обороты двигателя (RPM), об/мин"
    }, 
    "gbc": {
        "size": 2, 
        "id": "gbc", 
        "func": "x/6", 
        "name": "Цикловое наполнение (GBC), мг/цикл"
    }, 
    "thr": {
        "size": 1, 
        "id": "thr", 
        "func": "x*100/255", 
        "name": "Положение дросселя, %"
    }
}""")

#{
#    "twat":     axis_descr("twat", u"Ось ТОЖ, град С", 1, "x - 45"),
#    "rpm":      axis_descr("rpm", u"Обороты двигателя (RPM), об/мин", 2, "x"), 
#    "gbc":      axis_descr("gbc", u"Цикловое наполнение (GBC), мг/цикл", 2, "x/6"), 
#    "thr":      axis_descr("thr", u"Положение дросселя, %", 1, "x*100/255"), 
#    "percent":      axis_descr("percent", u"Процентное отношение, %", 1, "x*100/255"), 
#    }

calibr_categories = calibr_categories_descr.fromJSON(
    u"""{    
    "root":             {"unknown": "Неизвестное", "options_flags": "Флаги комплектации", "mode_dispatcher":"Диспетчер режимов", 
                        "engine_start": "Пуск", "xx_mode":"Холостой ход", "production_mode": "Рабочие режимы", "diag_mode": "Диагностика",
                        "alf_reg":"Лямбда-регулирование"},     
    "engine_start":     {"es_fuel_supply": "Топливоподача"},
    "production_mode":  {"pd_fuel_supply": "Топливоподача"},
    "diag_mode":        {"dm_diag_dmrv": "Диагностика ДМРВ"}
    }""")

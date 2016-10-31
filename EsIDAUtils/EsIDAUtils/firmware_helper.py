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

class vector_descr(object):
    """class containes table 2D object desrc"""
    def __init__(self, name, el_size, addr, axis, category='', comment=None):
        self.name = name
        self.el_size = el_size
        self.axis = axis
        self.addr = addr
        self.category = category
        self.comment = comment
    def toJSON(self, enc='utf-8'):
        return firmware_helper.toJSON(self, enc)
    @staticmethod
    def fromJSON(source):
        json_dict = json.loads(source)
        return vector_descr(name=json_dict["name"], el_size=json_dict["el_size"], addr=json_dict["addr"], 
                            axis = axis(**json_dict["axis"]), category=json_dict["category"], comment=json_dict["comment"])

class matrix_descr(object):
    """class containes table 3D object desrc"""
    def __init__(self, name, el_size, addr, axisX, axisY, category='', comment=None):
        self.name = name
        self.el_size = el_size
        self.axisX = axisX
        self.axisY = axisY
        self.addr = addr
        self.category = category
        self.comment = comment
    def toJSON(self, enc='utf-8'):
        return firmware_helper.toJSON(self, enc)
    @staticmethod
    def fromJSON(source):
        json_dict = json.loads(source)
        return matrix_descr(name=json_dict["name"], el_size=json_dict["el_size"], addr=json_dict["addr"], 
                            axisX = axis(**json_dict["axisX"]), axisY = axis(**json_dict["axisY"]), category=json_dict["category"], comment=json_dict["comment"])

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

calibr_axis = {
    "twat":     axis_descr("twat", "Ось ТОЖ, град С", 1, "x - 45"),
    "rpm":      axis_descr("rpm", "Обороты двигателя (RPM), об/мин", 2, "x"), 
    "gbc":      axis_descr("gbc", "Цикловое наполнение (GBC), мг/цикл", 2, "x/6") 
    }

calibr_categories = calibr_categories_descr.fromJSON(
    """{    
    "root":             {"options_flags": "Флаги комплектации", "engine_start": "Пуск", "production_mode": "Рабочие режимы"},     
    "engine_start":     {"es_fuel_supply": "Топливоподача"},
    "production_mode":     {"pd_fuel_supply": "Топливоподача"}
    }""")

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
    "tair": {
        "size": 1, 
        "id": "tair", 
        "func": "x - 45", 
        "name": "Ось Т воздуха, град С"
    }, 
    "percent": {
        "size": 1, 
        "id": "c", 
        "func": "x*100/255", 
        "name": "Процентное отношение, %"
    }, 
    "rpm": {
        "size": 2, 
        "id": "rpm", 
        "func": "x", 
        "name": "Обороты двигателя (RPM), об/мин"
    }, 
    "rpm_diff": {
        "size": 1, 
        "id": "rpm_diff", 
        "func": "x", 
        "name": "Отклонение оборотов двигателя от желаемых, об/мин"
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
    },
    "gas_pos": {
        "size": 2, 
        "id": "gas_pos", 
        "func": "x*100/50000", 
        "name": "Положение педали акселератора, %"
    },
    "gas_pos_v": {
        "size": 2, 
        "id": "gas_pos_v", 
        "func": "x/10000", 
        "name": "Значение датчика акселератора, В"
        	},
      "kbarr": {
        "size": 1, 
        "id": "kbarr", 
        "func": "x/127", 
        "name": "Коэффициент барокоррекции, В"
        	},
	"uacc": {
        "size": 2, 
        "id": "uacc", 
        "func": "x*228/9420", 
        "name": "Uacc, Вольт"
    },
	"time_ms": {
        "size": 2, 
        "id": "time_ms", 
        "func": "x", 
        "name": "Время, мс"
	},
	"time_s": {
        "size": 2, 
        "id": "time_s", 
        "func": "x / 1000", 
        "name": "Время, с"
	},
	"alf": {
        "size": 1, 
        "id": "alf", 
        "func": "x / 128", 
        "name": "ALF"
	},
	"dd_uoz_off": {
        "size": 1, 
        "id": "dd_uoz_off", 
        "func": "x", 
        "name": "Отскок УОЗ при детонации (средний по ц.), град"
	},
	"uoz_delta": {
        "size": 1, 
        "id": "uoz_delta", 
        "func": "x", 
        "name": "Дельта оптимального и текущего УОЗ, град"
		},
	"adc": {
        "size": 2, 
        "id": "adc", 
        "func": "x * 5 / 1024", 
        "name": "АЦП, В"		
		}
}""", object_pairs_hook=OrderedDict)

calibr_categories = calibr_categories_descr.fromJSON(
    u"""{    
    "root":             {"unknown": "Неизвестное", 
                        "options_flags": "Флаги комплектации", 
                        "mode_dispatcher":"Диспетчер режимов", 
                        "egas_mode":"Управление EGAS",
                        "engine_start": "Пуск", 
                        "xx_mode":"Холостой ход", 
                        "production_mode": "Рабочие режимы", 
                        "pd_fuel_cutoff": "Отключение топливоподачи",
						"knock_control": "Контроль детонации",
						"alf_reg":"Лямбда-регулирование",
                        "hrdw": "Датчики, ИМ",
                        "diag_mode": "Диагностика",
						"miss_fire_control": "Диагностика пропусков воспламенения"},
    "xx_mode":          {"xxm_air": "Регулятор ХХ"},
    "engine_start":     {"es_fuel_supply": "Топливоподача"},
    "production_mode":  {"pd_fuel_supply": "Топливоподача", "pd_moment_model": "Моментная модель", "pd_ignition": "Зажигание"},
    "diag_mode":        {"dm_diag_dmrv": "Диагностика ДМРВ", "dm_diag_tsens": "Диагностика ДТОЖ/ДТВ", "dm_diag_ds": "Диагностика ДС", "dm_diag_dk_heat":"Диагностика нагревателя ДK", 
                        "dm_diag_dk": "Диагностика ДК", "dm_diag_dpdz": "Диагностика ДПДЗ", "dm_diag_dpa": "Диагностика ДПА"},
    "hrdw":             {"adsorber": "Адсорбер", "fan": "Вентилятор охлаждения двигателя", "dtv":"ДТВ", "twat":"ДТОЖ", "dk1":"ДК1", "dk2":"ДК2", "inj":"Форсунки", "egas":"EGAS"}
    }""")

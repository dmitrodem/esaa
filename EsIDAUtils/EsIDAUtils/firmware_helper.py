import json
from collections import OrderedDict

class calibr_categories_descr(OrderedDict):
    def toJSON(self):
        return json.dumps(self)    
    
    @staticmethod
    def fromJSON(source):
        return json.loads(source, object_pairs_hook=calibr_categories_descr)


calibr_categories = calibr_categories_descr.fromJSON(
    """{
    
    "":                 {"options_flags": "Флаги комплектации", "engine_start": "Пуск"},     
    "engine_start":     {"es_fuel_supply": "Топливоподача"}

    }""")

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
    def __init__(self, id, addr):
        self.id = id
        self.addr = addr

class vector_descr(object):
    """class containes table 2D object desrc"""
    def __init__(self, name, axis, addr, count, comment=None):
        self.name = name
        self.axis = axis
        self.addr = addr
        self.count = count
        self.comment = comment

class firmware_helper(object):
    """class containes firmware object desrc"""
    axis = {"twat": axis_descr("twat", "Ось ТОЖ, град С", 1, "x - 45")}

    @staticmethod
    def toJSON(source):
        return json.dumps(source, default=lambda o: o.__dict__, 
            sort_keys=True, indent=4)

    @staticmethod
    def fillTreeWidget(tree, items, id=''):
        for key, value in items.items():
            if (isinstance(value, dict)):
                firmware_helper.fillTreeWidget(tree, value, key)
            else:
                tree.insert(id, "end", key, text=value)

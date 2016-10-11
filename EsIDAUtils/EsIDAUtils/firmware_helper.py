import json

class axis_descr(object):
    """class containes axis object desrc"""
    def __init__(self, id, name, size, func):
        self.id = id
        self.name = name
        self.size = size
        self.func = func    
    def eval(self, x):
        return x if self.func == None else eval("lambda x:" + self.func)(x)

class vector_descr(object):
    """class containes table 2D object desrc"""
    def __init__(self, name, axis):
        self.name = name
        self.axis = axis

class firmware_helper(object):
    """class containes firmware object desrc"""
    axis = {'twat': axis_descr("twat", "Ось ТОЖ, град С", 1, "x - 45")}

    @staticmethod
    def toJSON(source):
        return json.dumps(source, default=lambda o: o.__dict__, 
            sort_keys=True, indent=4)



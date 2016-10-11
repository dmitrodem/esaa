class AxisDescr(object):
    """class containes axis object desrc"""
    def __init__(self, name, size):
        self.name = name
        self.size = size
        self.func = None


class FirmwareHelper(object):
    """class containes firmware object desrc"""
    axis = {'twat': AxisDescr("Ось ТОЖ", 1)}



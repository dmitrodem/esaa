# -*- coding: utf-8 -*-
from firmware_helper import *

vector = vector_descr(u"Тестовая таблица", "word", 0x800000, axis("rpm", 0x800100, 10), category="es_fuel_supply", comment=u"Пример\nмногострочного\nкомментария")
s = vector.toJSON()
print s
vector = vector_descr.fromJSON(s)
print vector



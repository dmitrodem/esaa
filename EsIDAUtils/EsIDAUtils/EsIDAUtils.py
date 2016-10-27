# -*- coding: utf-8 -*-
from firmware_helper import *
from vector_editor import *
import sys

app = QtGui.QApplication(sys.argv)

vector_descr = vector_descr(u"Тестовая таблица", "word", axis("rpm", 0x800100), 0x800000, 10, category="es_fuel_supply", comment=u"Пример\nмногострочного\nкомментария")
vector = vector_editor()
vector.show(vector_descr)
app.exec_()
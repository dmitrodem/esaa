# -*- coding: utf-8 -*-
from firmware_helper import *
from vector_editor import *
from matrix_editor import *
import sys

app = QtGui.QApplication(sys.argv)

vector_descr = vector_descr(u"Тестовая таблица", "word", 0x800000, axis("rpm", 0x800100, 10), category="es_fuel_supply", comment=u"Пример\nмногострочного\nкомментария")
vector = vector_editor()
vector.show(vector_descr)


matrix_descr = matrix_descr(u"Тестовая таблица 3D", "sbyte", 0x800000, axis("rpm", 0x800100, 10), axis("twat", 0x800100, 10), category="engine_start", comment=u"Пример\nмногострочного\nкомментария")
matrix = matrix_editor()
matrix.show(matrix_descr)

app.exec_()
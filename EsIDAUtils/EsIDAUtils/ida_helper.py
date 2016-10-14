# -*- coding: utf-8 -*-
import idautils
import idaapi
import idc
from vector_editor import *
import sys
from PySide import QtGui

def vector_editor_show():
    print("Hotkey activated!")
    global vector;
    vector_descr = vector_descr(u"Test", axis("rpm", 0x800000), 0x800000, 10, category="es_fuel_supply", comment=u"Test\ncomment")
    vector = vector_editor()
    vector.show(vector_descr)
    print(vector.result)

def es_init():
    # IDA binds hotkeys to IDC functions so a trampoline IDC function
    # must be created
    idaapi.CompileLine('static vector_editor() { RunPythonStatement("vector_editor_show()"); }')
    # Add the hotkey
    AddHotkey("Ctrl-2", 'vector_editor')

def es_clear():
    DelHotkey('Ctrl-2')
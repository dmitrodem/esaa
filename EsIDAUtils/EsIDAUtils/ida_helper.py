# -*- coding: utf-8 -*-

import idautils
import idaapi
import idc
from vector_editor import *

def vector_editor():
    print("Hotkey activated!")
    vector = vector_editor(vector_descr("test", axis("twat", 0x800000), 0x800000, 10, category="es_fuel_supply"))
    vector.show()
    print(vector.result)

def init():
    # IDA binds hotkeys to IDC functions so a trampoline IDC function
    # must be created
    idaapi.CompileLine('static vector_editor() { RunPythonStatement("vector_editor()"); }')
    # Add the hotkey
    AddHotkey("Ctrl-2", 'vector_editor')

def clear():
    DelHotkey('Ctrl-2')
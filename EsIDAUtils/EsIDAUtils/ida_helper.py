# -*- coding: utf-8 -*-
import idautils
import idaapi
import idc
from vector_editor import *
import sys
from PySide import QtGui

def vector_editor_show():    
    global vector;
    try:
        ea = ScreenEA()
        if ea == idaapi.BADADDR:
            print("Could not get get_screen_ea()")
            return
        # MakeStructEx(ea, -1, "TABLE_2D");
        cmnt = GetCommentEx(ea, 0)
        if cmnt == None:
            cmnt = GetCommentEx(ea, 1)                   

        count = Word(ea)    
        axisAddr = Word(ea+2)
        addr = Word(ea+4)
        print "count: %i" % count, "axis_addr: %x" % axisAddr, "addr: %x" % addr

        if cmnt == None:
            vdescr = vector_descr(u"Test", "byte", addr, axis("rpm", axisAddr, count))
        else:
            # cmnt = cmnt.decode("windows-1251")

            try:  
                vdescr = vector_descr.fromJSON(cmnt)
            except ValueError:
                vdescr = vector_descr(u"Test", "byte", addr, axis("rpm", axisAddr, count), comment = cmnt)
        
        vector = vector_editor()
        vector.show(vdescr)
        print(vector.vector)
    except Exception as e:
            print "Exception: ", e

def matrix_editor_show():    
    global matrix;
    mdescr = matrix_descr(u"Тестовая таблица 3D", "sbyte", 0x800000, axis("rpm", 0x800100, 10), axis("twat", 0x800100, 10), category="engine_start", comment=u"Пример\nмногострочного\nкомментария")
    matrix = matrix_editor()
    matrix.show(mdescr)
    print(matrix.matrix)

def es_init():
    # IDA binds hotkeys to IDC functions so a trampoline IDC function
    # must be created
    idaapi.CompileLine('static vector_editor() { RunPythonStatement("vector_editor_show()"); }')
    idaapi.CompileLine('static matrix_editor() { RunPythonStatement("matrix_editor_show()"); }')
    # Add the hotkey
    AddHotkey("Ctrl-2", 'vector_editor')
    AddHotkey("Ctrl-3", 'matrix_editor')

    #ex_addmenu_item_ctx = idaapi.add_menu_item("Edit/", "Show vector editor", "", 0, vector_editor_show, None)

def es_clear():
    DelHotkey('Ctrl-2')
    DelHotkey('Ctrl-3')
# -*- coding: utf-8 -*-
import idautils
import idaapi
import idc
from vector_editor import *
from matrix_editor import *
from firmware_helper import *
import sys
from PySide import QtGui

def callback_2D(source):
    MakeStructEx(ea, -1, "TABLE_2D");
    MakeComm(ea, source.toJSON().encode("cp866"))

def callback_3D(source):
    MakeStructEx(ea, -1, "TABLE_3D");
    MakeComm(ea, source.toJSON().encode("cp866"))

def vector_editor_show():    
    global vector;
    global ea;

    try:
        ea = ScreenEA()
        if ea == idaapi.BADADDR:
            print("Could not get get_screen_ea()")
            return        
        cmnt = GetCommentEx(ea, 0)
        if cmnt == None:
            cmnt = GetCommentEx(ea, 1)                   

        count = Word(ea)    
        axisAddr = Word(ea+2)
        addr = Word(ea+4)

        if cmnt == None:
            vdescr = vector_descr("", "byte", addr, axis("rpm", axisAddr, count))
        else:
            cmnt = cmnt.decode("cp866")

            try:  
                vdescr = vector_descr.fromJSON(cmnt)
            except ValueError as e:
                print e
                vdescr = vector_descr(cmnt, "byte", addr, axis("rpm", axisAddr, count))
        
        vector = vector_editor()
        vector.show(vdescr, callback_2D)      
    except Exception as e:
            print "Exception: ", e

def matrix_editor_show():    
    global matrix;
    global ea;

    try:
        ea = ScreenEA()
        if ea == idaapi.BADADDR:
            print("Could not get get_screen_ea()")
            return        
        cmnt = GetCommentEx(ea, 0)
        if cmnt == None:
            cmnt = GetCommentEx(ea, 1)                   

        ycount = Word(ea)    
        axisYAddr = Word(ea+2)
        xcount = Word(ea+4)    
        axisXAddr = Word(ea+6)
        addr = Word(ea+8)

        if cmnt == None:
            mdescr = matrix_descr("", "byte", addr, axis("rpm", axisXAddr, xcount), axis("rpm", axisYAddr, ycount))
        else:
            cmnt = cmnt.decode("cp866")

            try:  
                mdescr = matrix_descr.fromJSON(cmnt)
            except ValueError as e:
                print e
                mdescr = matrix_descr(cmnt, "byte", addr, axis("rpm", axisXAddr, xcount), axis("rpm", axisYAddr, ycount))
        
        matrix = matrix_editor()
        matrix.show(mdescr, callback_3D)      
    except Exception as e:
            print "Exception: ", e

def jump_to_calibr():
    ea = ScreenEA()
    addr = Word(ea + 2)
    page = (addr >> 0xE) & 0x3
    offset = addr & 0x3FFF
    dpp_values = [0x321, 0x320, 0x322, 0x3]
    phAddr = dpp_values[page] << 0xE ^ offset
    Jump(phAddr)
           
def es_init():
    print "Init cmgt IDA utis"   
    
    # IDA binds hotkeys to IDC functions so a trampoline IDC function
    # must be created
    idaapi.CompileLine('static vector_editor() { RunPythonStatement("vector_editor_show()"); }')
    idaapi.CompileLine('static matrix_editor() { RunPythonStatement("matrix_editor_show()"); }')
    idaapi.CompileLine('static jump_to_calibr() { RunPythonStatement("jump_to_calibr()"); }')
    # Add the hotkey
    AddHotkey("Ctrl-2", 'vector_editor')
    AddHotkey("Ctrl-3", 'matrix_editor')
    AddHotkey("Ctrl-G", 'jump_to_calibr')

    #ex_addmenu_item_ctx = idaapi.add_menu_item("Edit/", "Show vector editor", "", 0, vector_editor_show, None)

def es_clear():
    DelHotkey('Ctrl-2')
    DelHotkey('Ctrl-3')
    DelHotkey('Ctrl-G')

es_init()
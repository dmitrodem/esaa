# -*- coding: utf-8 -*-
import idautils
import idaapi
import idc
from vector_editor import *
from matrix_editor import *
from firmware_helper import *
import sys
from PySide import QtGui

def clear_comment():
    ea = ScreenEA()
    MakeComm(ea, "")

def page_addr_to_phis(addr):
    page = (addr >> 0xE) & 0x3
    offset = addr & 0x3FFF
    dpp_values = [0x321, 0x320, 0x322, 0x3]
    phAddr = dpp_values[page] << 0xE ^ offset
    return phAddr

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

        count = "%i" % Word(ea)    
        axisAddr = "0x%X" % (page_addr_to_phis(Word(ea+2)) & 0xFFFFF)
        addr = "0x%X" % (page_addr_to_phis(Word(ea+4)) & 0xFFFFF)
        addr_descr = "0x%X" % (ea & 0xFFFFF)

        if cmnt == None:
            vdescr = vector_descr("", "byte", addr, addr_descr, axis("rpm", axisAddr, count), "unknown")
        else:
            cmnt = cmnt.decode("cp866")

            try:  
                vdescr = vector_descr.fromJSON(cmnt)
            except ValueError as e:
                print e
                vdescr = vector_descr(cmnt, "byte", addr, addr_descr, axis("rpm", axisAddr, count), "unknown")
        
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

        ycount = "%i" % Word(ea)    
        axisYAddr = "0x%X" % (page_addr_to_phis(Word(ea+2)) & 0xFFFFF)
        xcount = "%i" % Word(ea+4)  
        axisXAddr = "0x%X" % (page_addr_to_phis(Word(ea+6)) & 0xFFFFF)
        addr = "0x%X" % (page_addr_to_phis(Word(ea+8)) & 0xFFFFF)
        addr_descr = "0x%X" % (ea & 0xFFFFF)

        if cmnt == None:
            mdescr = matrix_descr("", "byte", addr, addr_descr, axis("rpm", axisXAddr, xcount), axis("rpm", axisYAddr, ycount), "unknown")
        else:
            cmnt = cmnt.decode("cp866")

            try:  
                mdescr = matrix_descr.fromJSON(cmnt)
            except ValueError as e:
                print e
                mdescr = matrix_descr(cmnt, "byte", addr, addr_descr, axis("rpm", axisXAddr, xcount), axis("rpm", axisYAddr, ycount), "unknown")
        
        matrix = matrix_editor()
        matrix.show(mdescr, callback_3D)      
    except Exception as e:
            print "Exception: ", e

def jump_to_calibr():
    ea = ScreenEA()
    addr = Word(ea + 2)
    phAddr = page_addr_to_phis(addr)
    Jump(phAddr)

def set_mod_label():
    ea = ScreenEA()
    MakeComm(ea, "#MOD_LABEL")
           
def es_init():
    print "Init cmgt IDA utis"   
    
    # IDA binds hotkeys to IDC functions so a trampoline IDC function
    # must be created
    idaapi.CompileLine('static vector_editor() { RunPythonStatement("vector_editor_show()"); }')
    idaapi.CompileLine('static matrix_editor() { RunPythonStatement("matrix_editor_show()"); }')
    idaapi.CompileLine('static jump_to_calibr() { RunPythonStatement("jump_to_calibr()"); }')
    idaapi.CompileLine('static clear_comment() { RunPythonStatement("clear_comment()"); }')
    idaapi.CompileLine('static set_mod_label() { RunPythonStatement("set_mod_label()"); }')
    # Add the hotkey
    AddHotkey("Ctrl-2", 'vector_editor')
    AddHotkey("Ctrl-3", 'matrix_editor')
    AddHotkey("Ctrl-G", 'jump_to_calibr')
    AddHotkey("Ctrl-`", 'clear_comment')
    AddHotkey("Ctrl-M", 'set_mod_label')

    #ex_addmenu_item_ctx = idaapi.add_menu_item("Edit/", "Show vector editor", "", 0, vector_editor_show, None)

def es_clear():
    DelHotkey('Ctrl-2')
    DelHotkey('Ctrl-3')
    DelHotkey('Ctrl-G')
    DelHotkey('Ctrl-`')
    DelHotkey('Ctrl-M')

es_init()
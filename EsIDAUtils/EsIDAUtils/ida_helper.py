# -*- coding: utf-8 -*-
import idautils
import idaapi
import idc
from vector_editor import *
from matrix_editor import *
from calibr_editor import *
from firmware_helper import *
import sys
from PySide import QtGui

dpp_values = [0x321, 0x320, 0x322, 0x3]

def clear_comment():
    ea = ScreenEA()
    MakeComm(ea, "")

def page_addr_to_phis(addr):
    page = (addr >> 0xE) & 0x3
    offset = addr & 0x3FFF    
    phAddr = dpp_values[page] << 0xE ^ offset
    return phAddr

def callback_1D(source):
    print source.type

    if source.type == "flag":
        MakeStructEx(ca, -1, "CALIBR_F")
    elif source.type == "byte" or source.type == "sbyte":
        MakeStructEx(ca, -1, "CALIBR_B")
    elif source.type == "word" or source.type == "sword":
        MakeStructEx(ca, -1, "CALIBR_W")

    MakeComm(ca, source.toJSON().encode("cp866"))
    MakeRptCmt(ca, source.name.encode("cp866"))

def callback_2D(source):
    MakeStructEx(ca, -1, "TABLE_2D")
    MakeComm(ca, source.toJSON().encode("cp866"))
    MakeRptCmt(ca, source.name.encode("cp866"))
    OpOff(ea, 1, base << 4)

def callback_3D(source):
    MakeStructEx(ca, -1, "TABLE_3D")
    MakeComm(ca, source.toJSON().encode("cp866"))
    MakeRptCmt(ca, source.name.encode("cp866"))
    OpOff(ea, 1, base << 4)

def jump_to_calibr():
    ident = idaapi.get_highlighted_identifier()
    if ident == None:
        ea = ScreenEA()
        addr = Word(ea + 2)
    else:
        addr = int(ident.rstrip('h'), 16)    
    phAddr = page_addr_to_phis(addr)
    Jump(phAddr)

def calc_calibr_addr():    
    global ea
    global base

    try:
        ea = ScreenEA()
        seg = (ea & 0xFF0000) >> 0x10
        op_type = GetOpType(ea, 1)
        if seg == 0xC8:
            ph_addr = ea
        elif op_type == 5 or op_type == 2:        
            op_value = GetOperandValue(ea, 1)
            dpp_index = (op_value & 0xC000) >> 0xE
            addr_offset = op_value & 0x3FFF        
            base = GetReg(ea, "dpp%d" % dpp_index) 
            ph_addr = base << 0xE ^ addr_offset
        else:
            print "Not supported operand type %d" % op_type
            return idaapi.BADADDR
                             
        return ph_addr

    except Exception as e:
            print "Exception: ", e

def calibr_editor_show():    
    global calibr
    global ca

    try:
        ca = calc_calibr_addr()
        if ca == idaapi.BADADDR:
            print("Could not get get_screen_ea()")
            return        
        cmnt = GetCommentEx(ca, 0)
        if cmnt == None:
            cmnt = GetCommentEx(ca, 1)                   

        addr = "0x%X" % (ca & 0xFFFFF)

        if cmnt == None:
            cdescr = calibr_descr("", "flag", addr)
        else:
            cmnt = cmnt.decode("cp866")

            try:  
                cdescr = calibr_descr.fromJSON(cmnt)
            except ValueError as e:
                print e
                cdescr = calibr_descr(cmnt, "flag", addr)
        
        calibr = calibr_editor()
        calibr.show(cdescr, callback_1D)      
    except Exception as e:
            print "Exception: ", e

def vector_editor_show():    
    global vector
    global ca

    try:
        ca = calc_calibr_addr()
        if ca == idaapi.BADADDR:
            print("Could not get get_screen_ea()")
            return        

        cmnt = GetCommentEx(ca, 0)
        if cmnt == None:
            cmnt = GetCommentEx(ca, 1)                   

        count = "%i" % Word(ca)    
        axisAddr = "0x%X" % (page_addr_to_phis(Word(ca+2)) & 0xFFFFF)
        addr = "0x%X" % (page_addr_to_phis(Word(ca+4)) & 0xFFFFF)
        addr_descr = "0x%X" % (ca & 0xFFFFF)

        if cmnt == None:
            vdescr = vector_descr("", "byte", addr, addr_descr, axis("rpm", axisAddr, count))
        else:
            cmnt = cmnt.decode("cp866")

            try:  
                vdescr = vector_descr.fromJSON(cmnt)
            except ValueError as e:
                print e
                vdescr = vector_descr(cmnt, "byte", addr, addr_descr, axis("rpm", axisAddr, count))
        
        vector = vector_editor()
        vector.show(vdescr, callback_2D)      
    except Exception as e:
            print "Exception: ", e

def matrix_editor_show():    
    global matrix
    global ca

    try:
        ca = calc_calibr_addr()
        if ca == idaapi.BADADDR:
            print("Could not get get_screen_ea()")
            return   
             
        cmnt = GetCommentEx(ca, 0)
        if cmnt == None:
            cmnt = GetCommentEx(ca, 1)                   

        ycount = "%i" % Word(ca)    
        axisYAddr = "0x%X" % (page_addr_to_phis(Word(ca+2)) & 0xFFFFF)
        xcount = "%i" % Word(ca+4)  
        axisXAddr = "0x%X" % (page_addr_to_phis(Word(ca+6)) & 0xFFFFF)
        addr = "0x%X" % (page_addr_to_phis(Word(ca+8)) & 0xFFFFF)
        addr_descr = "0x%X" % (ca & 0xFFFFF)

        if cmnt == None:
            mdescr = matrix_descr("", "byte", addr, addr_descr, axis("rpm", axisXAddr, xcount), axis("rpm", axisYAddr, ycount))
        else:
            cmnt = cmnt.decode("cp866")

            try:  
                mdescr = matrix_descr.fromJSON(cmnt)
            except ValueError as e:
                print e
                mdescr = matrix_descr(cmnt, "byte", addr, addr_descr, axis("rpm", axisXAddr, xcount), axis("rpm", axisYAddr, ycount))
        
        matrix = matrix_editor()
        matrix.show(mdescr, callback_3D)      
    except Exception as e:
            print "Exception: ", e

def set_mod_label():
    ea = ScreenEA()
    MakeComm(ea, "#MOD_LABEL")
           
def es_init():
    print "Init cmgt IDA utis"   
    
    # IDA binds hotkeys to IDC functions so a trampoline IDC function
    # must be created
    idaapi.CompileLine('static calibr_editor() { RunPythonStatement("calibr_editor_show()"); }')
    idaapi.CompileLine('static vector_editor() { RunPythonStatement("vector_editor_show()"); }')
    idaapi.CompileLine('static matrix_editor() { RunPythonStatement("matrix_editor_show()"); }')
    idaapi.CompileLine('static jump_to_calibr() { RunPythonStatement("jump_to_calibr()"); }')
    idaapi.CompileLine('static clear_comment() { RunPythonStatement("clear_comment()"); }')
    idaapi.CompileLine('static set_mod_label() { RunPythonStatement("set_mod_label()"); }')
    # Add the hotkey
    AddHotkey("Ctrl-1", 'calibr_editor')
    AddHotkey("Ctrl-2", 'vector_editor')
    AddHotkey("Ctrl-3", 'matrix_editor')
    AddHotkey("Ctrl-G", 'jump_to_calibr')
    AddHotkey("Ctrl-`", 'clear_comment')
    AddHotkey("Ctrl-M", 'set_mod_label')

    #ex_addmenu_item_ctx = idaapi.add_menu_item("Edit/", "Show vector editor", "", 0, vector_editor_show, None)

def es_clear():
    DelHotkey('Ctrl-1')
    DelHotkey('Ctrl-2')
    DelHotkey('Ctrl-3')
    DelHotkey('Ctrl-G')
    DelHotkey('Ctrl-`')
    DelHotkey('Ctrl-M')

es_init()
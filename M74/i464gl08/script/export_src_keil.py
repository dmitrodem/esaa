import os
import re

from idc import *
from idaapi import *
from idautils import *

def encode_tocp1251(filename):
	return
	f = open(filename, "r+")
	data = f.read()
	f.seek(0)
	f.write(data.decode("cp866").encode("cp1251"))
	f.truncate()
	f.close()
	
def postprocess_code(filename):
	f = open(filename, "r+")
	data = "$MODV2\n$CASE\n$ERRORPRINT (ERR.TXT)\n$SEGMENTED\n$NOPA\n$MACRO\n$NOMPL\n$GO\n$INCLUDE(m74_keil_macro.inc)\n$INCLUDE(XC2xxx.INC)\n$INCLUDE(m74_ram.asm)\n$INCLUDE(m74_calibr.asm)\n";
	data = data + """PAGE3 DGROUP SYSTEM, XRAM

XRAM SECTION DATA AT 0E000h
	ds 1600h
XRAM ENDS\n""" + f.read()

	f.seek(0)		
	data = data.replace("<", "").replace(">", "").replace("rets", "ret")
	
	result = re.finditer(r"\[\w+\+\w+\]", data, flags = re.M)
	for match in result:
		node = match.group()
		node1 = node.replace("+", "+#")
		data = data.replace(node, node1)
		
	result = re.finditer(r"jmps[\w\t ,]*", data, flags = re.M)
	for match in result:
		node = match.group()
		node1 = node.replace(", ", ", #SOF ")
		data = data.replace(node, node1)
		
	result = re.finditer(r"calls[\w\t ,]*", data, flags = re.M)
	for match in result:
		node = match.group()
		node1 = node.replace(", ", ", #SOF ")
		data = data.replace(node, node1)
	
	
	data = data.replace("; assume dpp0: 321h (page 0xC84000)", "assume dpp0: CALIBR1")
	data = data.replace("; assume dpp1: 320h (page 0xC80000)", "assume dpp1: CALIBR0")
	data = data.replace("; assume dpp2: 322h (page 0xC88000)", "assume dpp2: CALIBR2")
	data = data.replace("; assume dpp3: 3 (page 0xC000)", "assume dpp3: PAGE3")
	
	#data = data.replace("; assume", "assume")
	
	data = data.replace("ROM		section	CODE word public", "ROM		section	CODE AT 0C00000H")
	data = data.replace("seg009		section	CODE word public", "seg009	section	CODE AT 0C10000H")
	data = data.replace("seg010		section	CODE word public", "seg010	section	CODE AT 0C20000H")
	data = data.replace("seg011		section	CODE word public", "seg011	section	CODE AT 0C30000H")
	data = data.replace("seg012		section	CODE word public", "seg012	section	CODE AT 0C40000H")
	data = data.replace("seg013		section	CODE word public", "seg013	section	CODE AT 0C50000H")
	data = data.replace("seg014		section	CODE word public", "seg014	section	CODE AT 0C60000H")
	data = data.replace("seg015		section	CODE word public", "seg015	section	CODE AT 0C70000H")

	f.write(data)
	f.truncate()
	f.close()
	
def postprocess_calibr(filename):
	f = open(filename, "r+")
	data = f.read()
	f.seek(0)
	data = re.sub(r"proc[\w\r\f\v]*", "", data, flags = re.M)
	data = data.replace("<", "").replace(">", "").replace("endp", "")
	
	data = data.replace("CALIBR0		section	DATA page public", "CALIBR0		section	DATA AT 0C80000H").replace("CALIBR1		section	DATA page public", "CALIBR1		section	DATA AT 0C84000H")
	data = data.replace("CALIBR2		section	DATA page public", "CALIBR2		section	DATA AT 0C88000H")

	f.write(data)
	f.truncate()
	f.close()
	
def postprocess_ram(filename):
	f = open(filename, "r+")
	data = f.read()
	f.seek(0)
	data = re.sub(r"proc[\w\r\f\v]*", "", data, flags = re.M).replace("endp", "")
	data = data.replace("$MOD167\n$CASE\n$NOMACRO", "")
	data = data.replace("DRAM		section	DATA page", "DRAM		section	DATA AT 0F600H")
	data = data.replace("DRAM_BIT	section	DATA page", "DRAM_BIT	section	DATA BITADDRESSABLE AT 0FD00H")
	data = data.replace("SRAM		section	DATA page", "SRAM		section	HDATA AT 0A000H")
	data = data.replace("PRAM		section	DATA page", "PRAM		section	HDATA AT 0E00000H")


	f.write(data)
	f.truncate()
	f.close()

path = os.path.dirname(idc.GetInputFilePath())
print path

code_path = path + "\\src\\m74.asm"
data_path = path + "\\src\\m74_calibr.asm"
ram_path = path + "\\src\\m74_ram.asm"
xsfr_path = path + "\\src\\m74_xsfr.asm"

fcode = idaapi.fopenWT(code_path)
fdata = idaapi.fopenWT(data_path)
fram = idaapi.fopenWT(ram_path)
fxsfr = idaapi.fopenWT(xsfr_path)

for seg_addr in Segments():
	seg = idaapi.getseg(seg_addr)
	seg_name = SegName(seg_addr)
	seg_class = idaapi.get_segm_class(seg)
	if seg_class == "CODE":		
		idaapi.gen_file(OFILE_ASM, fcode, SegStart(seg_addr), SegEnd(seg_addr), 0)
	elif seg_name == "CALIBR0" or seg_name == "CALIBR1" or seg_name == "CALIBR2":
		idaapi.gen_file(OFILE_ASM, fdata, SegStart(seg_addr), SegEnd(seg_addr), 0)
	elif seg_name == "SRAM" or seg_name == "DRAM" or seg_name == "PRAM" or seg_name == "DRAM_BIT":
		idaapi.gen_file(OFILE_ASM, fram, SegStart(seg_addr), SegEnd(seg_addr), 0)
	elif seg_name == "X_SFR":
		idaapi.gen_file(OFILE_ASM, fxsfr, SegStart(seg_addr), SegEnd(seg_addr), 0)

idaapi.eclose(fcode)
idaapi.eclose(fdata)
idaapi.eclose(fram)
idaapi.eclose(fxsfr)

encode_tocp1251(code_path)
postprocess_code(code_path)

encode_tocp1251(data_path)
postprocess_calibr(data_path)

encode_tocp1251(ram_path)
postprocess_ram(ram_path)

print "finish"


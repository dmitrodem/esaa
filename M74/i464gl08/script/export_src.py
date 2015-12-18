import os
import re

from idc import *
from idaapi import *
from idautils import *

def encode_tocp1251(filename):
	f = open(filename, "r+")
	data = f.read()
	f.seek(0)
	f.write(data.decode("cp866").encode("utf-8"))
	f.truncate()
	f.close()
	
def postprocess_code(filename):
	f = open(filename, "r+")
	data = ".INCLUDE 'm74_macro.inc'\r\n" + f.read()
	f.seek(0)
	data = re.sub(r"proc$", "proc FAR", data, flags = re.M)
	result = re.finditer(r"\[\w+\+\w+\]", data, flags = re.M)
	for match in result:
		node = match.group()
		node1 = node.replace("+", "+#")
		data = data.replace(node, node1)
		
	data = data.replace("<", "").replace(">", "")
	
	#data = data.replace("; assume dpp0: 0x321 (page 0xC84000)", "assume dpp0: CALIBR1")
	#data = data.replace("; assume dpp1: 0x320 (page 0xC80000)", "assume dpp1: CALIBR0")
	#data = data.replace("; assume dpp2: 0x322 (page 0xC88000)", "assume dpp2: CALIBR2")
	#data = data.replace("; assume dpp3: 3 (page 0xC000)", "assume dpp3: 3 (page 0xC000)")

	f.write(data)
	f.truncate()
	f.close()
	
def postprocess_calibr(filename):
	f = open(filename, "r+")
	data = ".INCLUDE 'm74_macro.inc'\r\n" + f.read()
	f.seek(0)
	data = re.sub(r"proc[\w\r\f\v]*", "", data, flags = re.M)
	data = data.replace("<", "").replace(">", "").replace("FAR", "FAR ROMDATA").replace("endp", "")

	f.write(data)
	f.truncate()
	f.close()
	
def postprocess_ram(filename):
	f = open(filename, "r+")
	data = f.read()
	f.seek(0)
	data = re.sub(r"proc[\w\r\f\v]*", "", data, flags = re.M).replace("endp", "")
	#data = data.replace("DPRAM		section	IRAM at", "DPRAM		section	IRAM at 0F200H")
	#data = data.replace("PSRAM		section	IRAM at", "PRAM		section	IRAM at 0E00000H")
	#data = data.replace("SRAM		section	IRAM at", "SRAM		section	IRAM at 8000H")

	f.write(data)
	f.truncate()
	f.close()

path = os.path.dirname(idc.GetInputFilePath())
print path

code_path = path + "\\src\\m74.asm"
data_path = path + "\\src\\m74_calibr.asm"
ram_path = path + "\\src\\m74_ram.asm"

fcode = idaapi.fopenWT(code_path)
fdata = idaapi.fopenWT(data_path)
fram = idaapi.fopenWT(ram_path)

for seg_addr in Segments():
	seg = idaapi.getseg(seg_addr)
	seg_name = SegName(seg_addr)
	seg_class = idaapi.get_segm_class(seg)
	if seg_class == "CODE":		
		idaapi.gen_file(OFILE_ASM, fcode, SegStart(seg_addr), SegEnd(seg_addr), 0)
	elif seg_name == "CALIBR0" or seg_name == "CALIBR1" or seg_name == "CALIBR2":
		idaapi.gen_file(OFILE_ASM, fdata, SegStart(seg_addr), SegEnd(seg_addr), 0)
	elif seg_name == "SRAM" or seg_name == "DPRAM" or seg_name == "PSRAM":
		idaapi.gen_file(OFILE_ASM, fram, SegStart(seg_addr), SegEnd(seg_addr), 0)

idaapi.eclose(fcode)
idaapi.eclose(fdata)
idaapi.eclose(fram)

encode_tocp1251(code_path)
postprocess_code(code_path)

encode_tocp1251(data_path)
postprocess_calibr(data_path)

encode_tocp1251(ram_path)
postprocess_ram(ram_path)

print "finish"


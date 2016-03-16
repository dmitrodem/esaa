from idc import *
from idaapi import *
from idautils import *

for i in range(127):
	MakeCode(0xC00000 + i * 4)
	MakeFunction(0xC00000 + i * 4, BADADDR)
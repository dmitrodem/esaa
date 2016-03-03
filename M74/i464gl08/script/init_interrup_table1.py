from idc import *
from idaapi import *
from idautils import *

for i in range(110):
	MakeCode(0xC10000 + i * 4)
from idc import *
from idaapi import *
from idautils import *

filename = os.path.dirname(idc.GetInputFilePath()) + "\\XC2xxx.INC"
f = open(filename, "r+")

for line in f:
	print line
	words = line.split()
	print words
	if len(words) == 3 and (words[1] == "EQU" or words[1] == "DEFR"):
		addr = int(words[2], 0)
		print addr
		name = GetTrueName(addr)
		print name
		MakeName(addr, words[0])
					
f.close()
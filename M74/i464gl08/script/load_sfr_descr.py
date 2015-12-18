from idc import *
from idaapi import *
from idautils import *

from xml.dom.minidom import *

xml = parse('regxc2765x.xml')
name = xml.getElementsByTagName('sfr')

for node in name:
	addr = int(node.attributes["address"].value, 16)
	MakeName(addr, node.attributes["name"].value.encode('ascii','ignore'))
	MakeComm(addr, node.attributes["description"].value.encode('ascii','ignore'))
	#break
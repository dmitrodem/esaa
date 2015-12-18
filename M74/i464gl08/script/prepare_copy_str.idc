#include <idc.idc>
static main()
{
	auto ea, vl;
	
	ea = ScreenEA();
	do
	{
		vl = IdbByte(ea);
		Message("Adr: %x Value: %x\n", ea, vl);
		
		if (vl == 1)
			{
			MakeWord(ea);
			MakeArray(ea, 7);
			ea = ea + 14;
			continue;
			}
			
		if (vl == 6)
			{
			MakeStructEx(ea, -1, "MEM_COPY_STRUCT");
			ea = ea + 12;
			continue;
			}

		break;
	}
	while (1);
	}

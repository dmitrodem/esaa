#include <idc.idc>
static main()
{
	auto ea, vl;
	
	ea = ScreenEA();
	do
	{
		vl = IdbByte(ea);
		Message("Adr: %x Value: %x\n", ea, vl);
		
		if (vl == 5)
			{
			MakeStructEx(ea, -1, "MEM_CLEAR_STRUCT");
			ea = ea + 6;
			continue;
			}
			
		if (vl == 6)
			{
			MakeStructEx(ea, -1, "MEM_PAGECLEAR_STRUCT");
			ea = ea + 8;
			continue;
			}
			
		if (vl == 7)
			{
			MakeStructEx(ea, -1, "MEM_CLEAR_FRAME_STRUCT");
			ea = ea + 10;
			continue;
			}

		break;
	}
	while (1);
	}

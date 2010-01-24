#include <stdio.h>
#include <string.h>
#include "beaengine/BeaEngine.h"

int main(int argc, char* argv[])
{
	/* ============================= Init datas */
	DISASM MyDisasm;
	int false = 0, true = 1;
	int len;
	int Error = 0;
	int EndCodeSection = 0x401020;

	/* ============================= Init the Disasm structure (important !)*/
	(void) memset (&MyDisasm, 0, sizeof(DISASM));

	/* ============================= Init EIP */
	MyDisasm.EIP = 0x401000;

	/* ============================= Loop for Disasm */
	while (!Error){
		/* ============================= Fix SecurityBlock */
		MyDisasm.SecurityBlock = EndCodeSection - MyDisasm.EIP;

		len = Disasm(&MyDisasm);
		if (len == OUT_OF_BLOCK) {
			(void) printf("disasm engine is not allowed to read more memory \n");
			Error = 1;
		}
		else if (len == UNKNOWN_OPCODE) {
			(void) printf("unknown opcode");
			Error = 1;
		}
		else {
			(void) puts(MyDisasm.CompleteInstr);
			MyDisasm.EIP = MyDisasm.EIP + len;
			if (MyDisasm.EIP >= EndCodeSection) {
				(void) printf("End of buffer reached ! \n");
				Error = 1;
			}
		}
	};
	return 0;
}
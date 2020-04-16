
#include <stdio.h>
#include "gtest/gtest.h"

//#include "OOPrincipe/SRP.h"
//#include "OOPrincipe/LSP.h"
//#include "OOPrincipe/DIP.h"
//#include "OOPrincipe/OCP.h"
//#include "OOPrincipe/ISP.h"
//#include "OOPrincipe/LKP.h"

#ifdef _DEBUG
#pragma  comment(lib,"gtestd.lib") 
#else
#pragma  comment(lib,"gtest.lib") 
#endif // DEBUG

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	int res = RUN_ALL_TESTS();
	printf("\n\n-------------Press any key to exit-------------\n\n");
	getchar();

	return res;
}

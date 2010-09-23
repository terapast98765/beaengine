#include <string>

#include <iostream>
#include <beaengine/BeaEngine.h>

#include <unittest/thirdparty/google_test/include/gtest/gtest.h>

TEST (dasm, nop)
{
  unsigned char command [] = { 0x90 };

  char place [sizeof(DISASM)];
  memset (place, 0, sizeof(DISASM));
  DISASM* dasm = new (place) DISASM;
      
  dasm->EIP = (UIntPtr) command;
  int len = Disasm (dasm);
  ASSERT_GT (len ,0);
  ASSERT_STRCASEEQ("nop", dasm->CompleteInstr);	 

}

int main(int argc, char **argv) 
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

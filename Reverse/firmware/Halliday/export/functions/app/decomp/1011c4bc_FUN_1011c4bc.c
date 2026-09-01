/* FUN_1011c4bc @ 0x1011c4bc */

int FUN_1011c4bc(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 *param_6)

{
  undefined4 uVar1;
  
  if (param_1 == 8) {
    if (param_3 == 0) {
      param_3 = FUN_1011aa14(param_4);
    }
    if (0x7ffffff < param_3 + 0xf0000000U) {
      uVar1 = FUN_1011a9aa(param_3);
      *param_6 = uVar1;
      return param_3;
    }
  }
  return 0;
}


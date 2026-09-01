/* FUN_100fae00 @ 0x100fae00 */

undefined4 FUN_100fae00(int *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  if (param_2 < (uint)param_1[1]) {
    if ((code *)param_1[5] == (code *)0x0) {
      uVar1 = param_1[1] - param_2;
      if (param_4 <= uVar1) {
        uVar1 = param_4;
      }
      FUN_1011ea40(param_3,*param_1 + param_2,uVar1);
    }
    else {
      uVar1 = (*(code *)param_1[5])();
    }
    param_1[2] = param_2 + uVar1;
    if (param_4 <= uVar1) {
      return 0;
    }
  }
  return 0x55;
}


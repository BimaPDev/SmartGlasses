/* FUN_2c66ae62 @ 0x2c66ae62 */

undefined4 FUN_2c66ae62(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  int iVar1;
  
  iVar1 = (*param_4)();
  if (iVar1 < 0) {
    iVar1 = (*param_4)();
    if (iVar1 < 0) {
      return param_2;
    }
    iVar1 = (*param_4)(param_1,param_3);
    if (iVar1 < 0) {
      return param_3;
    }
  }
  else {
    iVar1 = (*param_4)(param_2,param_3);
    if (0 < iVar1) {
      return param_2;
    }
    iVar1 = (*param_4)(param_1,param_3);
    if (-1 < iVar1) {
      return param_3;
    }
  }
  return param_1;
}


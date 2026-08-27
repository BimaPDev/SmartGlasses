/* FUN_2c5d2af4 @ 0x2c5d2af4 */

void FUN_2c5d2af4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 unaff_lr;
  
  iVar1 = FUN_2c621080(param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_2c5da7cc(iVar1 + 0x98,1,extraout_r2,param_4,param_4,unaff_lr);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x44) != 0) {
      FUN_2c5d8494(iVar1,0);
      return;
    }
    return;
  }
  return;
}


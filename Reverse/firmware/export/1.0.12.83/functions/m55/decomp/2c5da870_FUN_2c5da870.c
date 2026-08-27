/* FUN_2c5da870 @ 0x2c5da870 */

void FUN_2c5da870(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c5da7cc(param_1,1,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x44) != 0) {
    FUN_2c5d8494(iVar1,0);
    return;
  }
  return;
}


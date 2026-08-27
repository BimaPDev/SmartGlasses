/* FUN_2c5f1040 @ 0x2c5f1040 */

void FUN_2c5f1040(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_2c6070bc(param_1,0x2064);
  FUN_2c5f0a5c(param_1,*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x28) + 1;
  if (9999 < iVar1) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}


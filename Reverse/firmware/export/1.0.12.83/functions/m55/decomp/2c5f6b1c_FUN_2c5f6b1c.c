/* FUN_2c5f6b1c @ 0x2c5f6b1c */

void FUN_2c5f6b1c(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_2c5f6990(param_1,*(int *)(param_1 + 0xc) + 1,param_3,param_4,param_4);
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  *(undefined1 *)(*(int *)(param_1 + 4) + iVar1) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)) = 0;
  return;
}


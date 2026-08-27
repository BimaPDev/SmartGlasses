/* FUN_2c5f6a88 @ 0x2c5f6a88 */

void FUN_2c5f6a88(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 < 1) || (param_2 == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (0 < *(int *)(param_1 + 8)) {
      **(undefined1 **)(param_1 + 4) = 0;
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (param_2 != iVar1) {
      if (*(int *)(param_1 + 8) <= param_3) {
        FUN_2c5f6990(param_1,param_3);
        iVar1 = *(int *)(param_1 + 4);
      }
      FUN_2c673eb8(iVar1,param_2,param_3);
      iVar1 = *(int *)(param_1 + 4);
    }
    *(int *)(param_1 + 0xc) = param_3;
    *(undefined1 *)(iVar1 + param_3) = 0;
  }
  return;
}


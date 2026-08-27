/* FUN_2c5f6ad0 @ 0x2c5f6ad0 */

void FUN_2c5f6ad0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) || (iVar1 = FUN_2c66c4ec(param_2), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (0 < *(int *)(param_1 + 8)) {
      **(undefined1 **)(param_1 + 4) = 0;
      return;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    if (param_2 != iVar2) {
      if (*(int *)(param_1 + 8) <= iVar1) {
        FUN_2c5f6990(param_1,iVar1);
        iVar2 = *(int *)(param_1 + 4);
      }
      FUN_2c673eb8(iVar2,param_2,iVar1);
      iVar2 = *(int *)(param_1 + 4);
    }
    *(int *)(param_1 + 0xc) = iVar1;
    *(undefined1 *)(iVar2 + iVar1) = 0;
  }
  return;
}


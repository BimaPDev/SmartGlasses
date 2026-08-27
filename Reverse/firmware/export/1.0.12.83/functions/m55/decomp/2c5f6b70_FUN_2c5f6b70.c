/* FUN_2c5f6b70 @ 0x2c5f6b70 */

void FUN_2c5f6b70(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_2c66c4ec(param_2);
  if (iVar1 != 0) {
    FUN_2c5f6990(param_1,*(int *)(param_1 + 0xc) + iVar1);
    FUN_2c673eb8(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc),param_2,iVar1);
    iVar1 = iVar1 + *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar1;
    *(undefined1 *)(*(int *)(param_1 + 4) + iVar1) = 0;
  }
  return;
}


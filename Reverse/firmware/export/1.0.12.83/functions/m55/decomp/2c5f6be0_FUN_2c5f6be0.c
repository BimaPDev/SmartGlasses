/* FUN_2c5f6be0 @ 0x2c5f6be0 */

void FUN_2c5f6be0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 <= param_2) {
    param_2 = iVar1;
  }
  *(int *)(param_1 + 0xc) = iVar1 - param_2;
  if (iVar1 - param_2 == 0) {
    **(undefined1 **)(param_1 + 4) = 0;
    return;
  }
  FUN_2c673eb8(*(int *)(param_1 + 4),param_2 + *(int *)(param_1 + 4));
  *(undefined1 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)) = 0;
  return;
}


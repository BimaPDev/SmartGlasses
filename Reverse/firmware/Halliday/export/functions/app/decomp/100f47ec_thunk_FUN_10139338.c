/* thunk_FUN_10139338 @ 0x100f47ec */

void thunk_FUN_10139338(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  FUN_10113fd0(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar1 + -1;
  if (iVar1 != 1) {
    return;
  }
  FUN_1012d1f4(param_1);
  return;
}


/* thunk_FUN_1012d2d0 @ 0x1011dcce */

void thunk_FUN_1012d2d0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1012d284();
  *param_1 = *param_1 + iVar1;
  uVar2 = param_1[6] + iVar1;
  param_1[6] = uVar2;
  if ((uint)param_1[2] <= uVar2) {
    param_1[6] = uVar2 - param_1[2];
  }
  return;
}


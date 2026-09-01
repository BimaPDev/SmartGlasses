/* thunk_FUN_1012d48e @ 0x1011dcda */

int thunk_FUN_1012d48e(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1] - *param_1;
  *param_1 = param_1[1];
  uVar2 = param_1[6] + iVar1;
  param_1[6] = uVar2;
  if ((uint)param_1[2] <= uVar2) {
    param_1[6] = uVar2 - param_1[2];
  }
  return iVar1;
}


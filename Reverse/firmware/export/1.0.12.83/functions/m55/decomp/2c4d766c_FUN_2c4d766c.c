/* FUN_2c4d766c @ 0x2c4d766c */

void FUN_2c4d766c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_3 != 0) {
    iVar1 = -param_2;
  }
  *param_1 = *param_1 + iVar1;
  param_1[3] = param_1[3] - param_2 & param_1[6] - 1U;
  return;
}


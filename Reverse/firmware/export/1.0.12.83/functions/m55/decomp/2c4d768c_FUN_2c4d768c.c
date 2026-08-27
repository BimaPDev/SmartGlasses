/* FUN_2c4d768c @ 0x2c4d768c */

void FUN_2c4d768c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = *param_1 - param_2;
  }
  else {
    iVar1 = *param_1 + param_2;
  }
  *param_1 = iVar1;
  param_1[3] = param_2 + param_1[3] & param_1[6] - 1U;
  return;
}


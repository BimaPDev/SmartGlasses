/* FUN_1012a87c @ 0x1012a87c */

void FUN_1012a87c(int *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 + param_2;
  param_1[2] = param_2 + param_1[2];
  param_1[1] = param_1[1] + param_3;
  param_1[3] = param_3 + param_1[3];
  return;
}


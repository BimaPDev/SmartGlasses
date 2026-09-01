/* FUN_1013bf5e @ 0x1013bf5e */

void FUN_1013bf5e(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2[1];
  fVar1 = *param_2;
  *param_1 = fVar2 * param_3[3] + fVar1 * *param_3 + param_3[6];
  param_1[1] = fVar2 * param_3[4] + fVar1 * param_3[1] + param_3[7];
  return;
}


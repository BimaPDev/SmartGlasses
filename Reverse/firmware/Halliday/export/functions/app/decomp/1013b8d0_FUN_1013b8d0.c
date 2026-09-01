/* FUN_1013b8d0 @ 0x1013b8d0 */

void FUN_1013b8d0(float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  
  fVar1 = param_4[1];
  *param_5 = *param_4 + ((param_1 + *param_5) * 0.5 - *param_4) * param_3;
  param_5[1] = fVar1 + ((param_2 + param_5[1]) * 0.5 - fVar1) * param_3;
  return;
}


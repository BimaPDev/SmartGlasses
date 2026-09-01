/* FUN_1013be7e @ 0x1013be7e */

void FUN_1013be7e(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_4[3];
  fVar1 = 1.0 - param_1;
  fVar4 = param_4[1];
  fVar2 = param_4[5];
  *param_2 = fVar1 * fVar1 * *param_4 + (param_4[2] + param_4[2]) * fVar1 * param_1 +
             param_1 * param_1 * param_4[4];
  *param_3 = fVar1 * fVar1 * fVar4 + (fVar3 + fVar3) * fVar1 * param_1 + param_1 * param_1 * fVar2;
  return;
}


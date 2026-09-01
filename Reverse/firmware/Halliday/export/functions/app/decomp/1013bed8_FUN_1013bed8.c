/* FUN_1013bed8 @ 0x1013bed8 */

void FUN_1013bed8(float param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = 1.0 - param_1;
  fVar5 = fVar6 * fVar6;
  fVar2 = param_4[3];
  fVar7 = param_4[1];
  fVar3 = param_4[5];
  fVar1 = param_1 * param_1;
  fVar4 = param_4[7];
  *param_2 = fVar6 * fVar5 * *param_4 + param_4[2] * 3.0 * fVar5 * param_1 +
             param_4[4] * 3.0 * fVar6 * fVar1 + param_1 * fVar1 * param_4[6];
  *param_3 = fVar6 * fVar5 * fVar7 + fVar2 * 3.0 * fVar5 * param_1 + fVar3 * 3.0 * fVar6 * fVar1 +
             param_1 * fVar1 * fVar4;
  return;
}


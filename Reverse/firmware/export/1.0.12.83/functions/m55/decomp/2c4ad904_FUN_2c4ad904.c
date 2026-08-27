/* FUN_2c4ad904 @ 0x2c4ad904 */

undefined4 FUN_2c4ad904(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 == (float *)0x0) {
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    *param_1 = 1.0;
    param_1[3] = 0.0;
    param_1[4] = 1.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
    return 1;
  }
  fVar2 = param_2[8];
  fVar1 = param_2[7];
  fVar5 = param_2[6];
  fVar8 = -(param_2[3] * fVar2) + param_2[5] * fVar5;
  fVar6 = -(param_2[5] * fVar1) + param_2[4] * fVar2;
  fVar4 = -(fVar5 * param_2[4]) + fVar1 * param_2[3];
  fVar9 = fVar8 * param_2[1] + *param_2 * fVar6 + param_2[2] * fVar4;
  if (fVar9 == 0.0) {
    return 0;
  }
  fVar9 = 1.0 / fVar9;
  *param_1 = fVar6 * fVar9;
  param_1[1] = (-(param_2[8] * param_2[1]) + param_2[7] * param_2[2]) * fVar9;
  fVar6 = param_2[4];
  fVar10 = param_2[2];
  fVar3 = param_2[1];
  fVar7 = param_2[5];
  param_1[3] = fVar8 * fVar9;
  param_1[2] = (-(fVar10 * fVar6) + fVar3 * fVar7) * fVar9;
  param_1[4] = (-(param_2[2] * param_2[6]) + *param_2 * param_2[8]) * fVar9;
  param_1[5] = (-(param_2[5] * *param_2) + param_2[3] * param_2[2]) * fVar9;
  if (fVar2 != 1.0 || (fVar1 != 0.0 || fVar5 != 0.0)) {
    param_1[6] = fVar4 * fVar9;
    param_1[7] = (-(param_2[7] * *param_2) + param_2[6] * param_2[1]) * fVar9;
    param_1[8] = (-(param_2[1] * param_2[3]) + *param_2 * param_2[4]) * fVar9;
    return 1;
  }
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 1.0;
  return 1;
}


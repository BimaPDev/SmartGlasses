/* FUN_2c4adaa4 @ 0x2c4adaa4 */

undefined4 FUN_2c4adaa4(float param_1,float param_2,int *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_4 == (float *)0x0) {
    *param_3 = (int)param_1;
    param_3[1] = (int)param_2;
    return 1;
  }
  fVar4 = param_2 * param_4[7] + param_4[6] * param_1 + param_4[8];
  if (0.0 < fVar4) {
    fVar3 = param_4[3];
    fVar1 = param_4[4];
    fVar2 = param_4[5];
    *param_3 = (int)((param_1 * *param_4 + param_4[1] * param_2 + param_4[2]) / fVar4 + 0.5);
    param_3[1] = (int)((fVar3 * param_1 + fVar1 * param_2 + fVar2) / fVar4 + 0.5);
    return 1;
  }
  return 0;
}


/* FUN_2c4c59f8 @ 0x2c4c59f8 */

void FUN_2c4c59f8(undefined4 param_1,float param_2,float param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_2 = param_2 * fRam2c4c5a7c;
  fVar1 = (float)FUN_2c6670a0(param_2);
  fVar1 = fVar1 / (param_3 + param_3);
  fVar2 = (float)FUN_2c666230(param_2);
  *param_4 = 0x3f800000;
  fVar4 = fVar1 + 1.0;
  fVar3 = ((fVar2 + 1.0) * 0.5) / fVar4;
  param_4[3] = fVar3;
  param_4[5] = fVar3;
  param_4[2] = (1.0 - fVar1) / fVar4;
  param_4[1] = (fVar2 * -2.0) / fVar4;
  param_4[4] = -(fVar2 + 1.0) / fVar4;
  return;
}


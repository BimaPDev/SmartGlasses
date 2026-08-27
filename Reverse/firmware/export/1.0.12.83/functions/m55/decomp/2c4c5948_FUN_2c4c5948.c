/* FUN_2c4c5948 @ 0x2c4c5948 */

void FUN_2c4c5948(undefined4 param_1,float param_2,float param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_s14;
  float in_s15;
  float fVar4;
  
  fVar1 = (float)FUN_2c666d78(param_1,in_s14 / in_s15);
  if ((int)((uint)(fVar1 < 0.0) << 0x1f) < 0) {
    fVar1 = (float)func_0x2c667398();
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  param_2 = param_2 * fRam2c4c59f4;
  fVar2 = (float)FUN_2c6670a0(param_2);
  fVar2 = fVar2 / (param_3 + param_3);
  fVar3 = (float)FUN_2c666230(param_2);
  *param_4 = 0x3f800000;
  fVar4 = fVar2 / fVar1 + 1.0;
  fVar3 = (fVar3 * -2.0) / fVar4;
  param_4[3] = (fVar2 * fVar1 + 1.0) / fVar4;
  param_4[1] = fVar3;
  param_4[4] = fVar3;
  param_4[2] = (1.0 - fVar2 / fVar1) / fVar4;
  param_4[5] = (-fVar2 * fVar1 + 1.0) / fVar4;
  return;
}


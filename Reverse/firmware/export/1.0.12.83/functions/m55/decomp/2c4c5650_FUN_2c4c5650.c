/* FUN_2c4c5650 @ 0x2c4c5650 */

void FUN_2c4c5650(undefined4 param_1,float param_2,float param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_s14;
  float in_s15;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = (float)FUN_2c666d78(param_1,in_s14 / in_s15);
  if ((int)((uint)(fVar1 < 0.0) << 0x1f) < 0) {
    fVar1 = (float)func_0x2c667398();
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  param_2 = param_2 * fRam2c4c57b4;
  fVar2 = (float)FUN_2c6670a0(param_2);
  fVar11 = fVar1 + 1.0;
  fVar2 = fVar2 / (param_3 + param_3);
  fVar3 = (float)FUN_2c666230(param_2);
  fVar7 = fVar1 - 1.0;
  fVar6 = fVar7 * fVar3;
  if ((int)((uint)(fVar1 < 0.0) << 0x1f) < 0) {
    fVar9 = (float)func_0x2c667398(fVar1);
    fVar9 = fVar9 + fVar9;
    fVar4 = (float)func_0x2c667398(fVar1);
    fVar4 = -fVar2 * (fVar4 + fVar4);
    fVar5 = (float)func_0x2c667398(fVar1);
    fVar10 = (fVar11 - fVar6) + fVar2 * (fVar5 + fVar5);
    fVar8 = (fVar1 + fVar1) * (fVar7 + -fVar11 * fVar3);
    fVar5 = (float)func_0x2c667398(fVar1);
    fVar5 = fVar5 + fVar5;
  }
  else {
    fVar5 = SQRT(fVar1) + SQRT(fVar1);
    fVar8 = (fVar1 + fVar1) * (fVar7 + -fVar11 * fVar3);
    fVar10 = (fVar11 - fVar6) + fVar2 * fVar5;
    fVar4 = -fVar2 * fVar5;
    fVar9 = fVar5;
  }
  fVar9 = fVar11 + fVar6 + fVar2 * fVar9;
  *param_4 = 0x3f800000;
  param_4[1] = ((fVar7 + fVar11 * fVar3) * -2.0) / fVar9;
  param_4[2] = (fVar11 + fVar6 + fVar4) / fVar9;
  param_4[3] = (fVar1 * fVar10) / fVar9;
  param_4[4] = fVar8 / fVar9;
  param_4[5] = (((fVar11 - fVar6) + -fVar5 * fVar2) * fVar1) / fVar9;
  return;
}


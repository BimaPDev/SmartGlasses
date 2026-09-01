/* FUN_101103d4 @ 0x101103d4 */

float FUN_101103d4(float param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  float extraout_s11;
  float extraout_s11_00;
  float extraout_s12;
  
  uVar3 = CONCAT44(param_2,DAT_10110480);
  uVar2 = CONCAT44(param_2,DAT_10110480);
  uVar1 = CONCAT44(param_2,DAT_1011047c);
  uVar5 = CONCAT44(param_2,DAT_1011047c);
  fVar4 = param_1;
  if (param_1 < 0.0) {
    fVar4 = -param_1;
  }
  if (param_2 < 0.0) {
    param_2 = -param_2;
  }
  if (fVar4 <= param_2) {
    if ((0.0 < fVar4) && (uVar5 = uVar1, (int)((uint)(param_2 < param_3) << 0x1f) < 0)) {
      uVar5 = FUN_101102fc(fVar4 / param_3);
      param_1 = extraout_s11_00;
      uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),extraout_s12 - (float)uVar5);
    }
  }
  else {
    uVar5 = uVar2;
    if ((0.0 < param_2) && (uVar5 = uVar3, (int)((uint)(fVar4 < param_3) << 0x1f) < 0)) {
      uVar5 = FUN_101102fc(param_2 / param_3);
      param_1 = extraout_s11;
    }
  }
  fVar4 = (float)uVar5;
  if ((int)((uint)(param_1 < 0.0) << 0x1f) < 0) {
    fVar4 = DAT_10110478 - fVar4;
  }
  if ((int)((uint)((float)((ulonglong)uVar5 >> 0x20) < 0.0) << 0x1f) < 0) {
    fVar4 = -fVar4;
  }
  return fVar4;
}


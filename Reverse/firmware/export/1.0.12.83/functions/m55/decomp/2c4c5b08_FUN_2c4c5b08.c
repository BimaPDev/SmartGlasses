/* FUN_2c4c5b08 @ 0x2c4c5b08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c5b08(float param_1,float param_2,float param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_s15;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = _LAB_2c4c5b9c;
  uVar1 = _LAB_2c4c5b98;
  if (in_s15 <= param_2) {
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0x3f800000;
    param_5[3] = 0x3f800000;
    param_5[4] = 0;
    param_5[5] = 0;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xab,_LAB_2c4c5ba4,_LAB_2c4c5ba0,uVar2,uVar1);
  }
  if (param_4 == 0) {
    fVar5 = (float)FUN_2c666d78(0x41200000,param_1 / 20.0);
    if ((int)((uint)(fVar5 < 0.0) << 0x1f) < 0) {
      fVar5 = (float)func_0x2c667398();
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    param_2 = param_2 * fRam2c4c57b4;
    fVar6 = (float)FUN_2c6670a0(param_2);
    fVar13 = fVar5 + 1.0;
    fVar6 = fVar6 / (param_3 + param_3);
    fVar7 = (float)FUN_2c666230(param_2);
    fVar11 = fVar5 - 1.0;
    fVar10 = fVar11 * fVar7;
    if ((int)((uint)(fVar5 < 0.0) << 0x1f) < 0) {
      fVar3 = (float)func_0x2c667398(fVar5);
      fVar3 = fVar3 + fVar3;
      fVar4 = (float)func_0x2c667398(fVar5);
      fVar4 = -fVar6 * (fVar4 + fVar4);
      fVar9 = (float)func_0x2c667398(fVar5);
      fVar12 = (fVar13 - fVar10) + fVar6 * (fVar9 + fVar9);
      fVar8 = (fVar5 + fVar5) * (fVar11 + -fVar13 * fVar7);
      fVar9 = (float)func_0x2c667398(fVar5);
      fVar9 = fVar9 + fVar9;
    }
    else {
      fVar9 = SQRT(fVar5) + SQRT(fVar5);
      fVar8 = (fVar5 + fVar5) * (fVar11 + -fVar13 * fVar7);
      fVar12 = (fVar13 - fVar10) + fVar6 * fVar9;
      fVar4 = -fVar6 * fVar9;
      fVar3 = fVar9;
    }
    fVar3 = fVar13 + fVar10 + fVar6 * fVar3;
    *param_5 = 0x3f800000;
    param_5[1] = ((fVar11 + fVar13 * fVar7) * -2.0) / fVar3;
    param_5[2] = (fVar13 + fVar10 + fVar4) / fVar3;
    param_5[3] = (fVar5 * fVar12) / fVar3;
    param_5[4] = fVar8 / fVar3;
    param_5[5] = (((fVar13 - fVar10) + -fVar9 * fVar6) * fVar5) / fVar3;
    return;
  }
  if (param_4 == 1) {
    fVar5 = (float)FUN_2c666d78(0x41200000,param_1 / 20.0);
    if ((int)((uint)(fVar5 < 0.0) << 0x1f) < 0) {
      fVar5 = (float)func_0x2c667398();
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    param_2 = param_2 * fRam2c4c59f4;
    fVar6 = (float)FUN_2c6670a0(param_2);
    fVar6 = fVar6 / (param_3 + param_3);
    fVar7 = (float)FUN_2c666230(param_2);
    *param_5 = 0x3f800000;
    fVar10 = fVar6 / fVar5 + 1.0;
    fVar7 = (fVar7 * -2.0) / fVar10;
    param_5[3] = (fVar6 * fVar5 + 1.0) / fVar10;
    param_5[1] = fVar7;
    param_5[4] = fVar7;
    param_5[2] = (1.0 - fVar6 / fVar5) / fVar10;
    param_5[5] = (-fVar6 * fVar5 + 1.0) / fVar10;
    return;
  }
  if (param_4 != 2) {
    if (param_4 == 3) {
      param_2 = param_2 * fRam2c4c5b00;
      fVar5 = (float)FUN_2c6670a0(param_2);
      fVar5 = fVar5 / (param_3 + param_3);
      fVar6 = (float)FUN_2c666230(param_2);
      *param_5 = 0x3f800000;
      fVar10 = fVar5 + 1.0;
      fVar7 = ((1.0 - fVar6) * 0.5) / fVar10;
      param_5[3] = fVar7;
      param_5[5] = fVar7;
      param_5[2] = (1.0 - fVar5) / fVar10;
      param_5[1] = (fVar6 * -2.0) / fVar10;
      param_5[4] = (1.0 - fVar6) / fVar10;
      return;
    }
    if (param_4 == 4) {
      param_2 = param_2 * fRam2c4c5a7c;
      fVar5 = (float)FUN_2c6670a0(param_2);
      fVar5 = fVar5 / (param_3 + param_3);
      fVar6 = (float)FUN_2c666230(param_2);
      *param_5 = 0x3f800000;
      fVar10 = fVar5 + 1.0;
      fVar7 = ((fVar6 + 1.0) * 0.5) / fVar10;
      param_5[3] = fVar7;
      param_5[5] = fVar7;
      param_5[2] = (1.0 - fVar5) / fVar10;
      param_5[1] = (fVar6 * -2.0) / fVar10;
      param_5[4] = -(fVar6 + 1.0) / fVar10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4c5bac,_LAB_2c4c5ba8,param_4);
  }
  fVar5 = (float)FUN_2c666d78(0x41200000,param_1 / 20.0);
  if ((int)((uint)(fVar5 < 0.0) << 0x1f) < 0) {
    fVar5 = (float)func_0x2c667398();
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  param_2 = param_2 * fRam2c4c5938;
  fVar6 = (float)FUN_2c6670a0(param_2);
  fVar13 = fVar5 + 1.0;
  fVar6 = fVar6 / (param_3 + param_3);
  fVar7 = (float)FUN_2c666230(param_2);
  fVar11 = fVar5 - 1.0;
  fVar10 = fVar11 * fVar7;
  if ((int)((uint)(fVar5 < 0.0) << 0x1f) < 0) {
    fVar3 = (float)func_0x2c667398(fVar5);
    fVar8 = fVar11 + -fVar13 * fVar7;
    fVar3 = fVar3 + fVar3;
    fVar8 = fVar8 + fVar8;
    fVar4 = (float)func_0x2c667398(fVar5);
    fVar4 = -fVar6 * (fVar4 + fVar4);
    fVar9 = (float)func_0x2c667398(fVar5);
    fVar12 = fVar13 + fVar10 + fVar6 * (fVar9 + fVar9);
    fVar7 = fVar5 * -2.0 * (fVar11 + fVar13 * fVar7);
    fVar9 = (float)func_0x2c667398(fVar5);
    fVar9 = fVar9 + fVar9;
  }
  else {
    fVar8 = fVar11 + -fVar13 * fVar7;
    fVar8 = fVar8 + fVar8;
    fVar9 = SQRT(fVar5) + SQRT(fVar5);
    fVar7 = fVar5 * -2.0 * (fVar11 + fVar13 * fVar7);
    fVar12 = fVar13 + fVar10 + fVar6 * fVar9;
    fVar4 = -fVar6 * fVar9;
    fVar3 = fVar9;
  }
  fVar11 = (fVar13 - fVar10) + fVar6 * fVar3;
  *param_5 = 0x3f800000;
  param_5[1] = fVar8 / fVar11;
  param_5[2] = ((fVar13 - fVar10) + fVar4) / fVar11;
  param_5[3] = (fVar5 * fVar12) / fVar11;
  param_5[4] = fVar7 / fVar11;
  param_5[5] = ((fVar13 + fVar10 + -fVar9 * fVar6) * fVar5) / fVar11;
  return;
}


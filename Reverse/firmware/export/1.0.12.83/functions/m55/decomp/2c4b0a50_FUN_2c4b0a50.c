/* FUN_2c4b0a50 @ 0x2c4b0a50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4b0a50(float param_1,float param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  undefined4 in_cr6;
  undefined4 in_cr7;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar3 = *(float **)(param_3 + 0x30);
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)FUN_2c4b4980(0x20);
    if (pfVar3 != (float *)0x0) {
      pfVar3[2] = 0.0;
      pfVar3[3] = 0.0;
      pfVar3[4] = 0.0;
      pfVar3[5] = 0.0;
      pfVar3[6] = 0.0;
      pfVar3[7] = 0.0;
      *pfVar3 = param_1;
      pfVar3[1] = param_2;
      *(undefined1 *)(pfVar3 + 2) = param_4;
      *(float **)(param_3 + 0x2c) = pfVar3;
      *(float **)(param_3 + 0x30) = pfVar3;
      *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 1;
      return 0;
    }
    return 5;
  }
  fVar4 = param_1 - *pfVar3;
  fVar5 = param_2 - pfVar3[1];
  fVar2 = fVar4;
  if (fVar4 < 0.0) {
    fVar2 = -fVar4;
  }
  fVar10 = fVar5;
  if (fVar5 < 0.0) {
    fVar10 = -fVar5;
  }
  if ((fVar2 == 0.0) && (fVar10 == 0.0)) {
    return 0;
  }
  if ((-1 < (int)((uint)(fVar2 < fRam2c4b0ba8) << 0x1f)) ||
     (-1 < (int)((uint)(fVar10 < fRam2c4b0ba8) << 0x1f))) goto FUN_2c4b07f0;
  if (fVar2 == 0.0) {
    fVar2 = fRam2c4b0bb0;
    fVar9 = fVar10;
    if (param_2 != 0.0) {
LAB_2c4b0b52:
      fVar10 = fVar10 / param_2;
      if ((int)((uint)(fVar10 < 0.0) << 0x1f) < 0) {
        fVar10 = -fVar10;
      }
      goto LAB_2c4b0b64;
    }
  }
  else {
    if ((param_1 != 0.0) && (fVar2 = fVar2 / param_1, (int)((uint)(fVar2 < 0.0) << 0x1f) < 0)) {
      fVar2 = -fVar2;
    }
    fVar9 = fVar2;
    if (fVar10 != 0.0) {
      if (param_2 != 0.0) goto LAB_2c4b0b52;
LAB_2c4b0b64:
      fVar9 = fVar10;
      if (-1 < (int)((uint)(fVar2 < fRam2c4b0bac) << 0x1f)) goto FUN_2c4b07f0;
    }
  }
  if ((int)((uint)(fVar9 < fRam2c4b0bac) << 0x1f) < 0) {
    return 0;
  }
FUN_2c4b07f0:
  fVar2 = *(float *)(param_3 + 0x30);
  pfVar3 = (float *)FUN_2c4b4980(0x20);
  if (pfVar3 == (float *)0x0) {
    return 5;
  }
  *pfVar3 = param_1;
  pfVar3[2] = 0.0;
  pfVar3[1] = param_2;
  *(undefined1 *)(pfVar3 + 2) = param_4;
  pfVar3[3] = 0.0;
  pfVar3[4] = 0.0;
  pfVar3[5] = 0.0;
  pfVar3[6] = 0.0;
  pfVar3[7] = 0.0;
  if (fVar2 != 0.0) {
    if (fVar4 == 0.0) {
      if (fVar5 == 0.0) {
        iVar1 = *(int *)((int)fVar2 + 0x1c);
        *(undefined4 *)((int)fVar2 + 0x14) = 0;
        if (iVar1 == 0) {
          *(undefined4 *)((int)fVar2 + 0xc) = 0;
          *(undefined4 *)((int)fVar2 + 0x10) = 0;
        }
        else {
          *(undefined4 *)((int)fVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)((int)fVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
        }
      }
      else {
        *(undefined4 *)((int)fVar2 + 0xc) = 0;
        if (fVar5 <= 0.0) {
          *(undefined4 *)((int)fVar2 + 0x10) = _LAB_2c4b0a48;
          *(float *)((int)fVar2 + 0x14) = -fVar5;
        }
        else {
          *(float *)((int)fVar2 + 0x14) = fVar5;
          *(undefined4 *)((int)fVar2 + 0x10) = 0x3f800000;
        }
      }
    }
    else if (fVar5 == 0.0) {
      *(undefined4 *)((int)fVar2 + 0x10) = 0;
      if (fVar4 <= 0.0) {
        *(undefined4 *)((int)fVar2 + 0xc) = _LAB_2c4b0a48;
        *(float *)((int)fVar2 + 0x14) = -fVar4;
      }
      else {
        *(float *)((int)fVar2 + 0x14) = fVar4;
        *(undefined4 *)((int)fVar2 + 0xc) = 0x3f800000;
      }
    }
    else {
      fVar10 = fVar4;
      if (fVar4 < 0.0) {
        fVar10 = -fVar4;
      }
      fVar9 = fVar5;
      if (fVar5 < 0.0) {
        fVar9 = -fVar5;
      }
      if (fVar10 < fVar9) {
        fVar7 = fVar10 / fVar9;
        fVar8 = fVar7 * fVar7;
        fVar10 = fVar8 * fVar8 * fVar8;
        fVar6 = fVar8 * fVar10;
        fVar10 = fVar8 * 0.5 + 1.0 + -(fVar8 * fVar8) * fRam2c4b0a38 + fVar10 * fRam2c4b0a3c +
                 -fVar6 * fRam2c4b0a40 + fVar8 * fVar6 * fRam2c4b0a44;
        fVar6 = 1.0 / fVar10;
        fVar10 = fVar9 * fVar10;
        fVar7 = fVar7 * fVar6;
      }
      else {
        fVar9 = fVar9 / fVar10;
        fVar8 = fVar9 * fVar9;
        fVar6 = fVar8 * fVar8 * fVar8;
        fVar7 = fVar8 * fVar6;
        fVar6 = fVar8 * 0.5 + 1.0 + -(fVar8 * fVar8) * fRam2c4b0a38 + fVar6 * fRam2c4b0a3c +
                -fVar7 * fRam2c4b0a40 + fVar8 * fVar7 * fRam2c4b0a44;
        fVar7 = 1.0 / fVar6;
        fVar10 = fVar10 * fVar6;
        fVar6 = fVar9 * fVar7;
      }
      *(float *)((int)fVar2 + 0x14) = fVar10;
      fVar10 = -1.0;
      if ((int)((uint)(fVar4 < 0.0) << 0x1f) < 0) {
        fVar7 = -fVar7;
      }
      if ((int)((uint)(fVar5 < 0.0) << 0x1f) < 0) {
        fVar6 = -fVar6;
      }
      if (-1 < (int)((uint)(fVar7 < -1.0) << 0x1f)) {
        coprocessor_function2(10,7,5,in_cr6,in_cr7,in_cr6);
        fVar10 = fVar7;
      }
      fVar4 = -1.0;
      if (-1 < (int)((uint)(fVar6 < -1.0) << 0x1f)) {
        coprocessor_function2(10,3,4,in_cr7,in_cr7,in_cr7);
        fVar4 = fVar6;
      }
      *(float *)((int)fVar2 + 0xc) = fVar10;
      *(float *)((int)fVar2 + 0x10) = fVar4;
    }
    *(float **)((int)fVar2 + 0x18) = pfVar3;
    *(float **)(param_3 + 0x30) = pfVar3;
    pfVar3[7] = fVar2;
    *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 1;
    *(float **)(*(int *)(param_3 + 0x50) + 4) = pfVar3;
    *(int *)(*(int *)(param_3 + 0x50) + 8) = *(int *)(*(int *)(param_3 + 0x50) + 8) + 1;
    return 0;
  }
  FUN_2c4b4990();
  return 1;
}


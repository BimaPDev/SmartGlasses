/* FUN_10110c8c @ 0x10110c8c */

undefined4 FUN_10110c8c(float param_1,float param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  char cVar5;
  float fVar6;
  float extraout_s11;
  float extraout_s11_00;
  float extraout_s12;
  float extraout_s12_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_3 == 0) {
    return 1;
  }
  pfVar4 = *(float **)(param_3 + 0x30);
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)FUN_100f0524(0x20);
    if (pfVar4 != (float *)0x0) {
      FUN_1011ea48(pfVar4 + 2,0,0x18);
      *(undefined1 *)(pfVar4 + 2) = 0;
      iVar3 = *(int *)(param_3 + 0x34);
      *pfVar4 = param_1;
      pfVar4[1] = param_2;
      pfVar4[7] = 0.0;
      *(float **)(param_3 + 0x2c) = pfVar4;
      *(float **)(param_3 + 0x30) = pfVar4;
      *(int *)(param_3 + 0x34) = iVar3 + 1;
      return 0;
    }
    return 5;
  }
  fVar11 = param_1 - *pfVar4;
  fVar10 = param_2 - pfVar4[1];
  fVar2 = fVar11;
  if (fVar11 < 0.0) {
    fVar2 = -fVar11;
  }
  fVar6 = fVar10;
  if (fVar10 < 0.0) {
    fVar6 = -fVar10;
  }
  if ((fVar2 == 0.0) && (fVar6 == 0.0)) {
    return 0;
  }
  if ((-1 < (int)((uint)(fVar2 < DAT_10110f48) << 0x1f)) ||
     (-1 < (int)((uint)(fVar6 < DAT_10110f48) << 0x1f))) goto LAB_10110da8;
  fVar8 = fVar6;
  if (fVar2 == 0.0) {
    if (fVar6 == 0.0) {
      return 0;
    }
    fVar9 = DAT_10110f54;
    if (param_2 != 0.0) {
LAB_10110d7a:
      fVar8 = fVar6 / param_2;
      if ((int)((uint)(fVar8 < 0.0) << 0x1f) < 0) {
        fVar8 = -fVar8;
      }
      goto LAB_10110d8c;
    }
LAB_10110d9a:
    cVar5 = (char)(((uint)(fVar8 < DAT_10110f4c) << 0x1f) >> 0x18);
  }
  else {
    fVar9 = fVar2;
    if ((param_1 != 0.0) && (fVar9 = fVar2 / param_1, (int)((uint)(fVar9 < 0.0) << 0x1f) < 0)) {
      fVar9 = -fVar9;
    }
    if (fVar6 != 0.0) {
      if (param_2 != 0.0) goto LAB_10110d7a;
LAB_10110d8c:
      if (-1 < (int)((uint)(fVar9 < DAT_10110f4c) << 0x1f)) goto LAB_10110da8;
      goto LAB_10110d9a;
    }
    cVar5 = (char)(((uint)(fVar9 < DAT_10110f4c) << 0x1f) >> 0x18);
  }
  if (cVar5 < '\0') {
    return 0;
  }
LAB_10110da8:
  pfVar1 = (float *)FUN_100f0524(0x20);
  if (pfVar1 != (float *)0x0) {
    FUN_1011ea48(pfVar1 + 2,0,0x18);
    *(undefined1 *)(pfVar1 + 2) = 0;
    *pfVar1 = param_1;
    pfVar1[1] = param_2;
    if (fVar11 == 0.0) {
      if (fVar10 != 0.0) {
        fVar2 = fVar10;
        if (fVar10 <= 0.0) {
          fVar2 = -fVar10;
        }
        pfVar4[3] = 0.0;
        if (0.0 < fVar10) {
          pfVar4[5] = fVar2;
          fVar2 = 1.0;
        }
        else {
          pfVar4[5] = fVar2;
          fVar2 = DAT_10110f50;
        }
      }
      else {
        fVar2 = pfVar4[7];
        pfVar4[5] = 0.0;
        if (fVar2 == 0.0) {
          pfVar4[3] = 0.0;
          fVar2 = 0.0;
        }
        else {
          pfVar4[3] = *(float *)((int)fVar2 + 0xc);
          fVar2 = *(float *)((int)fVar2 + 0x10);
        }
      }
      pfVar4[4] = fVar2;
    }
    else if (fVar10 != 0.0) {
      if (fVar2 < fVar6) {
        fVar2 = (float)FUN_101102a8((fVar2 / fVar6) * (fVar2 / fVar6));
        fVar9 = extraout_s11_00 / fVar2;
        fVar2 = fVar6 * fVar2;
        fVar8 = extraout_s12_00 * fVar9;
        fVar6 = extraout_s11_00;
      }
      else {
        fVar6 = (float)FUN_101102a8((fVar6 / fVar2) * (fVar6 / fVar2));
        fVar8 = extraout_s11 / fVar6;
        fVar2 = fVar2 * fVar6;
        fVar9 = extraout_s12 * fVar8;
        fVar6 = extraout_s11;
      }
      fVar7 = -1.0;
      if ((int)((uint)(fVar11 < 0.0) << 0x1f) < 0) {
        fVar8 = -fVar8;
      }
      if ((int)((uint)(fVar10 < 0.0) << 0x1f) < 0) {
        fVar9 = -fVar9;
      }
      pfVar4[5] = fVar2;
      if (-1 < (int)((uint)(fVar8 < -1.0) << 0x1f)) {
        fVar7 = (float)((uint)(fVar6 < fVar8) * 0x3f800000 + (uint)(fVar8 <= fVar6) * (int)fVar8);
      }
      if ((int)((uint)(fVar9 < -1.0) << 0x1f) < 0) {
        fVar2 = -1.0;
      }
      else {
        fVar2 = (float)((uint)(fVar6 < fVar9) * 0x3f800000 + (uint)(fVar9 <= fVar6) * (int)fVar9);
      }
      pfVar4[3] = fVar7;
      pfVar4[4] = fVar2;
    }
    else {
      pfVar4[4] = 0.0;
      fVar2 = DAT_10110f50;
      if (fVar11 <= 0.0) {
        pfVar4[5] = -fVar11;
      }
      else {
        fVar2 = 1.0;
        pfVar4[5] = fVar11;
      }
      pfVar4[3] = fVar2;
    }
    iVar3 = *(int *)(param_3 + 0x34);
    pfVar4[6] = (float)pfVar1;
    *(float **)(param_3 + 0x30) = pfVar1;
    pfVar1[7] = (float)pfVar4;
    *(int *)(param_3 + 0x34) = iVar3 + 1;
    iVar3 = *(int *)(param_3 + 0x50);
    *(float **)(iVar3 + 4) = pfVar1;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    return 0;
  }
  return 5;
}


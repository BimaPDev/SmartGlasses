/* FUN_1010e6ac @ 0x1010e6ac */

undefined4 FUN_1010e6ac(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_24c [41];
  float local_1a8 [32];
  float local_128 [65];
  
  if (((param_1 == (float *)0x0) || (param_2 == (float *)0x0)) || (param_3 == (float *)0x0)) {
LAB_1010e922:
    uVar2 = 1;
  }
  else {
    pfVar8 = local_24c + 9;
    pfVar9 = param_1 + 8;
    pfVar1 = pfVar8;
    pfVar5 = local_24c;
    do {
      fVar15 = *param_1;
      fVar13 = *param_2;
      fVar16 = param_1[1];
      pfVar1[6] = -(fVar15 * fVar13);
      pfVar1[7] = -(fVar16 * fVar13);
      fVar14 = param_2[1];
      pfVar1[0x23] = fVar15;
      *pfVar1 = fVar15;
      pfVar1[0x24] = fVar16;
      pfVar1[1] = fVar16;
      *pfVar5 = fVar13;
      param_1 = param_1 + 2;
      pfVar1[0x26] = -(fVar15 * fVar14);
      pfVar1[0x27] = -(fVar16 * fVar14);
      pfVar1[0x25] = 1.0;
      pfVar1[2] = 1.0;
      pfVar1[0x22] = 0.0;
      pfVar1[0x21] = 0.0;
      pfVar1[0x20] = 0.0;
      pfVar1[5] = 0.0;
      pfVar1[4] = 0.0;
      pfVar1[3] = 0.0;
      pfVar5[4] = fVar14;
      pfVar1 = pfVar1 + 8;
      param_2 = param_2 + 2;
      pfVar5 = pfVar5 + 1;
    } while (param_1 != pfVar9);
    pfVar1 = local_128;
    iVar7 = 0;
    pfVar5 = pfVar1;
    do {
      iVar3 = 8;
      pfVar9 = pfVar8;
      pfVar10 = pfVar5;
      do {
        iVar3 = iVar3 + -1;
        *pfVar10 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar10 = pfVar10 + 1;
      } while (iVar3 != 0);
      iVar7 = iVar7 + 8;
      pfVar8 = pfVar8 + 8;
      pfVar5 = pfVar5 + 8;
    } while (iVar7 != 0x40);
    iVar7 = 0;
    pfVar8 = local_24c;
    pfVar5 = pfVar1;
    do {
      iVar4 = iVar7 + 1;
      iVar3 = iVar7;
      pfVar9 = pfVar5;
      for (iVar11 = iVar4; iVar6 = iVar3 * 8, iVar11 != 8; iVar11 = iVar11 + 1) {
        fVar13 = pfVar9[8];
        fVar14 = local_128[iVar6 + iVar7];
        if ((int)((uint)(fVar13 < 0.0) << 0x1f) < 0) {
          fVar13 = -fVar13;
        }
        if ((int)((uint)(fVar14 < 0.0) << 0x1f) < 0) {
          fVar14 = -fVar14;
        }
        pfVar9 = pfVar9 + 8;
        if (fVar14 < fVar13) {
          iVar3 = iVar11;
        }
      }
      pfVar9 = pfVar1 + iVar6 + iVar7;
      fVar13 = *pfVar9;
      if ((int)((uint)(fVar13 < 0.0) << 0x1f) < 0) {
        if (DAT_1010e92c < fVar13) {
          pfVar9 = (float *)0x1;
        }
        else {
          pfVar9 = (float *)0x0;
        }
      }
      else {
        iVar11 = (uint)(fVar13 < DAT_1010e928) << 0x1f;
        if (iVar11 < 0) {
          pfVar9 = (float *)0x1;
        }
        if (-1 < iVar11) {
          pfVar9 = (float *)0x0;
        }
      }
      if (pfVar9 != (float *)0x0) goto LAB_1010e922;
      if (iVar3 != iVar7) {
        pfVar9 = pfVar1 + iVar6 + iVar7;
        pfVar10 = pfVar5;
        do {
          fVar13 = *pfVar10;
          iVar7 = iVar7 + 1;
          *pfVar10 = *pfVar9;
          *pfVar9 = fVar13;
          pfVar9 = pfVar9 + 1;
          pfVar10 = pfVar10 + 1;
        } while (iVar7 != 8);
        pfVar9 = local_24c + iVar3;
        fVar13 = *pfVar8;
        *pfVar8 = *pfVar9;
        *pfVar9 = fVar13;
      }
      fVar13 = *pfVar5;
      pfVar9 = pfVar5;
      for (iVar7 = iVar4; iVar7 != 8; iVar7 = iVar7 + 1) {
        fVar14 = (-1.0 / fVar13) * pfVar9[8];
        pfVar12 = pfVar9 + 9;
        pfVar10 = pfVar5;
        for (iVar3 = iVar4; pfVar10 = pfVar10 + 1, iVar3 != 8; iVar3 = iVar3 + 1) {
          *pfVar12 = *pfVar12 + *pfVar10 * fVar14;
          pfVar12 = pfVar12 + 1;
        }
        pfVar10 = local_24c + iVar7;
        *pfVar10 = *pfVar10 + fVar14 * *pfVar8;
        pfVar9 = pfVar9 + 8;
      }
      pfVar5 = pfVar5 + 9;
      pfVar8 = pfVar8 + 1;
      iVar7 = iVar4;
    } while (iVar4 != 8);
    iVar7 = 7;
    pfVar8 = local_24c + 8;
    do {
      pfVar8 = pfVar8 + -1;
      fVar13 = *pfVar8;
      pfVar5 = pfVar1 + 0x40;
      iVar3 = iVar7;
      while (iVar3 = iVar3 + 1, iVar3 != 8) {
        fVar14 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        fVar13 = fVar13 - fVar14 * local_24c[iVar3];
      }
      iVar7 = iVar7 + -1;
      *pfVar8 = fVar13 / pfVar1[0x3f];
      pfVar1 = pfVar1 + -9;
    } while (iVar7 != -1);
    uVar2 = 0;
    param_3[8] = 1.0;
    *param_3 = local_24c[0];
    param_3[1] = local_24c[1];
    param_3[2] = local_24c[2];
    param_3[3] = local_24c[3];
    param_3[4] = local_24c[4];
    param_3[5] = local_24c[5];
    param_3[6] = local_24c[6];
    param_3[7] = local_24c[7];
  }
  return uVar2;
}


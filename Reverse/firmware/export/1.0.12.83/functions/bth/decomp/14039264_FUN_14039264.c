/* FUN_14039264 @ 0x14039264 */

void FUN_14039264(float *param_1,float *param_2,int param_3,int param_4,int param_5,int *param_6,
                 int *param_7)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  bool bVar26;
  uint in_fpscr;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float *local_250;
  float *local_24c;
  float local_20c [8];
  float local_1ec [8];
  float local_1cc [20];
  float local_17c [78];
  float local_44 [4];
  
  local_44[2] = (float)*DAT_1403945c;
  FUN_140e5278(local_1cc,DAT_14039460,0x50);
  pfVar4 = (float *)FUN_140391d0(0x2000);
  pfVar5 = (float *)FUN_140391d0(0x400);
  pfVar6 = (float *)FUN_140391d0(0x400);
  pfVar7 = (float *)FUN_140391d0(0x400);
  pfVar8 = (float *)FUN_140391d0(0x400);
  pfVar9 = (float *)FUN_140391d0(0x200);
  pfVar10 = (float *)FUN_140391d0(0x200);
  pfVar11 = (float *)FUN_140391d0(0x200);
  pfVar12 = (float *)FUN_140391d0(0x200);
  pfVar13 = (float *)FUN_140391d0(0x200);
  FUN_1402a6e8(4,0x195,DAT_1403946c,DAT_14039470,DAT_14039468,DAT_14039464,0xf);
  fVar29 = DAT_14039474;
  pfVar15 = local_17c + 0x28;
  pfVar16 = local_17c;
  do {
    pfVar17 = pfVar16 + 1;
    *pfVar16 = 0.0;
    *pfVar15 = 0.0;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar17;
  } while (pfVar17 != local_17c + 0x28);
  if (0 < param_3) {
    pfVar15 = param_2;
    pfVar16 = param_1;
    iVar18 = 0;
    do {
      iVar19 = iVar18;
      pfVar17 = local_17c + 0x27;
      pfVar14 = local_44 + 1;
      do {
        pfVar20 = pfVar17 + -1;
        *pfVar17 = *pfVar20;
        *pfVar14 = pfVar14[-1];
        pfVar17 = pfVar20;
        pfVar14 = pfVar14 + -1;
      } while (pfVar20 != local_17c);
      fVar31 = *pfVar16;
      fVar34 = *pfVar15;
      local_17c[0] = fVar31;
      *pfVar16 = fVar29;
      local_17c[0x28] = fVar34;
      *pfVar15 = fVar29;
      pfVar17 = local_17c + 0x28;
      pfVar20 = local_1cc;
      pfVar14 = local_44 + 2;
      pfVar21 = local_17c;
      pfVar22 = local_17c + 0x29;
      while( true ) {
        pfVar21 = pfVar21 + 1;
        pfVar17 = pfVar17 + -1;
        pfVar14 = pfVar14 + -1;
        fVar32 = *pfVar14;
        fVar30 = *pfVar20;
        pfVar20 = pfVar20 + 1;
        *pfVar16 = *pfVar16 + (fVar31 + *pfVar17) * fVar30;
        *pfVar15 = *pfVar15 + fVar30 * (fVar34 + fVar32);
        if (pfVar17 == local_17c + 0x14) break;
        fVar31 = *pfVar21;
        fVar34 = *pfVar22;
        pfVar22 = pfVar22 + 1;
      }
      iVar18 = iVar19 + 1;
      pfVar16 = pfVar16 + 1;
      pfVar15 = pfVar15 + 1;
    } while (param_3 != iVar18);
    iVar18 = 0;
    pfVar15 = param_2;
    pfVar16 = pfVar4;
    pfVar17 = param_1;
    do {
      fVar29 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      fVar31 = *pfVar17;
      pfVar17 = pfVar17 + 1;
      fVar29 = fVar29 * fVar29 + fVar31 * fVar31;
      in_fpscr = in_fpscr & 0xfffffff;
      if (fVar29 < 0.0) {
        fVar29 = (float)FUN_140d9350();
      }
      else {
        fVar29 = SQRT(fVar29);
      }
      bVar26 = iVar18 != iVar19;
      *pfVar16 = fVar29;
      pfVar16 = pfVar16 + 1;
      iVar18 = iVar18 + 1;
    } while (bVar26);
  }
  pfVar15 = local_20c;
  pfVar16 = local_20c + 7;
  pfVar17 = pfVar15;
  do {
    pfVar14 = pfVar17 + 1;
    *pfVar17 = 0.0;
    pfVar16 = pfVar16 + 1;
    *pfVar16 = 0.0;
    pfVar17 = pfVar14;
  } while (pfVar14 != local_1ec);
  fVar29 = (float)(param_3 + -1);
  if (1 < (int)fVar29) {
    fVar31 = 1.4013e-45;
    iVar18 = 0;
    pfVar16 = pfVar4;
    do {
      while( true ) {
        fVar34 = pfVar16[1];
        uVar27 = in_fpscr & 0xfffffff;
        uVar28 = uVar27 | (uint)(fVar34 < *pfVar16) << 0x1f;
        in_fpscr = uVar28 | (uint)(NAN(fVar34) || NAN(*pfVar16)) << 0x1c;
        if ((byte)(uVar28 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) break;
LAB_14039498:
        fVar31 = (float)((int)fVar31 + 1);
        pfVar16 = pfVar16 + 1;
        if (fVar29 == fVar31) goto LAB_140394f6;
      }
      fVar30 = pfVar16[2];
      uVar28 = uVar27 | (uint)(fVar34 < fVar30) << 0x1f | (uint)(fVar34 == fVar30) << 0x1e;
      in_fpscr = uVar28 | (uint)(NAN(fVar34) || NAN(fVar30)) << 0x1c;
      bVar2 = (byte)(uVar28 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_14039498;
      if ((int)local_1ec[iVar18] + 499 < (int)fVar31) {
        if (iVar18 < 7) {
          iVar18 = iVar18 + 1;
        }
        local_20c[iVar18] = fVar34;
        local_1ec[iVar18] = fVar31;
        goto LAB_14039498;
      }
      fVar30 = local_20c[iVar18];
      uVar27 = uVar27 | (uint)(fVar34 < fVar30) << 0x1f;
      in_fpscr = uVar27 | (uint)(NAN(fVar34) || NAN(fVar30)) << 0x1c;
      if ((byte)(uVar27 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        local_1ec[iVar18] = fVar31;
        local_20c[iVar18] = fVar34;
      }
      fVar31 = (float)((int)fVar31 + 1);
      pfVar16 = pfVar16 + 1;
    } while (fVar29 != fVar31);
  }
LAB_140394f6:
  pfVar16 = local_20c;
  fVar29 = DAT_14039474;
  do {
    fVar31 = *pfVar16;
    pfVar16 = pfVar16 + 1;
    uVar27 = in_fpscr & 0xfffffff | (uint)(fVar31 < fVar29) << 0x1f |
             (uint)(fVar31 == fVar29) << 0x1e;
    in_fpscr = uVar27 | (uint)(NAN(fVar31) || NAN(fVar29)) << 0x1c;
    bVar2 = (byte)(uVar27 >> 0x18);
    bVar26 = !(bool)(bVar2 >> 6 & 1);
    bVar1 = bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1);
    fVar29 = (float)((uint)(bVar26 && bVar1) * (int)fVar31 + (uint)(!bVar26 || !bVar1) * (int)fVar29
                    );
  } while (pfVar16 != local_1ec);
  iVar18 = 1;
  fVar29 = fVar29 * DAT_14039478;
  fVar31 = 0.0;
  fVar34 = 0.0;
  *param_7 = 0;
  do {
    fVar30 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    uVar27 = in_fpscr & 0xfffffff;
    uVar28 = uVar27 | (uint)(fVar30 < fVar29) << 0x1f | (uint)(fVar30 == fVar29) << 0x1e;
    in_fpscr = uVar28 | (uint)(NAN(fVar30) || NAN(fVar29)) << 0x1c;
    bVar2 = (byte)(uVar28 >> 0x18);
    if ((!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
       (in_fpscr = uVar27, fVar29 < *pfVar15)) {
      fVar30 = *pfVar16;
      fVar32 = pfVar16[1];
      fVar33 = (float)VectorSignedToFloat(((int)fVar32 - (int)fVar30) + -0x200,
                                          (byte)(uVar27 >> 0x16) & 3);
      if ((int)ABS(fVar33) < 6) {
        *param_7 = 1;
        fVar31 = fVar32;
        fVar34 = fVar30;
      }
    }
    fVar32 = DAT_1403994c;
    fVar30 = DAT_1403947c;
    iVar18 = iVar18 + 1;
    pfVar16 = pfVar16 + 1;
  } while (iVar18 != 8);
  if (*param_7 == 1) {
    pfVar16 = param_1 + (int)fVar34 + 0x100;
    pfVar15 = param_2 + (int)fVar34 + 0x100;
    fVar30 = (param_1[(int)fVar34] + param_1[(int)fVar31]) * 0.5;
    fVar29 = (param_2[(int)fVar34] + param_2[(int)fVar31]) * 0.5;
    pfVar17 = pfVar8;
    pfVar14 = pfVar5;
    pfVar20 = param_2 + (int)fVar31 + -0xff;
    pfVar21 = param_1 + (int)fVar31 + -0xff;
    local_250 = pfVar6;
    local_24c = pfVar7;
    do {
      pfVar15 = pfVar15 + -1;
      pfVar16 = pfVar16 + -1;
      fVar31 = (*pfVar15 - fVar29) * (*pfVar15 - fVar29) + (*pfVar16 - fVar30) * (*pfVar16 - fVar30)
      ;
      in_fpscr = in_fpscr & 0xfffffff;
      if (fVar31 < 0.0) {
        fVar31 = (float)FUN_140d9350();
      }
      else {
        fVar31 = SQRT(fVar31);
      }
      *pfVar14 = fVar31;
      pfVar14 = pfVar14 + 1;
      fVar31 = (*pfVar20 - fVar29) * (*pfVar20 - fVar29) + (*pfVar21 - fVar30) * (*pfVar21 - fVar30)
      ;
      in_fpscr = in_fpscr & 0xfffffff;
      if (fVar31 < 0.0) {
        fVar31 = (float)FUN_140d9350();
      }
      else {
        fVar31 = SQRT(fVar31);
      }
      *local_250 = fVar31;
      local_250 = local_250 + 1;
      fVar31 = (float)thunk_FUN_140d9394(*pfVar15 - fVar29,*pfVar16 - fVar30);
      *local_24c = fVar31;
      local_24c = local_24c + 1;
      fVar31 = (float)thunk_FUN_140d9394(*pfVar20 - fVar29,*pfVar21 - fVar30);
      *pfVar17 = fVar31 - fVar32;
      fVar3 = DAT_14039958;
      fVar33 = DAT_14039954;
      fVar31 = DAT_1403994c;
      pfVar17 = pfVar17 + 1;
      pfVar20 = pfVar20 + 1;
      pfVar21 = pfVar21 + 1;
    } while (param_1 + (int)fVar34 != pfVar16);
    pfVar15 = pfVar7 + 0x80;
    fVar29 = DAT_14039950;
    do {
      fVar34 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      fVar29 = fVar29 + fVar34;
    } while (pfVar7 + 0x100 != pfVar15);
    fVar29 = fVar29 * DAT_1403995c;
    pfVar15 = pfVar7;
    pfVar16 = pfVar8;
    do {
      while( true ) {
        fVar34 = *pfVar15 - fVar29;
        uVar27 = in_fpscr & 0xfffffff | (uint)(fVar34 < fVar31) << 0x1f;
        if (SUB41(uVar27 >> 0x1f,0) == (NAN(fVar34) || NAN(fVar31))) {
          *pfVar15 = fVar34 - fVar3;
        }
        else {
          if (fVar34 < fVar33) {
            fVar34 = fVar34 + fVar3;
          }
          *pfVar15 = fVar34;
          uVar27 = in_fpscr & 0xfffffff;
        }
        fVar34 = *pfVar16 - fVar29;
        in_fpscr = uVar27 & 0xfffffff;
        uVar27 = in_fpscr | (uint)(fVar34 < fVar31) << 0x1f;
        uVar28 = uVar27 | (uint)(NAN(fVar34) || NAN(fVar31)) << 0x1c;
        if ((byte)(uVar27 >> 0x1f) != ((byte)(uVar28 >> 0x1c) & 1)) break;
        pfVar17 = pfVar16 + 1;
        *pfVar16 = fVar34 - fVar3;
        pfVar15 = pfVar15 + 1;
        pfVar16 = pfVar17;
        in_fpscr = uVar28;
        if (pfVar8 + 0x100 == pfVar17) goto LAB_14039856;
      }
      if (fVar34 < fVar33) {
        fVar34 = fVar34 + fVar3;
      }
      pfVar17 = pfVar16 + 1;
      *pfVar16 = fVar34;
      pfVar15 = pfVar15 + 1;
      pfVar16 = pfVar17;
    } while (pfVar8 + 0x100 != pfVar17);
LAB_14039856:
    pfVar15 = pfVar10;
    pfVar16 = pfVar9;
    do {
      pfVar17 = pfVar16 + 1;
      *pfVar16 = 0.0;
      *pfVar15 = 0.0;
      pfVar15 = pfVar15 + 1;
      pfVar16 = pfVar17;
    } while (pfVar9 + 0x80 != pfVar17);
    iVar18 = 0;
    pfVar16 = pfVar10;
    pfVar17 = pfVar9;
    pfVar15 = pfVar5;
    do {
      pfVar15 = pfVar15 + 2;
      pfVar14 = (float *)((int)pfVar5 + iVar18);
      pfVar22 = (float *)((int)pfVar6 + iVar18);
      pfVar21 = (float *)((int)pfVar7 + iVar18);
      pfVar20 = (float *)((int)pfVar8 + iVar18);
      do {
        fVar31 = *pfVar14;
        pfVar14 = pfVar14 + 1;
        fVar29 = *pfVar22;
        pfVar22 = pfVar22 + 1;
        *pfVar17 = *pfVar17 + fVar31 + fVar29;
        fVar31 = *pfVar21;
        pfVar21 = pfVar21 + 1;
        fVar29 = *pfVar20;
        pfVar20 = pfVar20 + 1;
        *pfVar16 = *pfVar16 + fVar31 + fVar29;
      } while (pfVar15 != pfVar14);
      *pfVar17 = *pfVar17 * 0.25;
      pfVar17 = pfVar17 + 1;
      iVar18 = iVar18 + 8;
      *pfVar16 = *pfVar16 * 0.25;
      pfVar16 = pfVar16 + 1;
      pfVar14 = pfVar9;
    } while (iVar18 != 0x400);
    do {
      *pfVar14 = *pfVar14 / pfVar9[0x7f];
      pfVar14 = pfVar14 + 1;
    } while (pfVar14 != pfVar9 + 0x80);
    fVar31 = pfVar10[0x27];
    fVar29 = pfVar10[0x3b] - fVar31;
    iVar18 = -0x27;
    pfVar15 = pfVar10;
    while( true ) {
      fVar34 = (float)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x16) & 3);
      *pfVar15 = fVar31 + fVar34 * (fVar29 / 20.0);
      pfVar15 = pfVar15 + 1;
      iVar18 = iVar18 + 1;
      if (pfVar10 + 0x28 == pfVar15) break;
      fVar31 = pfVar10[0x27];
    }
    pfVar15 = pfVar10;
    do {
      pfVar16 = pfVar15 + 1;
      *pfVar15 = pfVar10[9];
      fVar29 = DAT_1403995c;
      pfVar15 = pfVar16;
    } while (pfVar10 + 10 != pfVar16);
    iVar18 = 0;
    pfVar15 = pfVar11;
    do {
      iVar18 = iVar18 + 1;
      fVar31 = (float)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x16) & 3);
      *pfVar15 = fVar31 * fVar29;
      pfVar15 = pfVar15 + 1;
    } while (iVar18 != 0x80);
    iVar18 = -1;
    pfVar15 = pfVar11;
    pfVar16 = pfVar12;
    do {
      fVar29 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      iVar19 = 0;
      pfVar17 = pfVar9;
      do {
        fVar31 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        if (fVar31 <= fVar29) {
          iVar18 = iVar19;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0x80);
      if (iVar18 == -1) {
        *pfVar16 = *pfVar11;
      }
      else if (iVar18 == 0x7f) {
        *pfVar16 = pfVar11[0x7f];
      }
      else {
        *pfVar16 = pfVar11[iVar18] +
                   ((fVar29 - pfVar9[iVar18]) / (pfVar9[iVar18 + 1] - pfVar9[iVar18])) *
                   (pfVar11[iVar18 + 1] - pfVar11[iVar18]);
      }
      pfVar16 = pfVar16 + 1;
    } while (pfVar11 + 0x80 != pfVar15);
    iVar18 = -1;
    pfVar15 = pfVar12;
    pfVar16 = pfVar13;
    do {
      fVar29 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      iVar19 = 0;
      pfVar17 = pfVar11;
      do {
        fVar31 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        if (fVar31 <= fVar29) {
          iVar18 = iVar19;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0x80);
      if (iVar18 == -1) {
        fVar29 = *pfVar10;
        *pfVar16 = fVar29;
      }
      else if (iVar18 == 0x7f) {
        fVar29 = pfVar10[0x7f];
        *pfVar16 = fVar29;
      }
      else {
        fVar29 = pfVar10[iVar18] +
                 ((fVar29 - pfVar11[iVar18]) / (pfVar11[iVar18 + 1] - pfVar11[iVar18])) *
                 (pfVar10[iVar18 + 1] - pfVar10[iVar18]);
        *pfVar16 = fVar29;
      }
      *pfVar16 = -fVar29;
      pfVar16 = pfVar16 + 1;
    } while (pfVar12 + 0x80 != pfVar15);
  }
  else {
    iVar18 = 0;
    pfVar15 = pfVar11;
    pfVar16 = pfVar12;
    pfVar17 = pfVar13;
    do {
      iVar18 = iVar18 + 1;
      fVar29 = (float)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x16) & 3);
      *pfVar15 = fVar29 * fVar30;
      pfVar15 = pfVar15 + 1;
      *pfVar16 = fVar29 * fVar30;
      pfVar16 = pfVar16 + 1;
      *pfVar17 = 0.0;
      pfVar17 = pfVar17 + 1;
    } while (iVar18 != 0x80);
  }
  fVar29 = DAT_14039480;
  piVar25 = (int *)(param_5 + -4);
  piVar24 = (int *)(param_4 + -4);
  piVar23 = param_6 + 0x80;
  pfVar15 = pfVar13;
  pfVar16 = pfVar11;
  pfVar17 = pfVar12;
  do {
    while( true ) {
      fVar31 = *pfVar17;
      pfVar17 = pfVar17 + 1;
      fVar31 = (float)FPRoundInt(fVar31 * fVar29,0x20,4,0);
      iVar18 = (int)fVar31;
      if (0x3ffe < iVar18) {
        iVar18 = 0x3fff;
      }
      piVar25 = piVar25 + 1;
      *piVar25 = iVar18;
      fVar31 = *pfVar16;
      pfVar16 = pfVar16 + 1;
      fVar31 = (float)FPRoundInt(fVar31 * fVar29,0x20,4,0);
      iVar18 = (int)fVar31;
      if (0x3ffe < iVar18) {
        iVar18 = 0x3fff;
      }
      piVar24 = piVar24 + 1;
      *piVar24 = iVar18;
      fVar31 = *pfVar15;
      pfVar15 = pfVar15 + 1;
      fVar31 = (float)FPRoundInt(fVar31 * fVar29,0x20,4,0);
      iVar18 = (int)fVar31;
      if (0x10c1 < iVar18) break;
      if (iVar18 < -0x10c1) {
        *param_6 = -0x10c1;
      }
      else {
        *param_6 = iVar18;
      }
      param_6 = param_6 + 1;
      if (piVar23 == param_6) goto LAB_14039646;
    }
    *param_6 = 0x10c1;
    param_6 = param_6 + 1;
  } while (piVar23 != param_6);
LAB_14039646:
  FUN_140391e0(pfVar4);
  FUN_140391e0(pfVar5);
  FUN_140391e0(pfVar6);
  FUN_140391e0(pfVar7);
  FUN_140391e0(pfVar8);
  FUN_140391e0(pfVar9);
  FUN_140391e0(pfVar10);
  FUN_140391e0(pfVar11);
  FUN_140391e0(pfVar12);
  if ((float)*DAT_14039948 == local_44[2]) {
    FUN_140391e0(pfVar13);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


/* FUN_10110ab0 @ 0x10110ab0 */

undefined4
FUN_10110ab0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,undefined4 param_8,float *param_9)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *extraout_r1;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  float extraout_s0;
  float extraout_s0_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float extraout_s5;
  float extraout_s6;
  float fVar15;
  undefined4 extraout_s12;
  undefined4 extraout_s12_00;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar3 = FUN_101103d4(param_4 - param_2,param_5 - param_3,param_1);
  if (iVar3 == 0) {
    uVar4 = FUN_101103d4(extraout_s5 - param_2,extraout_s6 - param_3);
    fVar17 = extraout_s0_00 - extraout_s0;
    in_fpscr = in_fpscr & 0xfffffff;
    if (fVar17 == 0.0) {
      *extraout_r1 = uVar4;
      return uVar4;
    }
    if (fVar17 < 0.0) {
      fVar17 = fVar17 + DAT_10110c70;
    }
    uVar10 = in_fpscr | (uint)(fVar17 == DAT_10110c74) << 0x1e |
             (uint)(DAT_10110c74 <= fVar17) << 0x1d;
    bVar1 = (byte)(uVar10 >> 0x18);
    if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
      iVar3 = 1;
    }
    else {
      uVar10 = in_fpscr | (uint)(fVar17 == DAT_10110c78) << 0x1e |
               (uint)(DAT_10110c78 <= fVar17) << 0x1d;
      bVar1 = (byte)(uVar10 >> 0x18);
      if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
        iVar3 = 2;
      }
      else {
        uVar10 = in_fpscr | (uint)(fVar17 == DAT_10110c7c) << 0x1e |
                 (uint)(DAT_10110c7c <= fVar17) << 0x1d;
        bVar1 = (byte)(uVar10 >> 0x18);
        if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
          iVar3 = 3;
        }
        else {
          iVar3 = 4;
        }
      }
    }
    fVar16 = (float)VectorSignedToFloat(iVar3,(byte)(uVar10 >> 0x16) & 3);
    fVar19 = (fVar17 / fVar16) * 0.5;
    fVar11 = (float)FUN_10110344(fVar19);
    fVar17 = fVar17 / fVar16;
  }
  else {
    iVar3 = 4;
    fVar11 = DAT_10110c84;
    fVar19 = DAT_10110c88;
    fVar17 = DAT_10110c74;
  }
  fVar2 = DAT_10110c80;
  fVar16 = DAT_10110c70;
  pfVar6 = (float *)0x0;
  pfVar7 = (float *)0x0;
  fVar18 = extraout_s0;
  while( true ) {
    bVar9 = iVar3 == 0;
    iVar3 = iVar3 + -1;
    if (bVar9) {
      if (pfVar6 != (float *)0x0) {
        pfVar6[6] = 0.0;
      }
      *param_9 = (float)pfVar7;
      return 0;
    }
    fVar18 = fVar18 + fVar17;
    fVar15 = fVar18 - fVar19;
    if (fVar2 < fVar15) {
      fVar15 = fVar15 - fVar16;
    }
    fVar12 = (float)FUN_10110344(fVar15);
    fVar13 = (float)FUN_1011038c(extraout_s12);
    fVar15 = fVar18;
    if (fVar2 < fVar18) {
      fVar15 = fVar18 - fVar16;
    }
    fVar14 = param_7;
    fVar20 = param_6;
    if (iVar3 != 0) {
      fVar15 = (float)FUN_10110344(fVar15);
      fVar14 = (float)FUN_1011038c(extraout_s12_00);
      fVar14 = param_3 + param_1 * fVar14;
      fVar20 = param_2 + param_1 * fVar15;
    }
    pfVar5 = (float *)FUN_100f0524(0x20);
    if (pfVar5 == (float *)0x0) break;
    FUN_1011ea48(pfVar5 + 2,0,0x18);
    *pfVar5 = param_2 + (param_1 / fVar11) * fVar12;
    pfVar5[1] = param_3 + (param_1 / fVar11) * fVar13;
    *(undefined1 *)((int)pfVar5 + 9) = 1;
    pfVar8 = pfVar5;
    if (pfVar6 != (float *)0x0) {
      pfVar6[6] = (float)pfVar5;
      pfVar8 = pfVar7;
    }
    pfVar6 = (float *)FUN_100f0524(0x20);
    if (pfVar6 == (float *)0x0) {
      if (pfVar8 == (float *)0x0) {
        return 5;
      }
      FUN_10139762(pfVar8);
      return 5;
    }
    FUN_1011ea48(pfVar6,0,0x20);
    *pfVar6 = fVar20;
    pfVar6[1] = fVar14;
    *(undefined1 *)((int)pfVar6 + 9) = 2;
    pfVar5[6] = (float)pfVar6;
    pfVar7 = pfVar8;
  }
  return 5;
}


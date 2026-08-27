/* FUN_2c025214 @ 0x2c025214 */

void FUN_2c025214(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  undefined4 *puVar13;
  int iVar14;
  short *psVar15;
  short *psVar16;
  short sVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined4 *puVar26;
  int iVar27;
  short *psVar28;
  int local_65c;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_60c;
  undefined4 local_608;
  short local_604 [20];
  short asStack_5dc [118];
  undefined4 uStack_4f0;
  short local_4ec [294];
  undefined4 uStack_2a0;
  short local_29c;
  short sStack_29a;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  short local_288 [296];
  short local_38;
  int local_34;
  
  puVar20 = param_1 + 0x114;
  puVar22 = param_1 + 3;
  sVar17 = *(short *)((int)param_1 + 0x6ee);
  iVar27 = (int)sVar17;
  uVar18 = (uint)(short)(*(short *)(param_1 + 0x1bc) + 1);
  local_34 = *DAT_2c02552c;
  *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + 1;
  *(undefined2 *)((int)param_1 + 0x6f2) = 0;
  uVar23 = uVar18 * 0x10000;
  iVar14 = SignedSaturate(uVar23 - 0x10000,0x20);
  SignedDoesSaturate(iVar14,0x20);
  if (iVar14 >> 0x10 != 0) goto LAB_2c02526e;
  uVar12 = FUN_2c0244d4(puVar22,(int)*(short *)(param_1 + 2),param_1[1],*param_1,
                        (int)*(short *)((int)param_1 + 10));
  *(short *)((int)param_1 + 0x6de) = (short)((uint)iVar14 >> 0x10);
  *(undefined2 *)(param_1 + 0x1b6) = uVar12;
  iVar14 = SignedSaturate(0,0x20);
  SignedDoesSaturate(iVar14,0x20);
  iVar14 = iVar14 >> 0x10;
  iVar21 = SignedSaturate(*(short *)(param_1 + 0x1b9) * 0x10000 +
                          *(short *)((int)param_1 + 0x6e6) * -0x10000,0x20);
  SignedDoesSaturate(iVar21,0x20);
  iVar21 = iVar21 >> 0x10;
  if (iVar21 < 1) {
    if (iVar21 == 0) {
LAB_2c025788:
      iVar14 = SignedSaturate(0x10000,0x20);
      SignedDoesSaturate(iVar14,0x20);
      iVar14 = iVar14 >> 0x10;
      iVar21 = SignedSaturate(*(short *)((int)param_1 + 0x6e6) * 0x10000 +
                              *(short *)(param_1 + 0x1ba) * -0x10000,0x20);
      SignedDoesSaturate(iVar21,0x20);
      iVar21 = iVar21 >> 0x10;
      if (iVar21 < 1) {
        if (iVar21 != 0) {
          iVar11 = SignedSaturate(iVar21 * -0x14,0xf);
          SignedDoesSaturate(iVar21 * -0x14,0xf);
          iVar11 = SignedSaturate(iVar11 * 0x10000 +
                                  *(short *)((int)param_1 + iVar14 * 2 + 0x6e4) * -0x10000,0x20);
          SignedDoesSaturate(iVar11,0x20);
          if (iVar11 < 0) goto LAB_2c025966;
        }
      }
      else {
        iVar11 = SignedSaturate(iVar21 * 0x14,0xf);
        SignedDoesSaturate(iVar21 * 0x14,0xf);
        iVar11 = SignedSaturate(iVar11 * 0x10000 +
                                *(short *)((int)param_1 + iVar14 * 2 + 0x6e4) * -0x10000,0x20);
        SignedDoesSaturate(iVar11,0x20);
        if (iVar11 < 0) goto LAB_2c025b78;
      }
      iVar14 = SignedSaturate(0x20000,0x20);
      SignedDoesSaturate(iVar14,0x20);
      iVar14 = iVar14 >> 0x10;
      iVar21 = SignedSaturate(*(short *)(param_1 + 0x1ba) * 0x10000 +
                              *(short *)((int)param_1 + 0x6ea) * -0x10000,0x20);
      SignedDoesSaturate(iVar21,0x20);
      iVar21 = iVar21 >> 0x10;
      if (iVar21 < 1) {
        if (iVar21 != 0) {
          iVar11 = SignedSaturate(iVar21 * -0x14,0xf);
          SignedDoesSaturate(iVar21 * -0x14,0xf);
          iVar11 = SignedSaturate(iVar11 * 0x10000 +
                                  *(short *)((int)param_1 + iVar14 * 2 + 0x6e4) * -0x10000,0x20);
          SignedDoesSaturate(iVar11,0x20);
          if (iVar11 < 0) goto LAB_2c025966;
        }
      }
      else {
        iVar11 = SignedSaturate(iVar21 * 0x14,0xf);
        SignedDoesSaturate(iVar21 * 0x14,0xf);
        iVar11 = SignedSaturate(iVar11 * 0x10000 +
                                *(short *)((int)param_1 + iVar14 * 2 + 0x6e4) * -0x10000,0x20);
        SignedDoesSaturate(iVar11,0x20);
        if (iVar11 < 0) goto LAB_2c025b78;
      }
      iVar14 = SignedSaturate(0x30000,0x20);
      SignedDoesSaturate(iVar14,0x20);
      iVar14 = iVar14 >> 0x10;
      iVar21 = SignedSaturate(*(short *)((int)param_1 + 0x6ea) * 0x10000 +
                              *(short *)(param_1 + 0x1bb) * -0x10000,0x20);
      SignedDoesSaturate(iVar21,0x20);
      iVar21 = iVar21 >> 0x10;
      if (iVar21 < 1) {
        if (iVar21 != 0) {
          iVar11 = SignedSaturate(iVar21 * -0x14,0xf);
          SignedDoesSaturate(iVar21 * -0x14,0xf);
          iVar11 = SignedSaturate(iVar11 * 0x10000 +
                                  *(short *)((int)param_1 + iVar14 * 2 + 0x6e4) * -0x10000,0x20);
          SignedDoesSaturate(iVar11,0x20);
          if (iVar11 < 0) goto LAB_2c025966;
        }
      }
      else {
        iVar11 = SignedSaturate(iVar21 * 0x14,0xf);
        SignedDoesSaturate(iVar21 * 0x14,0xf);
        iVar11 = SignedSaturate(iVar11 * 0x10000 +
                                *(short *)((int)param_1 + iVar14 * 2 + 0x6e4) * -0x10000,0x20);
        SignedDoesSaturate(iVar11,0x20);
        if (iVar11 < 0) goto LAB_2c025b78;
      }
    }
    else {
      iVar11 = SignedSaturate(iVar21 * -0x14,0xf);
      SignedDoesSaturate(iVar21 * -0x14,0xf);
      iVar11 = SignedSaturate(iVar11 * 0x10000 +
                              *(short *)((int)param_1 + iVar14 * 2 + 0x6e4) * -0x10000,0x20);
      SignedDoesSaturate(iVar11,0x20);
      if (-1 < iVar11) goto LAB_2c025788;
LAB_2c025966:
      uVar18 = SignedSaturate(*(short *)(DAT_2c0259f8 + iVar14 * 2) * iVar21 * 2,0x20);
      SignedDoesSaturate(uVar18,0x20);
      uVar23 = uVar18 ^ uVar18 << 1;
      if (((uVar23 == 0) || ((uint)LZCOUNT(uVar23) < 6)) && (uVar18 != 0)) {
        if ((int)uVar18 < 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = 0x7fffffff;
        }
        iVar14 = SignedSaturate(iVar14 * 2,0x20);
        SignedDoesSaturate(iVar14,0x20);
      }
      else {
        iVar14 = uVar18 << 6;
      }
      iVar14 = SignedSaturate(iVar14 + 0x8000,0x20);
      SignedDoesSaturate(iVar14,0x20);
      iVar21 = iVar14 >> 0x10;
      if (iVar14 >> 0x10 < -0x40) {
        iVar21 = -0x40;
      }
      *(short *)((int)param_1 + 0x6de) = (short)iVar21;
    }
  }
  else {
    iVar11 = SignedSaturate(iVar21 * 0x14,0xf);
    SignedDoesSaturate(iVar21 * 0x14,0xf);
    iVar11 = SignedSaturate(iVar11 * 0x10000 +
                            *(short *)((int)param_1 + iVar14 * 2 + 0x6e4) * -0x10000,0x20);
    SignedDoesSaturate(iVar11,0x20);
    if (-1 < iVar11) goto LAB_2c025788;
LAB_2c025b78:
    uVar18 = SignedSaturate(*(short *)(DAT_2c025bc8 + iVar14 * 2) * iVar21 * 2,0x20);
    SignedDoesSaturate(uVar18,0x20);
    uVar23 = uVar18 ^ uVar18 << 1;
    if (((uVar23 == 0) || ((uint)LZCOUNT(uVar23) < 6)) && (uVar18 != 0)) {
      if ((int)uVar18 < 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = 0x7fffffff;
      }
      iVar14 = SignedSaturate(iVar14 * 2,0x20);
      SignedDoesSaturate(iVar14,0x20);
    }
    else {
      iVar14 = uVar18 << 6;
    }
    iVar14 = SignedSaturate(iVar14 + 0x8000,0x20);
    SignedDoesSaturate(iVar14,0x20);
    iVar14 = iVar14 >> 0x10;
    if (0x7f < iVar14) {
      iVar14 = 0x80;
    }
    *(short *)((int)param_1 + 0x6de) = (short)iVar14;
  }
  if (iVar27 != 0) {
    uVar9 = SignedSaturate(iVar27 << 6,0xf);
    SignedDoesSaturate(iVar27 << 6,0xf);
    sVar17 = (short)uVar9;
  }
  *(short *)(param_1 + 0x1b7) = sVar17;
  sVar17 = *(short *)((int)param_1 + 0x5c2);
  sVar1 = *(short *)(param_1 + 0x171);
  sVar2 = *(short *)((int)param_1 + 0x5d2);
  sVar3 = *(short *)((int)param_1 + 0x5c6);
  sVar4 = *(short *)(param_1 + 0x172);
  sVar5 = *(short *)((int)param_1 + 0x5ca);
  sVar6 = *(short *)(param_1 + 0x173);
  sVar7 = *(short *)((int)param_1 + 0x5ce);
  sVar8 = *(short *)(param_1 + 0x174);
  psVar28 = local_604;
  psVar15 = (short *)((int)puVar22 + (0x1aa - iVar27) * 2 + -2);
  do {
    iVar14 = SignedSaturate((int)psVar15[1] * (int)sVar17 + (int)*psVar15 * (int)sVar1,0x20);
    SignedDoesSaturate(iVar14,0x20);
    iVar14 = SignedSaturate(iVar14 + (int)psVar15[-1] * (int)sVar3,0x20);
    SignedDoesSaturate(iVar14,0x20);
    iVar14 = SignedSaturate(iVar14 + (int)psVar15[-2] * (int)sVar4,0x20);
    SignedDoesSaturate(iVar14,0x20);
    iVar14 = SignedSaturate(iVar14 + (int)psVar15[-3] * (int)sVar5,0x20);
    SignedDoesSaturate(iVar14,0x20);
    iVar14 = SignedSaturate(iVar14 + (int)psVar15[-4] * (int)sVar6,0x20);
    SignedDoesSaturate(iVar14,0x20);
    iVar14 = SignedSaturate(iVar14 + (int)psVar15[-5] * (int)sVar7,0x20);
    SignedDoesSaturate(iVar14,0x20);
    iVar14 = SignedSaturate(iVar14 + (int)psVar15[-6] * (int)sVar8,0x20);
    SignedDoesSaturate(iVar14,0x20);
    uVar18 = SignedSaturate(iVar14 + (int)psVar15[-7] * (int)sVar2,0x20);
    SignedDoesSaturate(uVar18,0x20);
    uVar23 = uVar18 ^ uVar18 << 1;
    if (((uVar23 == 0) || ((uint)LZCOUNT(uVar23) < 5)) && (uVar18 != 0)) {
      if ((int)uVar18 < 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = 0x7fffffff;
      }
      iVar14 = SignedSaturate(iVar14 * 2,0x20);
      SignedDoesSaturate(iVar14,0x20);
    }
    else {
      iVar14 = uVar18 << 5;
    }
    uVar9 = SignedSaturate(iVar14 + 0x8000,0x20);
    SignedDoesSaturate(uVar9,0x20);
    psVar16 = psVar28 + 1;
    *psVar28 = (short)((uint)uVar9 >> 0x10);
    psVar28 = psVar16;
    psVar15 = psVar15 + 1;
  } while (psVar16 != asStack_5dc);
  psVar28 = (short *)((int)&local_608 + 2);
  sVar17 = *(short *)((int)param_1 + 0x5e6);
  do {
    while( true ) {
      psVar28 = psVar28 + 1;
      uVar18 = SignedSaturate((int)*psVar28 * (int)sVar17 * 2,0x20);
      SignedDoesSaturate(uVar18,0x20);
      uVar23 = uVar18 ^ uVar18 << 1;
      if (((uVar23 == 0) || ((uint)LZCOUNT(uVar23) < 6)) && (uVar18 != 0)) break;
      uVar9 = SignedSaturate(uVar18 * 0x40 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      *psVar28 = (short)((uint)uVar9 >> 0x10);
      if (psVar28 == local_604 + 0x13) goto LAB_2c025a42;
    }
    if ((int)uVar18 < 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = 0x7fffffff;
    }
    iVar14 = SignedSaturate(iVar14 * 2,0x20);
    SignedDoesSaturate(iVar14,0x20);
    uVar9 = SignedSaturate(iVar14 + 0x8000,0x20);
    SignedDoesSaturate(uVar9,0x20);
    *psVar28 = (short)((uint)uVar9 >> 0x10);
  } while (psVar28 != local_604 + 0x13);
LAB_2c025a42:
  FUN_2c021614((int)param_1 + 0x5c2,local_604,&local_62c,0x14,(int)param_1 + 0x5b2);
  uVar18 = (uint)*(short *)(param_1 + 0x1bc);
  param_1[0x114] = local_62c;
  *(undefined4 *)((int)param_1 + 0x6fa) = 0;
  param_1[0x115] = local_628;
  param_1[0x1c0] = 0;
  param_1[0x116] = local_624;
  param_1[0x1c1] = 0;
  uVar23 = uVar18 << 0x10;
  param_1[0x117] = local_620;
  param_1[0x118] = local_61c;
  param_1[0x119] = local_618;
  param_1[0x11a] = local_614;
  param_1[0x11b] = local_610;
  param_1[0x11c] = local_60c;
  param_1[0x11d] = local_608;
LAB_2c02526e:
  uVar25 = SignedSaturate(uVar23 - 0x20000,0x20);
  SignedDoesSaturate(uVar25,0x20);
  if (uVar25 >> 0x10 == 0) {
    uVar25 = SignedSaturate(*(short *)(param_1 + 0x1b7) * 0x10000 +
                            *(short *)((int)param_1 + 0x6de) * 0x10000,0x20);
    SignedDoesSaturate(uVar25,0x20);
    iVar27 = SignedSaturate((DAT_2c025530 & uVar25) + 0x200000,0x20);
    SignedDoesSaturate(iVar27,0x20);
    iVar27 = iVar27 >> 0x16;
    if (0x108 < iVar27) {
      iVar27 = 0x109;
    }
    if (iVar27 < 0x20) {
      iVar27 = 0x20;
    }
    *(short *)(param_1 + 0x1b7) = (short)iVar27;
  }
  uVar25 = SignedSaturate(uVar23 - 0x10000,0x20);
  SignedDoesSaturate(uVar25,0x20);
  if (uVar25 >> 0x10 != 0) {
    uVar25 = SignedSaturate(uVar23 - 0x20000,0x20);
    SignedDoesSaturate(uVar25,0x20);
    if (uVar25 >> 0x10 != 0) {
      iVar27 = (int)*(short *)(param_1 + 0x1b7);
    }
  }
  *(short *)((int)param_1 + 0x6ee) = (short)iVar27;
  iVar11 = DAT_2c025544;
  iVar21 = DAT_2c025540;
  uVar25 = DAT_2c025530;
  local_65c = *(short *)(param_1 + 0x1b6) * 0x10000;
  iVar14 = SignedSaturate(local_65c + -0x14000000,0x20);
  SignedDoesSaturate(iVar14,0x20);
  if (0xffff < iVar14) {
    puVar24 = (undefined4 *)((int)param_1 + 0x35e);
    iVar14 = 0;
    iVar27 = DAT_2c025534 - iVar27;
    psVar28 = (short *)((int)param_1 + iVar27 * 2);
    do {
      psVar28 = psVar28 + 1;
      uVar18 = SignedSaturate((int)*(short *)((int)param_1 + 0x6da) * (int)*psVar28 * 2,0x20);
      SignedDoesSaturate(uVar18,0x20);
      uVar23 = uVar18 ^ uVar18 << 1;
      iVar19 = uVar18 << 1;
      if (((uVar23 == 0) || (LZCOUNT(uVar23) == 0)) && (uVar18 != 0)) {
        if ((int)uVar18 < 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = 0x7fffffff;
        }
        iVar19 = SignedSaturate(iVar19 * 2,0x20);
        SignedDoesSaturate(iVar19,0x20);
      }
      uVar9 = SignedSaturate(iVar19 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      uVar18 = SignedSaturate(iVar14 * 0x10000 + iVar21,0x20);
      SignedDoesSaturate(uVar18,0x20);
      iVar14 = (int)uVar18 >> 0x10;
      iVar19 = SignedSaturate((int)(short)((uint)uVar9 >> 0x10) * (int)(short)(uVar18 >> 0x10) * 2,
                              0x20);
      SignedDoesSaturate(iVar19,0x20);
      iVar10 = SignedSaturate(iVar11 - (uVar18 & uVar25),0x20);
      SignedDoesSaturate(iVar10,0x20);
      iVar10 = SignedSaturate((iVar10 >> 0x10) * (int)*(short *)((int)puVar24 + 0xf2) * 2,0x20);
      SignedDoesSaturate(iVar10,0x20);
      iVar19 = SignedSaturate(iVar19 + iVar10,0x20);
      SignedDoesSaturate(iVar19,0x20);
      uVar9 = SignedSaturate(iVar19 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      puVar24 = (undefined4 *)((int)puVar24 + 2);
      *(short *)puVar24 = (short)((uint)uVar9 >> 0x10);
    } while (puVar24 != (undefined4 *)((int)param_1 + 0x386));
    psVar28 = (short *)(iVar27 * 2 + 0x28 + (int)param_1);
    do {
      psVar28 = psVar28 + 1;
      uVar18 = SignedSaturate((int)*(short *)((int)param_1 + 0x6da) * (int)*psVar28 * 2,0x20);
      SignedDoesSaturate(uVar18,0x20);
      uVar23 = uVar18 ^ uVar18 << 1;
      iVar27 = uVar18 << 1;
      if (((uVar23 == 0) || (LZCOUNT(uVar23) == 0)) && (uVar18 != 0)) {
        if ((int)uVar18 < 0) {
          iVar27 = 0;
        }
        else {
          iVar27 = 0x7fffffff;
        }
        iVar27 = SignedSaturate(iVar27 * 2,0x20);
        SignedDoesSaturate(iVar27,0x20);
      }
      uVar9 = SignedSaturate(iVar27 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      puVar24 = (undefined4 *)((int)puVar24 + 2);
      *(short *)puVar24 = (short)((uint)uVar9 >> 0x10);
    } while (puVar24 != param_1 + 0x16c);
    uVar18 = (uint)*(short *)(param_1 + 0x1bc);
    local_65c = (int)*(short *)(param_1 + 0x1b6) << 0x10;
    uVar23 = uVar18 << 0x10;
  }
  iVar27 = SignedSaturate(local_65c + -0x1c000000,0x20);
  SignedDoesSaturate(iVar27,0x20);
  if (iVar27 < 0x10000) {
    psVar15 = (short *)((int)&uStack_4f0 + 2);
    sVar17 = *(short *)((int)param_1 + 0x6f6);
    psVar28 = psVar15;
    uVar25 = uVar23;
    while( true ) {
      iVar27 = SignedSaturate(uVar25 - 0x7e0000,0x20);
      SignedDoesSaturate(iVar27,0x20);
      if (0xffff < iVar27) {
        uVar25 = SignedSaturate(uVar25 - 0x7f0000,0x20);
        SignedDoesSaturate(uVar25,0x20);
        uVar18 = (int)uVar25 >> 0x10;
        uVar25 = uVar25 & DAT_2c025530;
      }
      uVar9 = SignedSaturate(((int)sVar17 * (int)*(short *)(DAT_2c02553c + (uVar18 & 0x7f) * 2) +
                             0x4000) * 2,0x20);
      SignedDoesSaturate(uVar9,0x20);
      psVar28 = psVar28 + 1;
      *psVar28 = (short)((uint)uVar9 >> 0x10);
      iVar27 = SignedSaturate(uVar25 + uVar23,0x20);
      SignedDoesSaturate(iVar27,0x20);
      uVar18 = iVar27 >> 0x10;
      if (psVar28 == &local_29c) break;
      uVar25 = uVar18 << 0x10;
    }
    sVar17 = *(short *)((int)param_1 + 0x5c2);
    local_294 = *(undefined4 *)((int)param_1 + 0x5b6);
    sVar1 = *(short *)(param_1 + 0x171);
    local_290 = *(undefined4 *)((int)param_1 + 0x5ba);
    sVar2 = *(short *)((int)param_1 + 0x5c6);
    local_28c = *(undefined4 *)((int)param_1 + 0x5be);
    sVar3 = *(short *)(param_1 + 0x172);
    local_298 = *(undefined4 *)((int)param_1 + 0x5b2);
    sVar4 = *(short *)((int)param_1 + 0x5ce);
    sVar5 = *(short *)((int)param_1 + 0x5ca);
    sVar6 = *(short *)(param_1 + 0x174);
    sVar7 = *(short *)(param_1 + 0x173);
    sVar8 = *(short *)((int)param_1 + 0x5d2);
    psVar28 = (short *)&local_298;
    do {
      psVar15 = psVar15 + 1;
      iVar27 = SignedSaturate((int)*psVar15 * (int)sVar17 - (int)psVar28[7] * (int)sVar1,0x20);
      SignedDoesSaturate(iVar27,0x20);
      iVar27 = SignedSaturate(iVar27 - (int)psVar28[6] * (int)sVar2,0x20);
      SignedDoesSaturate(iVar27,0x20);
      iVar27 = SignedSaturate(iVar27 - (int)psVar28[5] * (int)sVar3,0x20);
      SignedDoesSaturate(iVar27,0x20);
      iVar27 = SignedSaturate(iVar27 - (int)psVar28[4] * (int)sVar5,0x20);
      SignedDoesSaturate(iVar27,0x20);
      iVar27 = SignedSaturate(iVar27 - (int)psVar28[3] * (int)sVar7,0x20);
      SignedDoesSaturate(iVar27,0x20);
      iVar27 = SignedSaturate(iVar27 - (int)psVar28[2] * (int)sVar4,0x20);
      SignedDoesSaturate(iVar27,0x20);
      iVar27 = SignedSaturate(iVar27 - (int)psVar28[1] * (int)sVar6,0x20);
      SignedDoesSaturate(iVar27,0x20);
      uVar18 = SignedSaturate(iVar27 - (int)*psVar28 * (int)sVar8,0x20);
      SignedDoesSaturate(uVar18,0x20);
      uVar23 = uVar18 ^ uVar18 << 1;
      if (((uVar23 == 0) || ((LZCOUNT(uVar23) & 0x1cU) == 0)) && (uVar18 != 0)) {
        if ((int)uVar18 < 0) {
          iVar27 = 0;
        }
        else {
          iVar27 = 0x7fffffff;
        }
        iVar27 = SignedSaturate(iVar27 * 2,0x20);
        SignedDoesSaturate(iVar27,0x20);
      }
      else {
        iVar27 = uVar18 << 4;
      }
      uVar9 = SignedSaturate(iVar27 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      psVar28[8] = (short)((uint)uVar9 >> 0x10);
      psVar28 = psVar28 + 1;
    } while (psVar15 != &local_29c);
    puVar24 = &local_28c;
    psVar28 = local_4ec;
    do {
      puVar24 = puVar24 + 1;
      psVar15 = psVar28 + 2;
      *(undefined4 *)psVar28 = *puVar24;
      psVar28 = psVar15;
    } while (psVar15 != &local_29c);
    local_29c = local_38;
    iVar27 = SignedSaturate(0x1400,0xf);
    SignedDoesSaturate(0x1400,0xf);
    iVar27 = SignedSaturate(local_65c + iVar27 * -0x10000,0x20);
    SignedDoesSaturate(iVar27,0x20);
    if (iVar27 < 0x10000) {
      *(undefined2 *)((int)param_1 + 0x6d6) = 0x7fff;
      puVar24 = &uStack_4f0;
      puVar13 = param_1 + 0xd8;
      do {
        puVar24 = puVar24 + 1;
        *puVar13 = *puVar24;
        puVar13 = puVar13 + 1;
      } while (&uStack_2a0 != puVar24);
      *(short *)(param_1 + 0x16c) = local_38;
      uVar23 = (int)*(short *)(param_1 + 0x1bc) << 0x10;
    }
    else {
      iVar27 = SignedSaturate(0x1c000000 - local_65c,0x20);
      SignedDoesSaturate(iVar27,0x20);
      if (iVar27 >> 0x10 == 0) {
        sVar17 = (short)((uint)iVar27 >> 0x10);
        iVar27 = 0;
      }
      else {
        iVar14 = (iVar27 >> 0x10) << 4;
        iVar27 = SignedSaturate(iVar14,0xf);
        SignedDoesSaturate(iVar14,0xf);
        sVar17 = (short)iVar27;
        iVar27 = iVar27 << 0x10;
      }
      *(short *)((int)param_1 + 0x6d6) = sVar17;
      iVar21 = SignedSaturate(DAT_2c0259f4 - iVar27,0x20);
      SignedDoesSaturate(iVar21,0x20);
      iVar27 = SignedSaturate((iVar21 >> 0x10) * (int)*(short *)(param_1 + 0xd8) * 2,0x20);
      SignedDoesSaturate(iVar27,0x20);
      iVar14 = SignedSaturate((int)local_4ec[0] * (int)sVar17 * 2,0x20);
      SignedDoesSaturate(iVar14,0x20);
      iVar27 = SignedSaturate(iVar27 + iVar14,0x20);
      SignedDoesSaturate(iVar27,0x20);
      uVar9 = SignedSaturate(iVar27 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      psVar28 = (short *)(param_1 + 0xd8);
      *(short *)(param_1 + 0xd8) = (short)((uint)uVar9 >> 0x10);
      psVar15 = local_4ec + 1;
      do {
        psVar28 = psVar28 + 1;
        iVar27 = SignedSaturate((iVar21 >> 0x10) * (int)*psVar28 * 2,0x20);
        SignedDoesSaturate(iVar27,0x20);
        psVar16 = psVar15 + 1;
        iVar14 = SignedSaturate((int)*(short *)((int)param_1 + 0x6d6) * (int)*psVar15 * 2,0x20);
        SignedDoesSaturate(iVar14,0x20);
        iVar27 = SignedSaturate(iVar27 + iVar14,0x20);
        SignedDoesSaturate(iVar27,0x20);
        uVar9 = SignedSaturate(iVar27 + 0x8000,0x20);
        SignedDoesSaturate(uVar9,0x20);
        *psVar28 = (short)((uint)uVar9 >> 0x10);
        psVar15 = psVar16;
      } while (psVar16 != &sStack_29a);
      uVar23 = (int)*(short *)(param_1 + 0x1bc) << 0x10;
    }
  }
  else {
    *(undefined2 *)((int)param_1 + 0x6d6) = 0;
  }
  iVar27 = SignedSaturate(uVar23 - 0x20000,0x20);
  SignedDoesSaturate(iVar27,0x20);
  if (0xffff < iVar27) {
    iVar27 = SignedSaturate(uVar23 - 0x60000,0x20);
    SignedDoesSaturate(iVar27,0x20);
    if (iVar27 < 0x10000) {
      iVar14 = SignedSaturate(uVar23 - 0x30000,0x20);
      SignedDoesSaturate(iVar14,0x20);
      psVar28 = (short *)((int)param_1 + 0x35e);
      iVar27 = 0x7fff;
      iVar14 = *(short *)(DAT_2c025538 + (iVar14 >> 0x10) * 2) * 0x10000;
      do {
        psVar28 = psVar28 + 1;
        uVar9 = SignedSaturate((int)*psVar28 * (int)(short)iVar27 * 2,0x20);
        SignedDoesSaturate(uVar9,0x20);
        *psVar28 = (short)((uint)uVar9 >> 0x10);
        iVar27 = SignedSaturate(iVar27 * 0x10000 + iVar14,0x20);
        SignedDoesSaturate(iVar27,0x20);
        iVar27 = iVar27 >> 0x10;
      } while (psVar28 != (short *)((int)param_1 + 0x44e));
      iVar21 = SignedSaturate(*(short *)(param_1 + 0x1bc) * 0x10000 + -0x60000,0x20);
      SignedDoesSaturate(iVar21,0x20);
      if (iVar21 < 0) {
        do {
          psVar28 = psVar28 + 1;
          uVar9 = SignedSaturate((int)*psVar28 * (int)(short)iVar27 * 2,0x20);
          SignedDoesSaturate(uVar9,0x20);
          *psVar28 = (short)((uint)uVar9 >> 0x10);
          iVar27 = SignedSaturate(iVar27 * 0x10000 + iVar14,0x20);
          SignedDoesSaturate(iVar27,0x20);
          iVar27 = iVar27 >> 0x10;
        } while (psVar28 != (short *)(param_1 + 0x16c));
      }
      else {
        puVar24 = puVar20;
        do {
          puVar13 = puVar24 + 1;
          *puVar24 = 0;
          puVar24 = puVar13;
        } while (puVar13 != param_1 + 0x16c);
        *(undefined2 *)(param_1 + 0x16c) = 0;
      }
    }
    else {
      puVar24 = param_1 + 0xd8;
      do {
        puVar13 = puVar24 + 1;
        *puVar24 = 0;
        puVar24 = puVar13;
      } while (puVar13 != param_1 + 0x16c);
      *(undefined2 *)(param_1 + 0x16c) = 0;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar24 = param_1 + 0xd8;
    if (param_3 == (undefined4 *)((int)param_1 + 0x362)) {
      puVar13 = puVar24;
      do {
        puVar26 = (undefined4 *)((int)puVar13 + 2);
        puVar24 = (undefined4 *)((int)puVar24 + 2);
        *(undefined2 *)puVar24 = *(undefined2 *)puVar13;
        puVar13 = puVar26;
      } while (puVar26 != (undefined4 *)((int)param_1 + 0x4e2));
    }
    else {
      puVar13 = param_3;
      do {
        puVar26 = puVar13 + 1;
        *puVar13 = *puVar24;
        puVar13 = puVar26;
        puVar24 = puVar24 + 1;
      } while (puVar26 != param_3 + 0x60);
      *(undefined2 *)(param_3 + 0x60) = *(undefined2 *)(param_1 + 0x138);
    }
  }
  FUN_2c024a18(param_1,param_2,puVar22,0);
  if (param_4 != (undefined4 *)0x0) {
    if (param_4 == (undefined4 *)((int)param_1 + 0x452)) {
      puVar22 = puVar20;
      do {
        puVar24 = (undefined4 *)((int)puVar22 + 2);
        puVar20 = (undefined4 *)((int)puVar20 + 2);
        *(undefined2 *)puVar20 = *(undefined2 *)puVar22;
        puVar22 = puVar24;
      } while (param_1 + 0x153 != puVar24);
    }
    else {
      puVar22 = param_4;
      do {
        puVar24 = puVar22 + 1;
        *puVar22 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar22 = puVar24;
      } while (puVar24 != param_4 + 0x3f);
    }
  }
  if (*DAT_2c02552c == local_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00b2e8();
}


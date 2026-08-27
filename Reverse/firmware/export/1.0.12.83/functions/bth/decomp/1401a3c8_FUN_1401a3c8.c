/* FUN_1401a3c8 @ 0x1401a3c8 */

/* WARNING: Instruction at (ram,0x1401ad5a) overlaps instruction at (ram,0x1401ad58)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a3c8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

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
  undefined4 uVar12;
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  ushort *puVar17;
  short *psVar18;
  undefined4 *puVar19;
  undefined4 *extraout_r1;
  uint uVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined4 *extraout_r2;
  uint uVar23;
  short *psVar24;
  uint uVar25;
  uint extraout_r3;
  undefined4 *puVar26;
  undefined4 *puVar27;
  short *psVar28;
  short *psVar29;
  undefined4 *puVar30;
  undefined2 *puVar31;
  short sVar32;
  char cVar33;
  int local_660;
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
  ushort uStack_29a;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  short local_288 [296];
  short local_38;
  uint local_34;
  
  local_34 = *DAT_1401a6e8;
  puVar30 = param_1 + 3;
  puVar26 = param_1 + 0x114;
  *(undefined2 *)((int)param_1 + 0x6f2) = 0;
  uVar20 = (uint)(short)(*(short *)(param_1 + 0x1bc) + 1);
  psVar28 = (short *)(int)*(short *)((int)param_1 + 0x6ee);
  *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + 1;
  uVar23 = uVar20 * 0x10000;
  iVar15 = SignedSaturate(uVar23 - 0x10000,0x20);
  SignedDoesSaturate(iVar15,0x20);
  if (iVar15 >> 0x10 != 0) goto LAB_1401a424;
  uVar13 = FUN_14019664(puVar30,(int)*(short *)(param_1 + 2),param_1[1],*param_1,
                        (int)*(short *)((int)param_1 + 10));
  *(short *)((int)param_1 + 0x6de) = (short)((uint)iVar15 >> 0x10);
  *(undefined2 *)(param_1 + 0x1b6) = uVar13;
  iVar15 = SignedSaturate(0,0x20);
  SignedDoesSaturate(iVar15,0x20);
  iVar15 = iVar15 >> 0x10;
  iVar14 = SignedSaturate(*(short *)(param_1 + 0x1b9) * 0x10000 +
                          *(short *)((int)param_1 + 0x6e6) * -0x10000,0x20);
  SignedDoesSaturate(iVar14,0x20);
  iVar14 = iVar14 >> 0x10;
  if (iVar14 < 1) {
    if (iVar14 != 0) {
      iVar10 = SignedSaturate(iVar14 * -0x14,0xf);
      SignedDoesSaturate(iVar14 * -0x14,0xf);
      iVar10 = SignedSaturate(iVar10 * 0x10000 +
                              *(short *)((int)param_1 + iVar15 * 2 + 0x6e4) * -0x10000,0x20);
      SignedDoesSaturate(iVar10,0x20);
      if (iVar10 < 0) goto LAB_1401ab34;
    }
  }
  else {
    iVar10 = SignedSaturate(iVar14 * 0x14,0xf);
    SignedDoesSaturate(iVar14 * 0x14,0xf);
    iVar10 = SignedSaturate(iVar10 * 0x10000 +
                            *(short *)((int)param_1 + iVar15 * 2 + 0x6e4) * -0x10000,0x20);
    SignedDoesSaturate(iVar10,0x20);
    if (iVar10 < 0) goto LAB_1401ad4c;
  }
  iVar15 = SignedSaturate(0x10000,0x20);
  SignedDoesSaturate(iVar15,0x20);
  iVar15 = iVar15 >> 0x10;
  iVar14 = SignedSaturate(*(short *)((int)param_1 + 0x6e6) * 0x10000 +
                          *(short *)(param_1 + 0x1ba) * -0x10000,0x20);
  SignedDoesSaturate(iVar14,0x20);
  iVar14 = iVar14 >> 0x10;
  if (iVar14 < 1) {
    if (iVar14 != 0) {
      iVar10 = SignedSaturate(iVar14 * -0x14,0xf);
      SignedDoesSaturate(iVar14 * -0x14,0xf);
      iVar10 = SignedSaturate(iVar10 * 0x10000 +
                              *(short *)((int)param_1 + iVar15 * 2 + 0x6e4) * -0x10000,0x20);
      SignedDoesSaturate(iVar10,0x20);
      if (iVar10 < 0) goto LAB_1401ab34;
    }
  }
  else {
    iVar10 = SignedSaturate(iVar14 * 0x14,0xf);
    SignedDoesSaturate(iVar14 * 0x14,0xf);
    iVar10 = SignedSaturate(iVar10 * 0x10000 +
                            *(short *)((int)param_1 + iVar15 * 2 + 0x6e4) * -0x10000,0x20);
    SignedDoesSaturate(iVar10,0x20);
    if (iVar10 < 0) goto LAB_1401ad4c;
  }
  iVar15 = SignedSaturate(0x20000,0x20);
  SignedDoesSaturate(iVar15,0x20);
  iVar15 = iVar15 >> 0x10;
  iVar14 = SignedSaturate(*(short *)(param_1 + 0x1ba) * 0x10000 +
                          *(short *)((int)param_1 + 0x6ea) * -0x10000,0x20);
  SignedDoesSaturate(iVar14,0x20);
  iVar14 = iVar14 >> 0x10;
  if (iVar14 < 1) {
    if (iVar14 != 0) {
      iVar10 = SignedSaturate(iVar14 * -0x14,0xf);
      SignedDoesSaturate(iVar14 * -0x14,0xf);
      iVar10 = SignedSaturate(iVar10 * 0x10000 +
                              *(short *)((int)param_1 + iVar15 * 2 + 0x6e4) * -0x10000,0x20);
      SignedDoesSaturate(iVar10,0x20);
      if (iVar10 < 0) goto LAB_1401ab34;
    }
  }
  else {
    iVar10 = SignedSaturate(iVar14 * 0x14,0xf);
    SignedDoesSaturate(iVar14 * 0x14,0xf);
    iVar10 = SignedSaturate(iVar10 * 0x10000 +
                            *(short *)((int)param_1 + iVar15 * 2 + 0x6e4) * -0x10000,0x20);
    SignedDoesSaturate(iVar10,0x20);
    if (iVar10 < 0) goto LAB_1401ad4c;
  }
  iVar15 = SignedSaturate(0x30000,0x20);
  SignedDoesSaturate(iVar15,0x20);
  iVar15 = iVar15 >> 0x10;
  iVar14 = SignedSaturate(*(short *)((int)param_1 + 0x6ea) * 0x10000 +
                          *(short *)(param_1 + 0x1bb) * -0x10000,0x20);
  SignedDoesSaturate(iVar14,0x20);
  iVar14 = iVar14 >> 0x10;
  if (iVar14 < 1) {
    if (iVar14 == 0) goto LAB_1401aa0e;
    iVar10 = SignedSaturate(iVar14 * -0x14,0xf);
    SignedDoesSaturate(iVar14 * -0x14,0xf);
    iVar10 = SignedSaturate(iVar10 * 0x10000 +
                            *(short *)((int)param_1 + iVar15 * 2 + 0x6e4) * -0x10000,0x20);
    SignedDoesSaturate(iVar10,0x20);
    if (-1 < iVar10) goto LAB_1401aa0e;
LAB_1401ab34:
    uVar20 = SignedSaturate(*(short *)(DAT_1401abcc + iVar15 * 2) * iVar14 * 2,0x20);
    SignedDoesSaturate(uVar20,0x20);
    uVar23 = uVar20 ^ uVar20 << 1;
    if (((uVar23 == 0) || ((uint)LZCOUNT(uVar23) < 6)) && (uVar20 != 0)) {
      if ((int)uVar20 < 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = 0x7fffffff;
      }
      iVar15 = SignedSaturate(iVar15 * 2,0x20);
      SignedDoesSaturate(iVar15,0x20);
    }
    else {
      iVar15 = uVar20 << 6;
    }
    iVar15 = SignedSaturate(iVar15 + 0x8000,0x20);
    SignedDoesSaturate(iVar15,0x20);
    iVar14 = iVar15 >> 0x10;
    if (iVar15 >> 0x10 < -0x40) {
      iVar14 = -0x40;
    }
    *(short *)((int)param_1 + 0x6de) = (short)iVar14;
    if (psVar28 != (short *)0x0) goto LAB_1401aa14;
    goto LAB_1401ab84;
  }
  iVar10 = SignedSaturate(iVar14 * 0x14,0xf);
  SignedDoesSaturate(iVar14 * 0x14,0xf);
  iVar10 = SignedSaturate(iVar10 * 0x10000 +
                          *(short *)((int)param_1 + iVar15 * 2 + 0x6e4) * -0x10000,0x20);
  SignedDoesSaturate(iVar10,0x20);
  if (-1 < iVar10) goto LAB_1401aa0e;
LAB_1401ad4c:
  uVar20 = SignedSaturate(*(short *)(iRam1401ad9c + iVar15 * 2) * iVar14 * 2,0x20);
  SignedDoesSaturate(uVar20,0x20);
  uVar25 = uVar20 ^ uVar20 << 1;
  uVar23 = uVar25;
  do {
    if (((uVar23 == 0) || ((uint)LZCOUNT(uVar25) < 6)) && (uVar20 != 0)) {
      if ((int)uVar20 < 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = 0x7fffffff;
      }
      iVar15 = SignedSaturate(iVar15 * 2,0x20);
      SignedDoesSaturate(iVar15,0x20);
    }
    else {
      iVar15 = uVar20 << 6;
    }
    iVar15 = SignedSaturate(iVar15 + 0x8000,0x20);
    SignedDoesSaturate(iVar15,0x20);
    iVar15 = iVar15 >> 0x10;
    if (0x7f < iVar15) {
      iVar15 = 0x80;
    }
    *(short *)((int)param_1 + 0x6de) = (short)iVar15;
LAB_1401aa0e:
    if (psVar28 == (short *)0x0) {
LAB_1401ab84:
      uVar13 = SUB42(psVar28,0);
    }
    else {
LAB_1401aa14:
      uVar9 = SignedSaturate((int)psVar28 << 6,0xf);
      SignedDoesSaturate((int)psVar28 << 6,0xf);
      uVar13 = (undefined2)uVar9;
    }
    *(undefined2 *)(param_1 + 0x1b7) = uVar13;
    sVar32 = *(short *)(param_1 + 0x174);
    sVar1 = *(short *)((int)param_1 + 0x5c2);
    sVar2 = *(short *)((int)param_1 + 0x5d2);
    sVar3 = *(short *)(param_1 + 0x171);
    sVar4 = *(short *)((int)param_1 + 0x5c6);
    sVar5 = *(short *)(param_1 + 0x172);
    sVar6 = *(short *)((int)param_1 + 0x5ca);
    sVar7 = *(short *)(param_1 + 0x173);
    sVar8 = *(short *)((int)param_1 + 0x5ce);
    psVar29 = local_604;
    psVar24 = (short *)((int)puVar30 + (0x1aa - (int)psVar28) * 2 + -2);
    do {
      iVar15 = SignedSaturate((int)psVar24[1] * (int)sVar1 + (int)*psVar24 * (int)sVar3,0x20);
      SignedDoesSaturate(iVar15,0x20);
      iVar15 = SignedSaturate(iVar15 + (int)psVar24[-1] * (int)sVar4,0x20);
      SignedDoesSaturate(iVar15,0x20);
      iVar15 = SignedSaturate(iVar15 + (int)psVar24[-2] * (int)sVar5,0x20);
      SignedDoesSaturate(iVar15,0x20);
      iVar15 = SignedSaturate(iVar15 + (int)psVar24[-3] * (int)sVar6,0x20);
      SignedDoesSaturate(iVar15,0x20);
      iVar15 = SignedSaturate(iVar15 + (int)psVar24[-4] * (int)sVar7,0x20);
      SignedDoesSaturate(iVar15,0x20);
      iVar15 = SignedSaturate(iVar15 + (int)psVar24[-5] * (int)sVar8,0x20);
      SignedDoesSaturate(iVar15,0x20);
      iVar15 = SignedSaturate(iVar15 + (int)psVar24[-6] * (int)sVar32,0x20);
      SignedDoesSaturate(iVar15,0x20);
      uVar20 = SignedSaturate(iVar15 + (int)psVar24[-7] * (int)sVar2,0x20);
      SignedDoesSaturate(uVar20,0x20);
      uVar23 = uVar20 ^ uVar20 << 1;
      if (((uVar23 == 0) || ((uint)LZCOUNT(uVar23) < 5)) && (uVar20 != 0)) {
        if ((int)uVar20 < 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = 0x7fffffff;
        }
        iVar15 = SignedSaturate(iVar15 * 2,0x20);
        SignedDoesSaturate(iVar15,0x20);
      }
      else {
        iVar15 = uVar20 << 5;
      }
      uVar9 = SignedSaturate(iVar15 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      psVar18 = psVar29 + 1;
      *psVar29 = (short)((uint)uVar9 >> 0x10);
      psVar29 = psVar18;
      psVar24 = psVar24 + 1;
    } while (psVar18 != asStack_5dc);
    sVar32 = *(short *)((int)param_1 + 0x5e6);
    psVar29 = (short *)((int)&local_608 + 2);
    do {
      while( true ) {
        psVar29 = psVar29 + 1;
        uVar20 = SignedSaturate((int)*psVar29 * (int)sVar32 * 2,0x20);
        SignedDoesSaturate(uVar20,0x20);
        uVar23 = uVar20 ^ uVar20 << 1;
        if (((uVar23 == 0) || ((uint)LZCOUNT(uVar23) < 6)) && (uVar20 != 0)) break;
        uVar9 = SignedSaturate(uVar20 * 0x40 + 0x8000,0x20);
        SignedDoesSaturate(uVar9,0x20);
        *psVar29 = (short)((uint)uVar9 >> 0x10);
        if (psVar29 == local_604 + 0x13) goto LAB_1401ac16;
      }
      if ((int)uVar20 < 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = 0x7fffffff;
      }
      iVar15 = SignedSaturate(iVar15 * 2,0x20);
      SignedDoesSaturate(iVar15,0x20);
      uVar9 = SignedSaturate(iVar15 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      *psVar29 = (short)((uint)uVar9 >> 0x10);
    } while (psVar29 != local_604 + 0x13);
LAB_1401ac16:
    FUN_14016954((int)param_1 + 0x5c2,local_604,&local_62c,0x14,(int)param_1 + 0x5b2);
    uVar20 = (uint)*(short *)(param_1 + 0x1bc);
    param_1[0x114] = local_62c;
    uVar23 = uVar20 << 0x10;
    param_1[0x115] = local_628;
    param_1[0x116] = local_624;
    *(undefined4 *)((int)param_1 + 0x6fa) = 0;
    param_1[0x117] = local_620;
    param_1[0x1c0] = 0;
    param_1[0x118] = local_61c;
    param_1[0x1c1] = 0;
    param_1[0x119] = local_618;
    param_1[0x11a] = local_614;
    param_1[0x11b] = local_610;
    param_1[0x11c] = local_60c;
    param_1[0x11d] = local_608;
LAB_1401a424:
    uVar25 = SignedSaturate(uVar23 - 0x20000,0x20);
    SignedDoesSaturate(uVar25,0x20);
    if (uVar25 >> 0x10 == 0) {
      uVar25 = SignedSaturate(*(short *)(param_1 + 0x1b7) * 0x10000 +
                              *(short *)((int)param_1 + 0x6de) * 0x10000,0x20);
      SignedDoesSaturate(uVar25,0x20);
      iVar15 = SignedSaturate((uVar25 & 0xffff0000) + 0x200000,0x20);
      SignedDoesSaturate(iVar15,0x20);
      psVar28 = (short *)(iVar15 >> 0x16);
      if (0x108 < (int)psVar28) {
        psVar28 = (short *)0x109;
      }
      if ((int)psVar28 < 0x20) {
        psVar28 = (short *)&Reserved2;
      }
      *(short *)(param_1 + 0x1b7) = (short)psVar28;
    }
    uVar25 = SignedSaturate(uVar23 - 0x10000,0x20);
    SignedDoesSaturate(uVar25,0x20);
    if (uVar25 >> 0x10 != 0) {
      uVar25 = SignedSaturate(uVar23 - 0x20000,0x20);
      SignedDoesSaturate(uVar25,0x20);
      if (uVar25 >> 0x10 != 0) {
        psVar28 = (short *)(int)*(short *)(param_1 + 0x1b7);
      }
    }
    *(short *)((int)param_1 + 0x6ee) = (short)psVar28;
    uVar25 = DAT_1401a6fc;
    iVar10 = DAT_1401a6f8;
    iVar14 = DAT_1401a6f4;
    local_660 = *(short *)(param_1 + 0x1b6) * 0x10000;
    iVar15 = SignedSaturate(local_660 + -0x14000000,0x20);
    SignedDoesSaturate(iVar15,0x20);
    if (0xffff < iVar15) {
      iVar15 = 0;
      psVar24 = (short *)((int)param_1 + 0x35e);
      psVar29 = (short *)((int)param_1 + (-0x7ffffe51 - (int)psVar28) * 2);
      do {
        psVar29 = psVar29 + 1;
        uVar20 = SignedSaturate((int)*(short *)((int)param_1 + 0x6da) * (int)*psVar29 * 2,0x20);
        SignedDoesSaturate(uVar20,0x20);
        uVar23 = uVar20 ^ uVar20 << 1;
        iVar21 = uVar20 << 1;
        if (((uVar23 == 0) || (LZCOUNT(uVar23) == 0)) && (uVar20 != 0)) {
          if ((int)uVar20 < 0) {
            iVar21 = 0;
          }
          else {
            iVar21 = 0x7fffffff;
          }
          iVar21 = SignedSaturate(iVar21 * 2,0x20);
          SignedDoesSaturate(iVar21,0x20);
        }
        uVar9 = SignedSaturate(iVar21 + 0x8000,0x20);
        SignedDoesSaturate(uVar9,0x20);
        uVar20 = SignedSaturate(iVar15 * 0x10000 + iVar14,0x20);
        SignedDoesSaturate(uVar20,0x20);
        iVar15 = (int)uVar20 >> 0x10;
        iVar21 = SignedSaturate((int)(short)((uint)uVar9 >> 0x10) * (int)(short)(uVar20 >> 0x10) * 2
                                ,0x20);
        SignedDoesSaturate(iVar21,0x20);
        iVar11 = SignedSaturate(iVar10 - (uVar20 & uVar25),0x20);
        SignedDoesSaturate(iVar11,0x20);
        iVar11 = SignedSaturate((iVar11 >> 0x10) * (int)psVar24[0x79] * 2,0x20);
        SignedDoesSaturate(iVar11,0x20);
        iVar21 = SignedSaturate(iVar21 + iVar11,0x20);
        SignedDoesSaturate(iVar21,0x20);
        uVar9 = SignedSaturate(iVar21 + 0x8000,0x20);
        SignedDoesSaturate(uVar9,0x20);
        psVar24 = psVar24 + 1;
        *psVar24 = (short)((uint)uVar9 >> 0x10);
      } while (psVar24 != (short *)((int)param_1 + 0x386));
      psVar29 = (short *)((-0x7ffffe51 - (int)psVar28) * 2 + 0x28 + (int)param_1);
      psVar28 = (short *)(param_1 + 0x16c);
      do {
        psVar29 = psVar29 + 1;
        uVar20 = SignedSaturate((int)*(short *)((int)param_1 + 0x6da) * (int)*psVar29 * 2,0x20);
        SignedDoesSaturate(uVar20,0x20);
        uVar23 = uVar20 ^ uVar20 << 1;
        iVar15 = uVar20 << 1;
        if (((uVar23 == 0) || (LZCOUNT(uVar23) == 0)) && (uVar20 != 0)) {
          if ((int)uVar20 < 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = 0x7fffffff;
          }
          iVar15 = SignedSaturate(iVar15 * 2,0x20);
          SignedDoesSaturate(iVar15,0x20);
        }
        uVar9 = SignedSaturate(iVar15 + 0x8000,0x20);
        SignedDoesSaturate(uVar9,0x20);
        psVar24 = psVar24 + 1;
        *psVar24 = (short)((uint)uVar9 >> 0x10);
      } while (psVar24 != psVar28);
      uVar20 = (uint)*(short *)(param_1 + 0x1bc);
      local_660 = (int)*(short *)(param_1 + 0x1b6) << 0x10;
      uVar23 = uVar20 << 0x10;
    }
    iVar15 = SignedSaturate(local_660 + -0x1c000000,0x20);
    SignedDoesSaturate(iVar15,0x20);
    if (iVar15 < 0x10000) {
      psVar29 = (short *)((int)&uStack_4f0 + 2);
      sVar32 = *(short *)((int)param_1 + 0x6f6);
      psVar28 = psVar29;
      uVar25 = uVar23;
      while( true ) {
        iVar15 = SignedSaturate(uVar25 - 0x7e0000,0x20);
        SignedDoesSaturate(iVar15,0x20);
        if (0xffff < iVar15) {
          uVar25 = SignedSaturate(uVar25 - 0x7f0000,0x20);
          SignedDoesSaturate(uVar25,0x20);
          uVar20 = (int)uVar25 >> 0x10;
          uVar25 = uVar25 & DAT_1401a6fc;
        }
        uVar9 = SignedSaturate(((int)sVar32 * (int)*(short *)(DAT_1401a6f0 + (uVar20 & 0x7f) * 2) +
                               0x4000) * 2,0x20);
        SignedDoesSaturate(uVar9,0x20);
        psVar28 = psVar28 + 1;
        *psVar28 = (short)((uint)uVar9 >> 0x10);
        iVar15 = SignedSaturate(uVar25 + uVar23,0x20);
        SignedDoesSaturate(iVar15,0x20);
        uVar20 = iVar15 >> 0x10;
        if (psVar28 == &local_29c) break;
        uVar25 = uVar20 << 0x10;
      }
      sVar32 = *(short *)((int)param_1 + 0x5d2);
      local_294 = *(undefined4 *)((int)param_1 + 0x5b6);
      sVar1 = *(short *)((int)param_1 + 0x5c2);
      local_290 = *(undefined4 *)((int)param_1 + 0x5ba);
      sVar2 = *(short *)(param_1 + 0x171);
      local_28c = *(undefined4 *)((int)param_1 + 0x5be);
      sVar3 = *(short *)((int)param_1 + 0x5c6);
      local_298 = *(undefined4 *)((int)param_1 + 0x5b2);
      sVar4 = *(short *)(param_1 + 0x173);
      sVar5 = *(short *)(param_1 + 0x172);
      sVar6 = *(short *)((int)param_1 + 0x5ce);
      sVar7 = *(short *)((int)param_1 + 0x5ca);
      sVar8 = *(short *)(param_1 + 0x174);
      psVar28 = (short *)&local_298;
      do {
        while( true ) {
          psVar29 = psVar29 + 1;
          iVar15 = SignedSaturate((int)*psVar29 * (int)sVar1 - (int)psVar28[7] * (int)sVar2,0x20);
          SignedDoesSaturate(iVar15,0x20);
          iVar15 = SignedSaturate(iVar15 - (int)psVar28[6] * (int)sVar3,0x20);
          SignedDoesSaturate(iVar15,0x20);
          iVar15 = SignedSaturate(iVar15 - (int)psVar28[5] * (int)sVar5,0x20);
          SignedDoesSaturate(iVar15,0x20);
          iVar15 = SignedSaturate(iVar15 - (int)psVar28[4] * (int)sVar7,0x20);
          SignedDoesSaturate(iVar15,0x20);
          iVar15 = SignedSaturate(iVar15 - (int)psVar28[3] * (int)sVar4,0x20);
          SignedDoesSaturate(iVar15,0x20);
          iVar15 = SignedSaturate(iVar15 - (int)psVar28[2] * (int)sVar6,0x20);
          SignedDoesSaturate(iVar15,0x20);
          psVar24 = psVar28 + 1;
          iVar15 = SignedSaturate(iVar15 - (int)*psVar24 * (int)sVar8,0x20);
          SignedDoesSaturate(iVar15,0x20);
          uVar20 = SignedSaturate(iVar15 - (int)*psVar28 * (int)sVar32,0x20);
          SignedDoesSaturate(uVar20,0x20);
          uVar23 = uVar20 ^ uVar20 << 1;
          if (((uVar23 == 0) || ((LZCOUNT(uVar23) & 0x1cU) == 0)) && (uVar20 != 0)) break;
          uVar9 = SignedSaturate(uVar20 * 0x10 + 0x8000,0x20);
          SignedDoesSaturate(uVar9,0x20);
          psVar28[8] = (short)((uint)uVar9 >> 0x10);
          psVar28 = psVar24;
          if (psVar29 == &local_29c) goto LAB_1401a830;
        }
        if ((int)uVar20 < 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = 0x7fffffff;
        }
        iVar15 = SignedSaturate(iVar15 * 2,0x20);
        SignedDoesSaturate(iVar15,0x20);
        uVar9 = SignedSaturate(iVar15 + 0x8000,0x20);
        SignedDoesSaturate(uVar9,0x20);
        psVar28[8] = (short)((uint)uVar9 >> 0x10);
        psVar28 = psVar24;
      } while (psVar29 != &local_29c);
LAB_1401a830:
      puVar19 = &local_28c;
      psVar28 = local_4ec;
      do {
        puVar19 = puVar19 + 1;
        psVar29 = psVar28 + 2;
        *(undefined4 *)psVar28 = *puVar19;
        psVar28 = psVar29;
      } while (psVar29 != &local_29c);
      local_29c = local_38;
      iVar15 = SignedSaturate(0x1400,0xf);
      SignedDoesSaturate(0x1400,0xf);
      iVar15 = SignedSaturate(local_660 + iVar15 * -0x10000,0x20);
      SignedDoesSaturate(iVar15,0x20);
      if (iVar15 < 0x10000) {
        *(undefined2 *)((int)param_1 + 0x6d6) = 0x7fff;
        puVar19 = &uStack_4f0;
        puVar27 = param_1 + 0xd8;
        do {
          puVar19 = puVar19 + 1;
          psVar28 = (short *)*puVar19;
          *puVar27 = psVar28;
          puVar27 = puVar27 + 1;
        } while (&uStack_2a0 != puVar19);
        *(short *)(param_1 + 0x16c) = local_38;
        uVar23 = (int)*(short *)(param_1 + 0x1bc) << 0x10;
      }
      else {
        iVar15 = SignedSaturate(0x1c000000 - local_660,0x20);
        SignedDoesSaturate(iVar15,0x20);
        if (iVar15 >> 0x10 == 0) {
          sVar32 = (short)((uint)iVar15 >> 0x10);
          iVar15 = 0;
        }
        else {
          iVar14 = (iVar15 >> 0x10) << 4;
          iVar15 = SignedSaturate(iVar14,0xf);
          SignedDoesSaturate(iVar14,0xf);
          sVar32 = (short)iVar15;
          iVar15 = iVar15 << 0x10;
        }
        *(short *)((int)param_1 + 0x6d6) = sVar32;
        iVar10 = SignedSaturate(DAT_1401abc8 - iVar15,0x20);
        SignedDoesSaturate(iVar10,0x20);
        iVar15 = SignedSaturate((iVar10 >> 0x10) * (int)*(short *)(param_1 + 0xd8) * 2,0x20);
        SignedDoesSaturate(iVar15,0x20);
        iVar14 = SignedSaturate((int)local_4ec[0] * (int)sVar32 * 2,0x20);
        SignedDoesSaturate(iVar14,0x20);
        iVar15 = SignedSaturate(iVar15 + iVar14,0x20);
        SignedDoesSaturate(iVar15,0x20);
        uVar9 = SignedSaturate(iVar15 + 0x8000,0x20);
        SignedDoesSaturate(uVar9,0x20);
        *(short *)(param_1 + 0xd8) = (short)((uint)uVar9 >> 0x10);
        psVar29 = (short *)(param_1 + 0xd8);
        puVar16 = (ushort *)(local_4ec + 1);
        do {
          psVar29 = psVar29 + 1;
          iVar15 = SignedSaturate((iVar10 >> 0x10) * (int)*psVar29 * 2,0x20);
          SignedDoesSaturate(iVar15,0x20);
          puVar17 = puVar16 + 1;
          psVar28 = (short *)(uint)*puVar16;
          iVar14 = SignedSaturate((int)*(short *)((int)param_1 + 0x6d6) * (int)(short)*puVar16 * 2,
                                  0x20);
          SignedDoesSaturate(iVar14,0x20);
          iVar15 = SignedSaturate(iVar15 + iVar14,0x20);
          SignedDoesSaturate(iVar15,0x20);
          uVar9 = SignedSaturate(iVar15 + 0x8000,0x20);
          SignedDoesSaturate(uVar9,0x20);
          *psVar29 = (short)((uint)uVar9 >> 0x10);
          puVar16 = puVar17;
        } while (puVar17 != &uStack_29a);
        uVar23 = (int)*(short *)(param_1 + 0x1bc) << 0x10;
      }
    }
    else {
      *(undefined2 *)((int)param_1 + 0x6d6) = 0;
    }
    iVar15 = SignedSaturate(uVar23 - 0x20000,0x20);
    SignedDoesSaturate(iVar15,0x20);
    if (0xffff < iVar15) {
      iVar15 = SignedSaturate(uVar23 - 0x60000,0x20);
      SignedDoesSaturate(iVar15,0x20);
      if (iVar15 < 0x10000) {
        iVar14 = SignedSaturate(uVar23 - 0x30000,0x20);
        SignedDoesSaturate(iVar14,0x20);
        iVar15 = 0x7fff;
        iVar14 = *(short *)(DAT_1401a6ec + (iVar14 >> 0x10) * 2) * 0x10000;
        psVar29 = (short *)((int)param_1 + 0x35e);
        do {
          psVar29 = psVar29 + 1;
          uVar9 = SignedSaturate((int)*psVar29 * (int)(short)iVar15 * 2,0x20);
          SignedDoesSaturate(uVar9,0x20);
          *psVar29 = (short)((uint)uVar9 >> 0x10);
          iVar15 = SignedSaturate(iVar15 * 0x10000 + iVar14,0x20);
          SignedDoesSaturate(iVar15,0x20);
          iVar15 = iVar15 >> 0x10;
        } while (psVar29 != (short *)((int)param_1 + 0x44e));
        psVar28 = (short *)0x60000;
        iVar10 = SignedSaturate(*(short *)(param_1 + 0x1bc) * 0x10000 + -0x60000,0x20);
        SignedDoesSaturate(iVar10,0x20);
        if (iVar10 < 0) {
          psVar28 = (short *)(param_1 + 0x16c);
          do {
            psVar29 = psVar29 + 1;
            uVar9 = SignedSaturate((int)*psVar29 * (int)(short)iVar15 * 2,0x20);
            SignedDoesSaturate(uVar9,0x20);
            *psVar29 = (short)((uint)uVar9 >> 0x10);
            iVar15 = SignedSaturate(iVar15 * 0x10000 + iVar14,0x20);
            SignedDoesSaturate(iVar15,0x20);
            iVar15 = iVar15 >> 0x10;
          } while (psVar29 != psVar28);
        }
        else {
          puVar19 = puVar26;
          do {
            puVar27 = puVar19 + 1;
            *puVar19 = 0;
            puVar19 = puVar27;
          } while (puVar27 != param_1 + 0x16c);
          *(undefined2 *)(param_1 + 0x16c) = 0;
        }
      }
      else {
        puVar19 = param_1 + 0xd8;
        do {
          puVar27 = puVar19 + 1;
          *puVar19 = 0;
          puVar19 = puVar27;
        } while (puVar27 != param_1 + 0x16c);
        *(undefined2 *)(param_1 + 0x16c) = 0;
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      puVar19 = param_1 + 0xd8;
      if (param_3 == (undefined4 *)((int)param_1 + 0x362)) {
        puVar27 = puVar19;
        do {
          puVar22 = (undefined4 *)((int)puVar27 + 2);
          puVar19 = (undefined4 *)((int)puVar19 + 2);
          *(undefined2 *)puVar19 = *(undefined2 *)puVar27;
          puVar27 = puVar22;
        } while (puVar22 != (undefined4 *)((int)param_1 + 0x4e2));
      }
      else {
        puVar27 = param_3;
        do {
          puVar22 = puVar27 + 1;
          *puVar27 = *puVar19;
          puVar27 = puVar22;
          puVar19 = puVar19 + 1;
        } while (puVar22 != param_3 + 0x60);
        *(undefined2 *)(param_3 + 0x60) = *(undefined2 *)(param_1 + 0x138);
      }
    }
    FUN_14019bc8(param_1,param_2,puVar30,0);
    if (param_4 != (undefined4 *)0x0) {
      if (param_4 == (undefined4 *)((int)param_1 + 0x452)) {
        param_1 = param_1 + 0x153;
        puVar27 = puVar26;
        puVar19 = puVar26;
        do {
          puVar22 = (undefined4 *)((int)puVar27 + 2);
          puVar19 = (undefined4 *)((int)puVar19 + 2);
          *(undefined2 *)puVar19 = *(undefined2 *)puVar27;
          puVar27 = puVar22;
        } while (param_1 != puVar22);
      }
      else {
        puVar19 = puVar26;
        puVar27 = param_4;
        do {
          puVar22 = puVar27 + 1;
          *puVar27 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar27 = puVar22;
        } while (puVar22 != param_4 + 0x3f);
      }
    }
    cVar33 = (int)(*DAT_1401a6e8 ^ local_34) < 0;
    if ((*DAT_1401a6e8 ^ local_34) == 0) {
      return;
    }
    FUN_1401cfd0();
    if (cVar33 != '\0') break;
    iVar15 = func_0x1429d280();
    uVar20 = iVar15 << 0xd;
    uVar25 = extraout_r3;
    uVar23 = uVar20;
  } while( true );
  puVar30 = (undefined4 *)&DAT_000003b0;
  puVar26 = extraout_r2;
  puVar19 = puVar30;
  if (extraout_r2 == (undefined4 *)0x3ae) {
    puVar31 = (undefined2 *)0x3ae;
    iVar15 = 0x3b0;
    while( true ) {
      puVar31 = puVar31 + 1;
      *puVar31 = *(undefined2 *)(iVar15 + -2);
      if (iVar15 == 0x49e) break;
      iVar15 = iVar15 + 2;
    }
  }
  else {
    do {
      puVar27 = puVar19 + 1;
      *puVar19 = *puVar26;
      puVar26 = puVar26 + 1;
      puVar19 = puVar27;
    } while (puVar27 != (undefined4 *)&DAT_000004a0);
  }
  if (_DAT_00000740 == 0) {
    iVar15 = (int)(short)(_DAT_00000742 + 1);
    if (8 < iVar15) {
      iVar15 = 9;
    }
    _DAT_00000742 = (short)iVar15;
    iVar15 = iVar15 << 0x10;
  }
  else {
    _DAT_00000744 = _DAT_00000740;
    _DAT_00000742 = 1;
    iVar15 = 0x10000;
  }
  _DAT_00000740 = 0;
  uVar20 = SignedSaturate(iVar15 + -0x10000,0x20);
  SignedDoesSaturate(uVar20,0x20);
  if (uVar20 >> 0x10 == 0) {
    uVar20 = SignedSaturate(_DAT_00000726 * 0x10000 - DAT_1401aff8,0x20);
    SignedDoesSaturate(uVar20,0x20);
    if (uVar20 >> 0x10 == 0) {
      sVar32 = 8;
      _DAT_0000074a = CONCAT22(_DAT_0000074c,8);
      _DAT_00000750 = DAT_1401b008;
      _DAT_00000754 = DAT_1401b004;
    }
    else {
      sVar32 = 0x78;
      _DAT_0000074a = CONCAT22(_DAT_0000074c,0x8c);
      _DAT_00000750 = DAT_1401b000;
      _DAT_00000754 = DAT_1401affc;
    }
    iVar15 = 0;
    psVar28 = (short *)0x3ae;
    do {
      psVar29 = psVar28 + 1;
      iVar14 = SignedSaturate((int)*(short *)(_DAT_00000750 + iVar15 * 2) * (int)*psVar29 * 2,0x20);
      SignedDoesSaturate(iVar14,0x20);
      iVar10 = SignedSaturate((int)*(short *)(_DAT_00000754 + iVar15 * 2) * (int)psVar28[0x79] * 2,
                              0x20);
      SignedDoesSaturate(iVar10,0x20);
      iVar14 = SignedSaturate(iVar14 + iVar10,0x20);
      SignedDoesSaturate(iVar14,0x20);
      uVar9 = SignedSaturate(iVar14 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      iVar15 = iVar15 + 1;
      *psVar29 = (short)((uint)uVar9 >> 0x10);
      psVar28 = psVar29;
    } while ((short)iVar15 < sVar32);
    if (_DAT_0000074a < 0x79) {
      _DAT_0000074a = 0;
    }
    else {
      uVar12 = SignedSaturate(_DAT_0000074a * 0x10000 + -0x780000,0x20);
      SignedDoesSaturate(uVar12,0x20);
      uVar9 = SignedSaturate(_DAT_0000074c * 0x10000 + 0x780000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      _DAT_0000074a = CONCAT22((short)((uint)uVar9 >> 0x10),(short)((uint)uVar12 >> 0x10));
    }
    puVar26 = puVar30;
    puVar19 = puVar30;
    if (extraout_r1 == (undefined4 *)&DAT_000003b2) {
      do {
        puVar27 = (undefined4 *)((int)puVar26 + 2);
        *(undefined2 *)((int)puVar19 + 2) = *(undefined2 *)puVar26;
        puVar26 = puVar27;
        puVar19 = (undefined4 *)((int)puVar19 + 2);
      } while (puVar27 != (undefined4 *)&DAT_000004a0);
      iVar15 = (int)_DAT_00000742 << 0x10;
    }
    else {
      puVar26 = extraout_r1;
      do {
        puVar27 = puVar26 + 1;
        *puVar26 = *puVar19;
        puVar26 = puVar27;
        puVar19 = puVar19 + 1;
      } while (puVar27 != extraout_r1 + 0x3c);
      iVar15 = (int)_DAT_00000742 << 0x10;
    }
  }
  iVar15 = SignedSaturate(iVar15 + -0x10000,0x20);
  SignedDoesSaturate(iVar15,0x20);
  if ((0xffff < iVar15) && (0 < _DAT_0000074a)) {
    iVar15 = (int)_DAT_0000074c;
    if (_DAT_0000074a < 0x79) {
      sVar32 = _DAT_0000074c + _DAT_0000074a;
    }
    else {
      sVar32 = _DAT_0000074c + 0x78;
    }
    psVar28 = (short *)0x3ae;
    do {
      psVar28 = psVar28 + 1;
      iVar14 = SignedSaturate((int)*(short *)(_DAT_00000750 + iVar15 * 2) * (int)*psVar28 * 2,0x20);
      SignedDoesSaturate(iVar14,0x20);
      iVar10 = SignedSaturate((int)*(short *)(_DAT_00000754 + iVar15 * 2) *
                              (int)*(short *)(iVar15 * 2 + 0x4a0) * 2,0x20);
      SignedDoesSaturate(iVar10,0x20);
      iVar14 = SignedSaturate(iVar14 + iVar10,0x20);
      SignedDoesSaturate(iVar14,0x20);
      uVar9 = SignedSaturate(iVar14 + 0x8000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      iVar15 = (int)(short)((short)iVar15 + 1);
      *psVar28 = (short)((uint)uVar9 >> 0x10);
    } while (iVar15 != sVar32);
    if (_DAT_0000074a < 0x79) {
      _DAT_0000074a = 0;
    }
    else {
      uVar12 = SignedSaturate(_DAT_0000074a * 0x10000 + -0x780000,0x20);
      SignedDoesSaturate(uVar12,0x20);
      uVar9 = SignedSaturate(_DAT_0000074c * 0x10000 + 0x780000,0x20);
      SignedDoesSaturate(uVar9,0x20);
      _DAT_0000074a = CONCAT22((short)((uint)uVar9 >> 0x10),(short)((uint)uVar12 >> 0x10));
    }
    puVar26 = puVar30;
    if (extraout_r1 == (undefined4 *)&DAT_000003b2) {
      do {
        puVar31 = (undefined2 *)((int)puVar26 + 2);
        *(undefined2 *)((int)puVar30 + 2) = *(undefined2 *)puVar26;
        if (puVar31 == (undefined2 *)&DAT_000004a0) break;
        puVar26 = puVar26 + 1;
        puVar30 = puVar30 + 1;
        *(undefined2 *)puVar30 = *puVar31;
      } while (puVar26 != (undefined4 *)&DAT_000004a0);
    }
    else {
      puVar26 = extraout_r1;
      do {
        puVar19 = puVar26 + 1;
        *puVar26 = *puVar30;
        puVar26 = puVar19;
        puVar30 = puVar30 + 1;
      } while (extraout_r1 + 0x3c != puVar19);
    }
  }
  FUN_14019bc8(0x50,extraout_r1,0x5c,1);
  return;
}


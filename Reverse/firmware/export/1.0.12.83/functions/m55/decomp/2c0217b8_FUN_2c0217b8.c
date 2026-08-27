/* FUN_2c0217b8 @ 0x2c0217b8 */

uint FUN_2c0217b8(short *param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int *piVar9;
  short *psVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  short sVar18;
  uint uVar19;
  short sVar25;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar26;
  int iVar27;
  int iVar28;
  short *psVar29;
  uint uVar30;
  int iVar31;
  short *psVar32;
  int iVar33;
  int iVar34;
  uint *puVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  short *psVar40;
  int iVar41;
  int iVar42;
  short *local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  short *local_3b8;
  short *local_3b4;
  short *local_3b0;
  short *local_3ac;
  int local_3a4;
  uint local_3a0;
  int local_39c;
  int local_398;
  uint local_394;
  int local_38c;
  int local_388;
  int local_384;
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  int local_370;
  short local_36c;
  short local_368;
  short local_360 [18];
  short local_33c [18];
  short local_318 [18];
  short local_2f4 [18];
  short local_2d0 [18];
  short local_2ac [32];
  short asStack_26c [36];
  short asStack_224 [36];
  short asStack_1dc [4];
  short local_1d4 [32];
  short asStack_194 [34];
  int aiStack_150 [36];
  int aiStack_c0 [4];
  uint local_b0;
  uint local_ac [32];
  int local_2c;
  short *psVar11;
  
  local_2c = *DAT_2c021ab0;
  iVar6 = (int)param_1[0x20];
  sVar2 = param_1[0x23];
  uVar30 = iVar6 * iVar6;
  aiStack_150[4] = sVar2 * iVar6;
  psVar17 = param_1 + 0x24;
  do {
    sVar25 = psVar17[-3];
    uVar30 = SignedSaturate(uVar30 + (int)sVar25 * (int)sVar25,0x20);
    SignedDoesSaturate(uVar30,0x20);
    psVar29 = psVar17 + 1;
    aiStack_150[4] = SignedSaturate(aiStack_150[4] + (int)*psVar17 * (int)sVar25,0x20);
    SignedDoesSaturate(aiStack_150[4],0x20);
    psVar17 = psVar29;
  } while (psVar29 != param_1 + 0x41);
  uVar19 = uVar30 ^ uVar30 << 1;
  local_b0 = uVar30;
  if (uVar19 == 0) {
    asStack_194[3] = 0;
    uVar19 = uVar30;
  }
  else {
    iVar6 = LZCOUNT(uVar19);
    asStack_194[3] = (short)iVar6;
    uVar19 = uVar30 << iVar6;
  }
  asStack_1dc[3] = (short)(uVar19 >> 0x10);
  uVar19 = aiStack_150[4] ^ aiStack_150[4] << 1;
  if (uVar19 == 0) {
    asStack_224[3] = 0;
    sVar25 = (short)((uint)aiStack_150[4] >> 0x10);
  }
  else {
    iVar6 = LZCOUNT(uVar19);
    asStack_224[3] = (short)iVar6;
    sVar25 = (short)((uint)(aiStack_150[4] << iVar6) >> 0x10);
  }
  uVar3 = SignedSaturate((int)sVar25 * (int)sVar25 * 2,0x20);
  SignedDoesSaturate(uVar3,0x20);
  sVar25 = (short)((uint)uVar3 >> 0x10);
  asStack_26c[3] = sVar25;
  if (aiStack_150[4] < 0) {
    asStack_26c[3] = SignedSaturate(-sVar25,0x10);
    SignedSaturate(-(sVar25 >> 0xf),0x10);
  }
  psVar32 = asStack_224 + 4;
  psVar17 = asStack_1dc + 3;
  psVar40 = asStack_194 + 4;
  puVar36 = (uint *)(aiStack_150 + 4);
  puVar35 = (uint *)(aiStack_c0 + 4);
  local_3d4 = asStack_26c + 3;
  psVar29 = param_1 + 0x20;
  do {
    psVar1 = psVar29 + -1;
    iVar6 = (int)*psVar1;
    uVar19 = sVar2 * iVar6;
    psVar7 = psVar29;
    psVar10 = param_1 + 0x24;
    do {
      psVar11 = psVar10 + 1;
      uVar19 = SignedSaturate(uVar19 + (int)*psVar10 * (int)*psVar7,0x20);
      SignedDoesSaturate(uVar19,0x20);
      psVar7 = psVar7 + 1;
      psVar10 = psVar11;
    } while (psVar11 != param_1 + 0x41);
    sVar25 = psVar29[0x1d];
    puVar36 = puVar36 + 1;
    *puVar36 = uVar19;
    iVar37 = SignedSaturate(uVar30 - (int)sVar25 * (int)sVar25,0x20);
    SignedDoesSaturate(iVar37,0x20);
    uVar30 = SignedSaturate(iVar37 + iVar6 * iVar6,0x20);
    SignedDoesSaturate(uVar30,0x20);
    uVar20 = uVar30 ^ uVar30 << 1;
    puVar35 = puVar35 + 1;
    *puVar35 = uVar30;
    if (uVar20 == 0) {
      *psVar40 = 0;
      uVar20 = uVar30;
    }
    else {
      iVar6 = LZCOUNT(uVar20);
      *psVar40 = (short)iVar6;
      uVar20 = uVar30 << iVar6;
    }
    psVar17 = psVar17 + 1;
    *psVar17 = (short)(uVar20 >> 0x10);
    uVar20 = uVar19 ^ uVar19 << 1;
    if (uVar20 == 0) {
      *psVar32 = 0;
      sVar25 = (short)(uVar19 >> 0x10);
    }
    else {
      iVar6 = LZCOUNT(uVar20);
      *psVar32 = (short)iVar6;
      sVar25 = (short)((uVar19 << iVar6) >> 0x10);
    }
    uVar3 = SignedSaturate((int)sVar25 * (int)sVar25 * 2,0x20);
    SignedDoesSaturate(uVar3,0x20);
    sVar25 = (short)((uint)uVar3 >> 0x10);
    sVar18 = sVar25;
    if ((int)uVar19 < 0) {
      sVar18 = SignedSaturate(-sVar25,0x10);
      SignedSaturate(-(sVar25 >> 0xf),0x10);
    }
    psVar32 = psVar32 + 1;
    psVar40 = psVar40 + 1;
    local_3d4 = local_3d4 + 1;
    *local_3d4 = sVar18;
    psVar29 = psVar1;
  } while (psVar1 != param_1);
  uVar30 = 0x30000;
  iVar6 = SignedSaturate(0xffe10000,0x20);
  SignedDoesSaturate(iVar6,0x20);
  if (iVar6 < 0) {
    iVar37 = 0;
    iVar6 = SignedSaturate(0xfff90000,0x20);
    SignedDoesSaturate(iVar6,0x20);
    if (-1 < iVar6) goto LAB_2c02262a;
    iVar6 = 3;
    local_3c8 = 0;
    do {
      local_3d4 = (short *)local_3c8;
      if (0 < aiStack_150[iVar6 + 2]) {
        iVar41 = SignedSaturate((int)asStack_1dc[iVar6 + -0x80000000] *
                                (int)asStack_26c[iVar6 + -0x7fffffff] * 2,0x20);
        SignedDoesSaturate(iVar41,0x20);
        local_3d0 = SignedSaturate((int)asStack_26c[iVar6 + -0x80000000] *
                                   (int)asStack_1dc[iVar6 + -0x7fffffff] * 2,0x20);
        SignedDoesSaturate(local_3d0,0x20);
        iVar22 = SignedSaturate(asStack_224[iVar6 + -0x7fffffff] * 0x10000 +
                                asStack_224[iVar6 + -0x80000000] * -0x10000,0x20);
        SignedDoesSaturate(iVar22,0x20);
        iVar23 = 0;
        if (iVar22 >> 0x10 != 0) {
          iVar22 = (iVar22 >> 0x10) << 1;
          iVar23 = SignedSaturate(iVar22,0xf);
          SignedDoesSaturate(iVar22,0xf);
          iVar23 = iVar23 << 0x10;
        }
        uVar19 = SignedSaturate(iVar23 + asStack_194[iVar6 + -0x80000000] * 0x10000,0x20);
        SignedDoesSaturate(uVar19,0x20);
        iVar22 = SignedSaturate((uVar19 & 0xffff0000) + asStack_194[iVar6 + -0x7fffffff] * -0x10000,
                                0x20);
        SignedDoesSaturate(iVar22,0x20);
        uVar19 = iVar22 >> 0x10;
        if (iVar22 < 0) {
          uVar20 = 0xffffffc1;
          if (-0x3f < (int)uVar19) {
            uVar20 = uVar19;
          }
          local_3d0 = local_3d0 >> (-uVar20 & 0xff);
        }
        else {
          if (0x3e < (int)uVar19) {
            uVar19 = 0x3f;
          }
          iVar41 = iVar41 >> (uVar19 & 0xff);
        }
        iVar41 = SignedSaturate(iVar41 - local_3d0,0x20);
        SignedDoesSaturate(iVar41,0x20);
        if (0 < iVar41) {
          iVar41 = SignedSaturate((int)asStack_1dc[iVar6 + -0x7ffffffe] *
                                  (int)asStack_26c[iVar6 + -0x7fffffff] * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate((int)asStack_26c[iVar6 + -0x7ffffffe] *
                                  (int)asStack_1dc[iVar6 + -0x7fffffff] * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar23 = SignedSaturate(asStack_224[iVar6 + -0x7fffffff] * 0x10000 +
                                  asStack_224[iVar6 + -0x7ffffffe] * -0x10000,0x20);
          SignedDoesSaturate(iVar23,0x20);
          iVar21 = 0;
          if (iVar23 >> 0x10 != 0) {
            iVar23 = (iVar23 >> 0x10) << 1;
            iVar21 = SignedSaturate(iVar23,0xf);
            SignedDoesSaturate(iVar23,0xf);
            iVar21 = iVar21 << 0x10;
          }
          uVar19 = SignedSaturate(iVar21 + asStack_194[iVar6 + -0x7ffffffe] * 0x10000,0x20);
          SignedDoesSaturate(uVar19,0x20);
          iVar23 = SignedSaturate((uVar19 & 0xffff0000) +
                                  asStack_194[iVar6 + -0x7fffffff] * -0x10000,0x20);
          SignedDoesSaturate(iVar23,0x20);
          uVar19 = iVar23 >> 0x10;
          if (iVar23 < 0) {
            if ((int)uVar19 < -0x3f) {
              uVar19 = 0xffffffc1;
            }
            iVar22 = iVar22 >> (-uVar19 & 0xff);
          }
          else {
            if (0x3e < (int)uVar19) {
              uVar19 = 0x3f;
            }
            iVar41 = iVar41 >> (uVar19 & 0xff);
          }
          iVar41 = SignedSaturate(iVar41 - iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
          if (0 < iVar41) {
            local_2ac[local_3c8] = (short)iVar6;
            iVar6 = SignedSaturate(iVar37 + 0x10000,0x20);
            SignedDoesSaturate(iVar6,0x20);
            local_3d4 = (short *)(iVar6 >> 0x10);
          }
        }
      }
      uVar30 = SignedSaturate(uVar30 + 0x10000,0x20);
      SignedDoesSaturate(uVar30,0x20);
      iVar6 = (int)uVar30 >> 0x10;
      uVar30 = uVar30 & 0xffff0000;
      iVar37 = SignedSaturate(uVar30 - 0x220000,0x20);
      SignedDoesSaturate(iVar37,0x20);
      if (-1 < iVar37) break;
      iVar37 = (int)local_3d4 * 0x10000;
      local_3c8 = (int)local_3d4;
      iVar41 = SignedSaturate(iVar37 + -0x70000,0x20);
      SignedDoesSaturate(iVar41,0x20);
    } while (iVar41 < 0);
    if (local_3d4 == (short *)0x0) goto LAB_2c02262a;
LAB_2c021abc:
    uVar30 = SignedSaturate((int)local_3d4 * 0x10000 + -0x10000,0x20);
    SignedDoesSaturate(uVar30,0x20);
    if (uVar30 >> 0x10 == 0) {
      iVar6 = SignedSaturate(local_2ac[0] * 0x10000 + 0x10000,0x20);
      SignedDoesSaturate(iVar6,0x20);
      iVar6 = (iVar6 >> 0x10) << 3;
      uVar3 = SignedSaturate(iVar6,0xf);
      SignedDoesSaturate(iVar6,0xf);
      local_3a0 = (int)(short)uVar3;
    }
    else {
      if ((int)local_3d4 < 1) {
        iVar6 = 0;
        local_3c8 = 1;
        local_3d0 = DAT_2c022ee4;
        local_3cc = 0;
        local_37c = 0;
      }
      else {
        iVar37 = 0;
        local_398 = 1;
        local_394 = 0;
        local_3a0 = DAT_2c021b10;
        local_378 = 0;
        local_39c = 0;
        local_38c = 0;
        local_3b8 = local_33c;
        local_3b0 = local_360;
        local_3ac = local_2ac;
        do {
          iVar33 = (int)*local_3ac;
          iVar6 = SignedSaturate(aiStack_150[iVar33 + 3] + aiStack_150[iVar33 + 1],0x20);
          SignedDoesSaturate(iVar6,0x20);
          iVar26 = aiStack_150[iVar33 + 2];
          iVar41 = SignedSaturate((iVar6 >> 1) - iVar26,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar27 = iVar41 >> 0x10;
          iVar6 = SignedSaturate(iVar27 * 0x8000,0x20);
          SignedDoesSaturate(iVar6,0x20);
          uVar3 = SignedSaturate((iVar41 >> 1) - iVar6,0x20);
          SignedDoesSaturate(uVar3,0x20);
          iVar13 = (int)(short)uVar3;
          iVar41 = SignedSaturate(aiStack_150[iVar33 + 3] - aiStack_150[iVar33 + 1],0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar24 = iVar41 >> 0x11;
          iVar6 = SignedSaturate(iVar24 * 0x8000,0x20);
          SignedDoesSaturate(iVar6,0x20);
          uVar3 = SignedSaturate((iVar41 >> 2) - iVar6,0x20);
          SignedDoesSaturate(uVar3,0x20);
          iVar14 = (int)(short)uVar3;
          iVar42 = (int)asStack_224[iVar33 + 1];
          iVar15 = aiStack_c0[iVar33 + 2];
          iVar28 = (int)asStack_26c[iVar33 + 1];
          iVar21 = (int)asStack_194[iVar33 + 1];
          iVar31 = (int)asStack_1dc[iVar33 + 1];
          iVar6 = SignedSaturate((int)asStack_1dc[iVar33] * (int)asStack_26c[iVar33 + 2] * 2,0x20);
          SignedDoesSaturate(iVar6,0x20);
          iVar41 = SignedSaturate((int)asStack_1dc[iVar33 + 2] * (int)asStack_26c[iVar33] * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(asStack_224[iVar33 + 2] * 0x10000 + asStack_224[iVar33] * -0x10000
                                  ,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar23 = 0;
          if (iVar22 >> 0x10 != 0) {
            iVar22 = (iVar22 >> 0x10) << 1;
            iVar23 = SignedSaturate(iVar22,0xf);
            SignedDoesSaturate(iVar22,0xf);
            iVar23 = iVar23 << 0x10;
          }
          uVar30 = SignedSaturate(iVar23 + asStack_194[iVar33] * 0x10000,0x20);
          SignedDoesSaturate(uVar30,0x20);
          iVar22 = SignedSaturate((uVar30 & 0xffff0000) + asStack_194[iVar33 + 2] * -0x10000,0x20);
          SignedDoesSaturate(iVar22,0x20);
          uVar30 = iVar22 >> 0x10;
          if (iVar22 < 0) {
            uVar19 = 0xffffffc1;
            if (-0x3f < (int)uVar30) {
              uVar19 = uVar30;
            }
            iVar6 = SignedSaturate(iVar6 - (iVar41 >> (-uVar19 & 0xff)),0x20);
            SignedDoesSaturate(iVar6,0x20);
            if (0 < iVar6) goto LAB_2c021b2c;
LAB_2c022188:
            iVar23 = SignedSaturate(aiStack_c0[iVar33 + 1] - iVar15,0x20);
            SignedDoesSaturate(iVar23,0x20);
            iVar23 = iVar23 >> 3;
            iVar6 = SignedSaturate(iVar27 * *DAT_2c022510 * 2,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar41 = SignedSaturate(iVar13 * *DAT_2c022510 * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar41 = SignedSaturate((iVar41 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar6 = SignedSaturate(iVar6 + iVar41,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar41 = SignedSaturate(iVar24 * *DAT_2c022514 * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(iVar14 * *DAT_2c022514 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar6 = SignedSaturate(iVar6 - iVar41,0x20);
            SignedDoesSaturate(iVar6,0x20);
            uVar30 = SignedSaturate(iVar6 + iVar26,0x20);
            SignedDoesSaturate(uVar30,0x20);
            uVar19 = SignedSaturate(iVar15 + iVar23,0x20);
            SignedDoesSaturate(uVar19,0x20);
            uVar20 = uVar30 ^ uVar30 << 1;
            if (uVar20 == 0) {
              iVar6 = 0;
              local_374 = 0;
            }
            else {
              local_374 = LZCOUNT(uVar20);
              uVar30 = uVar30 << local_374;
              iVar6 = local_374 << 0x10;
            }
            sVar2 = (short)(uVar30 >> 0x10);
            iVar41 = SignedSaturate((int)sVar2 * (int)sVar2 * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate((iVar41 >> 0x10) * iVar31 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            uVar30 = uVar19 ^ uVar19 << 1;
            if (uVar30 == 0) {
              iVar15 = 0;
              local_388 = 0;
              uVar30 = uVar19;
            }
            else {
              local_388 = LZCOUNT(uVar30);
              iVar15 = local_388 << 0x10;
              uVar30 = uVar19 << local_388;
            }
            iVar39 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
            SignedDoesSaturate(iVar39,0x20);
            iVar34 = iVar42 * 0x10000;
            iVar6 = SignedSaturate(iVar6 + iVar42 * -0x10000,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar16 = 0;
            if (iVar6 >> 0x10 != 0) {
              iVar6 = (iVar6 >> 0x10) << 1;
              iVar16 = SignedSaturate(iVar6,0xf);
              SignedDoesSaturate(iVar6,0xf);
              iVar16 = iVar16 << 0x10;
            }
            iVar8 = iVar21 * 0x10000;
            uVar20 = SignedSaturate(iVar16 + iVar8,0x20);
            SignedDoesSaturate(uVar20,0x20);
            iVar6 = SignedSaturate((uVar20 & 0xffff0000) - iVar15,0x20);
            SignedDoesSaturate(iVar6,0x20);
            uVar20 = iVar6 >> 0x10;
            if (iVar6 < 0) {
              uVar38 = 0xffffffc1;
              if (-0x3f < (int)uVar20) {
                uVar38 = uVar20;
              }
              iVar39 = iVar39 >> (-uVar38 & 0xff);
            }
            else {
              if (0x3e < (int)uVar20) {
                uVar20 = 0x3f;
              }
              iVar22 = iVar22 >> (uVar20 & 0xff);
            }
            iVar6 = SignedSaturate(iVar22 - iVar39,0x20);
            SignedDoesSaturate(iVar6,0x20);
            if (iVar6 < 1) {
              iVar6 = 0;
            }
            else {
              local_36c = (short)((uint)iVar41 >> 0x10);
              iVar28 = (int)local_36c;
              local_370._0_2_ = (short)(uVar30 >> 0x10);
              iVar31 = (int)(short)local_370;
              uVar3 = SignedSaturate(0x10000,0x20);
              SignedDoesSaturate(uVar3,0x20);
              sVar25 = (short)((uint)uVar3 >> 0x10);
              sVar2 = SignedSaturate(-sVar25,0x10);
              SignedSaturate(-(sVar25 >> 0xf),0x10);
              iVar34 = local_374 << 0x10;
              iVar6 = (int)sVar2;
              iVar8 = local_388 << 0x10;
              iVar21 = local_388;
              iVar42 = local_374;
            }
            iVar41 = SignedSaturate(iVar27 * DAT_2c022510[1] * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(DAT_2c022510[1] * iVar13 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(iVar24 * DAT_2c022514[1] * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar15 = SignedSaturate(DAT_2c022514[1] * iVar14 * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            iVar15 = SignedSaturate((iVar15 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            iVar22 = SignedSaturate(iVar22 + iVar15,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 - iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar30 = SignedSaturate(iVar41 + iVar26,0x20);
            SignedDoesSaturate(uVar30,0x20);
            uVar19 = SignedSaturate(uVar19 + iVar23,0x20);
            SignedDoesSaturate(uVar19,0x20);
            uVar20 = uVar30 ^ uVar30 << 1;
            if (uVar20 == 0) {
              iVar41 = 0;
              local_370 = 0;
            }
            else {
              local_370 = LZCOUNT(uVar20);
              uVar30 = uVar30 << local_370;
              iVar41 = local_370 << 0x10;
            }
            sVar2 = (short)(uVar30 >> 0x10);
            iVar22 = SignedSaturate((int)sVar2 * (int)sVar2 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar15 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            uVar30 = uVar19 ^ uVar19 << 1;
            if (uVar30 == 0) {
              iVar39 = 0;
              local_374 = 0;
              uVar30 = uVar19;
            }
            else {
              local_374 = LZCOUNT(uVar30);
              iVar39 = local_374 << 0x10;
              uVar30 = uVar19 << local_374;
            }
            local_3a4 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
            SignedDoesSaturate(local_3a4,0x20);
            iVar41 = SignedSaturate(iVar41 - iVar34,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar16 = 0;
            if (iVar41 >> 0x10 != 0) {
              iVar41 = (iVar41 >> 0x10) << 1;
              iVar16 = SignedSaturate(iVar41,0xf);
              SignedDoesSaturate(iVar41,0xf);
              iVar16 = iVar16 << 0x10;
            }
            uVar20 = SignedSaturate(iVar16 + iVar8,0x20);
            SignedDoesSaturate(uVar20,0x20);
            iVar41 = SignedSaturate((uVar20 & 0xffff0000) - iVar39,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar20 = iVar41 >> 0x10;
            if (iVar41 < 0) {
              uVar38 = 0xffffffc1;
              if (-0x3f < (int)uVar20) {
                uVar38 = uVar20;
              }
              local_3a4 = local_3a4 >> (-uVar38 & 0xff);
            }
            else {
              if (0x3e < (int)uVar20) {
                uVar20 = 0x3f;
              }
              iVar15 = iVar15 >> (uVar20 & 0xff);
            }
            iVar41 = SignedSaturate(iVar15 - local_3a4,0x20);
            SignedDoesSaturate(iVar41,0x20);
            if (0 < iVar41) {
              local_368 = (short)((uint)iVar22 >> 0x10);
              iVar28 = (int)local_368;
              local_36c = (short)(uVar30 >> 0x10);
              iVar31 = (int)local_36c;
              uVar3 = SignedSaturate(0x20000,0x20);
              SignedDoesSaturate(uVar3,0x20);
              iVar34 = local_370 << 0x10;
              sVar25 = (short)((uint)uVar3 >> 0x10);
              sVar2 = SignedSaturate(-sVar25,0x10);
              SignedSaturate(-(sVar25 >> 0xf),0x10);
              iVar8 = local_374 << 0x10;
              iVar6 = (int)sVar2;
              iVar21 = local_374;
              iVar42 = local_370;
            }
            iVar41 = SignedSaturate(iVar27 * DAT_2c022510[2] * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(DAT_2c022510[2] * iVar13 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(iVar24 * DAT_2c022514[2] * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar15 = SignedSaturate(DAT_2c022514[2] * iVar14 * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            iVar15 = SignedSaturate((iVar15 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            iVar22 = SignedSaturate(iVar22 + iVar15,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 - iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar30 = SignedSaturate(iVar41 + iVar26,0x20);
            SignedDoesSaturate(uVar30,0x20);
            uVar19 = SignedSaturate(uVar19 + iVar23,0x20);
            SignedDoesSaturate(uVar19,0x20);
            uVar20 = uVar30 ^ uVar30 << 1;
            if (uVar20 == 0) {
              iVar41 = 0;
              local_370 = 0;
            }
            else {
              local_370 = LZCOUNT(uVar20);
              uVar30 = uVar30 << local_370;
              iVar41 = local_370 << 0x10;
            }
            sVar2 = (short)(uVar30 >> 0x10);
            iVar22 = SignedSaturate((int)sVar2 * (int)sVar2 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            local_3a4 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
            SignedDoesSaturate(local_3a4,0x20);
            uVar30 = uVar19 ^ uVar19 << 1;
            if (uVar30 == 0) {
              iVar15 = 0;
              local_374 = 0;
              uVar30 = uVar19;
            }
            else {
              local_374 = LZCOUNT(uVar30);
              iVar15 = local_374 << 0x10;
              uVar30 = uVar19 << local_374;
            }
            iVar39 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
            SignedDoesSaturate(iVar39,0x20);
            iVar41 = SignedSaturate(iVar41 - iVar34,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar16 = 0;
            if (iVar41 >> 0x10 != 0) {
              iVar41 = (iVar41 >> 0x10) << 1;
              iVar16 = SignedSaturate(iVar41,0xf);
              SignedDoesSaturate(iVar41,0xf);
              iVar16 = iVar16 << 0x10;
            }
            uVar20 = SignedSaturate(iVar16 + iVar8,0x20);
            SignedDoesSaturate(uVar20,0x20);
            iVar41 = SignedSaturate((uVar20 & 0xffff0000) - iVar15,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar20 = iVar41 >> 0x10;
            if (iVar41 < 0) {
              uVar38 = 0xffffffc1;
              if (-0x3f < (int)uVar20) {
                uVar38 = uVar20;
              }
              iVar39 = iVar39 >> (-uVar38 & 0xff);
            }
            else {
              if (0x3e < (int)uVar20) {
                uVar20 = 0x3f;
              }
              local_3a4 = local_3a4 >> (uVar20 & 0xff);
            }
            iVar41 = SignedSaturate(local_3a4 - iVar39,0x20);
            SignedDoesSaturate(iVar41,0x20);
            if (0 < iVar41) {
              local_368 = (short)((uint)iVar22 >> 0x10);
              iVar28 = (int)local_368;
              local_36c = (short)(uVar30 >> 0x10);
              iVar31 = (int)local_36c;
              uVar3 = SignedSaturate(0x30000,0x20);
              SignedDoesSaturate(uVar3,0x20);
              iVar34 = local_370 << 0x10;
              sVar25 = (short)((uint)uVar3 >> 0x10);
              sVar2 = SignedSaturate(-sVar25,0x10);
              SignedSaturate(-(sVar25 >> 0xf),0x10);
              iVar8 = local_374 << 0x10;
              iVar6 = (int)sVar2;
              iVar21 = local_374;
              iVar42 = local_370;
            }
            iVar41 = SignedSaturate(DAT_2c022510[3] * iVar27 * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(DAT_2c022510[3] * iVar13 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(*(short *)(DAT_2c02288c + 6) * iVar24 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar13 = SignedSaturate(*(short *)(DAT_2c02288c + 6) * iVar14 * 2,0x20);
            SignedDoesSaturate(iVar13,0x20);
            iVar13 = SignedSaturate((iVar13 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar13,0x20);
            iVar22 = SignedSaturate(iVar22 + iVar13,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 - iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar30 = SignedSaturate(iVar41 + iVar26,0x20);
            SignedDoesSaturate(uVar30,0x20);
            uVar19 = SignedSaturate(uVar19 + iVar23,0x20);
            SignedDoesSaturate(uVar19,0x20);
            uVar20 = uVar30 ^ uVar30 << 1;
            if (uVar20 == 0) {
              iVar41 = 0;
              local_3a4 = 0;
            }
            else {
              local_3a4 = LZCOUNT(uVar20);
              uVar30 = uVar30 << local_3a4;
              iVar41 = local_3a4 << 0x10;
            }
            sVar2 = (short)(uVar30 >> 0x10);
            iVar22 = SignedSaturate((int)sVar2 * (int)sVar2 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            local_3c0 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
            SignedDoesSaturate(local_3c0,0x20);
            uVar30 = uVar19 ^ uVar19 << 1;
            if (uVar30 == 0) {
              iVar23 = 0;
              local_3bc = 0;
            }
            else {
              local_3bc = LZCOUNT(uVar30);
              uVar19 = uVar19 << local_3bc;
              iVar23 = local_3bc << 0x10;
            }
            local_3d0 = SignedSaturate(((int)uVar19 >> 0x10) * iVar28 * 2,0x20);
            SignedDoesSaturate(local_3d0,0x20);
            iVar13 = SignedSaturate(iVar41 - iVar34,0x20);
            SignedDoesSaturate(iVar13,0x20);
            iVar14 = 0;
            if (iVar13 >> 0x10 != 0) {
              iVar13 = (iVar13 >> 0x10) << 1;
              iVar14 = SignedSaturate(iVar13,0xf);
              SignedDoesSaturate(iVar13,0xf);
              iVar14 = iVar14 << 0x10;
            }
            uVar30 = SignedSaturate(iVar14 + iVar8,0x20);
            SignedDoesSaturate(uVar30,0x20);
            iVar13 = SignedSaturate((uVar30 & 0xffff0000) - iVar23,0x20);
            SignedDoesSaturate(iVar13,0x20);
            uVar30 = iVar13 >> 0x10;
            if (iVar13 < 0) {
              uVar20 = 0xffffffc1;
              if (-0x3f < (int)uVar30) {
                uVar20 = uVar30;
              }
              local_3d0 = local_3d0 >> (-uVar20 & 0xff);
            }
            else {
              if (0x3e < (int)uVar30) {
                uVar30 = 0x3f;
              }
              local_3c0 = local_3c0 >> (uVar30 & 0xff);
            }
            iVar13 = SignedSaturate(local_3c0 - local_3d0,0x20);
            SignedDoesSaturate(iVar13,0x20);
            local_3c8 = iVar31;
            local_3c4 = iVar28;
            if (0 < iVar13) {
              iVar28 = (int)(short)((uint)iVar22 >> 0x10);
              iVar31 = (int)(short)(uVar19 >> 0x10);
              uVar3 = SignedSaturate(0x40000,0x20);
              SignedDoesSaturate(uVar3,0x20);
              sVar25 = (short)((uint)uVar3 >> 0x10);
              sVar2 = SignedSaturate(-sVar25,0x10);
              SignedSaturate(-(sVar25 >> 0xf),0x10);
              iVar6 = (int)sVar2;
              iVar8 = iVar23;
              iVar34 = iVar41;
              iVar21 = local_3bc;
              iVar42 = local_3a4;
              local_3c8 = (int)uVar19 >> 0x10;
              local_3c4 = iVar22 >> 0x10;
            }
          }
          else {
            if (0x3e < (int)uVar30) {
              uVar30 = 0x3f;
            }
            iVar6 = SignedSaturate((iVar6 >> (uVar30 & 0xff)) - iVar41,0x20);
            SignedDoesSaturate(iVar6,0x20);
            if (iVar6 < 1) goto LAB_2c022188;
LAB_2c021b2c:
            iVar23 = SignedSaturate(aiStack_c0[iVar33 + 3] - iVar15,0x20);
            SignedDoesSaturate(iVar23,0x20);
            iVar23 = iVar23 >> 3;
            iVar6 = SignedSaturate(iVar27 * *DAT_2c021eb8 * 2,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar41 = SignedSaturate(iVar13 * *DAT_2c021eb8 * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar41 = SignedSaturate((iVar41 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar6 = SignedSaturate(iVar6 + iVar41,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar41 = SignedSaturate(iVar24 * *DAT_2c021ebc * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(iVar14 * *DAT_2c021ebc * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar6 = SignedSaturate(iVar6 + iVar41,0x20);
            SignedDoesSaturate(iVar6,0x20);
            uVar30 = SignedSaturate(iVar6 + iVar26,0x20);
            SignedDoesSaturate(uVar30,0x20);
            uVar19 = SignedSaturate(iVar15 + iVar23,0x20);
            SignedDoesSaturate(uVar19,0x20);
            uVar20 = uVar30 ^ uVar30 << 1;
            if (uVar20 == 0) {
              iVar6 = 0;
              local_388 = 0;
            }
            else {
              local_388 = LZCOUNT(uVar20);
              uVar30 = uVar30 << local_388;
              iVar6 = local_388 << 0x10;
            }
            sVar2 = (short)(uVar30 >> 0x10);
            iVar41 = SignedSaturate((int)sVar2 * (int)sVar2 * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate((iVar41 >> 0x10) * iVar31 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            uVar30 = uVar19 ^ uVar19 << 1;
            if (uVar30 == 0) {
              iVar15 = 0;
              local_3bc = 0;
              uVar30 = uVar19;
            }
            else {
              local_3bc = LZCOUNT(uVar30);
              iVar15 = local_3bc << 0x10;
              uVar30 = uVar19 << local_3bc;
            }
            iVar39 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
            SignedDoesSaturate(iVar39,0x20);
            iVar34 = iVar42 * 0x10000;
            iVar6 = SignedSaturate(iVar6 + iVar42 * -0x10000,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar16 = 0;
            if (iVar6 >> 0x10 != 0) {
              iVar6 = (iVar6 >> 0x10) << 1;
              iVar16 = SignedSaturate(iVar6,0xf);
              SignedDoesSaturate(iVar6,0xf);
              iVar16 = iVar16 << 0x10;
            }
            iVar8 = iVar21 * 0x10000;
            uVar20 = SignedSaturate(iVar16 + iVar8,0x20);
            SignedDoesSaturate(uVar20,0x20);
            iVar6 = SignedSaturate((uVar20 & 0xffff0000) - iVar15,0x20);
            SignedDoesSaturate(iVar6,0x20);
            uVar20 = iVar6 >> 0x10;
            if (iVar6 < 0) {
              uVar38 = 0xffffffc1;
              if (-0x3f < (int)uVar20) {
                uVar38 = uVar20;
              }
              iVar39 = iVar39 >> (-uVar38 & 0xff);
            }
            else {
              if (0x3e < (int)uVar20) {
                uVar20 = 0x3f;
              }
              iVar22 = iVar22 >> (uVar20 & 0xff);
            }
            iVar6 = SignedSaturate(iVar22 - iVar39,0x20);
            SignedDoesSaturate(iVar6,0x20);
            if (iVar6 < 1) {
              iVar6 = 0;
            }
            else {
              iVar31 = (int)(short)(uVar30 >> 0x10);
              local_374._0_2_ = (short)((uint)iVar41 >> 0x10);
              iVar28 = (int)(short)local_374;
              iVar6 = SignedSaturate(0x10000,0x20);
              SignedDoesSaturate(iVar6,0x20);
              iVar6 = iVar6 >> 0x10;
              iVar8 = local_3bc << 0x10;
              iVar34 = local_388 << 0x10;
              iVar21 = local_3bc;
              iVar42 = local_388;
            }
            iVar41 = SignedSaturate(iVar27 * DAT_2c021eb8[1] * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(DAT_2c021eb8[1] * iVar13 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(iVar24 * DAT_2c021ebc[1] * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar15 = SignedSaturate(DAT_2c021ebc[1] * iVar14 * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            iVar15 = SignedSaturate((iVar15 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            iVar22 = SignedSaturate(iVar22 + iVar15,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar30 = SignedSaturate(iVar41 + iVar26,0x20);
            SignedDoesSaturate(uVar30,0x20);
            uVar19 = SignedSaturate(uVar19 + iVar23,0x20);
            SignedDoesSaturate(uVar19,0x20);
            uVar20 = uVar30 ^ uVar30 << 1;
            if (uVar20 == 0) {
              iVar41 = 0;
              local_374 = 0;
            }
            else {
              local_374 = LZCOUNT(uVar20);
              uVar30 = uVar30 << local_374;
              iVar41 = local_374 << 0x10;
            }
            sVar2 = (short)(uVar30 >> 0x10);
            iVar22 = SignedSaturate((int)sVar2 * (int)sVar2 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar15 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            uVar30 = uVar19 ^ uVar19 << 1;
            if (uVar30 == 0) {
              iVar39 = 0;
              local_388 = 0;
              uVar30 = uVar19;
            }
            else {
              local_388 = LZCOUNT(uVar30);
              iVar39 = local_388 << 0x10;
              uVar30 = uVar19 << local_388;
            }
            iVar16 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
            SignedDoesSaturate(iVar16,0x20);
            iVar41 = SignedSaturate(iVar41 - iVar34,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar12 = 0;
            if (iVar41 >> 0x10 != 0) {
              iVar41 = (iVar41 >> 0x10) << 1;
              iVar12 = SignedSaturate(iVar41,0xf);
              SignedDoesSaturate(iVar41,0xf);
              iVar12 = iVar12 << 0x10;
            }
            uVar20 = SignedSaturate(iVar12 + iVar8,0x20);
            SignedDoesSaturate(uVar20,0x20);
            iVar41 = SignedSaturate((uVar20 & 0xffff0000) - iVar39,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar20 = iVar41 >> 0x10;
            if (iVar41 < 0) {
              uVar38 = 0xffffffc1;
              if (-0x3f < (int)uVar20) {
                uVar38 = uVar20;
              }
              iVar16 = iVar16 >> (-uVar38 & 0xff);
            }
            else {
              if (0x3e < (int)uVar20) {
                uVar20 = 0x3f;
              }
              iVar15 = iVar15 >> (uVar20 & 0xff);
            }
            iVar41 = SignedSaturate(iVar15 - iVar16,0x20);
            SignedDoesSaturate(iVar41,0x20);
            if (0 < iVar41) {
              local_36c = (short)((uint)iVar22 >> 0x10);
              iVar28 = (int)local_36c;
              local_370._0_2_ = (short)(uVar30 >> 0x10);
              iVar31 = (int)(short)local_370;
              iVar6 = SignedSaturate(0x20000,0x20);
              SignedDoesSaturate(iVar6,0x20);
              iVar6 = iVar6 >> 0x10;
              iVar8 = local_388 << 0x10;
              iVar34 = local_374 << 0x10;
              iVar21 = local_388;
              iVar42 = local_374;
            }
            iVar41 = SignedSaturate(iVar27 * DAT_2c021eb8[2] * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(DAT_2c021eb8[2] * iVar13 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(iVar24 * DAT_2c021ebc[2] * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar15 = SignedSaturate(DAT_2c021ebc[2] * iVar14 * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            iVar15 = SignedSaturate((iVar15 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            iVar22 = SignedSaturate(iVar22 + iVar15,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar30 = SignedSaturate(iVar41 + iVar26,0x20);
            SignedDoesSaturate(uVar30,0x20);
            uVar19 = SignedSaturate(uVar19 + iVar23,0x20);
            SignedDoesSaturate(uVar19,0x20);
            uVar20 = uVar30 ^ uVar30 << 1;
            if (uVar20 == 0) {
              iVar41 = 0;
              local_374 = 0;
            }
            else {
              local_374 = LZCOUNT(uVar20);
              uVar30 = uVar30 << local_374;
              iVar41 = local_374 << 0x10;
            }
            sVar2 = (short)(uVar30 >> 0x10);
            iVar22 = SignedSaturate((int)sVar2 * (int)sVar2 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar15 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
            SignedDoesSaturate(iVar15,0x20);
            uVar30 = uVar19 ^ uVar19 << 1;
            if (uVar30 == 0) {
              iVar39 = 0;
              local_388 = 0;
              uVar30 = uVar19;
            }
            else {
              local_388 = LZCOUNT(uVar30);
              iVar39 = local_388 << 0x10;
              uVar30 = uVar19 << local_388;
            }
            iVar16 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
            SignedDoesSaturate(iVar16,0x20);
            iVar41 = SignedSaturate(iVar41 - iVar34,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar12 = 0;
            if (iVar41 >> 0x10 != 0) {
              iVar41 = (iVar41 >> 0x10) << 1;
              iVar12 = SignedSaturate(iVar41,0xf);
              SignedDoesSaturate(iVar41,0xf);
              iVar12 = iVar12 << 0x10;
            }
            uVar20 = SignedSaturate(iVar12 + iVar8,0x20);
            SignedDoesSaturate(uVar20,0x20);
            iVar41 = SignedSaturate((uVar20 & 0xffff0000) - iVar39,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar20 = iVar41 >> 0x10;
            if (iVar41 < 0) {
              uVar38 = 0xffffffc1;
              if (-0x3f < (int)uVar20) {
                uVar38 = uVar20;
              }
              iVar16 = iVar16 >> (-uVar38 & 0xff);
            }
            else {
              if (0x3e < (int)uVar20) {
                uVar20 = 0x3f;
              }
              iVar15 = iVar15 >> (uVar20 & 0xff);
            }
            iVar41 = SignedSaturate(iVar15 - iVar16,0x20);
            SignedDoesSaturate(iVar41,0x20);
            if (0 < iVar41) {
              local_36c = (short)((uint)iVar22 >> 0x10);
              iVar28 = (int)local_36c;
              local_370._0_2_ = (short)(uVar30 >> 0x10);
              iVar31 = (int)(short)local_370;
              iVar6 = SignedSaturate(0x30000,0x20);
              SignedDoesSaturate(iVar6,0x20);
              iVar6 = iVar6 >> 0x10;
              iVar8 = local_388 << 0x10;
              iVar34 = local_374 << 0x10;
              iVar21 = local_388;
              iVar42 = local_374;
            }
            iVar41 = SignedSaturate(DAT_2c021eb8[3] * iVar27 * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(DAT_2c021eb8[3] * iVar13 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar22 = SignedSaturate(DAT_2c021ebc[3] * iVar24 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar13 = SignedSaturate(DAT_2c021ebc[3] * iVar14 * 2,0x20);
            SignedDoesSaturate(iVar13,0x20);
            iVar13 = SignedSaturate((iVar13 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar13,0x20);
            iVar22 = SignedSaturate(iVar22 + iVar13,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar30 = SignedSaturate(iVar41 + iVar26,0x20);
            SignedDoesSaturate(uVar30,0x20);
            uVar19 = SignedSaturate(uVar19 + iVar23,0x20);
            SignedDoesSaturate(uVar19,0x20);
            uVar20 = uVar30 ^ uVar30 << 1;
            if (uVar20 == 0) {
              iVar41 = 0;
              local_3c0 = 0;
            }
            else {
              local_3c0 = LZCOUNT(uVar20);
              uVar30 = uVar30 << local_3c0;
              iVar41 = local_3c0 << 0x10;
            }
            sVar2 = (short)(uVar30 >> 0x10);
            iVar22 = SignedSaturate((int)sVar2 * (int)sVar2 * 2,0x20);
            SignedDoesSaturate(iVar22,0x20);
            local_3d0 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
            SignedDoesSaturate(local_3d0,0x20);
            uVar30 = uVar19 ^ uVar19 << 1;
            if (uVar30 == 0) {
              iVar23 = 0;
              local_3bc = 0;
            }
            else {
              local_3bc = LZCOUNT(uVar30);
              uVar19 = uVar19 << local_3bc;
              iVar23 = local_3bc << 0x10;
            }
            iVar13 = SignedSaturate(((int)uVar19 >> 0x10) * iVar28 * 2,0x20);
            SignedDoesSaturate(iVar13,0x20);
            iVar14 = SignedSaturate(iVar41 - iVar34,0x20);
            SignedDoesSaturate(iVar14,0x20);
            iVar15 = 0;
            if (iVar14 >> 0x10 != 0) {
              iVar14 = (iVar14 >> 0x10) << 1;
              iVar15 = SignedSaturate(iVar14,0xf);
              SignedDoesSaturate(iVar14,0xf);
              iVar15 = iVar15 << 0x10;
            }
            uVar30 = SignedSaturate(iVar15 + iVar8,0x20);
            SignedDoesSaturate(uVar30,0x20);
            iVar14 = SignedSaturate((uVar30 & 0xffff0000) - iVar23,0x20);
            SignedDoesSaturate(iVar14,0x20);
            uVar30 = iVar14 >> 0x10;
            if (iVar14 < 0) {
              uVar20 = 0xffffffc1;
              if (-0x3f < (int)uVar30) {
                uVar20 = uVar30;
              }
              iVar13 = iVar13 >> (-uVar20 & 0xff);
            }
            else {
              if (0x3e < (int)uVar30) {
                uVar30 = 0x3f;
              }
              local_3d0 = local_3d0 >> (uVar30 & 0xff);
            }
            iVar13 = SignedSaturate(local_3d0 - iVar13,0x20);
            SignedDoesSaturate(iVar13,0x20);
            local_3c8 = iVar31;
            local_3c4 = iVar28;
            if (0 < iVar13) {
              iVar28 = (int)(short)((uint)iVar22 >> 0x10);
              iVar31 = (int)(short)(uVar19 >> 0x10);
              iVar6 = SignedSaturate(0x40000,0x20);
              SignedDoesSaturate(iVar6,0x20);
              iVar6 = iVar6 >> 0x10;
              iVar8 = iVar23;
              iVar34 = iVar41;
              iVar21 = local_3bc;
              iVar42 = local_3c0;
              local_3c8 = (int)uVar19 >> 0x10;
              local_3c4 = iVar22 >> 0x10;
            }
          }
          iVar41 = SignedSaturate(iVar33 * 0x10000 + 0x10000,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = 0;
          if (iVar41 >> 0x10 != 0) {
            iVar41 = (iVar41 >> 0x10) << 3;
            iVar22 = SignedSaturate(iVar41,0xf);
            SignedDoesSaturate(iVar41,0xf);
            iVar22 = iVar22 << 0x10;
          }
          uVar3 = SignedSaturate(iVar22 + iVar6 * 0x10000,0x20);
          SignedDoesSaturate(uVar3,0x20);
          *local_3b0 = (short)((uint)uVar3 >> 0x10);
          *local_3b8 = (short)iVar28;
          local_318[iVar37] = (short)iVar42;
          local_2d0[iVar37] = (short)iVar21;
          local_2f4[iVar37] = (short)iVar31;
          iVar6 = SignedSaturate(local_3c4 * local_398 * 2,0x20);
          SignedDoesSaturate(iVar6,0x20);
          local_3d0 = local_3a0;
          iVar41 = SignedSaturate(local_3c8 * local_3a0 * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(iVar34 + local_39c * -0x10000,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar23 = 0;
          if (iVar22 >> 0x10 != 0) {
            iVar22 = (iVar22 >> 0x10) << 1;
            iVar23 = SignedSaturate(iVar22,0xf);
            SignedDoesSaturate(iVar22,0xf);
            iVar23 = iVar23 << 0x10;
          }
          uVar30 = SignedSaturate(iVar23 + local_394 * 0x10000,0x20);
          SignedDoesSaturate(uVar30,0x20);
          iVar22 = SignedSaturate((uVar30 & 0xffff0000) - iVar8,0x20);
          SignedDoesSaturate(iVar22,0x20);
          uVar30 = iVar22 >> 0x10;
          if (iVar22 < 0) {
            uVar19 = 0xffffffc1;
            if (-0x3f < (int)uVar30) {
              uVar19 = uVar30;
            }
            iVar41 = iVar41 >> (-uVar19 & 0xff);
          }
          else {
            if (0x3e < (int)uVar30) {
              uVar30 = 0x3f;
            }
            iVar6 = iVar6 >> (uVar30 & 0xff);
          }
          iVar41 = SignedSaturate(iVar6 - iVar41,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar6 = local_39c * 0x10000;
          iVar22 = local_398;
          local_3cc = local_394 * 0x10000;
          if (0 < iVar41) {
            local_3d0 = local_3c4;
            local_378 = local_38c;
            iVar6 = iVar34;
            iVar22 = local_3c8;
            local_3cc = iVar8;
            local_3a0 = iVar28;
            local_39c = iVar42;
            local_398 = iVar31;
            local_394 = iVar21;
          }
          iVar37 = iVar37 + 1;
          local_38c = (int)(short)iVar37;
          local_3b8 = local_3b8 + 1;
          local_3b0 = local_3b0 + 1;
          local_3ac = local_3ac + 1;
        } while (local_38c < (int)local_3d4);
        local_37c = local_378;
        local_3c8 = iVar22;
      }
      local_3b4 = local_360;
      sVar2 = local_3b4[local_37c];
      uVar30 = (uint)sVar2;
      iVar37 = SignedSaturate((int)local_3d4 * 0x10000 + -0x10000,0x20);
      SignedDoesSaturate(iVar37,0x20);
      iVar37 = (int)local_3b4[iVar37 >> 0x10];
      if ((int)local_3d4 < 1) {
        local_394 = DAT_2c022ee0;
        local_380 = 0;
        local_378 = -1;
        local_388 = 0;
        local_384._0_2_ = 1;
        local_38c = -0x8000;
      }
      else {
        iVar22 = 0;
        local_384 = 1;
        local_380 = 0;
        local_38c = DAT_2c022b7c;
        local_388 = 0;
        local_3c4 = -1;
        psVar17 = local_3b4;
        iVar41 = 0;
        do {
          while( true ) {
            iVar23 = iVar41;
            iVar41 = SignedSaturate(*psVar17 * 0x10000 + param_2 * -0x10000,0x20);
            SignedDoesSaturate(iVar41,0x20);
            uVar19 = iVar41 >> 0x10;
            if ((int)uVar19 < 0) {
              sVar25 = (short)((uint)iVar41 >> 0x10);
              uVar5 = SignedSaturate(-sVar25,0x10);
              SignedSaturate(-(sVar25 >> 0xf),0x10);
              uVar19 = (uint)uVar5;
            }
            iVar41 = SignedSaturate((short)uVar19 * 0x10000 + (param_2 >> 2) * -0x10000,0x20);
            SignedDoesSaturate(iVar41,0x20);
            if (iVar41 < 0x10000) break;
LAB_2c02293c:
            iVar22 = iVar22 + 1;
            psVar17 = psVar17 + 1;
            iVar41 = (int)(short)iVar22;
            if ((int)local_3d4 <= (int)(short)iVar22) goto LAB_2c0229f6;
          }
          iVar24 = (int)local_33c[iVar22];
          iVar41 = SignedSaturate(iVar24 * local_384 * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar14 = (int)local_2f4[iVar22];
          iVar21 = SignedSaturate(local_38c * iVar14 * 2,0x20);
          SignedDoesSaturate(iVar21,0x20);
          iVar15 = (int)local_318[iVar22];
          iVar42 = SignedSaturate(iVar15 * 0x10000 + local_388 * -0x10000,0x20);
          SignedDoesSaturate(iVar42,0x20);
          iVar13 = 0;
          if (iVar42 >> 0x10 != 0) {
            iVar42 = (iVar42 >> 0x10) << 1;
            iVar13 = SignedSaturate(iVar42,0xf);
            SignedDoesSaturate(iVar42,0xf);
            iVar13 = iVar13 << 0x10;
          }
          uVar19 = SignedSaturate(iVar13 + local_380 * 0x10000,0x20);
          SignedDoesSaturate(uVar19,0x20);
          iVar13 = (int)local_2d0[iVar22];
          iVar42 = SignedSaturate((uVar19 & 0xffff0000) + iVar13 * -0x10000,0x20);
          SignedDoesSaturate(iVar42,0x20);
          uVar19 = iVar42 >> 0x10;
          if (iVar42 < 0) {
            uVar20 = 0xffffffc1;
            if (-0x3f < (int)uVar19) {
              uVar20 = uVar19;
            }
            iVar21 = iVar21 >> (-uVar20 & 0xff);
          }
          else {
            if (0x3e < (int)uVar19) {
              uVar19 = 0x3f;
            }
            iVar41 = iVar41 >> (uVar19 & 0xff);
          }
          iVar41 = SignedSaturate(iVar41 - iVar21,0x20);
          SignedDoesSaturate(iVar41,0x20);
          if (iVar41 < 1) goto LAB_2c02293c;
          iVar22 = iVar22 + 1;
          psVar17 = psVar17 + 1;
          iVar41 = (int)(short)iVar22;
          local_3c4 = iVar23;
          local_38c = iVar24;
          local_388 = iVar15;
          local_384 = iVar14;
          local_380 = iVar13;
        } while ((int)(short)iVar22 < (int)local_3d4);
LAB_2c0229f6:
        local_378 = local_3c4;
        local_394 = local_3c4 << 0x10;
      }
      iVar41 = 0;
      do {
        local_3a0 = (uint)local_3b4[iVar41];
        iVar22 = 0;
        if (local_3a0 != 0) {
          iVar22 = SignedSaturate(local_3a0 << 1,0xf);
          SignedDoesSaturate(local_3a0 << 1,0xf);
          iVar22 = iVar22 << 0x10;
        }
        iVar22 = SignedSaturate(iVar22 + iVar37 * -0x10000,0x20);
        SignedDoesSaturate(iVar22,0x20);
        if (-1 < iVar22) break;
        iVar23 = iVar41 * 0x10000;
        uVar19 = SignedSaturate(iVar23 - local_394,0x20);
        SignedDoesSaturate(uVar19,0x20);
        iVar22 = 0x5d71;
        if (uVar19 >> 0x10 == 0) {
          iVar22 = 0x3333;
        }
        iVar21 = SignedSaturate(local_3c8 * local_33c[iVar41] * 2,0x20);
        SignedDoesSaturate(iVar21,0x20);
        iVar22 = SignedSaturate(iVar22 * local_2f4[iVar41] * 2,0x20);
        SignedDoesSaturate(iVar22,0x20);
        iVar22 = SignedSaturate(local_3d0 * (iVar22 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar22,0x20);
        iVar42 = SignedSaturate(local_318[iVar41] * 0x10000 - iVar6,0x20);
        SignedDoesSaturate(iVar42,0x20);
        iVar13 = 0;
        if (iVar42 >> 0x10 != 0) {
          iVar42 = (iVar42 >> 0x10) << 1;
          iVar13 = SignedSaturate(iVar42,0xf);
          SignedDoesSaturate(iVar42,0xf);
          iVar13 = iVar13 << 0x10;
        }
        uVar19 = SignedSaturate(iVar13 + local_3cc,0x20);
        SignedDoesSaturate(uVar19,0x20);
        iVar41 = SignedSaturate((uVar19 & DAT_2c022b80) + local_2d0[iVar41] * -0x10000,0x20);
        SignedDoesSaturate(iVar41,0x20);
        uVar19 = iVar41 >> 0x10;
        if (iVar41 < 0) {
          uVar20 = 0xffffffc1;
          if (-0x3f < (int)uVar19) {
            uVar20 = uVar19;
          }
          iVar41 = SignedSaturate(iVar21 - (iVar22 >> (-uVar20 & 0xff)),0x20);
          SignedDoesSaturate(iVar41,0x20);
        }
        else {
          if (0x3e < (int)uVar19) {
            uVar19 = 0x3f;
          }
          iVar41 = SignedSaturate((iVar21 >> (uVar19 & 0xff)) - iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
        }
        if (0 < iVar41) {
          iVar41 = SignedSaturate(iVar23 + 0x10000,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar41 = iVar41 >> 0x10;
          if (local_3a0 == 0) {
            iVar22 = SignedSaturate(iVar37 * -0x10000,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar21 = 0;
            local_3b8 = (short *)0x0;
          }
          else {
            iVar22 = SignedSaturate(local_3a0 << 1,0xf);
            SignedDoesSaturate(local_3a0 << 1,0xf);
            iVar21 = (int)(short)iVar22;
            local_3b8 = (short *)(iVar22 * 0x10000);
            iVar22 = SignedSaturate((int)local_3b8 + iVar37 * -0x10000,0x20);
            SignedDoesSaturate(iVar22,0x20);
          }
          if (iVar22 < 0x10000) {
            local_3bc = 0;
LAB_2c022b30:
            uVar19 = SignedSaturate((iVar21 * 0x7ae + 0x4000) * 2,0x20);
            SignedDoesSaturate(uVar19,0x20);
            uVar20 = SignedSaturate((int)local_3b8 - (uVar19 & DAT_2c022b80),0x20);
            SignedDoesSaturate(uVar20,0x20);
            uVar19 = SignedSaturate((int)local_3b8 + (uVar19 & DAT_2c022b80),0x20);
            SignedDoesSaturate(uVar19,0x20);
            if (iVar41 < (int)local_3d4) {
              iVar22 = iVar41 << 1;
              psVar32 = local_2d0 + iVar41;
              psVar29 = local_2f4 + iVar41;
              psVar17 = local_3b4 + iVar41;
              do {
                iVar21 = SignedSaturate(*psVar17 * 0x10000 - (uVar19 & DAT_2c022b80),0x20);
                SignedDoesSaturate(iVar21,0x20);
                if (0xffff < iVar21) break;
                iVar21 = SignedSaturate(*psVar17 * 0x10000 - (uVar20 & DAT_2c022b80),0x20);
                SignedDoesSaturate(iVar21,0x20);
                if (0xffff < iVar21) {
                  iVar21 = SignedSaturate(local_3c8 * *(short *)((int)local_33c + iVar22) * 2,0x20);
                  SignedDoesSaturate(iVar21,0x20);
                  iVar42 = SignedSaturate(local_3bc * 0x10000 + -0x40000,0x20);
                  SignedDoesSaturate(iVar42,0x20);
                  if (iVar42 < 0) {
                    iVar42 = (int)*(short *)(DAT_2c022ed8 + local_3bc * 2);
                  }
                  else {
                    iVar42 = 0x2666;
                  }
                  iVar42 = SignedSaturate(*psVar29 * iVar42 * 2,0x20);
                  SignedDoesSaturate(iVar42,0x20);
                  iVar42 = SignedSaturate(local_3d0 * (iVar42 >> 0x10) * 2,0x20);
                  SignedDoesSaturate(iVar42,0x20);
                  iVar13 = SignedSaturate(*(short *)((int)local_318 + iVar22) * 0x10000 - iVar6,0x20
                                         );
                  SignedDoesSaturate(iVar13,0x20);
                  iVar14 = 0;
                  if (iVar13 >> 0x10 != 0) {
                    iVar13 = (iVar13 >> 0x10) << 1;
                    iVar14 = SignedSaturate(iVar13,0xf);
                    SignedDoesSaturate(iVar13,0xf);
                    iVar14 = iVar14 << 0x10;
                  }
                  uVar38 = SignedSaturate(iVar14 + local_3cc,0x20);
                  SignedDoesSaturate(uVar38,0x20);
                  iVar13 = SignedSaturate((uVar38 & DAT_2c022b80) + *psVar32 * -0x10000,0x20);
                  SignedDoesSaturate(iVar13,0x20);
                  uVar38 = iVar13 >> 0x10;
                  if (iVar13 < 0) {
                    if ((int)uVar38 < -0x3f) {
                      uVar38 = 0xffffffc1;
                    }
                    iVar21 = SignedSaturate(iVar21 - (iVar42 >> (-uVar38 & 0xff)),0x20);
                    SignedDoesSaturate(iVar21,0x20);
                  }
                  else {
                    if (0x3e < (int)uVar38) {
                      uVar38 = 0x3f;
                    }
                    iVar21 = SignedSaturate((iVar21 >> (uVar38 & 0xff)) - iVar42,0x20);
                    SignedDoesSaturate(iVar21,0x20);
                  }
                  if (0 < iVar21) goto LAB_2c022c54;
                }
                psVar32 = psVar32 + 1;
                psVar29 = psVar29 + 1;
                iVar22 = iVar22 + 2;
                iVar41 = (int)(short)((short)iVar41 + 1);
                psVar17 = psVar17 + 1;
                if (local_3d4 == (short *)iVar41) break;
              } while( true );
            }
            uVar19 = SignedSaturate(0xffff0000,0x20);
            SignedDoesSaturate(uVar19,0x20);
            goto joined_r0x2c022cb6;
          }
LAB_2c022c7e:
          uVar19 = SignedSaturate(0,0x20);
          SignedDoesSaturate(uVar19,0x20);
joined_r0x2c022cb6:
          if (uVar19 >> 0x10 == 0) goto LAB_2c022c90;
        }
        uVar19 = SignedSaturate(iVar23 + 0x10000,0x20);
        SignedDoesSaturate(uVar19,0x20);
        iVar41 = (int)uVar19 >> 0x10;
        uVar19 = SignedSaturate((uVar19 & DAT_2c022b80) + (int)local_3d4 * -0x10000,0x20);
        SignedDoesSaturate(uVar19,0x20);
      } while (uVar19 >> 0x10 != 0);
      uVar19 = SignedSaturate(local_394 + 0x10000,0x20);
      SignedDoesSaturate(uVar19,0x20);
      local_3a0 = uVar30;
      if (uVar19 >> 0x10 != 0) {
        iVar37 = SignedSaturate(local_394 + local_37c * -0x10000,0x20);
        SignedDoesSaturate(iVar37,0x20);
        if (iVar37 >> 0x10 != 0) {
          if (iVar37 >> 0x10 < 0) {
            iVar37 = SignedSaturate(local_3c8 * local_38c * 2,0x20);
            SignedDoesSaturate(iVar37,0x20);
            iVar41 = SignedSaturate((short)local_384 * 0x6e14,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar41 = SignedSaturate(local_3d0 * (iVar41 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar6 = SignedSaturate(local_388 * 0x10000 - iVar6,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar22 = 0;
            if (iVar6 >> 0x10 != 0) {
              iVar6 = (iVar6 >> 0x10) << 1;
              iVar22 = SignedSaturate(iVar6,0xf);
              SignedDoesSaturate(iVar6,0xf);
              iVar22 = iVar22 << 0x10;
            }
            uVar19 = SignedSaturate(iVar22 + local_3cc,0x20);
            SignedDoesSaturate(uVar19,0x20);
            iVar6 = SignedSaturate((DAT_2c022ee0 & uVar19) + local_380 * -0x10000,0x20);
            SignedDoesSaturate(iVar6,0x20);
            uVar19 = iVar6 >> 0x10;
            if (iVar6 < 0) {
              if ((int)uVar19 < -0x3f) {
                uVar19 = 0xffffffc1;
              }
              iVar41 = iVar41 >> (-uVar19 & 0xff);
            }
            else {
              if (0x3e < (int)uVar19) {
                uVar19 = 0x3f;
              }
              iVar37 = iVar37 >> (uVar19 & 0xff);
            }
            iVar6 = SignedSaturate(iVar37 - iVar41,0x20);
            SignedDoesSaturate(iVar6,0x20);
            if (0 < iVar6) {
              uVar19 = (uint)local_3b4[local_378];
              iVar6 = SignedSaturate(0x88,0xf);
              SignedDoesSaturate(0x88,0xf);
              iVar37 = uVar19 * 0x10000;
              iVar6 = SignedSaturate(iVar37 + iVar6 * -0x10000,0x20);
              SignedDoesSaturate(iVar6,0x20);
              local_3a0 = uVar19;
              if (iVar6 < 0x10000) {
                uVar20 = SignedSaturate((int)*DAT_2c023040 * (int)sVar2 * 2,0x20);
                SignedDoesSaturate(uVar20,0x20);
                uVar38 = SignedSaturate((((int)uVar20 >> 0x10) * 0xc29 + 0x4000) * 2,0x20);
                SignedDoesSaturate(uVar38,0x20);
                uVar4 = SignedSaturate((uVar20 & DAT_2c023044) - (uVar38 & DAT_2c023044),0x20);
                SignedDoesSaturate(uVar4,0x20);
                uVar20 = SignedSaturate((uVar20 & DAT_2c023044) + (uVar38 & DAT_2c023044),0x20);
                SignedDoesSaturate(uVar20,0x20);
                iVar6 = SignedSaturate(iVar37 - (uVar4 & DAT_2c023044),0x20);
                SignedDoesSaturate(iVar6,0x20);
                if (0xffff < iVar6) {
                  iVar6 = SignedSaturate(iVar37 - (uVar20 & DAT_2c023044),0x20);
                  SignedDoesSaturate(iVar6,0x20);
                  if (iVar6 < 0) goto LAB_2c022c90;
                }
                uVar20 = SignedSaturate((int)DAT_2c023040[1] * (int)sVar2 * 2,0x20);
                SignedDoesSaturate(uVar20,0x20);
                uVar38 = SignedSaturate((((int)uVar20 >> 0x10) * 0xc29 + 0x4000) * 2,0x20);
                SignedDoesSaturate(uVar38,0x20);
                uVar4 = SignedSaturate((uVar20 & DAT_2c023044) - (uVar38 & DAT_2c023044),0x20);
                SignedDoesSaturate(uVar4,0x20);
                uVar20 = SignedSaturate((uVar20 & DAT_2c023044) + (uVar38 & DAT_2c023044),0x20);
                SignedDoesSaturate(uVar20,0x20);
                iVar6 = SignedSaturate(iVar37 - (uVar4 & DAT_2c023044),0x20);
                SignedDoesSaturate(iVar6,0x20);
                if (0xffff < iVar6) {
                  iVar6 = SignedSaturate(iVar37 - (uVar20 & DAT_2c023044),0x20);
                  SignedDoesSaturate(iVar6,0x20);
                  if (iVar6 < 0) goto LAB_2c022c90;
                }
                uVar20 = SignedSaturate((int)DAT_2c023040[2] * (int)sVar2 * 2,0x20);
                SignedDoesSaturate(uVar20,0x20);
                uVar38 = SignedSaturate((((int)uVar20 >> 0x10) * 0xc29 + 0x4000) * 2,0x20);
                SignedDoesSaturate(uVar38,0x20);
                uVar4 = SignedSaturate((uVar20 & DAT_2c023044) - (uVar38 & DAT_2c023044),0x20);
                SignedDoesSaturate(uVar4,0x20);
                uVar20 = SignedSaturate((uVar20 & DAT_2c023044) + (uVar38 & DAT_2c023044),0x20);
                SignedDoesSaturate(uVar20,0x20);
                iVar6 = SignedSaturate(iVar37 - (uVar4 & DAT_2c023044),0x20);
                SignedDoesSaturate(iVar6,0x20);
                if (0xffff < iVar6) {
                  iVar6 = SignedSaturate(iVar37 - (uVar20 & DAT_2c023044),0x20);
                  SignedDoesSaturate(iVar6,0x20);
                  if (iVar6 < 0) goto LAB_2c022c90;
                }
                uVar20 = SignedSaturate((int)DAT_2c023040[3] * (int)sVar2 * 2,0x20);
                SignedDoesSaturate(uVar20,0x20);
                uVar38 = SignedSaturate((((int)uVar20 >> 0x10) * 0xc29 + 0x4000) * 2,0x20);
                SignedDoesSaturate(uVar38,0x20);
                uVar4 = SignedSaturate((uVar20 & DAT_2c023044) - (uVar38 & DAT_2c023044),0x20);
                SignedDoesSaturate(uVar4,0x20);
                uVar20 = SignedSaturate((uVar20 & DAT_2c023044) + (uVar38 & DAT_2c023044),0x20);
                SignedDoesSaturate(uVar20,0x20);
                iVar6 = SignedSaturate(iVar37 - (uVar4 & DAT_2c023044),0x20);
                SignedDoesSaturate(iVar6,0x20);
                local_3a0 = uVar30;
                if (0xffff < iVar6) {
                  iVar6 = SignedSaturate(iVar37 - (uVar20 & DAT_2c023044),0x20);
                  SignedDoesSaturate(iVar6,0x20);
                  local_3a0 = uVar30 & ~(iVar6 >> 0x20);
                  if (iVar6 < 0) {
                    local_3a0 = uVar19;
                  }
                }
              }
            }
          }
          else {
            iVar37 = SignedSaturate(local_3c8 * local_38c * 2,0x20);
            SignedDoesSaturate(iVar37,0x20);
            iVar41 = SignedSaturate((short)local_384 * 0xc7ae,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar41 = SignedSaturate(local_3d0 * (iVar41 >> 0x10) * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            iVar6 = SignedSaturate(local_388 * 0x10000 - iVar6,0x20);
            SignedDoesSaturate(iVar6,0x20);
            iVar22 = 0;
            if (iVar6 >> 0x10 != 0) {
              iVar6 = (iVar6 >> 0x10) << 1;
              iVar22 = SignedSaturate(iVar6,0xf);
              SignedDoesSaturate(iVar6,0xf);
              iVar22 = iVar22 << 0x10;
            }
            uVar30 = SignedSaturate(iVar22 + local_3cc,0x20);
            SignedDoesSaturate(uVar30,0x20);
            iVar6 = SignedSaturate((DAT_2c022ee0 & uVar30) + local_380 * -0x10000,0x20);
            SignedDoesSaturate(iVar6,0x20);
            uVar30 = iVar6 >> 0x10;
            if (iVar6 < 0) {
              if ((int)uVar30 < -0x3f) {
                uVar30 = 0xffffffc1;
              }
              iVar41 = iVar41 >> (-uVar30 & 0xff);
            }
            else {
              if (0x3e < (int)uVar30) {
                uVar30 = 0x3f;
              }
              iVar37 = iVar37 >> (uVar30 & 0xff);
            }
            iVar6 = SignedSaturate(iVar37 - iVar41,0x20);
            SignedDoesSaturate(iVar6,0x20);
            if (0 < iVar6) {
              local_3a0 = (int)local_3b4[local_378];
            }
          }
        }
      }
    }
  }
  else {
LAB_2c02262a:
    psVar17 = asStack_26c;
    piVar9 = aiStack_150 + 1;
    do {
      psVar17 = psVar17 + 1;
      uVar3 = SignedSaturate(*psVar17 * -0x10000,0x20);
      SignedDoesSaturate(uVar3,0x20);
      piVar9 = piVar9 + 1;
      iVar6 = *piVar9;
      *psVar17 = (short)((uint)uVar3 >> 0x10);
      iVar6 = SignedSaturate(-iVar6,0x20);
      SignedDoesSaturate(iVar6,0x20);
      *piVar9 = iVar6;
    } while (asStack_26c + 0x23 != psVar17);
    uVar30 = 0x30000;
    iVar6 = SignedSaturate(0xffe10000,0x20);
    SignedDoesSaturate(iVar6,0x20);
    if (iVar6 < 0) {
      iVar6 = SignedSaturate(0xfff90000,0x20);
      SignedDoesSaturate(iVar6,0x20);
      if (iVar6 < 0) {
        iVar6 = 0;
        iVar37 = 3;
        local_3c8 = 0;
        do {
          local_3d4 = (short *)local_3c8;
          if (0 < aiStack_150[iVar37 + 2]) {
            iVar41 = SignedSaturate((int)asStack_1dc[iVar37 + -0x80000000] *
                                    (int)asStack_26c[iVar37 + -0x7fffffff] * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            local_3d0 = SignedSaturate((int)asStack_26c[iVar37 + -0x80000000] *
                                       (int)asStack_1dc[iVar37 + -0x7fffffff] * 2,0x20);
            SignedDoesSaturate(local_3d0,0x20);
            iVar22 = SignedSaturate(asStack_224[iVar37 + -0x7fffffff] * 0x10000 +
                                    asStack_224[iVar37 + -0x80000000] * -0x10000,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar23 = 0;
            if (iVar22 >> 0x10 != 0) {
              iVar22 = (iVar22 >> 0x10) << 1;
              iVar23 = SignedSaturate(iVar22,0xf);
              SignedDoesSaturate(iVar22,0xf);
              iVar23 = iVar23 << 0x10;
            }
            uVar19 = SignedSaturate(iVar23 + asStack_194[iVar37 + -0x80000000] * 0x10000,0x20);
            SignedDoesSaturate(uVar19,0x20);
            iVar22 = SignedSaturate((uVar19 & 0xffff0000) +
                                    asStack_194[iVar37 + -0x7fffffff] * -0x10000,0x20);
            SignedDoesSaturate(iVar22,0x20);
            uVar19 = iVar22 >> 0x10;
            if (iVar22 < 0) {
              uVar20 = 0xffffffc1;
              if (-0x3f < (int)uVar19) {
                uVar20 = uVar19;
              }
              local_3d0 = local_3d0 >> (-uVar20 & 0xff);
            }
            else {
              if (0x3e < (int)uVar19) {
                uVar19 = 0x3f;
              }
              iVar41 = iVar41 >> (uVar19 & 0xff);
            }
            iVar41 = SignedSaturate(iVar41 - local_3d0,0x20);
            SignedDoesSaturate(iVar41,0x20);
            if (0 < iVar41) {
              iVar41 = SignedSaturate((int)asStack_1dc[iVar37 + -0x7ffffffe] *
                                      (int)asStack_26c[iVar37 + -0x7fffffff] * 2,0x20);
              SignedDoesSaturate(iVar41,0x20);
              iVar22 = SignedSaturate((int)asStack_26c[iVar37 + -0x7ffffffe] *
                                      (int)asStack_1dc[iVar37 + -0x7fffffff] * 2,0x20);
              SignedDoesSaturate(iVar22,0x20);
              iVar23 = SignedSaturate(asStack_224[iVar37 + -0x7fffffff] * 0x10000 +
                                      asStack_224[iVar37 + -0x7ffffffe] * -0x10000,0x20);
              SignedDoesSaturate(iVar23,0x20);
              iVar21 = 0;
              if (iVar23 >> 0x10 != 0) {
                iVar23 = (iVar23 >> 0x10) << 1;
                iVar21 = SignedSaturate(iVar23,0xf);
                SignedDoesSaturate(iVar23,0xf);
                iVar21 = iVar21 << 0x10;
              }
              uVar19 = SignedSaturate(iVar21 + asStack_194[iVar37 + -0x7ffffffe] * 0x10000,0x20);
              SignedDoesSaturate(uVar19,0x20);
              iVar23 = SignedSaturate((uVar19 & 0xffff0000) +
                                      asStack_194[iVar37 + -0x7fffffff] * -0x10000,0x20);
              SignedDoesSaturate(iVar23,0x20);
              uVar19 = iVar23 >> 0x10;
              if (iVar23 < 0) {
                if ((int)uVar19 < -0x3f) {
                  uVar19 = 0xffffffc1;
                }
                iVar22 = iVar22 >> (-uVar19 & 0xff);
              }
              else {
                if (0x3e < (int)uVar19) {
                  uVar19 = 0x3f;
                }
                iVar41 = iVar41 >> (uVar19 & 0xff);
              }
              iVar41 = SignedSaturate(iVar41 - iVar22,0x20);
              SignedDoesSaturate(iVar41,0x20);
              if (0 < iVar41) {
                local_2ac[local_3c8] = (short)iVar37;
                iVar6 = SignedSaturate(iVar6 + 0x10000,0x20);
                SignedDoesSaturate(iVar6,0x20);
                local_3d4 = (short *)(iVar6 >> 0x10);
              }
            }
          }
          uVar30 = SignedSaturate(uVar30 + 0x10000,0x20);
          SignedDoesSaturate(uVar30,0x20);
          iVar37 = (int)uVar30 >> 0x10;
          uVar30 = uVar30 & 0xffff0000;
          iVar6 = SignedSaturate(uVar30 - 0x220000,0x20);
          SignedDoesSaturate(iVar6,0x20);
          if (-1 < iVar6) break;
          iVar6 = (int)local_3d4 * 0x10000;
          local_3c8 = (int)local_3d4;
          iVar41 = SignedSaturate(iVar6 + -0x70000,0x20);
          SignedDoesSaturate(iVar41,0x20);
        } while (iVar41 < 0);
        if (local_3d4 != (short *)0x0) goto LAB_2c021abc;
      }
    }
    uVar3 = SignedSaturate(0x20,0xf);
    SignedDoesSaturate(0x20,0xf);
    local_3a0 = (int)(short)uVar3;
  }
LAB_2c022c90:
  if (*DAT_2c022edc != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00b2e8();
  }
  return local_3a0;
LAB_2c022c54:
  local_3bc = SignedSaturate(local_3bc * 0x10000 + 0x10000,0x20);
  SignedDoesSaturate(local_3bc,0x20);
  local_3bc = local_3bc >> 0x10;
  uVar19 = SignedSaturate((int)local_3b8 + local_3a0 * 0x10000,0x20);
  SignedDoesSaturate(uVar19,0x20);
  iVar21 = (int)uVar19 >> 0x10;
  local_3b8 = (short *)(uVar19 & DAT_2c022b80);
  iVar22 = SignedSaturate((int)local_3b8 + iVar37 * -0x10000,0x20);
  SignedDoesSaturate(iVar22,0x20);
  if (0xffff < iVar22) goto LAB_2c022c7e;
  goto LAB_2c022b30;
}


/* FUN_14016b08 @ 0x14016b08 */

uint FUN_14016b08(short *param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  short *psVar10;
  short *psVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  short *extraout_r2;
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
  short *psVar35;
  uint *puVar36;
  uint *puVar37;
  int iVar38;
  short *psVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  short *local_3d4;
  int local_3d0;
  int local_3cc;
  short *local_3c8;
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
  int local_394;
  int local_390;
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
  short *psVar12;
  
  local_2c = *DAT_14016e04;
  iVar5 = (int)param_1[0x20];
  sVar1 = param_1[0x23];
  uVar30 = iVar5 * iVar5;
  aiStack_150[4] = sVar1 * iVar5;
  psVar10 = param_1 + 0x24;
  do {
    sVar25 = psVar10[-3];
    uVar30 = SignedSaturate(uVar30 + (int)sVar25 * (int)sVar25,0x20);
    SignedDoesSaturate(uVar30,0x20);
    psVar39 = psVar10 + 1;
    aiStack_150[4] = SignedSaturate(aiStack_150[4] + (int)*psVar10 * (int)sVar25,0x20);
    SignedDoesSaturate(aiStack_150[4],0x20);
    psVar10 = psVar39;
  } while (psVar39 != param_1 + 0x41);
  uVar19 = uVar30 ^ uVar30 << 1;
  local_b0 = uVar30;
  if (uVar19 == 0) {
    asStack_194[3] = 0;
    uVar19 = uVar30;
  }
  else {
    iVar5 = LZCOUNT(uVar19);
    asStack_194[3] = (short)iVar5;
    uVar19 = uVar30 << iVar5;
  }
  asStack_1dc[3] = (short)(uVar19 >> 0x10);
  uVar19 = aiStack_150[4] ^ aiStack_150[4] << 1;
  if (uVar19 == 0) {
    asStack_224[3] = 0;
    sVar25 = (short)((uint)aiStack_150[4] >> 0x10);
  }
  else {
    iVar5 = LZCOUNT(uVar19);
    asStack_224[3] = (short)iVar5;
    sVar25 = (short)((uint)(aiStack_150[4] << iVar5) >> 0x10);
  }
  uVar2 = SignedSaturate((int)sVar25 * (int)sVar25 * 2,0x20);
  SignedDoesSaturate(uVar2,0x20);
  sVar25 = (short)((uint)uVar2 >> 0x10);
  asStack_26c[3] = sVar25;
  if (aiStack_150[4] < 0) {
    asStack_26c[3] = SignedSaturate(-sVar25,0x10);
    SignedSaturate(-(sVar25 >> 0xf),0x10);
  }
  psVar35 = asStack_224 + 4;
  local_3d4 = asStack_26c + 3;
  psVar10 = asStack_1dc + 3;
  psVar29 = asStack_194 + 4;
  puVar37 = (uint *)(aiStack_150 + 4);
  puVar36 = (uint *)(aiStack_c0 + 4);
  psVar39 = param_1 + 0x20;
  do {
    psVar32 = psVar39 + -1;
    iVar5 = (int)*psVar32;
    uVar19 = sVar1 * iVar5;
    psVar6 = psVar39;
    psVar11 = param_1 + 0x24;
    do {
      psVar12 = psVar11 + 1;
      uVar19 = SignedSaturate(uVar19 + (int)*psVar11 * (int)*psVar6,0x20);
      SignedDoesSaturate(uVar19,0x20);
      psVar6 = psVar6 + 1;
      psVar11 = psVar12;
    } while (psVar12 != param_1 + 0x41);
    sVar25 = psVar39[0x1d];
    puVar37 = puVar37 + 1;
    *puVar37 = uVar19;
    iVar38 = SignedSaturate(uVar30 - (int)sVar25 * (int)sVar25,0x20);
    SignedDoesSaturate(iVar38,0x20);
    uVar30 = SignedSaturate(iVar38 + iVar5 * iVar5,0x20);
    SignedDoesSaturate(uVar30,0x20);
    uVar20 = uVar30 ^ uVar30 << 1;
    puVar36 = puVar36 + 1;
    *puVar36 = uVar30;
    if (uVar20 == 0) {
      *psVar29 = 0;
      uVar20 = uVar30;
    }
    else {
      iVar5 = LZCOUNT(uVar20);
      *psVar29 = (short)iVar5;
      uVar20 = uVar30 << iVar5;
    }
    psVar10 = psVar10 + 1;
    *psVar10 = (short)(uVar20 >> 0x10);
    uVar20 = uVar19 ^ uVar19 << 1;
    if (uVar20 == 0) {
      *psVar35 = 0;
      sVar25 = (short)(uVar19 >> 0x10);
    }
    else {
      iVar5 = LZCOUNT(uVar20);
      *psVar35 = (short)iVar5;
      sVar25 = (short)((uVar19 << iVar5) >> 0x10);
    }
    uVar2 = SignedSaturate((int)sVar25 * (int)sVar25 * 2,0x20);
    SignedDoesSaturate(uVar2,0x20);
    sVar25 = (short)((uint)uVar2 >> 0x10);
    sVar18 = sVar25;
    if ((int)uVar19 < 0) {
      sVar18 = SignedSaturate(-sVar25,0x10);
      SignedSaturate(-(sVar25 >> 0xf),0x10);
    }
    psVar35 = psVar35 + 1;
    local_3d4 = local_3d4 + 1;
    *local_3d4 = sVar18;
    psVar29 = psVar29 + 1;
    psVar39 = psVar32;
  } while (psVar32 != param_1);
  uVar30 = 0x30000;
  iVar5 = SignedSaturate(0xffe10000,0x20);
  SignedDoesSaturate(iVar5,0x20);
  if (iVar5 < 0) {
    iVar38 = 0;
    iVar5 = SignedSaturate(0xfff90000,0x20);
    SignedDoesSaturate(iVar5,0x20);
    if (-1 < iVar5) goto LAB_1401797c;
    iVar5 = 3;
    local_3c8 = (short *)0x0;
    do {
      local_3d4 = local_3c8;
      if (0 < aiStack_150[iVar5 + 2]) {
        iVar41 = SignedSaturate((int)asStack_1dc[iVar5 + -0x80000000] *
                                (int)asStack_26c[iVar5 + -0x7fffffff] * 2,0x20);
        SignedDoesSaturate(iVar41,0x20);
        local_3d0 = SignedSaturate((int)asStack_26c[iVar5 + -0x80000000] *
                                   (int)asStack_1dc[iVar5 + -0x7fffffff] * 2,0x20);
        SignedDoesSaturate(local_3d0,0x20);
        iVar22 = SignedSaturate(asStack_224[iVar5 + -0x7fffffff] * 0x10000 +
                                asStack_224[iVar5 + -0x80000000] * -0x10000,0x20);
        SignedDoesSaturate(iVar22,0x20);
        iVar23 = 0;
        if (iVar22 >> 0x10 != 0) {
          iVar22 = (iVar22 >> 0x10) << 1;
          iVar23 = SignedSaturate(iVar22,0xf);
          SignedDoesSaturate(iVar22,0xf);
          iVar23 = iVar23 << 0x10;
        }
        uVar19 = SignedSaturate(iVar23 + asStack_194[iVar5 + -0x80000000] * 0x10000,0x20);
        SignedDoesSaturate(uVar19,0x20);
        iVar22 = SignedSaturate((uVar19 & 0xffff0000) + asStack_194[iVar5 + -0x7fffffff] * -0x10000,
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
          iVar41 = SignedSaturate((int)asStack_1dc[iVar5 + -0x7ffffffe] *
                                  (int)asStack_26c[iVar5 + -0x7fffffff] * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate((int)asStack_26c[iVar5 + -0x7ffffffe] *
                                  (int)asStack_1dc[iVar5 + -0x7fffffff] * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar23 = SignedSaturate(asStack_224[iVar5 + -0x7fffffff] * 0x10000 +
                                  asStack_224[iVar5 + -0x7ffffffe] * -0x10000,0x20);
          SignedDoesSaturate(iVar23,0x20);
          iVar21 = 0;
          if (iVar23 >> 0x10 != 0) {
            iVar23 = (iVar23 >> 0x10) << 1;
            iVar21 = SignedSaturate(iVar23,0xf);
            SignedDoesSaturate(iVar23,0xf);
            iVar21 = iVar21 << 0x10;
          }
          uVar19 = SignedSaturate(iVar21 + asStack_194[iVar5 + -0x7ffffffe] * 0x10000,0x20);
          SignedDoesSaturate(uVar19,0x20);
          iVar23 = SignedSaturate((uVar19 & 0xffff0000) +
                                  asStack_194[iVar5 + -0x7fffffff] * -0x10000,0x20);
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
            local_2ac[(int)local_3c8] = (short)iVar5;
            iVar5 = SignedSaturate(iVar38 + 0x10000,0x20);
            SignedDoesSaturate(iVar5,0x20);
            local_3d4 = (short *)(iVar5 >> 0x10);
          }
        }
      }
      uVar30 = SignedSaturate(uVar30 + 0x10000,0x20);
      SignedDoesSaturate(uVar30,0x20);
      iVar5 = (int)uVar30 >> 0x10;
      uVar30 = uVar30 & 0xffff0000;
      iVar38 = SignedSaturate(uVar30 - 0x220000,0x20);
      SignedDoesSaturate(iVar38,0x20);
      if (-1 < iVar38) break;
      local_3c8 = local_3d4;
      iVar38 = (int)local_3d4 * 0x10000;
      iVar41 = SignedSaturate(iVar38 + -0x70000,0x20);
      SignedDoesSaturate(iVar41,0x20);
    } while (iVar41 < 0);
    if (local_3d4 == (short *)0x0) goto LAB_1401797c;
LAB_14016e10:
    local_390 = (int)local_3d4 * 0x10000;
    uVar30 = SignedSaturate(local_390 + -0x10000,0x20);
    SignedDoesSaturate(uVar30,0x20);
    if (uVar30 >> 0x10 != 0) {
      psVar10 = local_3d4;
      if ((int)local_3d4 < 1) goto LAB_1401820a;
      iVar5 = 0;
      local_398 = 1;
      local_394 = 0;
      local_3a0 = DAT_14016e64;
      local_378 = 0;
      local_39c = 0;
      local_38c = 0;
      local_3b8 = local_33c;
      local_3b0 = local_360;
      local_3ac = local_2ac;
      do {
        iVar33 = (int)*local_3ac;
        iVar38 = SignedSaturate(aiStack_150[iVar33 + 3] + aiStack_150[iVar33 + 1],0x20);
        SignedDoesSaturate(iVar38,0x20);
        iVar26 = aiStack_150[iVar33 + 2];
        iVar41 = SignedSaturate((iVar38 >> 1) - iVar26,0x20);
        SignedDoesSaturate(iVar41,0x20);
        iVar27 = iVar41 >> 0x10;
        iVar38 = SignedSaturate(iVar27 * 0x8000,0x20);
        SignedDoesSaturate(iVar38,0x20);
        uVar2 = SignedSaturate((iVar41 >> 1) - iVar38,0x20);
        SignedDoesSaturate(uVar2,0x20);
        iVar14 = (int)(short)uVar2;
        iVar41 = SignedSaturate(aiStack_150[iVar33 + 3] - aiStack_150[iVar33 + 1],0x20);
        SignedDoesSaturate(iVar41,0x20);
        iVar24 = iVar41 >> 0x11;
        iVar38 = SignedSaturate(iVar24 * 0x8000,0x20);
        SignedDoesSaturate(iVar38,0x20);
        uVar2 = SignedSaturate((iVar41 >> 2) - iVar38,0x20);
        SignedDoesSaturate(uVar2,0x20);
        iVar15 = (int)(short)uVar2;
        iVar42 = (int)asStack_224[iVar33 + 1];
        iVar7 = aiStack_c0[iVar33 + 2];
        iVar28 = (int)asStack_26c[iVar33 + 1];
        iVar21 = (int)asStack_194[iVar33 + 1];
        iVar31 = (int)asStack_1dc[iVar33 + 1];
        iVar38 = SignedSaturate((int)asStack_1dc[iVar33] * (int)asStack_26c[iVar33 + 2] * 2,0x20);
        SignedDoesSaturate(iVar38,0x20);
        iVar41 = SignedSaturate((int)asStack_1dc[iVar33 + 2] * (int)asStack_26c[iVar33] * 2,0x20);
        SignedDoesSaturate(iVar41,0x20);
        iVar22 = SignedSaturate(asStack_224[iVar33 + 2] * 0x10000 + asStack_224[iVar33] * -0x10000,
                                0x20);
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
          iVar38 = SignedSaturate(iVar38 - (iVar41 >> (-uVar19 & 0xff)),0x20);
          SignedDoesSaturate(iVar38,0x20);
          if (iVar38 < 1) goto LAB_140174de;
LAB_14016e80:
          iVar23 = SignedSaturate(aiStack_c0[iVar33 + 3] - iVar7,0x20);
          SignedDoesSaturate(iVar23,0x20);
          iVar23 = iVar23 >> 3;
          iVar38 = SignedSaturate(iVar27 * *DAT_1401720c * 2,0x20);
          SignedDoesSaturate(iVar38,0x20);
          iVar41 = SignedSaturate(iVar14 * *DAT_1401720c * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar41 = SignedSaturate((iVar41 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar38 = SignedSaturate(iVar38 + iVar41,0x20);
          SignedDoesSaturate(iVar38,0x20);
          iVar41 = SignedSaturate(iVar24 * *DAT_14017210 * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(iVar15 * *DAT_14017210 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar38 = SignedSaturate(iVar38 + iVar41,0x20);
          SignedDoesSaturate(iVar38,0x20);
          uVar30 = SignedSaturate(iVar38 + iVar26,0x20);
          SignedDoesSaturate(uVar30,0x20);
          uVar19 = SignedSaturate(iVar7 + iVar23,0x20);
          SignedDoesSaturate(uVar19,0x20);
          uVar20 = uVar30 ^ uVar30 << 1;
          if (uVar20 == 0) {
            iVar38 = 0;
            local_388 = 0;
          }
          else {
            local_388 = LZCOUNT(uVar20);
            uVar30 = uVar30 << local_388;
            iVar38 = local_388 << 0x10;
          }
          sVar1 = (short)(uVar30 >> 0x10);
          iVar41 = SignedSaturate((int)sVar1 * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate((iVar41 >> 0x10) * iVar31 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          uVar30 = uVar19 ^ uVar19 << 1;
          if (uVar30 == 0) {
            iVar7 = 0;
            local_3bc = 0;
            uVar30 = uVar19;
          }
          else {
            local_3bc = LZCOUNT(uVar30);
            iVar7 = local_3bc << 0x10;
            uVar30 = uVar19 << local_3bc;
          }
          iVar40 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
          SignedDoesSaturate(iVar40,0x20);
          iVar34 = iVar42 * 0x10000;
          iVar38 = SignedSaturate(iVar38 + iVar42 * -0x10000,0x20);
          SignedDoesSaturate(iVar38,0x20);
          iVar16 = 0;
          if (iVar38 >> 0x10 != 0) {
            iVar38 = (iVar38 >> 0x10) << 1;
            iVar16 = SignedSaturate(iVar38,0xf);
            SignedDoesSaturate(iVar38,0xf);
            iVar16 = iVar16 << 0x10;
          }
          iVar8 = iVar21 * 0x10000;
          uVar20 = SignedSaturate(iVar16 + iVar8,0x20);
          SignedDoesSaturate(uVar20,0x20);
          iVar38 = SignedSaturate((uVar20 & 0xffff0000) - iVar7,0x20);
          SignedDoesSaturate(iVar38,0x20);
          uVar20 = iVar38 >> 0x10;
          if (iVar38 < 0) {
            uVar17 = 0xffffffc1;
            if (-0x3f < (int)uVar20) {
              uVar17 = uVar20;
            }
            iVar40 = iVar40 >> (-uVar17 & 0xff);
          }
          else {
            if (0x3e < (int)uVar20) {
              uVar20 = 0x3f;
            }
            iVar22 = iVar22 >> (uVar20 & 0xff);
          }
          iVar38 = SignedSaturate(iVar22 - iVar40,0x20);
          SignedDoesSaturate(iVar38,0x20);
          if (iVar38 < 1) {
            iVar38 = 0;
          }
          else {
            iVar31 = (int)(short)(uVar30 >> 0x10);
            local_374._0_2_ = (short)((uint)iVar41 >> 0x10);
            iVar28 = (int)(short)local_374;
            iVar38 = SignedSaturate(0x10000,0x20);
            SignedDoesSaturate(iVar38,0x20);
            iVar38 = iVar38 >> 0x10;
            iVar8 = local_3bc << 0x10;
            iVar34 = local_388 << 0x10;
            iVar21 = local_3bc;
            iVar42 = local_388;
          }
          iVar41 = SignedSaturate(iVar27 * DAT_1401720c[1] * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(DAT_1401720c[1] * iVar14 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(iVar24 * DAT_14017210[1] * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar7 = SignedSaturate(DAT_14017210[1] * iVar15 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = SignedSaturate((iVar7 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar22 = SignedSaturate(iVar22 + iVar7,0x20);
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
          sVar1 = (short)(uVar30 >> 0x10);
          iVar22 = SignedSaturate((int)sVar1 * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar7 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          uVar30 = uVar19 ^ uVar19 << 1;
          if (uVar30 == 0) {
            iVar40 = 0;
            local_388 = 0;
            uVar30 = uVar19;
          }
          else {
            local_388 = LZCOUNT(uVar30);
            iVar40 = local_388 << 0x10;
            uVar30 = uVar19 << local_388;
          }
          iVar16 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
          SignedDoesSaturate(iVar16,0x20);
          iVar41 = SignedSaturate(iVar41 - iVar34,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar13 = 0;
          if (iVar41 >> 0x10 != 0) {
            iVar41 = (iVar41 >> 0x10) << 1;
            iVar13 = SignedSaturate(iVar41,0xf);
            SignedDoesSaturate(iVar41,0xf);
            iVar13 = iVar13 << 0x10;
          }
          uVar20 = SignedSaturate(iVar13 + iVar8,0x20);
          SignedDoesSaturate(uVar20,0x20);
          iVar41 = SignedSaturate((uVar20 & 0xffff0000) - iVar40,0x20);
          SignedDoesSaturate(iVar41,0x20);
          uVar20 = iVar41 >> 0x10;
          if (iVar41 < 0) {
            uVar17 = 0xffffffc1;
            if (-0x3f < (int)uVar20) {
              uVar17 = uVar20;
            }
            iVar16 = iVar16 >> (-uVar17 & 0xff);
          }
          else {
            if (0x3e < (int)uVar20) {
              uVar20 = 0x3f;
            }
            iVar7 = iVar7 >> (uVar20 & 0xff);
          }
          iVar41 = SignedSaturate(iVar7 - iVar16,0x20);
          SignedDoesSaturate(iVar41,0x20);
          if (0 < iVar41) {
            local_36c = (short)((uint)iVar22 >> 0x10);
            iVar28 = (int)local_36c;
            local_370._0_2_ = (short)(uVar30 >> 0x10);
            iVar31 = (int)(short)local_370;
            iVar38 = SignedSaturate(0x20000,0x20);
            SignedDoesSaturate(iVar38,0x20);
            iVar38 = iVar38 >> 0x10;
            iVar8 = local_388 << 0x10;
            iVar34 = local_374 << 0x10;
            iVar21 = local_388;
            iVar42 = local_374;
          }
          iVar41 = SignedSaturate(iVar27 * DAT_1401720c[2] * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(DAT_1401720c[2] * iVar14 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(iVar24 * DAT_14017210[2] * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar7 = SignedSaturate(DAT_14017210[2] * iVar15 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = SignedSaturate((iVar7 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar22 = SignedSaturate(iVar22 + iVar7,0x20);
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
          sVar1 = (short)(uVar30 >> 0x10);
          iVar22 = SignedSaturate((int)sVar1 * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar7 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          uVar30 = uVar19 ^ uVar19 << 1;
          if (uVar30 == 0) {
            iVar40 = 0;
            local_388 = 0;
            uVar30 = uVar19;
          }
          else {
            local_388 = LZCOUNT(uVar30);
            iVar40 = local_388 << 0x10;
            uVar30 = uVar19 << local_388;
          }
          iVar16 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
          SignedDoesSaturate(iVar16,0x20);
          iVar41 = SignedSaturate(iVar41 - iVar34,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar13 = 0;
          if (iVar41 >> 0x10 != 0) {
            iVar41 = (iVar41 >> 0x10) << 1;
            iVar13 = SignedSaturate(iVar41,0xf);
            SignedDoesSaturate(iVar41,0xf);
            iVar13 = iVar13 << 0x10;
          }
          uVar20 = SignedSaturate(iVar13 + iVar8,0x20);
          SignedDoesSaturate(uVar20,0x20);
          iVar41 = SignedSaturate((uVar20 & 0xffff0000) - iVar40,0x20);
          SignedDoesSaturate(iVar41,0x20);
          uVar20 = iVar41 >> 0x10;
          if (iVar41 < 0) {
            uVar17 = 0xffffffc1;
            if (-0x3f < (int)uVar20) {
              uVar17 = uVar20;
            }
            iVar16 = iVar16 >> (-uVar17 & 0xff);
          }
          else {
            if (0x3e < (int)uVar20) {
              uVar20 = 0x3f;
            }
            iVar7 = iVar7 >> (uVar20 & 0xff);
          }
          iVar41 = SignedSaturate(iVar7 - iVar16,0x20);
          SignedDoesSaturate(iVar41,0x20);
          if (0 < iVar41) {
            local_36c = (short)((uint)iVar22 >> 0x10);
            iVar28 = (int)local_36c;
            local_370._0_2_ = (short)(uVar30 >> 0x10);
            iVar31 = (int)(short)local_370;
            iVar38 = SignedSaturate(0x30000,0x20);
            SignedDoesSaturate(iVar38,0x20);
            iVar38 = iVar38 >> 0x10;
            iVar8 = local_388 << 0x10;
            iVar34 = local_374 << 0x10;
            iVar21 = local_388;
            iVar42 = local_374;
          }
          iVar41 = SignedSaturate(DAT_1401720c[3] * iVar27 * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(DAT_1401720c[3] * iVar14 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(DAT_14017210[3] * iVar24 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar7 = SignedSaturate(DAT_14017210[3] * iVar15 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = SignedSaturate((iVar7 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar22 = SignedSaturate(iVar22 + iVar7,0x20);
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
          sVar1 = (short)(uVar30 >> 0x10);
          iVar22 = SignedSaturate((int)sVar1 * (int)sVar1 * 2,0x20);
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
          iVar7 = SignedSaturate(((int)uVar19 >> 0x10) * iVar28 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
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
            iVar7 = iVar7 >> (-uVar20 & 0xff);
          }
          else {
            if (0x3e < (int)uVar30) {
              uVar30 = 0x3f;
            }
            local_3d0 = local_3d0 >> (uVar30 & 0xff);
          }
          iVar7 = SignedSaturate(local_3d0 - iVar7,0x20);
          SignedDoesSaturate(iVar7,0x20);
          local_3c8 = (short *)iVar31;
          local_3c4 = iVar28;
          if (0 < iVar7) {
            iVar28 = (int)(short)((uint)iVar22 >> 0x10);
            iVar31 = (int)(short)(uVar19 >> 0x10);
            iVar38 = SignedSaturate(0x40000,0x20);
            SignedDoesSaturate(iVar38,0x20);
            iVar38 = iVar38 >> 0x10;
            iVar8 = iVar23;
            iVar34 = iVar41;
            iVar21 = local_3bc;
            iVar42 = local_3c0;
            local_3c8 = (short *)((int)uVar19 >> 0x10);
            local_3c4 = iVar22 >> 0x10;
          }
        }
        else {
          if (0x3e < (int)uVar30) {
            uVar30 = 0x3f;
          }
          iVar38 = SignedSaturate((iVar38 >> (uVar30 & 0xff)) - iVar41,0x20);
          SignedDoesSaturate(iVar38,0x20);
          if (0 < iVar38) goto LAB_14016e80;
LAB_140174de:
          iVar23 = SignedSaturate(aiStack_c0[iVar33 + 1] - iVar7,0x20);
          SignedDoesSaturate(iVar23,0x20);
          iVar23 = iVar23 >> 3;
          iVar38 = SignedSaturate(iVar27 * *DAT_14017864 * 2,0x20);
          SignedDoesSaturate(iVar38,0x20);
          iVar41 = SignedSaturate(iVar14 * *DAT_14017864 * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar41 = SignedSaturate((iVar41 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar38 = SignedSaturate(iVar38 + iVar41,0x20);
          SignedDoesSaturate(iVar38,0x20);
          iVar41 = SignedSaturate(iVar24 * *DAT_14017868 * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(iVar15 * *DAT_14017868 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar38 = SignedSaturate(iVar38 - iVar41,0x20);
          SignedDoesSaturate(iVar38,0x20);
          uVar30 = SignedSaturate(iVar38 + iVar26,0x20);
          SignedDoesSaturate(uVar30,0x20);
          uVar19 = SignedSaturate(iVar7 + iVar23,0x20);
          SignedDoesSaturate(uVar19,0x20);
          uVar20 = uVar30 ^ uVar30 << 1;
          if (uVar20 == 0) {
            iVar38 = 0;
            local_374 = 0;
          }
          else {
            local_374 = LZCOUNT(uVar20);
            uVar30 = uVar30 << local_374;
            iVar38 = local_374 << 0x10;
          }
          sVar1 = (short)(uVar30 >> 0x10);
          iVar41 = SignedSaturate((int)sVar1 * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate((iVar41 >> 0x10) * iVar31 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          uVar30 = uVar19 ^ uVar19 << 1;
          if (uVar30 == 0) {
            iVar7 = 0;
            local_388 = 0;
            uVar30 = uVar19;
          }
          else {
            local_388 = LZCOUNT(uVar30);
            iVar7 = local_388 << 0x10;
            uVar30 = uVar19 << local_388;
          }
          iVar40 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
          SignedDoesSaturate(iVar40,0x20);
          iVar34 = iVar42 * 0x10000;
          iVar38 = SignedSaturate(iVar38 + iVar42 * -0x10000,0x20);
          SignedDoesSaturate(iVar38,0x20);
          iVar16 = 0;
          if (iVar38 >> 0x10 != 0) {
            iVar38 = (iVar38 >> 0x10) << 1;
            iVar16 = SignedSaturate(iVar38,0xf);
            SignedDoesSaturate(iVar38,0xf);
            iVar16 = iVar16 << 0x10;
          }
          iVar8 = iVar21 * 0x10000;
          uVar20 = SignedSaturate(iVar16 + iVar8,0x20);
          SignedDoesSaturate(uVar20,0x20);
          iVar38 = SignedSaturate((uVar20 & 0xffff0000) - iVar7,0x20);
          SignedDoesSaturate(iVar38,0x20);
          uVar20 = iVar38 >> 0x10;
          if (iVar38 < 0) {
            uVar17 = 0xffffffc1;
            if (-0x3f < (int)uVar20) {
              uVar17 = uVar20;
            }
            iVar40 = iVar40 >> (-uVar17 & 0xff);
          }
          else {
            if (0x3e < (int)uVar20) {
              uVar20 = 0x3f;
            }
            iVar22 = iVar22 >> (uVar20 & 0xff);
          }
          iVar38 = SignedSaturate(iVar22 - iVar40,0x20);
          SignedDoesSaturate(iVar38,0x20);
          if (iVar38 < 1) {
            iVar38 = 0;
          }
          else {
            local_36c = (short)((uint)iVar41 >> 0x10);
            iVar28 = (int)local_36c;
            local_370._0_2_ = (short)(uVar30 >> 0x10);
            iVar31 = (int)(short)local_370;
            uVar2 = SignedSaturate(0x10000,0x20);
            SignedDoesSaturate(uVar2,0x20);
            iVar8 = local_388 << 0x10;
            sVar25 = (short)((uint)uVar2 >> 0x10);
            sVar1 = SignedSaturate(-sVar25,0x10);
            SignedSaturate(-(sVar25 >> 0xf),0x10);
            iVar34 = local_374 << 0x10;
            iVar38 = (int)sVar1;
            iVar21 = local_388;
            iVar42 = local_374;
          }
          iVar41 = SignedSaturate(iVar27 * DAT_14017864[1] * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(DAT_14017864[1] * iVar14 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(iVar24 * DAT_14017868[1] * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar7 = SignedSaturate(DAT_14017868[1] * iVar15 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = SignedSaturate((iVar7 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar22 = SignedSaturate(iVar22 + iVar7,0x20);
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
          sVar1 = (short)(uVar30 >> 0x10);
          iVar22 = SignedSaturate((int)sVar1 * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar7 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          uVar30 = uVar19 ^ uVar19 << 1;
          if (uVar30 == 0) {
            iVar40 = 0;
            local_374 = 0;
            uVar30 = uVar19;
          }
          else {
            local_374 = LZCOUNT(uVar30);
            iVar40 = local_374 << 0x10;
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
          iVar41 = SignedSaturate((uVar20 & 0xffff0000) - iVar40,0x20);
          SignedDoesSaturate(iVar41,0x20);
          uVar20 = iVar41 >> 0x10;
          if (iVar41 < 0) {
            uVar17 = 0xffffffc1;
            if (-0x3f < (int)uVar20) {
              uVar17 = uVar20;
            }
            local_3a4 = local_3a4 >> (-uVar17 & 0xff);
          }
          else {
            if (0x3e < (int)uVar20) {
              uVar20 = 0x3f;
            }
            iVar7 = iVar7 >> (uVar20 & 0xff);
          }
          iVar41 = SignedSaturate(iVar7 - local_3a4,0x20);
          SignedDoesSaturate(iVar41,0x20);
          if (0 < iVar41) {
            local_368 = (short)((uint)iVar22 >> 0x10);
            iVar28 = (int)local_368;
            local_36c = (short)(uVar30 >> 0x10);
            iVar31 = (int)local_36c;
            uVar2 = SignedSaturate(0x20000,0x20);
            SignedDoesSaturate(uVar2,0x20);
            sVar25 = (short)((uint)uVar2 >> 0x10);
            sVar1 = SignedSaturate(-sVar25,0x10);
            SignedSaturate(-(sVar25 >> 0xf),0x10);
            iVar8 = local_374 << 0x10;
            iVar38 = (int)sVar1;
            iVar34 = local_370 << 0x10;
            iVar21 = local_374;
            iVar42 = local_370;
          }
          iVar41 = SignedSaturate(iVar27 * DAT_14017864[2] * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(DAT_14017864[2] * iVar14 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(iVar24 * DAT_14017868[2] * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar7 = SignedSaturate(DAT_14017868[2] * iVar15 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = SignedSaturate((iVar7 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar22 = SignedSaturate(iVar22 + iVar7,0x20);
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
          sVar1 = (short)(uVar30 >> 0x10);
          iVar22 = SignedSaturate((int)sVar1 * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          local_3a4 = SignedSaturate((iVar22 >> 0x10) * iVar31 * 2,0x20);
          SignedDoesSaturate(local_3a4,0x20);
          uVar30 = uVar19 ^ uVar19 << 1;
          if (uVar30 == 0) {
            iVar7 = 0;
            local_374 = 0;
            uVar30 = uVar19;
          }
          else {
            local_374 = LZCOUNT(uVar30);
            iVar7 = local_374 << 0x10;
            uVar30 = uVar19 << local_374;
          }
          iVar40 = SignedSaturate(((int)uVar30 >> 0x10) * iVar28 * 2,0x20);
          SignedDoesSaturate(iVar40,0x20);
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
          iVar41 = SignedSaturate((uVar20 & 0xffff0000) - iVar7,0x20);
          SignedDoesSaturate(iVar41,0x20);
          uVar20 = iVar41 >> 0x10;
          if (iVar41 < 0) {
            uVar17 = 0xffffffc1;
            if (-0x3f < (int)uVar20) {
              uVar17 = uVar20;
            }
            iVar40 = iVar40 >> (-uVar17 & 0xff);
          }
          else {
            if (0x3e < (int)uVar20) {
              uVar20 = 0x3f;
            }
            local_3a4 = local_3a4 >> (uVar20 & 0xff);
          }
          iVar41 = SignedSaturate(local_3a4 - iVar40,0x20);
          SignedDoesSaturate(iVar41,0x20);
          if (0 < iVar41) {
            local_368 = (short)((uint)iVar22 >> 0x10);
            iVar28 = (int)local_368;
            local_36c = (short)(uVar30 >> 0x10);
            iVar31 = (int)local_36c;
            uVar2 = SignedSaturate(0x30000,0x20);
            SignedDoesSaturate(uVar2,0x20);
            sVar25 = (short)((uint)uVar2 >> 0x10);
            sVar1 = SignedSaturate(-sVar25,0x10);
            SignedSaturate(-(sVar25 >> 0xf),0x10);
            iVar8 = local_374 << 0x10;
            iVar38 = (int)sVar1;
            iVar34 = local_370 << 0x10;
            iVar21 = local_374;
            iVar42 = local_370;
          }
          iVar41 = SignedSaturate(DAT_14017864[3] * iVar27 * 2,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(DAT_14017864[3] * iVar14 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar41 = SignedSaturate(iVar41 + iVar22,0x20);
          SignedDoesSaturate(iVar41,0x20);
          iVar22 = SignedSaturate(*(short *)(DAT_14017be0 + 6) * iVar24 * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar7 = SignedSaturate(*(short *)(DAT_14017be0 + 6) * iVar15 * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar7 = SignedSaturate((iVar7 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar22 = SignedSaturate(iVar22 + iVar7,0x20);
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
          sVar1 = (short)(uVar30 >> 0x10);
          iVar22 = SignedSaturate((int)sVar1 * (int)sVar1 * 2,0x20);
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
          iVar7 = SignedSaturate(iVar41 - iVar34,0x20);
          SignedDoesSaturate(iVar7,0x20);
          iVar14 = 0;
          if (iVar7 >> 0x10 != 0) {
            iVar7 = (iVar7 >> 0x10) << 1;
            iVar14 = SignedSaturate(iVar7,0xf);
            SignedDoesSaturate(iVar7,0xf);
            iVar14 = iVar14 << 0x10;
          }
          uVar30 = SignedSaturate(iVar14 + iVar8,0x20);
          SignedDoesSaturate(uVar30,0x20);
          iVar7 = SignedSaturate((uVar30 & 0xffff0000) - iVar23,0x20);
          SignedDoesSaturate(iVar7,0x20);
          uVar30 = iVar7 >> 0x10;
          if (iVar7 < 0) {
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
          iVar7 = SignedSaturate(local_3c0 - local_3d0,0x20);
          SignedDoesSaturate(iVar7,0x20);
          local_3c8 = (short *)iVar31;
          local_3c4 = iVar28;
          if (0 < iVar7) {
            iVar28 = (int)(short)((uint)iVar22 >> 0x10);
            iVar31 = (int)(short)(uVar19 >> 0x10);
            uVar2 = SignedSaturate(0x40000,0x20);
            SignedDoesSaturate(uVar2,0x20);
            sVar25 = (short)((uint)uVar2 >> 0x10);
            sVar1 = SignedSaturate(-sVar25,0x10);
            SignedSaturate(-(sVar25 >> 0xf),0x10);
            iVar38 = (int)sVar1;
            iVar8 = iVar23;
            iVar34 = iVar41;
            iVar21 = local_3bc;
            iVar42 = local_3a4;
            local_3c8 = (short *)((int)uVar19 >> 0x10);
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
        uVar2 = SignedSaturate(iVar22 + iVar38 * 0x10000,0x20);
        SignedDoesSaturate(uVar2,0x20);
        *local_3b0 = (short)((uint)uVar2 >> 0x10);
        *local_3b8 = (short)iVar28;
        local_318[iVar5] = (short)iVar42;
        local_2d0[iVar5] = (short)iVar21;
        local_2f4[iVar5] = (short)iVar31;
        iVar38 = SignedSaturate(local_3c4 * local_398 * 2,0x20);
        SignedDoesSaturate(iVar38,0x20);
        local_3d0 = local_3a0;
        iVar41 = SignedSaturate((int)local_3c8 * local_3a0 * 2,0x20);
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
          iVar38 = iVar38 >> (uVar30 & 0xff);
        }
        iVar41 = SignedSaturate(iVar38 - iVar41,0x20);
        SignedDoesSaturate(iVar41,0x20);
        iVar38 = local_39c * 0x10000;
        psVar39 = (short *)local_398;
        local_3cc = local_394 * 0x10000;
        if (0 < iVar41) {
          local_3d0 = local_3c4;
          local_378 = local_38c;
          iVar38 = iVar34;
          psVar39 = local_3c8;
          local_3cc = iVar8;
          local_3a0 = iVar28;
          local_39c = iVar42;
          local_398 = iVar31;
          local_394 = iVar21;
        }
        iVar5 = iVar5 + 1;
        local_38c = (int)(short)iVar5;
        local_3b8 = local_3b8 + 1;
        local_3b0 = local_3b0 + 1;
        local_3ac = local_3ac + 1;
        if ((int)local_3d4 <= local_38c) {
          local_37c = local_378;
          local_3c8 = psVar39;
          goto LAB_14017c46;
        }
      } while( true );
    }
    iVar5 = SignedSaturate(local_2ac[0] * 0x10000 + 0x10000,0x20);
    SignedDoesSaturate(iVar5,0x20);
    iVar5 = (iVar5 >> 0x10) << 3;
    uVar2 = SignedSaturate(iVar5,0xf);
    SignedDoesSaturate(iVar5,0xf);
    local_3a0 = (int)(short)uVar2;
  }
  else {
LAB_1401797c:
    psVar10 = asStack_26c;
    piVar9 = aiStack_150 + 1;
    do {
      psVar10 = psVar10 + 1;
      uVar2 = SignedSaturate(*psVar10 * -0x10000,0x20);
      SignedDoesSaturate(uVar2,0x20);
      piVar9 = piVar9 + 1;
      iVar5 = *piVar9;
      *psVar10 = (short)((uint)uVar2 >> 0x10);
      iVar5 = SignedSaturate(-iVar5,0x20);
      SignedDoesSaturate(iVar5,0x20);
      *piVar9 = iVar5;
    } while (asStack_26c + 0x23 != psVar10);
    uVar30 = 0x30000;
    iVar5 = SignedSaturate(0xffe10000,0x20);
    SignedDoesSaturate(iVar5,0x20);
    if (iVar5 < 0) {
      iVar5 = SignedSaturate(0xfff90000,0x20);
      SignedDoesSaturate(iVar5,0x20);
      if (iVar5 < 0) {
        iVar5 = 0;
        iVar38 = 3;
        local_3c8 = (short *)0x0;
        do {
          local_3d4 = local_3c8;
          if (0 < aiStack_150[iVar38 + 2]) {
            iVar41 = SignedSaturate((int)asStack_1dc[iVar38 + -0x80000000] *
                                    (int)asStack_26c[iVar38 + -0x7fffffff] * 2,0x20);
            SignedDoesSaturate(iVar41,0x20);
            local_3d0 = SignedSaturate((int)asStack_26c[iVar38 + -0x80000000] *
                                       (int)asStack_1dc[iVar38 + -0x7fffffff] * 2,0x20);
            SignedDoesSaturate(local_3d0,0x20);
            iVar22 = SignedSaturate(asStack_224[iVar38 + -0x7fffffff] * 0x10000 +
                                    asStack_224[iVar38 + -0x80000000] * -0x10000,0x20);
            SignedDoesSaturate(iVar22,0x20);
            iVar23 = 0;
            if (iVar22 >> 0x10 != 0) {
              iVar22 = (iVar22 >> 0x10) << 1;
              iVar23 = SignedSaturate(iVar22,0xf);
              SignedDoesSaturate(iVar22,0xf);
              iVar23 = iVar23 << 0x10;
            }
            uVar19 = SignedSaturate(iVar23 + asStack_194[iVar38 + -0x80000000] * 0x10000,0x20);
            SignedDoesSaturate(uVar19,0x20);
            iVar22 = SignedSaturate((uVar19 & 0xffff0000) +
                                    asStack_194[iVar38 + -0x7fffffff] * -0x10000,0x20);
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
              iVar41 = SignedSaturate((int)asStack_1dc[iVar38 + -0x7ffffffe] *
                                      (int)asStack_26c[iVar38 + -0x7fffffff] * 2,0x20);
              SignedDoesSaturate(iVar41,0x20);
              iVar22 = SignedSaturate((int)asStack_26c[iVar38 + -0x7ffffffe] *
                                      (int)asStack_1dc[iVar38 + -0x7fffffff] * 2,0x20);
              SignedDoesSaturate(iVar22,0x20);
              iVar23 = SignedSaturate(asStack_224[iVar38 + -0x7fffffff] * 0x10000 +
                                      asStack_224[iVar38 + -0x7ffffffe] * -0x10000,0x20);
              SignedDoesSaturate(iVar23,0x20);
              iVar21 = 0;
              if (iVar23 >> 0x10 != 0) {
                iVar23 = (iVar23 >> 0x10) << 1;
                iVar21 = SignedSaturate(iVar23,0xf);
                SignedDoesSaturate(iVar23,0xf);
                iVar21 = iVar21 << 0x10;
              }
              uVar19 = SignedSaturate(iVar21 + asStack_194[iVar38 + -0x7ffffffe] * 0x10000,0x20);
              SignedDoesSaturate(uVar19,0x20);
              iVar23 = SignedSaturate((uVar19 & 0xffff0000) +
                                      asStack_194[iVar38 + -0x7fffffff] * -0x10000,0x20);
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
                local_2ac[(int)local_3c8] = (short)iVar38;
                iVar5 = SignedSaturate(iVar5 + 0x10000,0x20);
                SignedDoesSaturate(iVar5,0x20);
                local_3d4 = (short *)(iVar5 >> 0x10);
              }
            }
          }
          uVar30 = SignedSaturate(uVar30 + 0x10000,0x20);
          SignedDoesSaturate(uVar30,0x20);
          iVar38 = (int)uVar30 >> 0x10;
          uVar30 = uVar30 & 0xffff0000;
          iVar5 = SignedSaturate(uVar30 - 0x220000,0x20);
          SignedDoesSaturate(iVar5,0x20);
          if (-1 < iVar5) break;
          local_3c8 = local_3d4;
          iVar5 = (int)local_3d4 * 0x10000;
          iVar41 = SignedSaturate(iVar5 + -0x70000,0x20);
          SignedDoesSaturate(iVar41,0x20);
        } while (iVar41 < 0);
        if (local_3d4 != (short *)0x0) goto LAB_14016e10;
      }
    }
    uVar2 = SignedSaturate(0x20,0xf);
    SignedDoesSaturate(0x20,0xf);
    local_3a0 = (int)(short)uVar2;
  }
LAB_14017ff0:
  do {
    do {
      do {
        if (*DAT_1401822c == local_2c) {
          return local_3a0;
        }
        FUN_1401cfd0();
        psVar10 = extraout_r2;
LAB_1401820a:
        iVar38 = 0;
        local_3c8 = (short *)0x1;
        local_3d0 = DAT_14018230;
        local_3cc = 0;
        local_37c = 0;
LAB_14017c46:
        psVar39 = local_3d4;
        local_3b4 = local_360;
        sVar1 = local_3b4[local_37c];
        uVar30 = (uint)sVar1;
        iVar5 = SignedSaturate(local_390 + -0x10000,0x20);
        SignedDoesSaturate(iVar5,0x20);
        iVar5 = (int)local_3b4[iVar5 >> 0x10];
        if ((int)psVar10 < 1) {
          local_378 = -1;
          local_384._0_2_ = 1;
          local_394 = -0x10000;
          local_38c = -0x8000;
          local_388 = 0;
          local_380 = 0;
        }
        else {
          local_384 = 1;
          iVar22 = 0;
          local_3c4 = -1;
          local_38c = DAT_14017ed8;
          local_380 = 0;
          local_388 = 0;
          psVar10 = local_3b4;
          iVar41 = 0;
          do {
            while( true ) {
              iVar23 = iVar41;
              iVar41 = SignedSaturate(*psVar10 * 0x10000 + param_2 * -0x10000,0x20);
              SignedDoesSaturate(iVar41,0x20);
              uVar19 = iVar41 >> 0x10;
              if ((int)uVar19 < 0) {
                sVar25 = (short)((uint)iVar41 >> 0x10);
                uVar4 = SignedSaturate(-sVar25,0x10);
                SignedSaturate(-(sVar25 >> 0xf),0x10);
                uVar19 = (uint)uVar4;
              }
              iVar41 = SignedSaturate((short)uVar19 * 0x10000 + (param_2 >> 2) * -0x10000,0x20);
              SignedDoesSaturate(iVar41,0x20);
              if (iVar41 < 0x10000) break;
LAB_14017c92:
              iVar22 = iVar22 + 1;
              psVar10 = psVar10 + 1;
              iVar41 = (int)(short)iVar22;
              if ((int)local_3d4 <= (int)(short)iVar22) goto LAB_14017d4c;
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
            iVar7 = 0;
            if (iVar42 >> 0x10 != 0) {
              iVar42 = (iVar42 >> 0x10) << 1;
              iVar7 = SignedSaturate(iVar42,0xf);
              SignedDoesSaturate(iVar42,0xf);
              iVar7 = iVar7 << 0x10;
            }
            uVar19 = SignedSaturate(iVar7 + local_380 * 0x10000,0x20);
            SignedDoesSaturate(uVar19,0x20);
            iVar7 = (int)local_2d0[iVar22];
            iVar42 = SignedSaturate((uVar19 & 0xffff0000) + iVar7 * -0x10000,0x20);
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
            if (iVar41 < 1) goto LAB_14017c92;
            iVar22 = iVar22 + 1;
            psVar10 = psVar10 + 1;
            iVar41 = (int)(short)iVar22;
            local_3c4 = iVar23;
            local_38c = iVar24;
            local_388 = iVar15;
            local_384 = iVar14;
            local_380 = iVar7;
          } while ((int)(short)iVar22 < (int)local_3d4);
LAB_14017d4c:
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
          iVar22 = SignedSaturate(iVar22 + iVar5 * -0x10000,0x20);
          SignedDoesSaturate(iVar22,0x20);
          if (-1 < iVar22) break;
          iVar23 = iVar41 * 0x10000;
          uVar19 = SignedSaturate(iVar23 - local_394,0x20);
          SignedDoesSaturate(uVar19,0x20);
          iVar22 = 0x5d71;
          if (uVar19 >> 0x10 == 0) {
            iVar22 = 0x3333;
          }
          iVar21 = SignedSaturate((int)local_3c8 * (int)local_33c[iVar41] * 2,0x20);
          SignedDoesSaturate(iVar21,0x20);
          iVar22 = SignedSaturate(iVar22 * local_2f4[iVar41] * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar22 = SignedSaturate(local_3d0 * (iVar22 >> 0x10) * 2,0x20);
          SignedDoesSaturate(iVar22,0x20);
          iVar42 = SignedSaturate(local_318[iVar41] * 0x10000 - iVar38,0x20);
          SignedDoesSaturate(iVar42,0x20);
          iVar7 = 0;
          if (iVar42 >> 0x10 != 0) {
            iVar42 = (iVar42 >> 0x10) << 1;
            iVar7 = SignedSaturate(iVar42,0xf);
            SignedDoesSaturate(iVar42,0xf);
            iVar7 = iVar7 << 0x10;
          }
          uVar19 = SignedSaturate(iVar7 + local_3cc,0x20);
          SignedDoesSaturate(uVar19,0x20);
          iVar41 = SignedSaturate((uVar19 & DAT_14017edc) + local_2d0[iVar41] * -0x10000,0x20);
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
            psVar10 = (short *)(iVar41 >> 0x10);
            if (local_3a0 == 0) {
              iVar41 = 0;
              local_3b8 = (short *)0x0;
            }
            else {
              iVar22 = SignedSaturate(local_3a0 << 1,0xf);
              SignedDoesSaturate(local_3a0 << 1,0xf);
              iVar41 = (int)(short)iVar22;
              local_3b8 = (short *)(iVar22 << 0x10);
            }
            iVar22 = SignedSaturate((int)local_3b8 + iVar5 * -0x10000,0x20);
            SignedDoesSaturate(iVar22,0x20);
            if (iVar22 < 0x10000) {
              local_3bc = 0;
LAB_14017e8c:
              uVar19 = SignedSaturate((iVar41 * 0x7ae + 0x4000) * 2,0x20);
              SignedDoesSaturate(uVar19,0x20);
              uVar20 = SignedSaturate((int)local_3b8 - (uVar19 & DAT_14017edc),0x20);
              SignedDoesSaturate(uVar20,0x20);
              uVar19 = SignedSaturate((int)local_3b8 + (uVar19 & DAT_14017edc),0x20);
              SignedDoesSaturate(uVar19,0x20);
              if ((int)psVar10 < (int)psVar39) {
                local_3d4 = (short *)(uVar19 & DAT_14017edc);
                iVar41 = (int)psVar10 << 1;
                psVar32 = local_2d0 + (int)psVar10;
                psVar29 = local_2f4 + (int)psVar10;
                psVar35 = local_3b4 + (int)psVar10;
                do {
                  iVar22 = SignedSaturate(*psVar35 * 0x10000 - (int)local_3d4,0x20);
                  SignedDoesSaturate(iVar22,0x20);
                  if (0xffff < iVar22) break;
                  iVar22 = SignedSaturate(*psVar35 * 0x10000 - (uVar20 & DAT_14017edc),0x20);
                  SignedDoesSaturate(iVar22,0x20);
                  if (0xffff < iVar22) {
                    iVar22 = SignedSaturate((int)local_3c8 *
                                            (int)*(short *)((int)local_33c + iVar41) * 2,0x20);
                    SignedDoesSaturate(iVar22,0x20);
                    iVar21 = SignedSaturate(local_3bc * 0x10000 + -0x40000,0x20);
                    SignedDoesSaturate(iVar21,0x20);
                    if (iVar21 < 0) {
                      iVar21 = (int)*(short *)(DAT_14018228 + local_3bc * 2);
                    }
                    else {
                      iVar21 = 0x2666;
                    }
                    iVar21 = SignedSaturate(*psVar29 * iVar21 * 2,0x20);
                    SignedDoesSaturate(iVar21,0x20);
                    iVar21 = SignedSaturate(local_3d0 * (iVar21 >> 0x10) * 2,0x20);
                    SignedDoesSaturate(iVar21,0x20);
                    iVar42 = SignedSaturate(*(short *)((int)local_318 + iVar41) * 0x10000 - iVar38,
                                            0x20);
                    SignedDoesSaturate(iVar42,0x20);
                    iVar7 = 0;
                    if (iVar42 >> 0x10 != 0) {
                      iVar42 = (iVar42 >> 0x10) << 1;
                      iVar7 = SignedSaturate(iVar42,0xf);
                      SignedDoesSaturate(iVar42,0xf);
                      iVar7 = iVar7 << 0x10;
                    }
                    uVar19 = SignedSaturate(iVar7 + local_3cc,0x20);
                    SignedDoesSaturate(uVar19,0x20);
                    iVar42 = SignedSaturate((uVar19 & DAT_14017edc) + *psVar32 * -0x10000,0x20);
                    SignedDoesSaturate(iVar42,0x20);
                    uVar19 = iVar42 >> 0x10;
                    if (iVar42 < 0) {
                      if ((int)uVar19 < -0x3f) {
                        uVar19 = 0xffffffc1;
                      }
                      iVar22 = SignedSaturate(iVar22 - (iVar21 >> (-uVar19 & 0xff)),0x20);
                      SignedDoesSaturate(iVar22,0x20);
                    }
                    else {
                      if (0x3e < (int)uVar19) {
                        uVar19 = 0x3f;
                      }
                      iVar22 = SignedSaturate((iVar22 >> (uVar19 & 0xff)) - iVar21,0x20);
                      SignedDoesSaturate(iVar22,0x20);
                    }
                    if (0 < iVar22) goto LAB_14017fb4;
                  }
                  psVar10 = (short *)(int)(short)((short)psVar10 + 1);
                  psVar32 = psVar32 + 1;
                  psVar29 = psVar29 + 1;
                  iVar41 = iVar41 + 2;
                  psVar35 = psVar35 + 1;
                  if (psVar39 == psVar10) break;
                } while( true );
              }
              uVar19 = SignedSaturate(0xffff0000,0x20);
              SignedDoesSaturate(uVar19,0x20);
              goto joined_r0x14018016;
            }
LAB_14017fde:
            uVar19 = SignedSaturate(0,0x20);
            SignedDoesSaturate(uVar19,0x20);
joined_r0x14018016:
            if (uVar19 >> 0x10 == 0) goto LAB_14017ff0;
          }
          uVar19 = SignedSaturate(iVar23 + 0x10000,0x20);
          SignedDoesSaturate(uVar19,0x20);
          iVar41 = (int)uVar19 >> 0x10;
          uVar19 = SignedSaturate((uVar19 & DAT_14017edc) - local_390,0x20);
          SignedDoesSaturate(uVar19,0x20);
        } while (uVar19 >> 0x10 != 0);
        uVar19 = SignedSaturate(local_394 + 0x10000,0x20);
        SignedDoesSaturate(uVar19,0x20);
        local_3a0 = uVar30;
      } while (uVar19 >> 0x10 == 0);
      iVar5 = SignedSaturate(local_394 + local_37c * -0x10000,0x20);
      SignedDoesSaturate(iVar5,0x20);
    } while (iVar5 >> 0x10 == 0);
    if (iVar5 >> 0x10 < 0) {
      iVar5 = SignedSaturate((int)local_3c8 * local_38c * 2,0x20);
      SignedDoesSaturate(iVar5,0x20);
      iVar41 = SignedSaturate((short)local_384 * 0x6e14,0x20);
      SignedDoesSaturate(iVar41,0x20);
      iVar41 = SignedSaturate(local_3d0 * (iVar41 >> 0x10) * 2,0x20);
      SignedDoesSaturate(iVar41,0x20);
      iVar38 = SignedSaturate(local_388 * 0x10000 - iVar38,0x20);
      SignedDoesSaturate(iVar38,0x20);
      iVar22 = 0;
      if (iVar38 >> 0x10 != 0) {
        iVar38 = (iVar38 >> 0x10) << 1;
        iVar22 = SignedSaturate(iVar38,0xf);
        SignedDoesSaturate(iVar38,0xf);
        iVar22 = iVar22 << 0x10;
      }
      uVar19 = SignedSaturate(iVar22 + local_3cc,0x20);
      SignedDoesSaturate(uVar19,0x20);
      iVar38 = SignedSaturate((uVar19 & 0xffff0000) + local_380 * -0x10000,0x20);
      SignedDoesSaturate(iVar38,0x20);
      uVar19 = iVar38 >> 0x10;
      if (iVar38 < 0) {
        uVar20 = 0xffffffc1;
        if (-0x3f < (int)uVar19) {
          uVar20 = uVar19;
        }
        iVar41 = iVar41 >> (-uVar20 & 0xff);
      }
      else {
        if (0x3e < (int)uVar19) {
          uVar19 = 0x3f;
        }
        iVar5 = iVar5 >> (uVar19 & 0xff);
      }
      iVar5 = SignedSaturate(iVar5 - iVar41,0x20);
      SignedDoesSaturate(iVar5,0x20);
      if (0 < iVar5) {
        uVar19 = (uint)local_3b4[local_378];
        iVar5 = SignedSaturate(0x88,0xf);
        SignedDoesSaturate(0x88,0xf);
        iVar38 = uVar19 * 0x10000;
        iVar5 = SignedSaturate(iVar38 + iVar5 * -0x10000,0x20);
        SignedDoesSaturate(iVar5,0x20);
        local_3a0 = uVar19;
        if (iVar5 < 0x10000) {
          uVar20 = SignedSaturate((int)*DAT_1401838c * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(uVar20,0x20);
          uVar17 = SignedSaturate((((int)uVar20 >> 0x10) * 0xc29 + 0x4000) * 2,0x20);
          SignedDoesSaturate(uVar17,0x20);
          uVar3 = SignedSaturate((uVar20 & DAT_14018390) - (uVar17 & DAT_14018390),0x20);
          SignedDoesSaturate(uVar3,0x20);
          uVar20 = SignedSaturate((uVar20 & DAT_14018390) + (uVar17 & DAT_14018390),0x20);
          SignedDoesSaturate(uVar20,0x20);
          iVar5 = SignedSaturate(iVar38 - (uVar3 & DAT_14018390),0x20);
          SignedDoesSaturate(iVar5,0x20);
          if (0xffff < iVar5) {
            iVar5 = SignedSaturate(iVar38 - (uVar20 & DAT_14018390),0x20);
            SignedDoesSaturate(iVar5,0x20);
            if (iVar5 < 0) goto LAB_14017ff0;
          }
          uVar20 = SignedSaturate((int)DAT_1401838c[1] * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(uVar20,0x20);
          uVar17 = SignedSaturate((((int)uVar20 >> 0x10) * 0xc29 + 0x4000) * 2,0x20);
          SignedDoesSaturate(uVar17,0x20);
          uVar3 = SignedSaturate((uVar20 & DAT_14018390) - (uVar17 & DAT_14018390),0x20);
          SignedDoesSaturate(uVar3,0x20);
          uVar20 = SignedSaturate((uVar20 & DAT_14018390) + (uVar17 & DAT_14018390),0x20);
          SignedDoesSaturate(uVar20,0x20);
          iVar5 = SignedSaturate(iVar38 - (uVar3 & DAT_14018390),0x20);
          SignedDoesSaturate(iVar5,0x20);
          if (0xffff < iVar5) {
            iVar5 = SignedSaturate(iVar38 - (uVar20 & DAT_14018390),0x20);
            SignedDoesSaturate(iVar5,0x20);
            if (iVar5 < 0) goto LAB_14017ff0;
          }
          uVar20 = SignedSaturate((int)DAT_1401838c[2] * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(uVar20,0x20);
          uVar17 = SignedSaturate((((int)uVar20 >> 0x10) * 0xc29 + 0x4000) * 2,0x20);
          SignedDoesSaturate(uVar17,0x20);
          uVar3 = SignedSaturate((uVar20 & DAT_14018390) - (uVar17 & DAT_14018390),0x20);
          SignedDoesSaturate(uVar3,0x20);
          uVar20 = SignedSaturate((uVar20 & DAT_14018390) + (uVar17 & DAT_14018390),0x20);
          SignedDoesSaturate(uVar20,0x20);
          iVar5 = SignedSaturate(iVar38 - (uVar3 & DAT_14018390),0x20);
          SignedDoesSaturate(iVar5,0x20);
          if (0xffff < iVar5) {
            iVar5 = SignedSaturate(iVar38 - (uVar20 & DAT_14018390),0x20);
            SignedDoesSaturate(iVar5,0x20);
            if (iVar5 < 0) goto LAB_14017ff0;
          }
          uVar20 = SignedSaturate((int)DAT_1401838c[3] * (int)sVar1 * 2,0x20);
          SignedDoesSaturate(uVar20,0x20);
          uVar17 = SignedSaturate((((int)uVar20 >> 0x10) * 0xc29 + 0x4000) * 2,0x20);
          SignedDoesSaturate(uVar17,0x20);
          uVar3 = SignedSaturate((uVar20 & DAT_14018390) - (uVar17 & DAT_14018390),0x20);
          SignedDoesSaturate(uVar3,0x20);
          uVar20 = SignedSaturate((uVar20 & DAT_14018390) + (uVar17 & DAT_14018390),0x20);
          SignedDoesSaturate(uVar20,0x20);
          iVar5 = SignedSaturate(iVar38 - (uVar3 & DAT_14018390),0x20);
          SignedDoesSaturate(iVar5,0x20);
          local_3a0 = uVar30;
          if (0xffff < iVar5) {
            iVar5 = SignedSaturate(iVar38 - (uVar20 & DAT_14018390),0x20);
            SignedDoesSaturate(iVar5,0x20);
            local_3a0 = uVar30 & ~(iVar5 >> 0x20);
            if (iVar5 < 0) {
              local_3a0 = uVar19;
            }
          }
        }
      }
      goto LAB_14017ff0;
    }
    iVar5 = SignedSaturate((int)local_3c8 * local_38c * 2,0x20);
    SignedDoesSaturate(iVar5,0x20);
    iVar41 = SignedSaturate((short)local_384 * 0xc7ae,0x20);
    SignedDoesSaturate(iVar41,0x20);
    iVar41 = SignedSaturate(local_3d0 * (iVar41 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar41,0x20);
    iVar38 = SignedSaturate(local_388 * 0x10000 - iVar38,0x20);
    SignedDoesSaturate(iVar38,0x20);
    iVar22 = 0;
    if (iVar38 >> 0x10 != 0) {
      iVar38 = (iVar38 >> 0x10) << 1;
      iVar22 = SignedSaturate(iVar38,0xf);
      SignedDoesSaturate(iVar38,0xf);
      iVar22 = iVar22 << 0x10;
    }
    uVar30 = SignedSaturate(iVar22 + local_3cc,0x20);
    SignedDoesSaturate(uVar30,0x20);
    iVar38 = SignedSaturate((uVar30 & 0xffff0000) + local_380 * -0x10000,0x20);
    SignedDoesSaturate(iVar38,0x20);
    uVar30 = iVar38 >> 0x10;
    if (iVar38 < 0) {
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
      iVar5 = iVar5 >> (uVar30 & 0xff);
    }
    iVar5 = SignedSaturate(iVar5 - iVar41,0x20);
    SignedDoesSaturate(iVar5,0x20);
    if (0 < iVar5) {
      local_3a0 = (int)local_3b4[local_378];
    }
  } while( true );
LAB_14017fb4:
  local_3bc = SignedSaturate(local_3bc * 0x10000 + 0x10000,0x20);
  SignedDoesSaturate(local_3bc,0x20);
  local_3bc = local_3bc >> 0x10;
  uVar19 = SignedSaturate((int)local_3b8 + local_3a0 * 0x10000,0x20);
  SignedDoesSaturate(uVar19,0x20);
  iVar41 = (int)uVar19 >> 0x10;
  local_3b8 = (short *)(uVar19 & DAT_14017edc);
  iVar22 = SignedSaturate((int)local_3b8 + iVar5 * -0x10000,0x20);
  SignedDoesSaturate(iVar22,0x20);
  if (0xffff < iVar22) goto LAB_14017fde;
  goto LAB_14017e8c;
}


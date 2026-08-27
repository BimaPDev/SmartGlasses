/* FUN_2c024a18 @ 0x2c024a18 */

void FUN_2c024a18(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined2 uVar12;
  int *piVar13;
  int *piVar14;
  short *psVar15;
  short *psVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  short *psVar19;
  uint uVar20;
  short *psVar21;
  int iVar22;
  undefined2 *puVar23;
  undefined4 *puVar25;
  int iVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  undefined4 *puVar30;
  undefined2 *puVar31;
  short *psVar32;
  uint *puVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  byte bVar37;
  short local_250;
  undefined2 local_24e;
  undefined2 local_24c;
  undefined2 local_24a;
  undefined2 local_248;
  undefined2 local_246;
  undefined2 local_244;
  undefined2 local_242;
  undefined2 local_240;
  uint local_23c;
  uint local_238 [4];
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  undefined1 auStack_218 [130];
  short sStack_196;
  short local_194 [60];
  undefined4 local_11c;
  short asStack_a6 [53];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  int local_2c [2];
  undefined2 *puVar24;
  
  local_2c[0] = *DAT_2c024d0c;
  puVar25 = (undefined4 *)(param_3 + 0x354);
  if (param_2 == (undefined4 *)(param_3 + 0x356)) {
    puVar18 = puVar25;
    do {
      puVar30 = (undefined4 *)((int)puVar18 + 2);
      puVar25 = (undefined4 *)((int)puVar25 + 2);
      *(undefined2 *)puVar25 = *(undefined2 *)puVar18;
      puVar18 = puVar30;
    } while (puVar30 != (undefined4 *)(param_3 + 0x444));
  }
  else {
    puVar18 = param_2;
    do {
      puVar30 = puVar18 + 1;
      *puVar18 = *puVar25;
      puVar18 = puVar30;
      puVar25 = puVar25 + 1;
    } while (puVar30 != param_2 + 0x3c);
  }
  piVar27 = DAT_2c0250a4;
  if (param_4 != 0) {
    psVar19 = &sStack_196;
    psVar32 = DAT_2c0250a0 + 0x78;
    psVar15 = (short *)(param_3 + 0x352);
    psVar16 = DAT_2c0250a0;
    do {
      psVar21 = psVar16 + 1;
      psVar15 = psVar15 + 1;
      uVar17 = SignedSaturate(((int)*psVar15 * (int)*psVar16 + 0x4000) * 2,0x20);
      bVar37 = SignedDoesSaturate(uVar17,0x20);
      bVar35 = psVar21 <= psVar32;
      bVar36 = SBORROW4((int)psVar32,(int)psVar21);
      iVar26 = (int)psVar32 - (int)psVar21;
      bVar34 = psVar32 == psVar21;
      psVar19 = psVar19 + 1;
      *psVar19 = (short)((uint)uVar17 >> 0x10);
      psVar16 = psVar21;
    } while (!bVar34);
    do {
      iVar26 = (uint)(byte)((iVar26 < 0) << 4 | bVar34 << 3 | bVar35 << 2 | bVar36 << 1 | bVar37) <<
               0x1b;
      *piVar27 = iVar26;
      *(byte *)((int)piVar27 + 3) = (byte)((uint)iVar26 >> 0x18) & 0xf7;
      local_23c = 1;
      psVar15 = &sStack_196;
      do {
        psVar15 = psVar15 + 1;
        local_23c = SignedSaturate(local_23c + (int)*psVar15 * (int)*psVar15,0x20);
        bVar37 = SignedDoesSaturate(local_23c,0x20);
      } while (psVar15 != asStack_a6);
      bVar34 = -1 < (int)((uint)bVar37 << 0x1f);
      bVar35 = true;
      bVar36 = false;
      iVar26 = 0;
      if (!bVar34) {
        psVar15 = &sStack_196;
        do {
          psVar15 = psVar15 + 1;
          bVar35 = asStack_a6 <= psVar15;
          bVar36 = SBORROW4((int)psVar15,(int)asStack_a6);
          iVar26 = (int)psVar15 - (int)asStack_a6;
          bVar34 = psVar15 == asStack_a6;
          *psVar15 = *psVar15 >> 2;
        } while (!bVar34);
      }
      uVar28 = (uint)(byte)((iVar26 < 0) << 4 | bVar34 << 3 | bVar35 << 2 | bVar36 << 1 | bVar37);
      *piVar27 = uVar28 << 0x1b;
      iVar26 = (int)(char)((int)(uVar28 << 0x1f) >> 0x1f);
      bVar34 = iVar26 == 0;
      bVar35 = true;
      bVar36 = false;
    } while (!bVar34);
    uVar28 = local_23c ^ local_23c << 1;
    if (uVar28 == 0) {
      uVar28 = 0;
    }
    else {
      uVar28 = LZCOUNT(uVar28);
      local_23c = local_23c << uVar28;
    }
    puVar33 = &local_23c;
    iVar26 = 1;
    psVar15 = local_194;
    do {
      psVar15 = psVar15 + 1;
      uVar20 = (int)*psVar15 * (int)local_194[0];
      iVar22 = SignedSaturate(iVar26 * -0x10000 + 0x780000,0x20);
      SignedDoesSaturate(iVar22,0x20);
      if (0x1ffff < iVar22) {
        psVar16 = psVar15;
        psVar19 = local_194;
        do {
          psVar19 = psVar19 + 1;
          psVar16 = psVar16 + 1;
          uVar20 = SignedSaturate(uVar20 + (int)*psVar19 * (int)*psVar16,0x20);
          SignedDoesSaturate(uVar20,0x20);
        } while (psVar19 != local_194 + ((iVar22 >> 0x10) - 2U & 0xffff) + 1);
      }
      if (uVar28 != 0) {
        uVar29 = uVar20 ^ uVar20 << 1;
        if (((uVar29 == 0) || ((uint)LZCOUNT(uVar29) < uVar28)) && (uVar20 != 0)) {
          if ((int)uVar20 < 0) {
            iVar22 = 0;
          }
          else {
            iVar22 = 0x7fffffff;
          }
          uVar20 = SignedSaturate(iVar22 * 2,0x20);
          SignedDoesSaturate(uVar20,0x20);
        }
        else {
          uVar20 = uVar20 << uVar28;
        }
      }
      iVar26 = iVar26 + 1;
      puVar33 = puVar33 + 1;
      *puVar33 = uVar20;
    } while (iVar26 != 9);
    iVar22 = (int)local_238[0] >> 0x10;
    iVar26 = SignedSaturate(iVar22 * 0x8000,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar17 = SignedSaturate(((int)local_238[0] >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar17,0x20);
    iVar26 = SignedSaturate(iVar22 * *DAT_2c0250a8 * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate(iVar22 * *DAT_2c0250ac * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar26 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate((int)(short)uVar17 * (int)*DAT_2c0250a8 * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    local_238[0] = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(local_238[0],0x20);
    iVar22 = (int)local_238[1] >> 0x10;
    iVar26 = SignedSaturate(iVar22 * 0x8000,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar17 = SignedSaturate(((int)local_238[1] >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar17,0x20);
    iVar26 = SignedSaturate(iVar22 * DAT_2c0250a8[1] * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate(iVar22 * DAT_2c0250ac[1] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar26 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate((int)(short)uVar17 * (int)DAT_2c0250a8[1] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    local_238[1] = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(local_238[1],0x20);
    iVar22 = (int)local_238[2] >> 0x10;
    iVar26 = SignedSaturate(iVar22 * 0x8000,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar17 = SignedSaturate(((int)local_238[2] >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar17,0x20);
    iVar26 = SignedSaturate(iVar22 * DAT_2c0250a8[2] * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate(iVar22 * DAT_2c0250ac[2] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar26 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate((int)(short)uVar17 * (int)DAT_2c0250a8[2] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    local_238[2] = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(local_238[2],0x20);
    iVar22 = (int)local_238[3] >> 0x10;
    iVar26 = SignedSaturate(iVar22 * 0x8000,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar17 = SignedSaturate(((int)local_238[3] >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar17,0x20);
    iVar26 = SignedSaturate(iVar22 * DAT_2c0250a8[3] * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate(iVar22 * DAT_2c0250ac[3] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar26 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate((int)(short)uVar17 * (int)DAT_2c0250a8[3] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    local_238[3] = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(local_238[3],0x20);
    iVar22 = local_228 >> 0x10;
    iVar26 = SignedSaturate(iVar22 * 0x8000,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar17 = SignedSaturate((local_228 >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar17,0x20);
    iVar26 = SignedSaturate(iVar22 * DAT_2c0250a8[4] * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate(iVar22 * DAT_2c0250ac[4] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar26 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate((int)(short)uVar17 * (int)DAT_2c0250a8[4] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    local_228 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(local_228,0x20);
    iVar22 = local_224 >> 0x10;
    iVar26 = SignedSaturate(iVar22 * 0x8000,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar17 = SignedSaturate((local_224 >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar17,0x20);
    iVar26 = SignedSaturate(iVar22 * DAT_2c0250a8[5] * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate(iVar22 * DAT_2c0250ac[5] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar26 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate((int)(short)uVar17 * (int)DAT_2c0250a8[5] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    local_224 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(local_224,0x20);
    iVar22 = local_220 >> 0x10;
    iVar26 = SignedSaturate(iVar22 * 0x8000,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar17 = SignedSaturate((local_220 >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar17,0x20);
    iVar26 = SignedSaturate(iVar22 * DAT_2c0250a8[6] * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate(iVar22 * DAT_2c0250ac[6] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar26 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate((int)(short)uVar17 * (int)DAT_2c0250a8[6] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    local_220 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(local_220,0x20);
    iVar22 = local_21c >> 0x10;
    iVar26 = SignedSaturate(iVar22 * 0x8000,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar17 = SignedSaturate((local_21c >> 1) - iVar26,0x20);
    SignedDoesSaturate(uVar17,0x20);
    iVar26 = SignedSaturate(iVar22 * DAT_2c0250a8[7] * 2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate(iVar22 * DAT_2c0250ac[7] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar26 = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar22 = SignedSaturate((int)(short)uVar17 * (int)DAT_2c0250a8[7] * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    iVar22 = SignedSaturate((iVar22 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar22,0x20);
    local_21c = SignedSaturate(iVar26 + iVar22,0x20);
    SignedDoesSaturate(local_21c,0x20);
    FUN_2c023048(&local_23c,param_1 + 0x5c2,param_1 + 0x5d4,8);
    iVar26 = DAT_2c0250b0;
    uVar17 = SignedSaturate(((int)*(short *)(param_1 + 0x5c4) * (int)*(short *)(DAT_2c0250b0 + 2) +
                            0x4000) * 2,0x20);
    SignedDoesSaturate(uVar17,0x20);
    sVar2 = *(short *)(DAT_2c0250b0 + 4);
    *(short *)(param_1 + 0x5c4) = (short)((uint)uVar17 >> 0x10);
    uVar17 = SignedSaturate(((int)*(short *)(param_1 + 0x5c6) * (int)sVar2 + 0x4000) * 2,0x20);
    SignedDoesSaturate(uVar17,0x20);
    *(short *)(param_1 + 0x5c6) = (short)((uint)uVar17 >> 0x10);
    uVar17 = SignedSaturate(((int)*(short *)(iVar26 + 6) * (int)*(short *)(param_1 + 0x5c8) + 0x4000
                            ) * 2,0x20);
    SignedDoesSaturate(uVar17,0x20);
    *(short *)(param_1 + 0x5c8) = (short)((uint)uVar17 >> 0x10);
    uVar17 = SignedSaturate(((int)*(short *)(iVar26 + 8) * (int)*(short *)(param_1 + 0x5ca) + 0x4000
                            ) * 2,0x20);
    SignedDoesSaturate(uVar17,0x20);
    *(short *)(param_1 + 0x5ca) = (short)((uint)uVar17 >> 0x10);
    uVar17 = SignedSaturate(((int)*(short *)(iVar26 + 10) * (int)*(short *)(param_1 + 0x5cc) +
                            0x4000) * 2,0x20);
    SignedDoesSaturate(uVar17,0x20);
    *(short *)(param_1 + 0x5cc) = (short)((uint)uVar17 >> 0x10);
    uVar17 = SignedSaturate(((int)*(short *)(iVar26 + 0xc) * (int)*(short *)(param_1 + 0x5ce) +
                            0x4000) * 2,0x20);
    SignedDoesSaturate(uVar17,0x20);
    *(short *)(param_1 + 0x5ce) = (short)((uint)uVar17 >> 0x10);
    uVar17 = SignedSaturate(((int)*(short *)(iVar26 + 0xe) * (int)*(short *)(param_1 + 0x5d0) +
                            0x4000) * 2,0x20);
    SignedDoesSaturate(uVar17,0x20);
    sVar2 = *(short *)(iVar26 + 0x10);
    *(short *)(param_1 + 0x5d0) = (short)((uint)uVar17 >> 0x10);
    uVar17 = SignedSaturate(((int)sVar2 * (int)*(short *)(param_1 + 0x5d2) + 0x4000) * 2,0x20);
    SignedDoesSaturate(uVar17,0x20);
    *(short *)(param_1 + 0x5d2) = (short)((uint)uVar17 >> 0x10);
  }
  sVar2 = *(short *)(param_1 + 0x5d0);
  sVar3 = *(short *)(param_1 + 0x5cc);
  sVar4 = *(short *)(param_1 + 0x5ce);
  piVar27 = &local_11c;
  local_250 = *(short *)(param_1 + 0x5c2);
  sVar5 = *(short *)(param_1 + 0x5c4);
  sVar6 = *(short *)(param_1 + 0x5c6);
  sVar7 = *(short *)(param_1 + 0x5c8);
  sVar8 = *(short *)(param_1 + 0x5ca);
  sVar9 = *(short *)(param_1 + 0x5d2);
  piVar14 = piVar27;
  psVar15 = (short *)(param_3 + 0x344);
  do {
    iVar26 = SignedSaturate((int)psVar15[8] * (int)local_250 + (int)psVar15[7] * (int)sVar5,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar26 = SignedSaturate(iVar26 + (int)psVar15[6] * (int)sVar6,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar26 = SignedSaturate(iVar26 + (int)psVar15[5] * (int)sVar7,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar26 = SignedSaturate(iVar26 + (int)psVar15[4] * (int)sVar8,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar26 = SignedSaturate(iVar26 + (int)psVar15[3] * (int)sVar3,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar26 = SignedSaturate(iVar26 + (int)psVar15[2] * (int)sVar4,0x20);
    SignedDoesSaturate(iVar26,0x20);
    iVar26 = SignedSaturate(iVar26 + (int)psVar15[1] * (int)sVar2,0x20);
    SignedDoesSaturate(iVar26,0x20);
    uVar28 = SignedSaturate(iVar26 + (int)*psVar15 * (int)sVar9,0x20);
    SignedDoesSaturate(uVar28,0x20);
    uVar20 = uVar28 ^ uVar28 << 1;
    if (((uVar20 == 0) || ((uint)LZCOUNT(uVar20) < 5)) && (uVar28 != 0)) {
      if ((int)uVar28 < 0) {
        iVar26 = 0;
      }
      else {
        iVar26 = 0x7fffffff;
      }
      iVar26 = SignedSaturate(iVar26 * 2,0x20);
      SignedDoesSaturate(iVar26,0x20);
    }
    else {
      iVar26 = uVar28 << 5;
    }
    uVar17 = SignedSaturate(iVar26 + 0x8000,0x20);
    SignedDoesSaturate(uVar17,0x20);
    piVar13 = (int *)((int)piVar14 + 2);
    *(short *)piVar14 = (short)((uint)uVar17 >> 0x10);
    piVar14 = piVar13;
    psVar15 = psVar15 + 1;
  } while (piVar13 != local_2c);
  if (param_4 != 0) {
    iVar26 = (int)(short)local_11c;
    if (iVar26 < 0) {
      sVar10 = SignedSaturate(-(short)local_11c,0x10);
      SignedSaturate(-((short)local_11c >> 0xf),0x10);
      iVar26 = (int)sVar10;
    }
    do {
      while( true ) {
        piVar27 = (int *)((int)piVar27 + 2);
        sVar10 = *(short *)piVar27;
        if (-1 < sVar10) break;
        sVar11 = SignedSaturate(-sVar10,0x10);
        SignedSaturate(-(sVar10 >> 0xf),0x10);
        iVar26 = SignedSaturate(iVar26 + sVar11,0x20);
        SignedDoesSaturate(iVar26,0x20);
        if ((int *)(local_30 + 2) == piVar27) goto LAB_2c024b76;
      }
      iVar26 = SignedSaturate(iVar26 + sVar10,0x20);
      SignedDoesSaturate(iVar26,0x20);
    } while ((int *)(local_30 + 2) != piVar27);
LAB_2c024b76:
    uVar28 = SignedSaturate((short)((uint)(iVar26 << 9) >> 0x10) * 0x999a,0x20);
    SignedDoesSaturate(uVar28,0x20);
    uVar17 = SignedSaturate(((iVar26 << 9) >> 0x10) * 0x10000 + (DAT_2c024d10 & uVar28),0x20);
    SignedDoesSaturate(uVar17,0x20);
    *(short *)(param_1 + 0x6f6) = (short)((uint)uVar17 >> 0x10);
  }
  uVar17 = SignedSaturate(((int)sVar5 * (int)*(short *)(DAT_2c024d14 + 2) + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar17,0x20);
  local_24e = (undefined2)((uint)uVar17 >> 0x10);
  uVar17 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 4) * (int)sVar6 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar17,0x20);
  local_24c = (undefined2)((uint)uVar17 >> 0x10);
  uVar17 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 6) * (int)sVar7 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar17,0x20);
  local_24a = (undefined2)((uint)uVar17 >> 0x10);
  uVar17 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 8) * (int)sVar8 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar17,0x20);
  local_248 = (undefined2)((uint)uVar17 >> 0x10);
  uVar17 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 10) * (int)sVar3 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar17,0x20);
  local_246 = (undefined2)((uint)uVar17 >> 0x10);
  uVar17 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 0xc) * (int)sVar4 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar17,0x20);
  local_244 = (undefined2)((uint)uVar17 >> 0x10);
  uVar17 = SignedSaturate(((int)sVar2 * (int)*(short *)(DAT_2c024d14 + 0xe) + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar17,0x20);
  local_242 = (undefined2)((uint)uVar17 >> 0x10);
  uVar17 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 0x10) * (int)sVar9 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar17,0x20);
  local_240 = (undefined2)((uint)uVar17 >> 0x10);
  FUN_2c021614(&local_250,&local_11c,&local_11c,0x78,param_1 + 0x5e8);
  *(undefined4 *)(param_1 + 0x5ec) = local_38;
  *(undefined4 *)(param_1 + 0x5f0) = local_34;
  *(undefined1 (*) [4])(param_1 + 0x5f4) = local_30;
  *(undefined4 *)(param_1 + 0x5e8) = local_3c;
  FUN_2c02381c(local_194,auStack_218,param_1);
  if (param_4 == 0) {
    uVar12 = *(undefined2 *)(param_1 + 0x6ee);
  }
  else {
    uVar17 = FUN_2c0217b8(auStack_218,(int)*(short *)(param_1 + 0x6e2));
    *(short *)(param_1 + 0x6e2) = (short)uVar17;
    uVar12 = FUN_2c023f30(param_1 + 0x6da,param_1 + 4,param_1,param_1 + 0x5e6,param_1 + 8,
                          param_1 + 10,param_3,uVar17);
    *(undefined2 *)(param_1 + 0x6ee) = uVar12;
  }
  *(undefined2 *)(param_1 + 0x6ec) = *(undefined2 *)(param_1 + 0x6ea);
  uVar1 = *(undefined2 *)(param_1 + 0x6e4);
  *(undefined2 *)(param_1 + 0x6e4) = uVar12;
  uVar12 = *(undefined2 *)(param_1 + 0x6e6);
  *(undefined2 *)(param_1 + 0x6ea) = *(undefined2 *)(param_1 + 0x6e8);
  *(undefined2 *)(param_1 + 0x6e6) = uVar1;
  *(undefined2 *)(param_1 + 0x6e8) = uVar12;
  if (param_3 + 0x436 == param_1 + 0x5b2) {
    *(undefined2 *)(param_1 + 0x5b2) = *(undefined2 *)(param_3 + 0x434);
    *(undefined2 *)(param_1 + 0x5b4) = *(undefined2 *)(param_3 + 0x436);
    *(undefined2 *)(param_1 + 0x5b6) = *(undefined2 *)(param_3 + 0x438);
    *(undefined2 *)(param_1 + 0x5b8) = *(undefined2 *)(param_3 + 0x43a);
    *(undefined2 *)(param_1 + 0x5ba) = *(undefined2 *)(param_3 + 0x43c);
    *(undefined2 *)(param_1 + 0x5bc) = *(undefined2 *)(param_3 + 0x43e);
    *(undefined2 *)(param_1 + 0x5be) = *(undefined2 *)(param_3 + 0x440);
    *(undefined2 *)(param_1 + 0x5c0) = *(undefined2 *)(param_3 + 0x442);
    if (param_1 + 0xc == param_3 + 0xf2) goto LAB_2c0251f2;
  }
  else {
    *(undefined4 *)(param_1 + 0x5b2) = *(undefined4 *)(param_3 + 0x434);
    *(undefined4 *)(param_1 + 0x5b6) = *(undefined4 *)(param_3 + 0x438);
    *(undefined4 *)(param_1 + 0x5ba) = *(undefined4 *)(param_3 + 0x43c);
    *(undefined4 *)(param_1 + 0x5be) = *(undefined4 *)(param_3 + 0x440);
    if (param_1 + 0xc == param_3 + 0xf2) {
LAB_2c0251f2:
      puVar31 = (undefined2 *)(param_1 + 10);
      puVar23 = (undefined2 *)(param_3 + 0xf0);
      do {
        puVar24 = puVar23 + 1;
        puVar31 = puVar31 + 1;
        *puVar31 = *puVar23;
        puVar23 = puVar24;
      } while ((undefined2 *)(param_3 + 0x444) != puVar24);
      goto LAB_2c024ce8;
    }
  }
  puVar25 = (undefined4 *)(param_3 + 0xf0);
  puVar18 = (undefined4 *)(param_1 + 0xc);
  do {
    puVar30 = puVar18 + 1;
    *puVar18 = *puVar25;
    puVar25 = puVar25 + 1;
    puVar18 = puVar30;
  } while ((undefined4 *)(param_1 + 0x360) != puVar30);
LAB_2c024ce8:
  if (*DAT_2c024d0c == local_2c[0]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00b2e8();
}


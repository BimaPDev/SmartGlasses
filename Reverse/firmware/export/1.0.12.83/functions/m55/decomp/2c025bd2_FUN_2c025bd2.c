/* FUN_2c025bd2 @ 0x2c025bd2 */

/* WARNING: Removing unreachable block (ram,0x2c024a56) */
/* WARNING: Removing unreachable block (ram,0x2c024c6e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c025bd2(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  undefined2 uVar10;
  int *piVar11;
  int *piVar12;
  short *psVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  short *psVar16;
  uint uVar17;
  short *psVar18;
  int iVar19;
  undefined2 *puVar20;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  undefined4 *puVar27;
  undefined2 uVar28;
  undefined2 *puVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  short *psVar32;
  undefined4 *puVar33;
  short sVar34;
  uint *puVar35;
  int iVar36;
  short *psVar37;
  short sVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  byte bVar42;
  short sStack_250;
  undefined2 uStack_24e;
  undefined2 uStack_24c;
  undefined2 uStack_24a;
  undefined2 uStack_248;
  undefined2 uStack_246;
  undefined2 uStack_244;
  undefined2 uStack_242;
  undefined2 uStack_240;
  uint uStack_23c;
  uint auStack_238 [4];
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  undefined1 auStack_218 [130];
  short sStack_196;
  short asStack_194 [60];
  undefined4 uStack_11c;
  short asStack_a6 [53];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  int aiStack_2c [3];
  undefined2 *puVar21;
  
  puVar33 = (undefined4 *)(param_1 + 0x360);
  puVar30 = (undefined4 *)((int)param_4 + 2);
  puVar31 = (undefined4 *)(param_1 + 0x450);
  puVar15 = puVar33;
  if (puVar33 == puVar30) {
    puVar29 = (undefined2 *)(param_1 + 0x35e);
    do {
      puVar20 = (undefined2 *)((int)puVar30 + -2);
      bVar39 = param_4 + 0x3c != puVar30;
      puVar30 = (undefined4 *)((int)puVar30 + 2);
      puVar29 = puVar29 + 1;
      *puVar29 = *puVar20;
    } while (bVar39);
  }
  else {
    do {
      puVar30 = puVar15 + 1;
      *puVar15 = *param_4;
      param_4 = param_4 + 1;
      puVar15 = puVar30;
    } while (puVar31 != puVar30);
  }
  if (*(short *)(param_1 + 0x6f0) == 0) {
    iVar25 = (int)(short)(*(short *)(param_1 + 0x6f2) + 1);
    if (8 < iVar25) {
      iVar25 = 9;
    }
    uVar28 = (undefined2)iVar25;
    iVar25 = iVar25 << 0x10;
  }
  else {
    *(short *)(param_1 + 0x6f4) = *(short *)(param_1 + 0x6f0);
    uVar28 = 1;
    iVar25 = 0x10000;
  }
  *(undefined2 *)(param_1 + 0x6f2) = uVar28;
  *(undefined2 *)(param_1 + 0x6f0) = 0;
  iVar26 = _DAT_2c025e34;
  iVar36 = _DAT_2c025e30;
  iVar7 = _DAT_2c025e2c;
  iVar19 = _DAT_2c025e28;
  uVar23 = SignedSaturate(iVar25 + -0x10000,0x20);
  SignedDoesSaturate(uVar23,0x20);
  if (uVar23 >> 0x10 == 0) {
    uVar23 = SignedSaturate(*(short *)(param_1 + 0x6d6) * 0x10000 - _DAT_2c025e24,0x20);
    SignedDoesSaturate(uVar23,0x20);
    if (uVar23 >> 0x10 == 0) {
      sVar34 = 8;
      *(undefined2 *)(param_1 + 0x6fa) = 8;
      *(int *)(param_1 + 0x700) = iVar26;
      *(int *)(param_1 + 0x704) = iVar36;
    }
    else {
      sVar34 = 0x78;
      *(int *)(param_1 + 0x704) = _DAT_2c025e28;
      *(int *)(param_1 + 0x700) = iVar7;
      *(undefined2 *)(param_1 + 0x6fa) = 0x8c;
      iVar26 = iVar7;
      iVar36 = iVar19;
    }
    iVar25 = 0;
    psVar37 = (short *)(param_1 + 0x35e);
    while( true ) {
      psVar16 = psVar37 + 1;
      iVar19 = SignedSaturate((int)*(short *)(iVar26 + iVar25 * 2) * (int)*psVar16 * 2,0x20);
      SignedDoesSaturate(iVar19,0x20);
      iVar7 = SignedSaturate((int)*(short *)(iVar36 + iVar25 * 2) * (int)psVar37[0x79] * 2,0x20);
      SignedDoesSaturate(iVar7,0x20);
      iVar19 = SignedSaturate(iVar19 + iVar7,0x20);
      SignedDoesSaturate(iVar19,0x20);
      uVar14 = SignedSaturate(iVar19 + 0x8000,0x20);
      SignedDoesSaturate(uVar14,0x20);
      iVar25 = iVar25 + 1;
      *psVar16 = (short)((uint)uVar14 >> 0x10);
      if (sVar34 <= (short)iVar25) break;
      iVar26 = *(int *)(param_1 + 0x700);
      iVar36 = *(int *)(param_1 + 0x704);
      psVar37 = psVar16;
    }
    if (*(short *)(param_1 + 0x6fa) < 0x79) {
      *(undefined4 *)(param_1 + 0x6fa) = 0;
    }
    else {
      uVar14 = SignedSaturate(*(short *)(param_1 + 0x6fa) * 0x10000 + -0x780000,0x20);
      SignedDoesSaturate(uVar14,0x20);
      *(short *)(param_1 + 0x6fa) = (short)((uint)uVar14 >> 0x10);
      uVar14 = SignedSaturate(*(short *)(param_1 + 0x6fc) * 0x10000 + 0x780000,0x20);
      SignedDoesSaturate(uVar14,0x20);
      *(short *)(param_1 + 0x6fc) = (short)((uint)uVar14 >> 0x10);
    }
    puVar15 = puVar33;
    puVar30 = puVar33;
    if (param_2 == (undefined4 *)(param_1 + 0x362)) {
      do {
        puVar27 = (undefined4 *)((int)puVar15 + 2);
        *(undefined2 *)((int)puVar30 + 2) = *(undefined2 *)puVar15;
        puVar15 = puVar27;
        puVar30 = (undefined4 *)((int)puVar30 + 2);
      } while (puVar27 != puVar31);
      iVar25 = (int)*(short *)(param_1 + 0x6f2) << 0x10;
    }
    else {
      puVar15 = param_2;
      do {
        puVar27 = puVar15 + 1;
        *puVar15 = *puVar30;
        puVar15 = puVar27;
        puVar30 = puVar30 + 1;
      } while (puVar27 != param_2 + 0x3c);
      iVar25 = (int)*(short *)(param_1 + 0x6f2) << 0x10;
    }
  }
  iVar25 = SignedSaturate(iVar25 + -0x10000,0x20);
  SignedDoesSaturate(iVar25,0x20);
  if ((0xffff < iVar25) && (sVar34 = *(short *)(param_1 + 0x6fa), 0 < sVar34)) {
    sVar38 = *(short *)(param_1 + 0x6fc);
    iVar25 = (int)sVar38;
    psVar37 = (short *)(param_1 + 0x35e);
    if (sVar34 < 0x79) {
      sVar38 = sVar38 + sVar34;
    }
    else {
      sVar38 = sVar38 + 0x78;
    }
    do {
      psVar37 = psVar37 + 1;
      iVar19 = SignedSaturate((int)*(short *)(*(int *)(param_1 + 0x700) + iVar25 * 2) *
                              (int)*psVar37 * 2,0x20);
      SignedDoesSaturate(iVar19,0x20);
      iVar7 = SignedSaturate((int)*(short *)(*(int *)(param_1 + 0x704) + iVar25 * 2) *
                             (int)*(short *)((int)puVar31 + iVar25 * 2) * 2,0x20);
      SignedDoesSaturate(iVar7,0x20);
      iVar19 = SignedSaturate(iVar19 + iVar7,0x20);
      SignedDoesSaturate(iVar19,0x20);
      uVar14 = SignedSaturate(iVar19 + 0x8000,0x20);
      SignedDoesSaturate(uVar14,0x20);
      iVar25 = (int)(short)((short)iVar25 + 1);
      *psVar37 = (short)((uint)uVar14 >> 0x10);
    } while (iVar25 != sVar38);
    if (*(short *)(param_1 + 0x6fa) < 0x79) {
      *(undefined4 *)(param_1 + 0x6fa) = 0;
    }
    else {
      uVar14 = SignedSaturate(*(short *)(param_1 + 0x6fa) * 0x10000 + -0x780000,0x20);
      SignedDoesSaturate(uVar14,0x20);
      *(short *)(param_1 + 0x6fa) = (short)((uint)uVar14 >> 0x10);
      uVar14 = SignedSaturate(*(short *)(param_1 + 0x6fc) * 0x10000 + 0x780000,0x20);
      SignedDoesSaturate(uVar14,0x20);
      *(short *)(param_1 + 0x6fc) = (short)((uint)uVar14 >> 0x10);
    }
    puVar15 = puVar33;
    if (param_2 == (undefined4 *)(param_1 + 0x362)) {
      do {
        puVar30 = (undefined4 *)((int)puVar15 + 2);
        *(undefined2 *)((int)puVar33 + 2) = *(undefined2 *)puVar15;
        if (puVar31 == puVar30) break;
        puVar15 = puVar15 + 1;
        puVar33 = puVar33 + 1;
        *(undefined2 *)puVar33 = *(undefined2 *)puVar30;
      } while (puVar31 != puVar15);
    }
    else {
      puVar15 = param_2;
      do {
        puVar30 = puVar15 + 1;
        *puVar15 = *puVar33;
        puVar15 = puVar30;
        puVar33 = puVar33 + 1;
      } while (param_2 + 0x3c != puVar30);
    }
  }
  aiStack_2c[0] = *DAT_2c024d0c;
  puVar33 = (undefined4 *)(param_3 + 0x354);
  if (param_2 == (undefined4 *)(param_3 + 0x356)) {
    puVar15 = puVar33;
    do {
      puVar30 = (undefined4 *)((int)puVar15 + 2);
      puVar33 = (undefined4 *)((int)puVar33 + 2);
      *(undefined2 *)puVar33 = *(undefined2 *)puVar15;
      puVar15 = puVar30;
    } while (puVar30 != (undefined4 *)(param_3 + 0x444));
  }
  else {
    puVar15 = param_2;
    do {
      puVar30 = puVar15 + 1;
      *puVar15 = *puVar33;
      puVar15 = puVar30;
      puVar33 = puVar33 + 1;
    } while (puVar30 != param_2 + 0x3c);
  }
  piVar22 = DAT_2c0250a4;
  psVar16 = &sStack_196;
  psVar32 = DAT_2c0250a0 + 0x78;
  psVar37 = (short *)(param_3 + 0x352);
  psVar13 = DAT_2c0250a0;
  do {
    psVar18 = psVar13 + 1;
    psVar37 = psVar37 + 1;
    uVar14 = SignedSaturate(((int)*psVar37 * (int)*psVar13 + 0x4000) * 2,0x20);
    bVar42 = SignedDoesSaturate(uVar14,0x20);
    bVar40 = psVar18 <= psVar32;
    bVar41 = SBORROW4((int)psVar32,(int)psVar18);
    iVar25 = (int)psVar32 - (int)psVar18;
    bVar39 = psVar32 == psVar18;
    psVar16 = psVar16 + 1;
    *psVar16 = (short)((uint)uVar14 >> 0x10);
    psVar13 = psVar18;
  } while (!bVar39);
  do {
    iVar25 = (uint)(byte)((iVar25 < 0) << 4 | bVar39 << 3 | bVar40 << 2 | bVar41 << 1 | bVar42) <<
             0x1b;
    *piVar22 = iVar25;
    *(byte *)((int)piVar22 + 3) = (byte)((uint)iVar25 >> 0x18) & 0xf7;
    uStack_23c = 1;
    psVar37 = &sStack_196;
    do {
      psVar37 = psVar37 + 1;
      uStack_23c = SignedSaturate(uStack_23c + (int)*psVar37 * (int)*psVar37,0x20);
      bVar42 = SignedDoesSaturate(uStack_23c,0x20);
    } while (psVar37 != asStack_a6);
    bVar39 = -1 < (int)((uint)bVar42 << 0x1f);
    bVar40 = true;
    bVar41 = false;
    iVar25 = 0;
    if (!bVar39) {
      psVar37 = &sStack_196;
      do {
        psVar37 = psVar37 + 1;
        bVar40 = asStack_a6 <= psVar37;
        bVar41 = SBORROW4((int)psVar37,(int)asStack_a6);
        iVar25 = (int)psVar37 - (int)asStack_a6;
        bVar39 = psVar37 == asStack_a6;
        *psVar37 = *psVar37 >> 2;
      } while (!bVar39);
    }
    uVar23 = (uint)(byte)((iVar25 < 0) << 4 | bVar39 << 3 | bVar40 << 2 | bVar41 << 1 | bVar42);
    *piVar22 = uVar23 << 0x1b;
    iVar25 = (int)(char)((int)(uVar23 << 0x1f) >> 0x1f);
    bVar39 = iVar25 == 0;
    bVar40 = true;
    bVar41 = false;
  } while (!bVar39);
  uVar23 = uStack_23c ^ uStack_23c << 1;
  if (uVar23 == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = LZCOUNT(uVar23);
    uStack_23c = uStack_23c << uVar23;
  }
  puVar35 = &uStack_23c;
  iVar25 = 1;
  psVar37 = asStack_194;
  do {
    psVar37 = psVar37 + 1;
    uVar17 = (int)*psVar37 * (int)asStack_194[0];
    iVar19 = SignedSaturate(iVar25 * -0x10000 + 0x780000,0x20);
    SignedDoesSaturate(iVar19,0x20);
    if (0x1ffff < iVar19) {
      psVar13 = psVar37;
      psVar16 = asStack_194;
      do {
        psVar16 = psVar16 + 1;
        psVar13 = psVar13 + 1;
        uVar17 = SignedSaturate(uVar17 + (int)*psVar16 * (int)*psVar13,0x20);
        SignedDoesSaturate(uVar17,0x20);
      } while (psVar16 != asStack_194 + ((iVar19 >> 0x10) - 2U & 0xffff) + 1);
    }
    if (uVar23 != 0) {
      uVar24 = uVar17 ^ uVar17 << 1;
      if (((uVar24 == 0) || ((uint)LZCOUNT(uVar24) < uVar23)) && (uVar17 != 0)) {
        if ((int)uVar17 < 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = 0x7fffffff;
        }
        uVar17 = SignedSaturate(iVar19 * 2,0x20);
        SignedDoesSaturate(uVar17,0x20);
      }
      else {
        uVar17 = uVar17 << uVar23;
      }
    }
    iVar25 = iVar25 + 1;
    puVar35 = puVar35 + 1;
    *puVar35 = uVar17;
  } while (iVar25 != 9);
  iVar19 = (int)auStack_238[0] >> 0x10;
  iVar25 = SignedSaturate(iVar19 * 0x8000,0x20);
  SignedDoesSaturate(iVar25,0x20);
  uVar14 = SignedSaturate(((int)auStack_238[0] >> 1) - iVar25,0x20);
  SignedDoesSaturate(uVar14,0x20);
  iVar25 = SignedSaturate(iVar19 * *DAT_2c0250a8 * 2,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate(iVar19 * *DAT_2c0250ac * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar25 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate((int)(short)uVar14 * (int)*DAT_2c0250a8 * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  auStack_238[0] = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(auStack_238[0],0x20);
  iVar19 = (int)auStack_238[1] >> 0x10;
  iVar25 = SignedSaturate(iVar19 * 0x8000,0x20);
  SignedDoesSaturate(iVar25,0x20);
  uVar14 = SignedSaturate(((int)auStack_238[1] >> 1) - iVar25,0x20);
  SignedDoesSaturate(uVar14,0x20);
  iVar25 = SignedSaturate(iVar19 * DAT_2c0250a8[1] * 2,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate(iVar19 * DAT_2c0250ac[1] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar25 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate((int)(short)uVar14 * (int)DAT_2c0250a8[1] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  auStack_238[1] = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(auStack_238[1],0x20);
  iVar19 = (int)auStack_238[2] >> 0x10;
  iVar25 = SignedSaturate(iVar19 * 0x8000,0x20);
  SignedDoesSaturate(iVar25,0x20);
  uVar14 = SignedSaturate(((int)auStack_238[2] >> 1) - iVar25,0x20);
  SignedDoesSaturate(uVar14,0x20);
  iVar25 = SignedSaturate(iVar19 * DAT_2c0250a8[2] * 2,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate(iVar19 * DAT_2c0250ac[2] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar25 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate((int)(short)uVar14 * (int)DAT_2c0250a8[2] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  auStack_238[2] = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(auStack_238[2],0x20);
  iVar19 = (int)auStack_238[3] >> 0x10;
  iVar25 = SignedSaturate(iVar19 * 0x8000,0x20);
  SignedDoesSaturate(iVar25,0x20);
  uVar14 = SignedSaturate(((int)auStack_238[3] >> 1) - iVar25,0x20);
  SignedDoesSaturate(uVar14,0x20);
  iVar25 = SignedSaturate(iVar19 * DAT_2c0250a8[3] * 2,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate(iVar19 * DAT_2c0250ac[3] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar25 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate((int)(short)uVar14 * (int)DAT_2c0250a8[3] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  auStack_238[3] = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(auStack_238[3],0x20);
  iVar19 = iStack_228 >> 0x10;
  iVar25 = SignedSaturate(iVar19 * 0x8000,0x20);
  SignedDoesSaturate(iVar25,0x20);
  uVar14 = SignedSaturate((iStack_228 >> 1) - iVar25,0x20);
  SignedDoesSaturate(uVar14,0x20);
  iVar25 = SignedSaturate(iVar19 * DAT_2c0250a8[4] * 2,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate(iVar19 * DAT_2c0250ac[4] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar25 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate((int)(short)uVar14 * (int)DAT_2c0250a8[4] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iStack_228 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iStack_228,0x20);
  iVar19 = iStack_224 >> 0x10;
  iVar25 = SignedSaturate(iVar19 * 0x8000,0x20);
  SignedDoesSaturate(iVar25,0x20);
  uVar14 = SignedSaturate((iStack_224 >> 1) - iVar25,0x20);
  SignedDoesSaturate(uVar14,0x20);
  iVar25 = SignedSaturate(iVar19 * DAT_2c0250a8[5] * 2,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate(iVar19 * DAT_2c0250ac[5] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar25 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate((int)(short)uVar14 * (int)DAT_2c0250a8[5] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iStack_224 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iStack_224,0x20);
  iVar19 = iStack_220 >> 0x10;
  iVar25 = SignedSaturate(iVar19 * 0x8000,0x20);
  SignedDoesSaturate(iVar25,0x20);
  uVar14 = SignedSaturate((iStack_220 >> 1) - iVar25,0x20);
  SignedDoesSaturate(uVar14,0x20);
  iVar25 = SignedSaturate(iVar19 * DAT_2c0250a8[6] * 2,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate(iVar19 * DAT_2c0250ac[6] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar25 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate((int)(short)uVar14 * (int)DAT_2c0250a8[6] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iStack_220 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iStack_220,0x20);
  iVar19 = iStack_21c >> 0x10;
  iVar25 = SignedSaturate(iVar19 * 0x8000,0x20);
  SignedDoesSaturate(iVar25,0x20);
  uVar14 = SignedSaturate((iStack_21c >> 1) - iVar25,0x20);
  SignedDoesSaturate(uVar14,0x20);
  iVar25 = SignedSaturate(iVar19 * DAT_2c0250a8[7] * 2,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate(iVar19 * DAT_2c0250ac[7] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar25 = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iVar25,0x20);
  iVar19 = SignedSaturate((int)(short)uVar14 * (int)DAT_2c0250a8[7] * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = SignedSaturate((iVar19 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iStack_21c = SignedSaturate(iVar25 + iVar19,0x20);
  SignedDoesSaturate(iStack_21c,0x20);
  FUN_2c023048(&uStack_23c,param_1 + 0x5c2,param_1 + 0x5d4,8);
  iVar25 = DAT_2c0250b0;
  uVar14 = SignedSaturate(((int)*(short *)(param_1 + 0x5c4) * (int)*(short *)(DAT_2c0250b0 + 2) +
                          0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  sVar34 = *(short *)(DAT_2c0250b0 + 4);
  *(short *)(param_1 + 0x5c4) = (short)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(param_1 + 0x5c6) * (int)sVar34 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  *(short *)(param_1 + 0x5c6) = (short)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(iVar25 + 6) * (int)*(short *)(param_1 + 0x5c8) + 0x4000)
                          * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  *(short *)(param_1 + 0x5c8) = (short)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(iVar25 + 8) * (int)*(short *)(param_1 + 0x5ca) + 0x4000)
                          * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  *(short *)(param_1 + 0x5ca) = (short)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(iVar25 + 10) * (int)*(short *)(param_1 + 0x5cc) + 0x4000)
                          * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  *(short *)(param_1 + 0x5cc) = (short)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(iVar25 + 0xc) * (int)*(short *)(param_1 + 0x5ce) + 0x4000
                          ) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  *(short *)(param_1 + 0x5ce) = (short)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(iVar25 + 0xe) * (int)*(short *)(param_1 + 0x5d0) + 0x4000
                          ) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  sVar34 = *(short *)(iVar25 + 0x10);
  *(short *)(param_1 + 0x5d0) = (short)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)sVar34 * (int)*(short *)(param_1 + 0x5d2) + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  *(short *)(param_1 + 0x5d2) = (short)((uint)uVar14 >> 0x10);
  sVar34 = *(short *)(param_1 + 0x5d0);
  sVar38 = *(short *)(param_1 + 0x5cc);
  sVar1 = *(short *)(param_1 + 0x5ce);
  piVar22 = &uStack_11c;
  sStack_250 = *(short *)(param_1 + 0x5c2);
  sVar2 = *(short *)(param_1 + 0x5c4);
  sVar3 = *(short *)(param_1 + 0x5c6);
  sVar4 = *(short *)(param_1 + 0x5c8);
  sVar5 = *(short *)(param_1 + 0x5ca);
  sVar6 = *(short *)(param_1 + 0x5d2);
  piVar12 = piVar22;
  psVar37 = (short *)(param_3 + 0x344);
  do {
    iVar25 = SignedSaturate((int)psVar37[8] * (int)sStack_250 + (int)psVar37[7] * (int)sVar2,0x20);
    SignedDoesSaturate(iVar25,0x20);
    iVar25 = SignedSaturate(iVar25 + (int)psVar37[6] * (int)sVar3,0x20);
    SignedDoesSaturate(iVar25,0x20);
    iVar25 = SignedSaturate(iVar25 + (int)psVar37[5] * (int)sVar4,0x20);
    SignedDoesSaturate(iVar25,0x20);
    iVar25 = SignedSaturate(iVar25 + (int)psVar37[4] * (int)sVar5,0x20);
    SignedDoesSaturate(iVar25,0x20);
    iVar25 = SignedSaturate(iVar25 + (int)psVar37[3] * (int)sVar38,0x20);
    SignedDoesSaturate(iVar25,0x20);
    iVar25 = SignedSaturate(iVar25 + (int)psVar37[2] * (int)sVar1,0x20);
    SignedDoesSaturate(iVar25,0x20);
    iVar25 = SignedSaturate(iVar25 + (int)psVar37[1] * (int)sVar34,0x20);
    SignedDoesSaturate(iVar25,0x20);
    uVar23 = SignedSaturate(iVar25 + (int)*psVar37 * (int)sVar6,0x20);
    SignedDoesSaturate(uVar23,0x20);
    uVar17 = uVar23 ^ uVar23 << 1;
    if (((uVar17 == 0) || ((uint)LZCOUNT(uVar17) < 5)) && (uVar23 != 0)) {
      if ((int)uVar23 < 0) {
        iVar25 = 0;
      }
      else {
        iVar25 = 0x7fffffff;
      }
      iVar25 = SignedSaturate(iVar25 * 2,0x20);
      SignedDoesSaturate(iVar25,0x20);
    }
    else {
      iVar25 = uVar23 << 5;
    }
    uVar14 = SignedSaturate(iVar25 + 0x8000,0x20);
    SignedDoesSaturate(uVar14,0x20);
    piVar11 = (int *)((int)piVar12 + 2);
    *(short *)piVar12 = (short)((uint)uVar14 >> 0x10);
    piVar12 = piVar11;
    psVar37 = psVar37 + 1;
  } while (piVar11 != aiStack_2c);
  iVar25 = (int)(short)uStack_11c;
  if (iVar25 < 0) {
    sVar8 = SignedSaturate(-(short)uStack_11c,0x10);
    SignedSaturate(-((short)uStack_11c >> 0xf),0x10);
    iVar25 = (int)sVar8;
  }
  do {
    while( true ) {
      piVar22 = (int *)((int)piVar22 + 2);
      sVar8 = *(short *)piVar22;
      if (-1 < sVar8) break;
      sVar9 = SignedSaturate(-sVar8,0x10);
      SignedSaturate(-(sVar8 >> 0xf),0x10);
      iVar25 = SignedSaturate(iVar25 + sVar9,0x20);
      SignedDoesSaturate(iVar25,0x20);
      if ((int *)(auStack_30 + 2) == piVar22) goto LAB_2c024b76;
    }
    iVar25 = SignedSaturate(iVar25 + sVar8,0x20);
    SignedDoesSaturate(iVar25,0x20);
  } while ((int *)(auStack_30 + 2) != piVar22);
LAB_2c024b76:
  uVar23 = SignedSaturate((short)((uint)(iVar25 << 9) >> 0x10) * 0x999a,0x20);
  SignedDoesSaturate(uVar23,0x20);
  uVar14 = SignedSaturate(((iVar25 << 9) >> 0x10) * 0x10000 + (DAT_2c024d10 & uVar23),0x20);
  SignedDoesSaturate(uVar14,0x20);
  *(short *)(param_1 + 0x6f6) = (short)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)sVar2 * (int)*(short *)(DAT_2c024d14 + 2) + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  uStack_24e = (undefined2)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 4) * (int)sVar3 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  uStack_24c = (undefined2)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 6) * (int)sVar4 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  uStack_24a = (undefined2)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 8) * (int)sVar5 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  uStack_248 = (undefined2)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 10) * (int)sVar38 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  uStack_246 = (undefined2)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 0xc) * (int)sVar1 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  uStack_244 = (undefined2)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)sVar34 * (int)*(short *)(DAT_2c024d14 + 0xe) + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  uStack_242 = (undefined2)((uint)uVar14 >> 0x10);
  uVar14 = SignedSaturate(((int)*(short *)(DAT_2c024d14 + 0x10) * (int)sVar6 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar14,0x20);
  uStack_240 = (undefined2)((uint)uVar14 >> 0x10);
  FUN_2c021614(&sStack_250,&uStack_11c,&uStack_11c,0x78,param_1 + 0x5e8);
  *(undefined4 *)(param_1 + 0x5ec) = uStack_38;
  *(undefined4 *)(param_1 + 0x5f0) = uStack_34;
  *(undefined1 (*) [4])(param_1 + 0x5f4) = auStack_30;
  *(undefined4 *)(param_1 + 0x5e8) = uStack_3c;
  FUN_2c02381c(asStack_194,auStack_218,param_1);
  uVar14 = FUN_2c0217b8(auStack_218,(int)*(short *)(param_1 + 0x6e2));
  *(short *)(param_1 + 0x6e2) = (short)uVar14;
  uVar10 = FUN_2c023f30(param_1 + 0x6da,param_1 + 4,param_1,param_1 + 0x5e6,param_1 + 8,param_1 + 10
                        ,param_3,uVar14);
  *(undefined2 *)(param_1 + 0x6ee) = uVar10;
  *(undefined2 *)(param_1 + 0x6ec) = *(undefined2 *)(param_1 + 0x6ea);
  uVar28 = *(undefined2 *)(param_1 + 0x6e4);
  *(undefined2 *)(param_1 + 0x6e4) = uVar10;
  uVar10 = *(undefined2 *)(param_1 + 0x6e6);
  *(undefined2 *)(param_1 + 0x6ea) = *(undefined2 *)(param_1 + 0x6e8);
  *(undefined2 *)(param_1 + 0x6e6) = uVar28;
  *(undefined2 *)(param_1 + 0x6e8) = uVar10;
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
      puVar29 = (undefined2 *)(param_1 + 10);
      puVar20 = (undefined2 *)(param_3 + 0xf0);
      do {
        puVar21 = puVar20 + 1;
        puVar29 = puVar29 + 1;
        *puVar29 = *puVar20;
        puVar20 = puVar21;
      } while ((undefined2 *)(param_3 + 0x444) != puVar21);
      goto LAB_2c024ce8;
    }
  }
  puVar33 = (undefined4 *)(param_3 + 0xf0);
  puVar15 = (undefined4 *)(param_1 + 0xc);
  do {
    puVar30 = puVar15 + 1;
    *puVar15 = *puVar33;
    puVar33 = puVar33 + 1;
    puVar15 = puVar30;
  } while ((undefined4 *)(param_1 + 0x360) != puVar30);
LAB_2c024ce8:
  if (*DAT_2c024d0c != aiStack_2c[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00b2e8();
  }
  return;
}


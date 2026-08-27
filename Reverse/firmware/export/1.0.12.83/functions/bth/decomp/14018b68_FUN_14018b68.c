/* FUN_14018b68 @ 0x14018b68 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14018b68(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  int *piVar7;
  short *psVar8;
  int extraout_r1;
  int iVar9;
  short *psVar10;
  short **ppsVar11;
  undefined4 *puVar12;
  uint *extraout_r2;
  int *piVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  ushort *extraout_r3;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  short *psVar24;
  short *psVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  short *psVar29;
  int **ppiVar30;
  int **ppiVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  undefined2 *puVar38;
  uint uVar39;
  int iStack_518;
  int iStack_514;
  int iStack_510;
  uint uStack_50c;
  int iStack_508;
  uint uStack_504;
  int *piStack_500;
  uint uStack_4fc;
  int aiStack_4e0 [273];
  int aiStack_9c [2];
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  int iStack_84;
  uint uStack_80;
  int **ppiStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  short *psStack_70;
  short *local_6c;
  int *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  short *local_30;
  int *local_2c [2];
  undefined4 *puVar13;
  
  local_2c[0] = (int *)*DAT_14018c8c;
  piVar14 = (int *)SignedSaturate(2,0x20);
  SignedDoesSaturate(piVar14,0x20);
  local_6c = (short *)(param_3 + 0x65e);
  if (param_1 == (undefined4 *)(param_3 + 0x660)) {
    psVar8 = local_6c;
    psVar18 = local_6c;
    do {
      psVar10 = psVar18 + 1;
      psVar8 = psVar8 + 1;
      *psVar8 = *psVar18;
      psVar18 = psVar10;
    } while (psVar10 != (short *)(param_3 + 0x6d6));
  }
  else {
    psVar8 = local_6c;
    puVar13 = param_1;
    do {
      puVar12 = puVar13 + 1;
      *puVar13 = *(undefined4 *)psVar8;
      psVar8 = psVar8 + 2;
      puVar13 = puVar12;
    } while (param_1 + 0x1e != puVar12);
  }
  psVar8 = (short *)(param_1 + 0x21);
  sVar15 = *DAT_14018c90;
  ppiStack_7c = local_2c;
  ppiVar30 = &local_68;
  do {
    piVar7 = (int *)((int)psVar8[1] * (int)sVar15);
    psVar18 = DAT_14018c90;
    psVar10 = psVar8;
    do {
      psVar18 = psVar18 + 1;
      piVar7 = (int *)SignedSaturate((int *)((int)piVar7 + (int)*psVar18 * (int)*psVar10),0x20);
      SignedDoesSaturate(piVar7,0x20);
      psVar10 = psVar10 + -1;
    } while (DAT_14018c90 + 0x3b != psVar18);
    ppiVar31 = ppiVar30 + 1;
    *ppiVar30 = piVar7;
    if ((int)piVar7 < 0) {
      piVar7 = (int *)SignedSaturate(-(int)piVar7,0x20);
      SignedDoesSaturate(piVar7,0x20);
    }
    if ((int)piVar14 < (int)piVar7) {
      piVar14 = piVar7;
    }
    psVar8 = psVar8 + 8;
    ppiVar30 = ppiVar31;
  } while (ppiVar31 != ppiStack_7c);
  puVar13 = param_1 + 0x3c;
  if (local_6c == (short *)((int)param_1 + 0xf2)) {
    param_1 = param_1 + 0x5a;
    puVar38 = (undefined2 *)(param_3 + 0x65c);
    do {
      puVar12 = (undefined4 *)((int)puVar13 + 2);
      puVar38 = puVar38 + 1;
      *puVar38 = *(undefined2 *)puVar13;
      puVar13 = puVar12;
    } while (puVar12 != param_1);
  }
  else {
    psVar8 = local_6c;
    do {
      psVar18 = psVar8 + 2;
      *(undefined4 *)psVar8 = *puVar13;
      puVar13 = puVar13 + 1;
      psVar8 = psVar18;
    } while ((short *)(param_3 + 0x6d6) != psVar18);
  }
  uVar16 = (uint)piVar14 ^ (int)piVar14 << 1;
  iVar17 = 0;
  if (uVar16 != 0) {
    iVar17 = LZCOUNT(uVar16) << 0x10;
  }
  uVar16 = SignedSaturate(iVar17 + -0x30000,0x20);
  SignedDoesSaturate(uVar16,0x20);
  uVar27 = (uint)*(short *)(param_3 + 0x65c);
  iVar17 = SignedSaturate(uVar27 * 0x10000 - (uVar16 & 0xffff0000),0x20);
  SignedDoesSaturate(iVar17,0x20);
  uVar21 = uVar27 * 0x10000;
  if (-1 < iVar17) {
    uVar27 = (int)uVar16 >> 0x10;
    uVar21 = uVar16 & 0xffff0000;
  }
  uVar6 = iVar17 >> 0x10 & ~(iVar17 >> 0x1f);
  psVar8 = (short *)(param_3 + 0x5f6);
  uVar16 = uVar6;
  if (0x3e < (int)uVar6) {
    uVar16 = 0x3f;
  }
  puVar38 = (undefined2 *)(param_2 + -2);
  psVar18 = psVar8;
  do {
    psVar18 = psVar18 + 1;
    puVar38 = puVar38 + 1;
    *puVar38 = (short)((int)*psVar18 >> (uVar16 & 0xff));
  } while ((short *)(param_3 + 0x65a) != psVar18);
  if ((int)uVar27 < 1) {
    uVar36 = 0xffffffc1;
    if (-0x3f < (int)uVar27) {
      uVar36 = uVar27;
    }
    uVar36 = -uVar36;
    uVar1 = SignedSaturate(((int)local_68 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 100) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_64 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x66) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_60 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x68) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_5c >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x6a) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_58 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x6c) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_54 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x6e) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_50 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x70) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_4c >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x72) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_48 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x74) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_44 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x76) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_40 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x78) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_3c >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x7a) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_38 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x7c) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate((local_34 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x7e) = (short)((uint)uVar1 >> 0x10);
    uVar1 = SignedSaturate(((int)local_30 >> (uVar36 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar1,0x20);
    *(short *)(param_2 + 0x80) = (short)((uint)uVar1 >> 0x10);
  }
  else {
    uVar16 = 0x8000;
    ppsVar11 = &local_6c;
    puVar38 = (undefined2 *)(param_2 + 0x62);
    do {
      while( true ) {
        ppsVar11 = ppsVar11 + 1;
        psVar18 = *ppsVar11;
        uVar36 = (uint)psVar18 ^ (int)psVar18 << 1;
        ppiStack_7c = (int **)0x0;
        if (((uVar36 == 0) ||
            (ppiStack_7c = (int **)LZCOUNT(uVar36), (int)ppiStack_7c < (int)uVar27)) &&
           (psVar18 != (short *)0x0)) break;
        uVar1 = SignedSaturate(((int)psVar18 << (uVar27 & 0xff)) + 0x8000,0x20);
        SignedDoesSaturate(uVar1,0x20);
        puVar38 = puVar38 + 1;
        *puVar38 = (short)((uint)uVar1 >> 0x10);
        if (&local_30 == ppsVar11) goto LAB_14018cd6;
      }
      if ((int)psVar18 < 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = 0x7fffffff;
      }
      iVar17 = SignedSaturate(iVar17 * 2,0x20);
      SignedDoesSaturate(iVar17,0x20);
      uVar1 = SignedSaturate(iVar17 + 0x8000,0x20);
      SignedDoesSaturate(uVar1,0x20);
      puVar38 = puVar38 + 1;
      *puVar38 = (short)((uint)uVar1 >> 0x10);
    } while (&local_30 != ppsVar11);
  }
LAB_14018cd6:
  uVar27 = 1;
  psVar18 = (short *)(param_2 + 0x1c);
  do {
    while( true ) {
      psVar18 = psVar18 + 1;
      sVar15 = *psVar18;
      uVar36 = (uint)sVar15;
      if (-1 < (int)uVar36) break;
      sVar4 = SignedSaturate(-sVar15,0x10);
      SignedSaturate(-(sVar15 >> 0xf),0x10);
      if ((int)uVar27 < (int)sVar4) {
        uVar27 = (int)sVar4;
      }
      if ((short *)(param_2 + 0x80) == psVar18) goto LAB_14018cfe;
    }
    if ((int)uVar27 < (int)uVar36) {
      uVar27 = uVar36;
    }
  } while ((short *)(param_2 + 0x80) != psVar18);
LAB_14018cfe:
  uVar27 = uVar27 ^ uVar27 << 0x11;
  iVar17 = 0;
  if (uVar27 != 0) {
    iVar17 = (LZCOUNT(uVar27) & 0xfU) << 0x10;
  }
  uVar36 = SignedSaturate(iVar17 + -0x30000,0x20);
  SignedDoesSaturate(uVar36,0x20);
  uVar32 = (int)uVar36 >> 0x10;
  uVar36 = uVar36 & 0xffff0000;
  iVar17 = SignedSaturate(uVar36 + uVar6 * -0x10000,0x20);
  SignedDoesSaturate(iVar17,0x20);
  uVar27 = iVar17 >> 0x10;
  if (iVar17 < 0x10000) {
    if ((int)uVar27 < -0x3f) {
      uVar27 = 0xffffffc1;
    }
    uVar27 = -uVar27;
    do {
      psVar18 = psVar8 + 0x10;
      psVar8 = psVar8 + 1;
      *psVar8 = (short)((int)*psVar18 >> (uVar27 & 0xff));
    } while ((short *)(param_3 + 0x63c) != psVar8);
  }
  else {
    if (0xf < (int)uVar27) {
      uVar27 = 0x10;
    }
    do {
      sVar15 = psVar8[0x10];
      if (sVar15 != 0) {
        iVar17 = (int)sVar15 << (uVar27 & 0xff);
        uVar1 = SignedSaturate(iVar17,0xf);
        SignedDoesSaturate(iVar17,0xf);
        sVar15 = (short)uVar1;
      }
      psVar8 = psVar8 + 1;
      *psVar8 = sVar15;
    } while (psVar8 != (short *)(param_3 + 0x63c));
  }
  if ((int)uVar32 < 1) {
    uVar6 = 0xffffffc1;
    if (-0x3f < (int)uVar32) {
      uVar6 = uVar32;
    }
    uVar6 = -uVar6;
    *(short *)(param_3 + 0x63e) = (short)((int)*(short *)(param_2 + 100) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x640) = (short)((int)*(short *)(param_2 + 0x66) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x642) = (short)((int)*(short *)(param_2 + 0x68) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x644) = (short)((int)*(short *)(param_2 + 0x6a) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x646) = (short)((int)*(short *)(param_2 + 0x6c) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x648) = (short)((int)*(short *)(param_2 + 0x6e) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x64a) = (short)((int)*(short *)(param_2 + 0x70) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x64c) = (short)((int)*(short *)(param_2 + 0x72) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x64e) = (short)((int)*(short *)(param_2 + 0x74) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x650) = (short)((int)*(short *)(param_2 + 0x76) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x652) = (short)((int)*(short *)(param_2 + 0x78) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x654) = (short)((int)*(short *)(param_2 + 0x7a) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x656) = (short)((int)*(short *)(param_2 + 0x7c) >> (uVar6 & 0xff));
    *(short *)(param_3 + 0x658) = (short)((int)*(short *)(param_2 + 0x7e) >> (uVar6 & 0xff));
    sVar15 = (short)((int)*(short *)(param_2 + 0x80) >> (uVar6 & 0xff));
  }
  else {
    sVar15 = *(short *)(param_2 + 100);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x63e) = sVar15;
    sVar15 = *(short *)(param_2 + 0x66);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x640) = sVar15;
    sVar15 = *(short *)(param_2 + 0x68);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x642) = sVar15;
    sVar15 = *(short *)(param_2 + 0x6a);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x644) = sVar15;
    sVar15 = *(short *)(param_2 + 0x6c);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x646) = sVar15;
    sVar15 = *(short *)(param_2 + 0x6e);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x648) = sVar15;
    sVar15 = *(short *)(param_2 + 0x70);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x64a) = sVar15;
    sVar15 = *(short *)(param_2 + 0x72);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x64c) = sVar15;
    sVar15 = *(short *)(param_2 + 0x74);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x64e) = sVar15;
    sVar15 = *(short *)(param_2 + 0x76);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x650) = sVar15;
    sVar15 = *(short *)(param_2 + 0x78);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x652) = sVar15;
    sVar15 = *(short *)(param_2 + 0x7a);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x654) = sVar15;
    sVar15 = *(short *)(param_2 + 0x7c);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x656) = sVar15;
    sVar15 = *(short *)(param_2 + 0x7e);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    *(short *)(param_3 + 0x658) = sVar15;
    sVar15 = *(short *)(param_2 + 0x80);
    if (sVar15 != 0) {
      uVar6 = uVar32;
      if (0xf < (int)uVar32) {
        uVar6 = 0x10;
      }
      iVar17 = (int)sVar15 << (uVar6 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
  }
  *(short *)(param_3 + 0x65a) = sVar15;
  uVar1 = SignedSaturate(uVar21 + uVar36,0x20);
  SignedDoesSaturate(uVar1,0x20);
  *(short *)(param_3 + 0x65c) = (short)((uint)uVar1 >> 0x10);
  if ((int *)*piRam140190dc == local_2c[0]) {
    return uVar27;
  }
  FUN_1401cfd0();
  uStack_74 = 0x140190dd;
  aiStack_9c[0] = *DAT_14019414;
  iVar22 = (int)(short)local_64;
  iVar17 = iVar22;
  if (0x9f < iVar22) {
    iVar17 = 0xa0;
  }
  piStack_500 = local_68;
  *psStack_70 = (short)iVar17;
  iVar19 = SignedSaturate(iVar22 * 0x10000 + -0x30000,0x20);
  SignedDoesSaturate(iVar19,0x20);
  uStack_50c = iVar19 >> 0x10;
  if ((int)uStack_50c < 0x20) {
    uStack_50c = 0x20;
  }
  iVar19 = SignedSaturate(iVar22 * 0x10000 + 0x30000,0x20);
  SignedDoesSaturate(iVar19,0x20);
  iVar19 = iVar19 >> 0x10;
  if (0x108 < iVar19) {
    iVar19 = 0x109;
  }
  uVar27 = SignedSaturate(DAT_14019418 + iVar17 * -0x10000,0x20);
  SignedDoesSaturate(uVar27,0x20);
  iVar9 = uStack_50c * 0x10000;
  iVar20 = SignedSaturate((uVar27 & 0xffff0000) + uStack_50c * -0x10000,0x20);
  SignedDoesSaturate(iVar20,0x20);
  if (iVar22 < 1) {
    iVar17 = 0;
  }
  else {
    sVar15 = 0;
    uVar27 = 0;
    psVar8 = (short *)((int)local_68 + (iVar20 >> 0x10) * 2);
    do {
      uVar27 = SignedSaturate(uVar27 + ((int)*psVar8 >> 3) * ((int)*psVar8 >> 3),0x20);
      SignedDoesSaturate(uVar27,0x20);
      sVar15 = sVar15 + 1;
      psVar8 = psVar8 + 1;
    } while (sVar15 < iVar17);
    uVar27 = uVar27 ^ uVar27 << 1;
    if (uVar27 == 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = LZCOUNT(uVar27) << 0x10;
    }
  }
  uVar27 = SignedSaturate(0x60000 - iVar17,0x20);
  SignedDoesSaturate(uVar27,0x20);
  if ((int)uVar27 < 0x10000) {
    *local_6c = 0;
  }
  else {
    iVar17 = SignedSaturate((uVar27 & 0xffff0000) + 0x10000,0x20);
    SignedDoesSaturate(iVar17,0x20);
    uVar27 = iVar17 >> 0x11;
    *local_6c = (short)(iVar17 >> 0x11);
    if (iVar17 < 0) {
      psVar8 = (short *)((int)local_68 + -2);
      if ((int)uVar27 < -0x10) {
        uVar27 = 0xfffffff0;
      }
      piVar14 = aiStack_4e0;
      do {
        psVar8 = psVar8 + 1;
        sVar15 = *psVar8;
        if (sVar15 != 0) {
          iVar17 = (int)sVar15 << (-uVar27 & 0xff);
          uVar1 = SignedSaturate(iVar17,0xf);
          SignedDoesSaturate(iVar17,0xf);
          sVar15 = (short)uVar1;
        }
        piVar7 = (int *)((int)piVar14 + 2);
        *(short *)piVar14 = sVar15;
        piVar14 = piVar7;
      } while (aiStack_9c != piVar7);
    }
    else {
      if (0x3e < (int)uVar27) {
        uVar27 = 0x3f;
      }
      psVar8 = (short *)((int)local_68 + -2);
      piVar14 = aiStack_4e0;
      do {
        psVar8 = psVar8 + 1;
        piVar7 = (int *)((int)piVar14 + 2);
        *(short *)piVar14 = (short)((int)*psVar8 >> (uVar27 & 0xff));
        piVar14 = piVar7;
      } while (aiStack_9c != piVar7);
    }
    piStack_500 = aiStack_4e0;
  }
  iVar23 = (int)*psStack_70;
  iVar17 = SignedSaturate(DAT_14019418 + iVar23 * -0x10000,0x20);
  SignedDoesSaturate(iVar17,0x20);
  iVar17 = iVar17 >> 0x10;
  uVar27 = SignedSaturate(DAT_14019418 + iVar23 * -0x10000,0x20);
  SignedDoesSaturate(uVar27,0x20);
  iVar22 = SignedSaturate((uVar27 & 0xffff0000) + uStack_50c * -0x10000,0x20);
  SignedDoesSaturate(iVar22,0x20);
  iVar20 = (int)*(short *)((int)piStack_500 + iVar17 * 2);
  iVar28 = (int)*(short *)((int)piStack_500 + (iVar22 >> 0x10) * 2);
  uVar27 = iVar28 * iVar28;
  uStack_504 = iVar20 * iVar28;
  psVar8 = (short *)((int)piStack_500 + (iVar22 >> 0x10) * 2);
  psVar18 = (short *)((int)piStack_500 + (iVar17 + 1) * 2);
  if (1 < iVar23) {
    psVar10 = psVar18;
    do {
      psVar8 = psVar8 + 1;
      sVar15 = *psVar8;
      uVar27 = SignedSaturate(uVar27 + (int)sVar15 * (int)sVar15,0x20);
      SignedDoesSaturate(uVar27,0x20);
      psVar24 = psVar10 + 1;
      uStack_504 = SignedSaturate(uStack_504 + (int)*psVar10 * (int)sVar15,0x20);
      SignedDoesSaturate(uStack_504,0x20);
      psVar10 = psVar24;
    } while (psVar24 != (short *)((int)piStack_500 + (iVar17 + iVar23) * 2));
  }
  uStack_504 = uStack_504 | (int)uStack_504 >> 0x1f;
  uVar6 = uStack_504 ^ uStack_504 << 1;
  if ((uVar6 == 0) || (iVar22 = LZCOUNT(uVar6), iVar22 == 0)) {
    iStack_508 = 0;
    uVar6 = uStack_504;
  }
  else {
    uVar1 = SignedSaturate(iVar22 << 1,0xf);
    SignedDoesSaturate(iVar22 << 1,0xf);
    iStack_508 = (int)(short)uVar1;
    uVar6 = uStack_504 << iVar22;
  }
  iStack_518 = SignedSaturate(((int)uVar6 >> 0x10) * ((int)uVar6 >> 0x10) * 2,0x20);
  SignedDoesSaturate(iStack_518,0x20);
  iStack_518 = iStack_518 >> 0x10;
  uVar6 = uVar27 ^ uVar27 << 1;
  if (uVar6 == 0) {
    iStack_510 = 0;
    uVar6 = uVar27;
  }
  else {
    iStack_510 = LZCOUNT(uVar6);
    uVar6 = uVar27 << iStack_510;
  }
  iStack_514 = (int)uVar6 >> 0x10;
  uVar6 = SignedSaturate(DAT_14019418 + iVar23 * -0x10000,0x20);
  SignedDoesSaturate(uVar6,0x20);
  uVar39 = (uint)(short)(uStack_50c + 1);
  iVar22 = SignedSaturate((uVar6 & 0xffff0000) + (uStack_50c + 1) * -0x10000,0x20);
  SignedDoesSaturate(iVar22,0x20);
  psVar8 = (short *)((int)piStack_500 + (iVar22 >> 0x10) * 2);
  uStack_4fc = uVar27;
  if ((int)uVar39 <= iVar19) {
    psVar10 = psVar8 + (iVar23 - 2U & 0xffff) + 2;
    iVar22 = (int)psVar8[1];
    do {
      iVar9 = (int)*psVar8;
      uVar6 = iVar20 * iVar9;
      psVar24 = psVar8 + 1;
      psVar29 = psVar18;
      if (1 < iVar23) {
        do {
          psVar25 = psVar24 + 1;
          uVar6 = SignedSaturate(uVar6 + (int)*psVar29 * (int)*psVar24,0x20);
          SignedDoesSaturate(uVar6,0x20);
          psVar24 = psVar25;
          psVar29 = psVar29 + 1;
        } while (psVar25 != psVar10);
        iVar22 = (int)*psVar10;
      }
      iVar22 = SignedSaturate(uVar27 - iVar22 * iVar22,0x20);
      SignedDoesSaturate(iVar22,0x20);
      uVar27 = SignedSaturate(iVar22 + iVar9 * iVar9,0x20);
      SignedDoesSaturate(uVar27,0x20);
      uVar26 = uVar6 ^ uVar6 << 1;
      if ((uVar26 == 0) || (iVar22 = LZCOUNT(uVar26), iVar22 == 0)) {
        iVar22 = 0;
        iVar37 = 0;
        iVar28 = SignedSaturate(((int)uVar6 >> 0x10) * ((int)uVar6 >> 0x10) * 2,0x20);
        SignedDoesSaturate(iVar28,0x20);
        uVar26 = uVar27 ^ uVar27 << 1;
        if (uVar26 != 0) goto LAB_14019346;
LAB_140195c6:
        iVar33 = 0;
        uVar26 = uVar27;
      }
      else {
        iVar28 = (int)(uVar6 << iVar22) >> 0x10;
        uVar1 = SignedSaturate(iVar22 << 1,0xf);
        SignedDoesSaturate(iVar22 << 1,0xf);
        iVar37 = (int)(short)uVar1;
        iVar28 = SignedSaturate(iVar28 * iVar28 * 2,0x20);
        SignedDoesSaturate(iVar28,0x20);
        uVar26 = uVar27 ^ uVar27 << 1;
        iVar22 = iVar37;
        if (uVar26 == 0) goto LAB_140195c6;
LAB_14019346:
        iVar33 = LZCOUNT(uVar26);
        uVar26 = uVar27 << iVar33;
        iVar37 = iVar22;
      }
      if ((0 < (int)uVar6) && (0 < (int)uVar26 >> 0x10)) {
        iVar22 = SignedSaturate((iVar28 >> 0x10) * iStack_514 * 2,0x20);
        SignedDoesSaturate(iVar22,0x20);
        iVar35 = SignedSaturate(((int)uVar26 >> 0x10) * iStack_518 * 2,0x20);
        SignedDoesSaturate(iVar35,0x20);
        uVar34 = SignedSaturate(iVar37 * 0x10000 + iStack_510 * 0x10000,0x20);
        SignedDoesSaturate(uVar34,0x20);
        uVar2 = SignedSaturate(iStack_508 * 0x10000 + iVar33 * 0x10000,0x20);
        SignedDoesSaturate(uVar2,0x20);
        iVar3 = SignedSaturate((uVar34 & 0xffff0000) - (uVar2 & 0xffff0000),0x20);
        SignedDoesSaturate(iVar3,0x20);
        uVar34 = iVar3 >> 0x10;
        if (iVar3 < 0) {
          if ((int)uVar34 < -0x3f) {
            uVar34 = 0xffffffc1;
          }
          iVar35 = iVar35 >> (-uVar34 & 0xff);
        }
        else {
          if (0x3e < (int)uVar34) {
            uVar34 = 0x3f;
          }
          iVar22 = iVar22 >> (uVar34 & 0xff);
        }
        iVar22 = SignedSaturate(iVar22 - iVar35,0x20);
        SignedDoesSaturate(iVar22,0x20);
        if (0 < iVar22) {
          iStack_518 = (int)(short)((uint)iVar28 >> 0x10);
          iStack_514 = (int)(short)(uVar26 >> 0x10);
          iStack_510 = iVar33;
          uStack_50c = uVar39;
          iStack_508 = iVar37;
          uStack_504 = uVar6;
          uStack_4fc = uVar27;
        }
      }
      uVar39 = (uint)(short)((short)uVar39 + 1);
      psVar10 = psVar10 + -1;
      iVar22 = iVar9;
      psVar8 = psVar8 + -1;
    } while ((int)uVar39 <= iVar19);
    iVar9 = uStack_50c << 0x10;
  }
  uVar27 = SignedSaturate(DAT_14019418 + iVar23 * -0x10000,0x20);
  SignedDoesSaturate(uVar27,0x20);
  iVar22 = SignedSaturate((uVar27 & 0xffff0000) - iVar9,0x20);
  SignedDoesSaturate(iVar22,0x20);
  psVar8 = (short *)((int)piStack_500 + (iVar22 >> 0x10) * 2);
  uVar27 = SignedSaturate(0,0x20);
  SignedDoesSaturate(uVar27,0x20);
  uStack_94 = uVar21;
  iStack_90 = param_2;
  uStack_8c = uVar36;
  uStack_88 = uVar32;
  iStack_84 = param_3;
  uStack_80 = uVar16;
  puStack_78 = param_1;
  if (iVar23 < 1) {
LAB_14019434:
    if (uVar27 == 0) goto LAB_140195ac;
LAB_1401943a:
    uVar16 = SignedSaturate(0,0x20);
    SignedDoesSaturate(uVar16,0x20);
    if (0 < iVar23) {
      while( true ) {
        sVar15 = psVar18[-1];
        if (sVar15 < 0) {
          sVar4 = SignedSaturate(-sVar15,0x10);
          SignedSaturate(-(sVar15 >> 0xf),0x10);
          uVar16 = SignedSaturate(uVar16 + (int)sVar4,0x20);
          SignedDoesSaturate(uVar16,0x20);
        }
        else {
          uVar16 = SignedSaturate(uVar16 + (int)sVar15,0x20);
          SignedDoesSaturate(uVar16,0x20);
        }
        if (psVar18 == (short *)((int)piStack_500 + (iVar17 + iVar23) * 2)) break;
        psVar18 = psVar18 + 1;
      }
    }
    uVar21 = uVar16 ^ uVar16 << 1;
    if (uVar21 == 0) {
      iVar22 = 0;
      iVar17 = 0;
    }
    else {
      iVar17 = LZCOUNT(uVar21);
      iVar22 = iVar17 << 0x10;
    }
    uVar21 = SignedSaturate(iVar22 + -0x10000,0x20);
    SignedDoesSaturate(uVar21,0x20);
    uVar6 = uVar27 ^ uVar27 << 1;
    iVar22 = 0;
    if (uVar6 != 0) {
      iVar22 = LZCOUNT(uVar6);
    }
    uVar36 = (int)uVar21 >> 0x10;
    if (uVar6 != 0) {
      uVar27 = uVar27 << iVar22;
    }
    if ((int)uVar36 < 1) {
      uVar6 = 0xffffffc1;
      if (-0x3f < (int)uVar36) {
        uVar6 = uVar36;
      }
      iVar17 = (int)uVar16 >> (-uVar6 & 0xff);
    }
    else if ((iVar17 < (int)uVar36) && (uVar16 != 0)) {
      if ((int)uVar16 < 0) {
        iVar17 = 0;
      }
      else {
        iVar17 = 0x7fffffff;
      }
      iVar17 = SignedSaturate(iVar17 * 2,0x20);
      SignedDoesSaturate(iVar17,0x20);
    }
    else {
      iVar17 = uVar16 << (uVar36 & 0xff);
    }
    iVar17 = iVar17 >> 0x10;
    if ((int)uVar27 < 0x10000) goto LAB_14019628;
    if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1401d020(DAT_1401965c,0x311,DAT_14019658,DAT_14019660);
    }
    if ((int)uVar27 >> 0x10 < iVar17) {
      FUN_14016938();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar27 = (uint)(iVar17 << 0xf) / (uint)((int)uVar27 >> 0x10);
    uVar16 = 0x7fff;
    if ((int)uVar27 < 0x8000) {
      uVar16 = uVar27;
    }
    uVar21 = SignedSaturate(iVar22 * 0x10000 - (uVar21 & uRam14019648),0x20);
    SignedDoesSaturate(uVar21,0x20);
    iVar17 = SignedSaturate((uVar21 & uRam14019648) - 0x10000,0x20);
    SignedDoesSaturate(iVar17,0x20);
    uVar21 = iVar17 >> 0x10;
    if ((iVar17 < 0x10000) || (uVar27 == 0)) {
      if ((int)uVar21 < -0x3f) {
        uVar21 = 0xffffffc1;
      }
      sVar15 = (short)((int)uVar16 >> (-uVar21 & 0xff));
    }
    else {
      if (0xf < (int)uVar21) {
        uVar21 = 0x10;
      }
      iVar17 = (int)(short)uVar16 << (uVar21 & 0xff);
      uVar1 = SignedSaturate(iVar17,0xf);
      SignedDoesSaturate(iVar17,0xf);
      sVar15 = (short)uVar1;
    }
    sVar4 = sVar15;
    if (uStack_504 == 0xffffffff) {
      sVar4 = SignedSaturate(-sVar15,0x10);
      SignedSaturate(-(sVar15 >> 0xf),0x10);
    }
    iVar17 = (int)sVar4;
    if (0x3fff < iVar17) {
      iVar17 = 0x4000;
    }
    if (iVar17 < DAT_1401964c) {
      iVar17 = DAT_1401964c;
    }
    iVar22 = iVar17 * 0x300;
  }
  else {
    psVar10 = psVar8 + iVar23;
    do {
      while( true ) {
        psVar24 = psVar8 + 1;
        sVar15 = *psVar8;
        psVar8 = psVar24;
        if (-1 < sVar15) break;
        sVar4 = SignedSaturate(-sVar15,0x10);
        SignedSaturate(-(sVar15 >> 0xf),0x10);
        uVar27 = SignedSaturate(uVar27 + (int)sVar4,0x20);
        SignedDoesSaturate(uVar27,0x20);
        if (psVar24 == psVar10) goto LAB_14019434;
      }
      uVar27 = SignedSaturate(uVar27 + (int)sVar15,0x20);
      SignedDoesSaturate(uVar27,0x20);
    } while (psVar24 != psVar10);
    if (uVar27 != 0) goto LAB_1401943a;
LAB_140195ac:
    iVar22 = 0;
    iVar17 = iVar22;
  }
  _DAT_00000050 = (undefined2)iVar17;
  uVar1 = SignedSaturate(iVar22 * 2,0x20);
  SignedDoesSaturate(uVar1,0x20);
  uVar5 = (ushort)((uint)uVar1 >> 0x10);
  *extraout_r3 = uVar5 & ~((short)uVar5 >> 0xf);
  *extraout_r2 = uStack_4fc;
  *(uint *)(extraout_r1 + 0xbc) = uStack_504;
  if (*DAT_14019650 == aiStack_9c[0]) {
    return uStack_50c;
  }
  FUN_1401cfd0();
LAB_14019628:
                    /* WARNING: Subroutine does not return */
  FUN_1401d020(DAT_1401965c,0x310,DAT_14019658,DAT_14019654);
}


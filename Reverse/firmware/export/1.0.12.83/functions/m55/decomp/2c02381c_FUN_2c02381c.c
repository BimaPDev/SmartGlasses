/* FUN_2c02381c @ 0x2c02381c */

void FUN_2c02381c(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 **ppuVar9;
  short *psVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 **ppuVar18;
  short *psVar19;
  undefined2 *puVar20;
  uint uVar21;
  undefined4 *local_6c;
  undefined4 *local_68;
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
  undefined4 *local_30;
  undefined4 *local_2c [2];
  
  local_2c[0] = (undefined4 *)*DAT_2c023940;
  puVar14 = (undefined4 *)SignedSaturate(2,0x20);
  SignedDoesSaturate(puVar14,0x20);
  local_6c = (undefined4 *)(param_3 + 0x65e);
  if (param_1 == (undefined4 *)(param_3 + 0x660)) {
    puVar7 = local_6c;
    puVar11 = local_6c;
    do {
      puVar15 = (undefined4 *)((int)puVar11 + 2);
      puVar7 = (undefined4 *)((int)puVar7 + 2);
      *(undefined2 *)puVar7 = *(undefined2 *)puVar11;
      puVar11 = puVar15;
    } while (puVar15 != (undefined4 *)(param_3 + 0x6d6));
  }
  else {
    puVar7 = local_6c;
    puVar11 = param_1;
    do {
      puVar15 = puVar11 + 1;
      *puVar11 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar11 = puVar15;
    } while (puVar15 != param_1 + 0x1e);
  }
  psVar10 = (short *)(param_1 + 0x21);
  sVar2 = *DAT_2c023944;
  ppuVar9 = &local_68;
  do {
    puVar7 = (undefined4 *)((int)psVar10[1] * (int)sVar2);
    psVar8 = DAT_2c023944;
    psVar19 = psVar10;
    do {
      psVar8 = psVar8 + 1;
      puVar7 = (undefined4 *)
               SignedSaturate((undefined4 *)((int)puVar7 + (int)*psVar8 * (int)*psVar19),0x20);
      SignedDoesSaturate(puVar7,0x20);
      psVar19 = psVar19 + -1;
    } while (DAT_2c023944 + 0x3b != psVar8);
    ppuVar18 = ppuVar9 + 1;
    *ppuVar9 = puVar7;
    if ((int)puVar7 < 0) {
      puVar7 = (undefined4 *)SignedSaturate(-(int)puVar7,0x20);
      SignedDoesSaturate(puVar7,0x20);
    }
    psVar10 = psVar10 + 8;
    if ((int)puVar14 < (int)puVar7) {
      puVar14 = puVar7;
    }
    ppuVar9 = ppuVar18;
  } while (ppuVar18 != local_2c);
  if (local_6c == (undefined4 *)((int)param_1 + 0xf2)) {
    puVar20 = (undefined2 *)(param_3 + 0x65c);
    puVar7 = param_1 + 0x3c;
    do {
      puVar11 = (undefined4 *)((int)puVar7 + 2);
      puVar20 = puVar20 + 1;
      *puVar20 = *(undefined2 *)puVar7;
      puVar7 = puVar11;
    } while (puVar11 != param_1 + 0x5a);
  }
  else {
    puVar7 = param_1 + 0x3c;
    puVar11 = local_6c;
    do {
      puVar15 = puVar11 + 1;
      *puVar11 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar11 = puVar15;
    } while ((undefined4 *)(param_3 + 0x6d6) != puVar15);
  }
  uVar12 = (uint)puVar14 ^ (int)puVar14 << 1;
  iVar13 = 0;
  if (uVar12 != 0) {
    iVar13 = LZCOUNT(uVar12) << 0x10;
  }
  uVar12 = SignedSaturate(iVar13 + -0x30000,0x20);
  SignedDoesSaturate(uVar12,0x20);
  uVar17 = (uint)*(short *)(param_3 + 0x65c);
  iVar13 = SignedSaturate(uVar17 * 0x10000 - (uVar12 & 0xffff0000),0x20);
  SignedDoesSaturate(iVar13,0x20);
  uVar5 = uVar17 * 0x10000;
  if (-1 < iVar13) {
    uVar17 = (int)uVar12 >> 0x10;
    uVar5 = uVar12 & 0xffff0000;
  }
  uVar16 = iVar13 >> 0x10 & ~(iVar13 >> 0x1f);
  psVar8 = (short *)(param_3 + 0x5f6);
  puVar20 = (undefined2 *)(param_2 + -2);
  psVar10 = psVar8;
  uVar12 = uVar16;
  if (0x3e < (int)uVar16) {
    uVar12 = 0x3f;
  }
  do {
    psVar10 = psVar10 + 1;
    puVar20 = puVar20 + 1;
    *puVar20 = (short)((int)*psVar10 >> (uVar12 & 0xff));
  } while ((short *)(param_3 + 0x65a) != psVar10);
  if ((int)uVar17 < 1) {
    uVar12 = 0xffffffc1;
    if (-0x3f < (int)uVar17) {
      uVar12 = uVar17;
    }
    uVar12 = -uVar12;
    uVar3 = SignedSaturate(((int)local_68 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 100) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_64 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x66) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_60 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x68) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_5c >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x6a) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_58 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x6c) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_54 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x6e) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_50 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x70) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_4c >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x72) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_48 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x74) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_44 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x76) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_40 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x78) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_3c >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x7a) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_38 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x7c) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate((local_34 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x7e) = (short)((uint)uVar3 >> 0x10);
    uVar3 = SignedSaturate(((int)local_30 >> (uVar12 & 0xff)) + 0x8000,0x20);
    SignedDoesSaturate(uVar3,0x20);
    *(short *)(param_2 + 0x80) = (short)((uint)uVar3 >> 0x10);
  }
  else {
    ppuVar9 = &local_6c;
    puVar20 = (undefined2 *)(param_2 + 0x62);
    do {
      while( true ) {
        ppuVar9 = ppuVar9 + 1;
        puVar14 = *ppuVar9;
        uVar12 = (uint)puVar14 ^ (int)puVar14 << 1;
        if (((uVar12 == 0) || (LZCOUNT(uVar12) < (int)uVar17)) && (puVar14 != (undefined4 *)0x0))
        break;
        uVar3 = SignedSaturate(((int)puVar14 << (uVar17 & 0xff)) + 0x8000,0x20);
        SignedDoesSaturate(uVar3,0x20);
        puVar20 = puVar20 + 1;
        *puVar20 = (short)((uint)uVar3 >> 0x10);
        if (&local_30 == ppuVar9) goto LAB_2c02398a;
      }
      if ((int)puVar14 < 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = 0x7fffffff;
      }
      iVar13 = SignedSaturate(iVar13 * 2,0x20);
      SignedDoesSaturate(iVar13,0x20);
      uVar3 = SignedSaturate(iVar13 + 0x8000,0x20);
      SignedDoesSaturate(uVar3,0x20);
      puVar20 = puVar20 + 1;
      *puVar20 = (short)((uint)uVar3 >> 0x10);
    } while (&local_30 != ppuVar9);
  }
LAB_2c02398a:
  psVar10 = (short *)(param_2 + 0x1c);
  uVar12 = 1;
  do {
    while( true ) {
      psVar10 = psVar10 + 1;
      sVar2 = *psVar10;
      uVar17 = (uint)sVar2;
      if (-1 < (int)uVar17) break;
      sVar4 = SignedSaturate(-sVar2,0x10);
      SignedSaturate(-(sVar2 >> 0xf),0x10);
      if ((int)uVar12 < (int)sVar4) {
        uVar12 = (int)sVar4;
      }
      if ((short *)(param_2 + 0x80) == psVar10) goto LAB_2c0239b2;
    }
    if ((int)uVar12 < (int)uVar17) {
      uVar12 = uVar17;
    }
  } while ((short *)(param_2 + 0x80) != psVar10);
LAB_2c0239b2:
  uVar12 = uVar12 ^ uVar12 << 0x11;
  iVar13 = 0;
  if (uVar12 != 0) {
    iVar13 = (LZCOUNT(uVar12) & 0xfU) << 0x10;
  }
  uVar12 = SignedSaturate(iVar13 + -0x30000,0x20);
  SignedDoesSaturate(uVar12,0x20);
  uVar21 = uVar12 & DAT_2c023f2c;
  uVar12 = (int)uVar12 >> 0x10;
  iVar13 = SignedSaturate(uVar21 + uVar16 * -0x10000,0x20);
  SignedDoesSaturate(iVar13,0x20);
  uVar16 = iVar13 >> 0x10;
  uVar17 = 0xffffffc1;
  if (-0x3f < (int)uVar16) {
    uVar17 = uVar16;
  }
  bVar1 = 0 < (int)uVar16;
  if (0xf < (int)uVar16) {
    uVar16 = 0x10;
  }
  do {
    while ((iVar13 = (int)psVar8[0x10], iVar13 != 0 && (bVar1))) {
      iVar13 = iVar13 << (uVar16 & 0xff);
      uVar3 = SignedSaturate(iVar13,0xf);
      SignedDoesSaturate(iVar13,0xf);
      psVar8 = psVar8 + 1;
      *psVar8 = (short)uVar3;
      if (psVar8 == (short *)(param_3 + 0x63c)) goto LAB_2c023a1a;
    }
    psVar8 = psVar8 + 1;
    *psVar8 = (short)(iVar13 >> (-uVar17 & 0xff));
  } while (psVar8 != (short *)(param_3 + 0x63c));
LAB_2c023a1a:
  iVar13 = (int)*(short *)(param_2 + 100);
  bVar1 = (int)uVar12 < 1;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x63e) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x66);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x63e) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x66);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x640) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x68);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x640) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x68);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x642) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x6a);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x642) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x6a);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x644) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x6c);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x644) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x6c);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x646) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x6e);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x646) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x6e);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x648) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x70);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x648) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x70);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x64a) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x72);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x64a) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x72);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x64c) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x74);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x64c) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x74);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x64e) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x76);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x64e) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x76);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x650) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x78);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x650) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x78);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x652) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x7a);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x652) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x7a);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x654) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x7c);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x654) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x7c);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x656) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x7e);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x656) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x7e);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    *(short *)(param_3 + 0x658) = (short)(iVar13 >> (-uVar17 & 0xff));
    sVar2 = *(short *)(param_2 + 0x80);
  }
  else {
    uVar17 = uVar12;
    if (0xf < (int)uVar12) {
      uVar17 = 0x10;
    }
    iVar13 = iVar13 << (uVar17 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    *(short *)(param_3 + 0x658) = (short)uVar3;
    sVar2 = *(short *)(param_2 + 0x80);
  }
  iVar13 = (int)sVar2;
  if ((iVar13 == 0) || (bVar1)) {
    uVar17 = 0xffffffc1;
    if (-0x3f < (int)uVar12) {
      uVar17 = uVar12;
    }
    uVar6 = (undefined2)(iVar13 >> (-uVar17 & 0xff));
  }
  else {
    if (0xf < (int)uVar12) {
      uVar12 = 0x10;
    }
    iVar13 = iVar13 << (uVar12 & 0xff);
    uVar3 = SignedSaturate(iVar13,0xf);
    SignedDoesSaturate(iVar13,0xf);
    uVar6 = (undefined2)uVar3;
  }
  *(undefined2 *)(param_3 + 0x65a) = uVar6;
  uVar3 = SignedSaturate(uVar5 + uVar21,0x20);
  SignedDoesSaturate(uVar3,0x20);
  *(short *)(param_3 + 0x65c) = (short)((uint)uVar3 >> 0x10);
  if ((undefined4 *)*DAT_2c023f28 != local_2c[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00b2e8();
  }
  return;
}


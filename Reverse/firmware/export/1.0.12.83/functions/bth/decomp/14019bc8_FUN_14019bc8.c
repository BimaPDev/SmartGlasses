/* FUN_14019bc8 @ 0x14019bc8 */

/* WARNING: Instruction at (ram,0x1401ad5a) overlaps instruction at (ram,0x1401ad58)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019bc8(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  short sVar12;
  short sVar13;
  undefined2 uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined4 *extraout_r1;
  uint uVar22;
  short *psVar23;
  undefined2 *puVar24;
  undefined4 *extraout_r2;
  uint uVar26;
  int iVar27;
  undefined4 *puVar28;
  undefined4 *extraout_r2_00;
  undefined4 *puVar29;
  int iVar30;
  int *piVar31;
  undefined4 *puVar32;
  undefined4 *extraout_r3;
  short *psVar33;
  uint uVar34;
  uint extraout_r3_00;
  undefined4 *puVar35;
  short *psVar36;
  short *psVar37;
  short *psVar38;
  uint *puVar39;
  undefined2 *puVar40;
  short sVar41;
  char cVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  byte bVar46;
  undefined8 uVar47;
  int iStack_8e0;
  undefined4 uStack_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  undefined4 uStack_898;
  undefined4 uStack_894;
  undefined4 uStack_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  short asStack_884 [20];
  short asStack_85c [118];
  undefined4 uStack_770;
  short asStack_76c [294];
  undefined4 uStack_520;
  short sStack_51c;
  ushort uStack_51a;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  short asStack_508 [296];
  short sStack_2b8;
  uint uStack_2b4;
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
  undefined2 *puVar25;
  
  local_2c[0] = *DAT_14019ec0;
  puVar29 = (undefined4 *)(param_3 + 0x354);
  if (param_2 == (undefined4 *)(param_3 + 0x356)) {
    puVar19 = puVar29;
    do {
      puVar32 = (undefined4 *)((int)puVar19 + 2);
      puVar29 = (undefined4 *)((int)puVar29 + 2);
      *(undefined2 *)puVar29 = *(undefined2 *)puVar19;
      puVar19 = puVar32;
    } while (puVar32 != (undefined4 *)(param_3 + 0x444));
  }
  else {
    puVar19 = param_2;
    do {
      puVar32 = puVar19 + 1;
      *puVar19 = *puVar29;
      puVar19 = puVar32;
      puVar29 = puVar29 + 1;
    } while (puVar32 != param_2 + 0x3c);
  }
  piVar31 = DAT_1401a258;
  if (param_4 != 0) {
    psVar37 = &sStack_196;
    psVar36 = (short *)(param_3 + 0x352);
    psVar38 = DAT_1401a254 + 0x78;
    psVar33 = DAT_1401a254;
    do {
      psVar23 = psVar33 + 1;
      psVar36 = psVar36 + 1;
      uVar8 = SignedSaturate(((int)*psVar36 * (int)*psVar33 + 0x4000) * 2,0x20);
      bVar46 = SignedDoesSaturate(uVar8,0x20);
      bVar44 = psVar23 <= psVar38;
      bVar45 = SBORROW4((int)psVar38,(int)psVar23);
      iVar30 = (int)psVar38 - (int)psVar23;
      bVar43 = psVar38 == psVar23;
      psVar37 = psVar37 + 1;
      *psVar37 = (short)((uint)uVar8 >> 0x10);
      psVar33 = psVar23;
    } while (!bVar43);
    do {
      iVar30 = (uint)(byte)((iVar30 < 0) << 4 | bVar43 << 3 | bVar44 << 2 | bVar45 << 1 | bVar46) <<
               0x1b;
      *piVar31 = iVar30;
      *(byte *)((int)piVar31 + 3) = (byte)((uint)iVar30 >> 0x18) & 0xf7;
      local_23c = 1;
      psVar36 = &sStack_196;
      do {
        psVar36 = psVar36 + 1;
        local_23c = SignedSaturate(local_23c + (int)*psVar36 * (int)*psVar36,0x20);
        bVar46 = SignedDoesSaturate(local_23c,0x20);
      } while (psVar36 != asStack_a6);
      bVar43 = -1 < (int)((uint)bVar46 << 0x1f);
      bVar44 = true;
      bVar45 = false;
      iVar30 = 0;
      if (!bVar43) {
        psVar36 = &sStack_196;
        do {
          psVar36 = psVar36 + 1;
          bVar44 = asStack_a6 <= psVar36;
          bVar45 = SBORROW4((int)psVar36,(int)asStack_a6);
          iVar30 = (int)psVar36 - (int)asStack_a6;
          bVar43 = psVar36 == asStack_a6;
          *psVar36 = *psVar36 >> 2;
        } while (!bVar43);
      }
      uVar26 = (uint)(byte)((iVar30 < 0) << 4 | bVar43 << 3 | bVar44 << 2 | bVar45 << 1 | bVar46);
      iVar30 = (int)(char)((int)(uVar26 << 0x1f) >> 0x1f);
      *piVar31 = uVar26 << 0x1b;
      bVar43 = iVar30 == 0;
      bVar44 = true;
      bVar45 = false;
    } while (!bVar43);
    uVar26 = local_23c ^ local_23c << 1;
    if (uVar26 == 0) {
      uVar26 = 0;
    }
    else {
      uVar26 = LZCOUNT(uVar26);
      local_23c = local_23c << uVar26;
    }
    iVar30 = 1;
    puVar39 = &local_23c;
    psVar36 = local_194;
    do {
      psVar36 = psVar36 + 1;
      uVar22 = (int)*psVar36 * (int)local_194[0];
      iVar17 = SignedSaturate(iVar30 * -0x10000 + 0x780000,0x20);
      SignedDoesSaturate(iVar17,0x20);
      if (0x1ffff < iVar17) {
        psVar33 = psVar36;
        psVar37 = local_194;
        do {
          psVar37 = psVar37 + 1;
          psVar33 = psVar33 + 1;
          uVar22 = SignedSaturate(uVar22 + (int)*psVar37 * (int)*psVar33,0x20);
          SignedDoesSaturate(uVar22,0x20);
        } while (psVar37 != local_194 + ((iVar17 >> 0x10) - 2U & 0xffff) + 1);
      }
      if (uVar26 != 0) {
        uVar34 = uVar22 ^ uVar22 << 1;
        if (((uVar34 == 0) || ((uint)LZCOUNT(uVar34) < uVar26)) && (uVar22 != 0)) {
          if ((int)uVar22 < 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = 0x7fffffff;
          }
          uVar22 = SignedSaturate(iVar17 * 2,0x20);
          SignedDoesSaturate(uVar22,0x20);
        }
        else {
          uVar22 = uVar22 << uVar26;
        }
      }
      iVar30 = iVar30 + 1;
      puVar39 = puVar39 + 1;
      *puVar39 = uVar22;
    } while (iVar30 != 9);
    iVar17 = (int)local_238[0] >> 0x10;
    iVar30 = SignedSaturate(iVar17 * 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    uVar8 = SignedSaturate(((int)local_238[0] >> 1) - iVar30,0x20);
    SignedDoesSaturate(uVar8,0x20);
    iVar30 = SignedSaturate(iVar17 * *DAT_1401a25c * 2,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate(iVar17 * *DAT_1401a260 * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate((int)(short)uVar8 * (int)*DAT_1401a25c * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    local_238[0] = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(local_238[0],0x20);
    iVar17 = (int)local_238[1] >> 0x10;
    iVar30 = SignedSaturate(iVar17 * 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    uVar8 = SignedSaturate(((int)local_238[1] >> 1) - iVar30,0x20);
    SignedDoesSaturate(uVar8,0x20);
    iVar30 = SignedSaturate(iVar17 * DAT_1401a25c[1] * 2,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate(iVar17 * DAT_1401a260[1] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate((int)(short)uVar8 * (int)DAT_1401a25c[1] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    local_238[1] = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(local_238[1],0x20);
    iVar17 = (int)local_238[2] >> 0x10;
    iVar30 = SignedSaturate(iVar17 * 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    uVar8 = SignedSaturate(((int)local_238[2] >> 1) - iVar30,0x20);
    SignedDoesSaturate(uVar8,0x20);
    iVar30 = SignedSaturate(iVar17 * DAT_1401a25c[2] * 2,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate(iVar17 * DAT_1401a260[2] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate((int)(short)uVar8 * (int)DAT_1401a25c[2] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    local_238[2] = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(local_238[2],0x20);
    iVar17 = (int)local_238[3] >> 0x10;
    iVar30 = SignedSaturate(iVar17 * 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    uVar8 = SignedSaturate(((int)local_238[3] >> 1) - iVar30,0x20);
    SignedDoesSaturate(uVar8,0x20);
    iVar30 = SignedSaturate(iVar17 * DAT_1401a25c[3] * 2,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate(iVar17 * DAT_1401a260[3] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate((int)(short)uVar8 * (int)DAT_1401a25c[3] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    local_238[3] = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(local_238[3],0x20);
    iVar17 = local_228 >> 0x10;
    iVar30 = SignedSaturate(iVar17 * 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    uVar8 = SignedSaturate((local_228 >> 1) - iVar30,0x20);
    SignedDoesSaturate(uVar8,0x20);
    iVar30 = SignedSaturate(iVar17 * DAT_1401a25c[4] * 2,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate(iVar17 * DAT_1401a260[4] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate((int)(short)uVar8 * (int)DAT_1401a25c[4] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    local_228 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(local_228,0x20);
    iVar17 = local_224 >> 0x10;
    iVar30 = SignedSaturate(iVar17 * 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    uVar8 = SignedSaturate((local_224 >> 1) - iVar30,0x20);
    SignedDoesSaturate(uVar8,0x20);
    iVar30 = SignedSaturate(iVar17 * DAT_1401a25c[5] * 2,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate(iVar17 * DAT_1401a260[5] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate((int)(short)uVar8 * (int)DAT_1401a25c[5] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    local_224 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(local_224,0x20);
    iVar17 = local_220 >> 0x10;
    iVar30 = SignedSaturate(iVar17 * 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    uVar8 = SignedSaturate((local_220 >> 1) - iVar30,0x20);
    SignedDoesSaturate(uVar8,0x20);
    iVar30 = SignedSaturate(iVar17 * DAT_1401a25c[6] * 2,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate(iVar17 * DAT_1401a260[6] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate((int)(short)uVar8 * (int)DAT_1401a25c[6] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    local_220 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(local_220,0x20);
    iVar17 = local_21c >> 0x10;
    iVar30 = SignedSaturate(iVar17 * 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    uVar8 = SignedSaturate((local_21c >> 1) - iVar30,0x20);
    SignedDoesSaturate(uVar8,0x20);
    iVar30 = SignedSaturate(iVar17 * DAT_1401a25c[7] * 2,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate(iVar17 * DAT_1401a260[7] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = SignedSaturate((int)(short)uVar8 * (int)DAT_1401a25c[7] * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    iVar17 = SignedSaturate((iVar17 >> 0x10) * 2,0x20);
    SignedDoesSaturate(iVar17,0x20);
    local_21c = SignedSaturate(iVar30 + iVar17,0x20);
    SignedDoesSaturate(local_21c,0x20);
    FUN_14018394(&local_23c,param_1 + 0x5c2,param_1 + 0x5d4,8);
    iVar30 = DAT_1401a264;
    uVar8 = SignedSaturate(((int)*(short *)(param_1 + 0x5c4) * (int)*(short *)(DAT_1401a264 + 2) +
                           0x4000) * 2,0x20);
    SignedDoesSaturate(uVar8,0x20);
    sVar41 = *(short *)(DAT_1401a264 + 4);
    *(short *)(param_1 + 0x5c4) = (short)((uint)uVar8 >> 0x10);
    uVar8 = SignedSaturate(((int)*(short *)(param_1 + 0x5c6) * (int)sVar41 + 0x4000) * 2,0x20);
    SignedDoesSaturate(uVar8,0x20);
    *(short *)(param_1 + 0x5c6) = (short)((uint)uVar8 >> 0x10);
    uVar8 = SignedSaturate(((int)*(short *)(iVar30 + 6) * (int)*(short *)(param_1 + 0x5c8) + 0x4000)
                           * 2,0x20);
    SignedDoesSaturate(uVar8,0x20);
    *(short *)(param_1 + 0x5c8) = (short)((uint)uVar8 >> 0x10);
    uVar8 = SignedSaturate(((int)*(short *)(iVar30 + 8) * (int)*(short *)(param_1 + 0x5ca) + 0x4000)
                           * 2,0x20);
    SignedDoesSaturate(uVar8,0x20);
    *(short *)(param_1 + 0x5ca) = (short)((uint)uVar8 >> 0x10);
    uVar8 = SignedSaturate(((int)*(short *)(iVar30 + 10) * (int)*(short *)(param_1 + 0x5cc) + 0x4000
                           ) * 2,0x20);
    SignedDoesSaturate(uVar8,0x20);
    *(short *)(param_1 + 0x5cc) = (short)((uint)uVar8 >> 0x10);
    uVar8 = SignedSaturate(((int)*(short *)(iVar30 + 0xc) * (int)*(short *)(param_1 + 0x5ce) +
                           0x4000) * 2,0x20);
    SignedDoesSaturate(uVar8,0x20);
    *(short *)(param_1 + 0x5ce) = (short)((uint)uVar8 >> 0x10);
    uVar8 = SignedSaturate(((int)*(short *)(iVar30 + 0xe) * (int)*(short *)(param_1 + 0x5d0) +
                           0x4000) * 2,0x20);
    SignedDoesSaturate(uVar8,0x20);
    sVar41 = *(short *)(iVar30 + 0x10);
    *(short *)(param_1 + 0x5d0) = (short)((uint)uVar8 >> 0x10);
    uVar8 = SignedSaturate(((int)sVar41 * (int)*(short *)(param_1 + 0x5d2) + 0x4000) * 2,0x20);
    SignedDoesSaturate(uVar8,0x20);
    *(short *)(param_1 + 0x5d2) = (short)((uint)uVar8 >> 0x10);
  }
  sVar41 = *(short *)(param_1 + 0x5d0);
  sVar1 = *(short *)(param_1 + 0x5cc);
  sVar2 = *(short *)(param_1 + 0x5ce);
  piVar31 = &local_11c;
  local_250 = *(short *)(param_1 + 0x5c2);
  sVar3 = *(short *)(param_1 + 0x5c4);
  sVar4 = *(short *)(param_1 + 0x5c6);
  sVar5 = *(short *)(param_1 + 0x5c8);
  sVar6 = *(short *)(param_1 + 0x5ca);
  sVar7 = *(short *)(param_1 + 0x5d2);
  piVar16 = piVar31;
  psVar36 = (short *)(param_3 + 0x344);
  do {
    iVar30 = SignedSaturate((int)psVar36[8] * (int)local_250 + (int)psVar36[7] * (int)sVar3,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar30 = SignedSaturate(iVar30 + (int)psVar36[6] * (int)sVar4,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar30 = SignedSaturate(iVar30 + (int)psVar36[5] * (int)sVar5,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar30 = SignedSaturate(iVar30 + (int)psVar36[4] * (int)sVar6,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar30 = SignedSaturate(iVar30 + (int)psVar36[3] * (int)sVar1,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar30 = SignedSaturate(iVar30 + (int)psVar36[2] * (int)sVar2,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar30 = SignedSaturate(iVar30 + (int)psVar36[1] * (int)sVar41,0x20);
    SignedDoesSaturate(iVar30,0x20);
    uVar26 = SignedSaturate(iVar30 + (int)*psVar36 * (int)sVar7,0x20);
    SignedDoesSaturate(uVar26,0x20);
    uVar22 = uVar26 ^ uVar26 << 1;
    if (((uVar22 == 0) || ((uint)LZCOUNT(uVar22) < 5)) && (uVar26 != 0)) {
      if ((int)uVar26 < 0) {
        iVar30 = 0;
      }
      else {
        iVar30 = 0x7fffffff;
      }
      iVar30 = SignedSaturate(iVar30 * 2,0x20);
      SignedDoesSaturate(iVar30,0x20);
    }
    else {
      iVar30 = uVar26 << 5;
    }
    uVar8 = SignedSaturate(iVar30 + 0x8000,0x20);
    SignedDoesSaturate(uVar8,0x20);
    piVar15 = (int *)((int)piVar16 + 2);
    *(short *)piVar16 = (short)((uint)uVar8 >> 0x10);
    piVar16 = piVar15;
    psVar36 = psVar36 + 1;
  } while (piVar15 != local_2c);
  if (param_4 != 0) {
    iVar30 = (int)(short)local_11c;
    if (iVar30 < 0) {
      sVar12 = SignedSaturate(-(short)local_11c,0x10);
      SignedSaturate(-((short)local_11c >> 0xf),0x10);
      iVar30 = (int)sVar12;
    }
    do {
      while( true ) {
        piVar31 = (int *)((int)piVar31 + 2);
        sVar12 = *(short *)piVar31;
        if (-1 < sVar12) break;
        sVar13 = SignedSaturate(-sVar12,0x10);
        SignedSaturate(-(sVar12 >> 0xf),0x10);
        iVar30 = SignedSaturate(iVar30 + sVar13,0x20);
        SignedDoesSaturate(iVar30,0x20);
        if ((int *)(local_30 + 2) == piVar31) goto LAB_14019d26;
      }
      iVar30 = SignedSaturate(iVar30 + sVar12,0x20);
      SignedDoesSaturate(iVar30,0x20);
    } while ((int *)(local_30 + 2) != piVar31);
LAB_14019d26:
    uVar26 = SignedSaturate((short)((uint)(iVar30 << 9) >> 0x10) * 0x999a,0x20);
    SignedDoesSaturate(uVar26,0x20);
    uVar8 = SignedSaturate(((iVar30 << 9) >> 0x10) * 0x10000 + (uVar26 & 0xffff0000),0x20);
    SignedDoesSaturate(uVar8,0x20);
    *(short *)(param_1 + 0x6f6) = (short)((uint)uVar8 >> 0x10);
  }
  uVar8 = SignedSaturate(((int)sVar3 * (int)*(short *)(DAT_14019ec4 + 2) + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar8,0x20);
  local_24e = (undefined2)((uint)uVar8 >> 0x10);
  uVar8 = SignedSaturate(((int)*(short *)(DAT_14019ec4 + 4) * (int)sVar4 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar8,0x20);
  local_24c = (undefined2)((uint)uVar8 >> 0x10);
  uVar8 = SignedSaturate(((int)*(short *)(DAT_14019ec4 + 6) * (int)sVar5 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar8,0x20);
  local_24a = (undefined2)((uint)uVar8 >> 0x10);
  uVar8 = SignedSaturate(((int)*(short *)(DAT_14019ec4 + 8) * (int)sVar6 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar8,0x20);
  local_248 = (undefined2)((uint)uVar8 >> 0x10);
  uVar8 = SignedSaturate(((int)*(short *)(DAT_14019ec4 + 10) * (int)sVar1 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar8,0x20);
  local_246 = (undefined2)((uint)uVar8 >> 0x10);
  uVar8 = SignedSaturate(((int)*(short *)(DAT_14019ec4 + 0xc) * (int)sVar2 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar8,0x20);
  local_244 = (undefined2)((uint)uVar8 >> 0x10);
  uVar8 = SignedSaturate(((int)sVar41 * (int)*(short *)(DAT_14019ec4 + 0xe) + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar8,0x20);
  local_242 = (undefined2)((uint)uVar8 >> 0x10);
  uVar8 = SignedSaturate(((int)*(short *)(DAT_14019ec4 + 0x10) * (int)sVar7 + 0x4000) * 2,0x20);
  SignedDoesSaturate(uVar8,0x20);
  local_240 = (undefined2)((uint)uVar8 >> 0x10);
  FUN_14016954(&local_250,&local_11c,&local_11c,0x78);
  *(undefined4 *)(param_1 + 0x5ec) = local_38;
  *(undefined4 *)(param_1 + 0x5f0) = local_34;
  *(undefined1 (*) [4])(param_1 + 0x5f4) = local_30;
  *(undefined4 *)(param_1 + 0x5e8) = local_3c;
  FUN_14018b68(local_194,auStack_218,param_1);
  if (param_4 == 0) {
    uVar14 = *(undefined2 *)(param_1 + 0x6ee);
  }
  else {
    uVar14 = FUN_14016b08(auStack_218,(int)*(short *)(param_1 + 0x6e2));
    *(undefined2 *)(param_1 + 0x6e2) = uVar14;
    uVar14 = FUN_140190e0(param_1 + 0x6da,param_1 + 4,param_1,param_1 + 0x5e6);
    *(undefined2 *)(param_1 + 0x6ee) = uVar14;
  }
  *(undefined2 *)(param_1 + 0x6ec) = *(undefined2 *)(param_1 + 0x6ea);
  *(undefined2 *)(param_1 + 0x6ea) = *(undefined2 *)(param_1 + 0x6e8);
  *(undefined2 *)(param_1 + 0x6e8) = *(undefined2 *)(param_1 + 0x6e6);
  *(undefined2 *)(param_1 + 0x6e6) = *(undefined2 *)(param_1 + 0x6e4);
  *(undefined2 *)(param_1 + 0x6e4) = uVar14;
  if (param_3 + 0x436 == param_1 + 0x5b2) {
    *(undefined2 *)(param_1 + 0x5b2) = *(undefined2 *)(param_3 + 0x434);
    *(undefined2 *)(param_1 + 0x5b4) = *(undefined2 *)(param_3 + 0x436);
    *(undefined2 *)(param_1 + 0x5b6) = *(undefined2 *)(param_3 + 0x438);
    *(undefined2 *)(param_1 + 0x5b8) = *(undefined2 *)(param_3 + 0x43a);
    *(undefined2 *)(param_1 + 0x5ba) = *(undefined2 *)(param_3 + 0x43c);
    *(undefined2 *)(param_1 + 0x5bc) = *(undefined2 *)(param_3 + 0x43e);
    *(undefined2 *)(param_1 + 0x5be) = *(undefined2 *)(param_3 + 0x440);
    *(undefined2 *)(param_1 + 0x5c0) = *(undefined2 *)(param_3 + 0x442);
    if (param_1 + 0xc != param_3 + 0xf2) goto LAB_14019e8a;
LAB_1401a3a6:
    puVar40 = (undefined2 *)(param_1 + 10);
    puVar24 = (undefined2 *)(param_3 + 0xf0);
    do {
      puVar25 = puVar24 + 1;
      puVar40 = puVar40 + 1;
      *puVar40 = *puVar24;
      puVar24 = puVar25;
    } while ((undefined2 *)(param_3 + 0x444) != puVar25);
  }
  else {
    *(undefined4 *)(param_1 + 0x5b2) = *(undefined4 *)(param_3 + 0x434);
    *(undefined4 *)(param_1 + 0x5b6) = *(undefined4 *)(param_3 + 0x438);
    *(undefined4 *)(param_1 + 0x5ba) = *(undefined4 *)(param_3 + 0x43c);
    *(undefined4 *)(param_1 + 0x5be) = *(undefined4 *)(param_3 + 0x440);
    if (param_1 + 0xc == param_3 + 0xf2) goto LAB_1401a3a6;
LAB_14019e8a:
    puVar29 = (undefined4 *)(param_3 + 0xf0);
    puVar19 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar32 = puVar19 + 1;
      *puVar19 = *puVar29;
      puVar29 = puVar29 + 1;
      puVar19 = puVar32;
    } while ((undefined4 *)(param_1 + 0x360) != puVar32);
  }
  if (*DAT_14019ec0 == local_2c[0]) {
    return;
  }
  uVar47 = FUN_1401cfd0();
  puVar29 = (undefined4 *)uVar47;
  uStack_2b4 = *DAT_1401a6e8;
  puVar19 = puVar29 + 3;
  puVar32 = puVar29 + 0x114;
  *(undefined2 *)((int)puVar29 + 0x6f2) = 0;
  uVar26 = (uint)(short)(*(short *)(puVar29 + 0x1bc) + 1);
  psVar36 = (short *)(int)*(short *)((int)puVar29 + 0x6ee);
  *(short *)(puVar29 + 0x1bc) = *(short *)(puVar29 + 0x1bc) + 1;
  uVar22 = uVar26 * 0x10000;
  iVar30 = SignedSaturate(uVar22 - 0x10000,0x20);
  SignedDoesSaturate(iVar30,0x20);
  if (iVar30 >> 0x10 != 0) goto LAB_1401a424;
  uVar14 = FUN_14019664(puVar19,(int)*(short *)(puVar29 + 2),puVar29[1],*puVar29,
                        (int)*(short *)((int)puVar29 + 10));
  *(short *)((int)puVar29 + 0x6de) = (short)((uint)iVar30 >> 0x10);
  *(undefined2 *)(puVar29 + 0x1b6) = uVar14;
  iVar30 = SignedSaturate(0,0x20);
  SignedDoesSaturate(iVar30,0x20);
  iVar30 = iVar30 >> 0x10;
  iVar17 = SignedSaturate(*(short *)(puVar29 + 0x1b9) * 0x10000 +
                          *(short *)((int)puVar29 + 0x6e6) * -0x10000,0x20);
  SignedDoesSaturate(iVar17,0x20);
  iVar17 = iVar17 >> 0x10;
  if (iVar17 < 1) {
    if (iVar17 != 0) {
      iVar9 = SignedSaturate(iVar17 * -0x14,0xf);
      SignedDoesSaturate(iVar17 * -0x14,0xf);
      iVar9 = SignedSaturate(iVar9 * 0x10000 +
                             *(short *)((int)puVar29 + iVar30 * 2 + 0x6e4) * -0x10000,0x20);
      SignedDoesSaturate(iVar9,0x20);
      if (iVar9 < 0) goto LAB_1401ab34;
    }
  }
  else {
    iVar9 = SignedSaturate(iVar17 * 0x14,0xf);
    SignedDoesSaturate(iVar17 * 0x14,0xf);
    iVar9 = SignedSaturate(iVar9 * 0x10000 +
                           *(short *)((int)puVar29 + iVar30 * 2 + 0x6e4) * -0x10000,0x20);
    SignedDoesSaturate(iVar9,0x20);
    if (iVar9 < 0) goto LAB_1401ad4c;
  }
  iVar30 = SignedSaturate(0x10000,0x20);
  SignedDoesSaturate(iVar30,0x20);
  iVar30 = iVar30 >> 0x10;
  iVar17 = SignedSaturate(*(short *)((int)puVar29 + 0x6e6) * 0x10000 +
                          *(short *)(puVar29 + 0x1ba) * -0x10000,0x20);
  SignedDoesSaturate(iVar17,0x20);
  iVar17 = iVar17 >> 0x10;
  if (iVar17 < 1) {
    if (iVar17 != 0) {
      iVar9 = SignedSaturate(iVar17 * -0x14,0xf);
      SignedDoesSaturate(iVar17 * -0x14,0xf);
      iVar9 = SignedSaturate(iVar9 * 0x10000 +
                             *(short *)((int)puVar29 + iVar30 * 2 + 0x6e4) * -0x10000,0x20);
      SignedDoesSaturate(iVar9,0x20);
      if (iVar9 < 0) goto LAB_1401ab34;
    }
  }
  else {
    iVar9 = SignedSaturate(iVar17 * 0x14,0xf);
    SignedDoesSaturate(iVar17 * 0x14,0xf);
    iVar9 = SignedSaturate(iVar9 * 0x10000 +
                           *(short *)((int)puVar29 + iVar30 * 2 + 0x6e4) * -0x10000,0x20);
    SignedDoesSaturate(iVar9,0x20);
    if (iVar9 < 0) goto LAB_1401ad4c;
  }
  iVar30 = SignedSaturate(0x20000,0x20);
  SignedDoesSaturate(iVar30,0x20);
  iVar30 = iVar30 >> 0x10;
  iVar17 = SignedSaturate(*(short *)(puVar29 + 0x1ba) * 0x10000 +
                          *(short *)((int)puVar29 + 0x6ea) * -0x10000,0x20);
  SignedDoesSaturate(iVar17,0x20);
  iVar17 = iVar17 >> 0x10;
  if (iVar17 < 1) {
    if (iVar17 != 0) {
      iVar9 = SignedSaturate(iVar17 * -0x14,0xf);
      SignedDoesSaturate(iVar17 * -0x14,0xf);
      iVar9 = SignedSaturate(iVar9 * 0x10000 +
                             *(short *)((int)puVar29 + iVar30 * 2 + 0x6e4) * -0x10000,0x20);
      SignedDoesSaturate(iVar9,0x20);
      if (iVar9 < 0) goto LAB_1401ab34;
    }
  }
  else {
    iVar9 = SignedSaturate(iVar17 * 0x14,0xf);
    SignedDoesSaturate(iVar17 * 0x14,0xf);
    iVar9 = SignedSaturate(iVar9 * 0x10000 +
                           *(short *)((int)puVar29 + iVar30 * 2 + 0x6e4) * -0x10000,0x20);
    SignedDoesSaturate(iVar9,0x20);
    if (iVar9 < 0) goto LAB_1401ad4c;
  }
  iVar30 = SignedSaturate(0x30000,0x20);
  SignedDoesSaturate(iVar30,0x20);
  iVar30 = iVar30 >> 0x10;
  iVar17 = SignedSaturate(*(short *)((int)puVar29 + 0x6ea) * 0x10000 +
                          *(short *)(puVar29 + 0x1bb) * -0x10000,0x20);
  SignedDoesSaturate(iVar17,0x20);
  iVar17 = iVar17 >> 0x10;
  if (iVar17 < 1) {
    if (iVar17 == 0) goto LAB_1401aa0e;
    iVar9 = SignedSaturate(iVar17 * -0x14,0xf);
    SignedDoesSaturate(iVar17 * -0x14,0xf);
    iVar9 = SignedSaturate(iVar9 * 0x10000 +
                           *(short *)((int)puVar29 + iVar30 * 2 + 0x6e4) * -0x10000,0x20);
    SignedDoesSaturate(iVar9,0x20);
    if (-1 < iVar9) goto LAB_1401aa0e;
LAB_1401ab34:
    uVar26 = SignedSaturate(*(short *)(DAT_1401abcc + iVar30 * 2) * iVar17 * 2,0x20);
    SignedDoesSaturate(uVar26,0x20);
    uVar22 = uVar26 ^ uVar26 << 1;
    if (((uVar22 == 0) || ((uint)LZCOUNT(uVar22) < 6)) && (uVar26 != 0)) {
      if ((int)uVar26 < 0) {
        iVar30 = 0;
      }
      else {
        iVar30 = 0x7fffffff;
      }
      iVar30 = SignedSaturate(iVar30 * 2,0x20);
      SignedDoesSaturate(iVar30,0x20);
    }
    else {
      iVar30 = uVar26 << 6;
    }
    iVar30 = SignedSaturate(iVar30 + 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar17 = iVar30 >> 0x10;
    if (iVar30 >> 0x10 < -0x40) {
      iVar17 = -0x40;
    }
    *(short *)((int)puVar29 + 0x6de) = (short)iVar17;
    if (psVar36 != (short *)0x0) goto LAB_1401aa14;
    goto LAB_1401ab84;
  }
  iVar9 = SignedSaturate(iVar17 * 0x14,0xf);
  SignedDoesSaturate(iVar17 * 0x14,0xf);
  iVar9 = SignedSaturate(iVar9 * 0x10000 + *(short *)((int)puVar29 + iVar30 * 2 + 0x6e4) * -0x10000,
                         0x20);
  SignedDoesSaturate(iVar9,0x20);
  if (-1 < iVar9) goto LAB_1401aa0e;
LAB_1401ad4c:
  uVar26 = SignedSaturate(*(short *)(iRam1401ad9c + iVar30 * 2) * iVar17 * 2,0x20);
  SignedDoesSaturate(uVar26,0x20);
  uVar34 = uVar26 ^ uVar26 << 1;
  uVar22 = uVar34;
  do {
    if (((uVar22 == 0) || ((uint)LZCOUNT(uVar34) < 6)) && (uVar26 != 0)) {
      if ((int)uVar26 < 0) {
        iVar30 = 0;
      }
      else {
        iVar30 = 0x7fffffff;
      }
      iVar30 = SignedSaturate(iVar30 * 2,0x20);
      SignedDoesSaturate(iVar30,0x20);
    }
    else {
      iVar30 = uVar26 << 6;
    }
    iVar30 = SignedSaturate(iVar30 + 0x8000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    iVar30 = iVar30 >> 0x10;
    if (0x7f < iVar30) {
      iVar30 = 0x80;
    }
    *(short *)((int)puVar29 + 0x6de) = (short)iVar30;
LAB_1401aa0e:
    if (psVar36 == (short *)0x0) {
LAB_1401ab84:
      uVar14 = SUB42(psVar36,0);
    }
    else {
LAB_1401aa14:
      uVar8 = SignedSaturate((int)psVar36 << 6,0xf);
      SignedDoesSaturate((int)psVar36 << 6,0xf);
      uVar14 = (undefined2)uVar8;
    }
    *(undefined2 *)(puVar29 + 0x1b7) = uVar14;
    sVar41 = *(short *)(puVar29 + 0x174);
    sVar1 = *(short *)((int)puVar29 + 0x5c2);
    sVar2 = *(short *)((int)puVar29 + 0x5d2);
    sVar3 = *(short *)(puVar29 + 0x171);
    sVar4 = *(short *)((int)puVar29 + 0x5c6);
    sVar5 = *(short *)(puVar29 + 0x172);
    sVar6 = *(short *)((int)puVar29 + 0x5ca);
    sVar7 = *(short *)(puVar29 + 0x173);
    sVar12 = *(short *)((int)puVar29 + 0x5ce);
    psVar37 = asStack_884;
    psVar33 = (short *)((int)puVar19 + (0x1aa - (int)psVar36) * 2 + -2);
    do {
      iVar30 = SignedSaturate((int)psVar33[1] * (int)sVar1 + (int)*psVar33 * (int)sVar3,0x20);
      SignedDoesSaturate(iVar30,0x20);
      iVar30 = SignedSaturate(iVar30 + (int)psVar33[-1] * (int)sVar4,0x20);
      SignedDoesSaturate(iVar30,0x20);
      iVar30 = SignedSaturate(iVar30 + (int)psVar33[-2] * (int)sVar5,0x20);
      SignedDoesSaturate(iVar30,0x20);
      iVar30 = SignedSaturate(iVar30 + (int)psVar33[-3] * (int)sVar6,0x20);
      SignedDoesSaturate(iVar30,0x20);
      iVar30 = SignedSaturate(iVar30 + (int)psVar33[-4] * (int)sVar7,0x20);
      SignedDoesSaturate(iVar30,0x20);
      iVar30 = SignedSaturate(iVar30 + (int)psVar33[-5] * (int)sVar12,0x20);
      SignedDoesSaturate(iVar30,0x20);
      iVar30 = SignedSaturate(iVar30 + (int)psVar33[-6] * (int)sVar41,0x20);
      SignedDoesSaturate(iVar30,0x20);
      uVar26 = SignedSaturate(iVar30 + (int)psVar33[-7] * (int)sVar2,0x20);
      SignedDoesSaturate(uVar26,0x20);
      uVar22 = uVar26 ^ uVar26 << 1;
      if (((uVar22 == 0) || ((uint)LZCOUNT(uVar22) < 5)) && (uVar26 != 0)) {
        if ((int)uVar26 < 0) {
          iVar30 = 0;
        }
        else {
          iVar30 = 0x7fffffff;
        }
        iVar30 = SignedSaturate(iVar30 * 2,0x20);
        SignedDoesSaturate(iVar30,0x20);
      }
      else {
        iVar30 = uVar26 << 5;
      }
      uVar8 = SignedSaturate(iVar30 + 0x8000,0x20);
      SignedDoesSaturate(uVar8,0x20);
      psVar38 = psVar37 + 1;
      *psVar37 = (short)((uint)uVar8 >> 0x10);
      psVar37 = psVar38;
      psVar33 = psVar33 + 1;
    } while (psVar38 != asStack_85c);
    sVar41 = *(short *)((int)puVar29 + 0x5e6);
    psVar37 = (short *)((int)&uStack_888 + 2);
    do {
      while( true ) {
        psVar37 = psVar37 + 1;
        uVar26 = SignedSaturate((int)*psVar37 * (int)sVar41 * 2,0x20);
        SignedDoesSaturate(uVar26,0x20);
        uVar22 = uVar26 ^ uVar26 << 1;
        if (((uVar22 == 0) || ((uint)LZCOUNT(uVar22) < 6)) && (uVar26 != 0)) break;
        uVar8 = SignedSaturate(uVar26 * 0x40 + 0x8000,0x20);
        SignedDoesSaturate(uVar8,0x20);
        *psVar37 = (short)((uint)uVar8 >> 0x10);
        if (psVar37 == asStack_884 + 0x13) goto LAB_1401ac16;
      }
      if ((int)uVar26 < 0) {
        iVar30 = 0;
      }
      else {
        iVar30 = 0x7fffffff;
      }
      iVar30 = SignedSaturate(iVar30 * 2,0x20);
      SignedDoesSaturate(iVar30,0x20);
      uVar8 = SignedSaturate(iVar30 + 0x8000,0x20);
      SignedDoesSaturate(uVar8,0x20);
      *psVar37 = (short)((uint)uVar8 >> 0x10);
    } while (psVar37 != asStack_884 + 0x13);
LAB_1401ac16:
    FUN_14016954((int)puVar29 + 0x5c2,asStack_884,&uStack_8ac,0x14,(int)puVar29 + 0x5b2);
    uVar26 = (uint)*(short *)(puVar29 + 0x1bc);
    puVar29[0x114] = uStack_8ac;
    uVar22 = uVar26 << 0x10;
    puVar29[0x115] = uStack_8a8;
    puVar29[0x116] = uStack_8a4;
    *(undefined4 *)((int)puVar29 + 0x6fa) = 0;
    puVar29[0x117] = uStack_8a0;
    puVar29[0x1c0] = 0;
    puVar29[0x118] = uStack_89c;
    puVar29[0x1c1] = 0;
    puVar29[0x119] = uStack_898;
    puVar29[0x11a] = uStack_894;
    puVar29[0x11b] = uStack_890;
    puVar29[0x11c] = uStack_88c;
    puVar29[0x11d] = uStack_888;
LAB_1401a424:
    uVar34 = SignedSaturate(uVar22 - 0x20000,0x20);
    SignedDoesSaturate(uVar34,0x20);
    if (uVar34 >> 0x10 == 0) {
      uVar34 = SignedSaturate(*(short *)(puVar29 + 0x1b7) * 0x10000 +
                              *(short *)((int)puVar29 + 0x6de) * 0x10000,0x20);
      SignedDoesSaturate(uVar34,0x20);
      iVar30 = SignedSaturate((uVar34 & 0xffff0000) + 0x200000,0x20);
      SignedDoesSaturate(iVar30,0x20);
      psVar36 = (short *)(iVar30 >> 0x16);
      if (0x108 < (int)psVar36) {
        psVar36 = (short *)0x109;
      }
      if ((int)psVar36 < 0x20) {
        psVar36 = (short *)&Reserved2;
      }
      *(short *)(puVar29 + 0x1b7) = (short)psVar36;
    }
    uVar34 = SignedSaturate(uVar22 - 0x10000,0x20);
    SignedDoesSaturate(uVar34,0x20);
    if (uVar34 >> 0x10 != 0) {
      uVar34 = SignedSaturate(uVar22 - 0x20000,0x20);
      SignedDoesSaturate(uVar34,0x20);
      if (uVar34 >> 0x10 != 0) {
        psVar36 = (short *)(int)*(short *)(puVar29 + 0x1b7);
      }
    }
    *(short *)((int)puVar29 + 0x6ee) = (short)psVar36;
    uVar34 = DAT_1401a6fc;
    iVar9 = DAT_1401a6f8;
    iVar17 = DAT_1401a6f4;
    iStack_8e0 = *(short *)(puVar29 + 0x1b6) * 0x10000;
    iVar30 = SignedSaturate(iStack_8e0 + -0x14000000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    if (0xffff < iVar30) {
      iVar30 = 0;
      psVar33 = (short *)((int)puVar29 + 0x35e);
      psVar37 = (short *)((int)puVar29 + (-0x7ffffe51 - (int)psVar36) * 2);
      do {
        psVar37 = psVar37 + 1;
        uVar26 = SignedSaturate((int)*(short *)((int)puVar29 + 0x6da) * (int)*psVar37 * 2,0x20);
        SignedDoesSaturate(uVar26,0x20);
        uVar22 = uVar26 ^ uVar26 << 1;
        iVar27 = uVar26 << 1;
        if (((uVar22 == 0) || (LZCOUNT(uVar22) == 0)) && (uVar26 != 0)) {
          if ((int)uVar26 < 0) {
            iVar27 = 0;
          }
          else {
            iVar27 = 0x7fffffff;
          }
          iVar27 = SignedSaturate(iVar27 * 2,0x20);
          SignedDoesSaturate(iVar27,0x20);
        }
        uVar8 = SignedSaturate(iVar27 + 0x8000,0x20);
        SignedDoesSaturate(uVar8,0x20);
        uVar26 = SignedSaturate(iVar30 * 0x10000 + iVar17,0x20);
        SignedDoesSaturate(uVar26,0x20);
        iVar30 = (int)uVar26 >> 0x10;
        iVar27 = SignedSaturate((int)(short)((uint)uVar8 >> 0x10) * (int)(short)(uVar26 >> 0x10) * 2
                                ,0x20);
        SignedDoesSaturate(iVar27,0x20);
        iVar10 = SignedSaturate(iVar9 - (uVar26 & uVar34),0x20);
        SignedDoesSaturate(iVar10,0x20);
        iVar10 = SignedSaturate((iVar10 >> 0x10) * (int)psVar33[0x79] * 2,0x20);
        SignedDoesSaturate(iVar10,0x20);
        iVar27 = SignedSaturate(iVar27 + iVar10,0x20);
        SignedDoesSaturate(iVar27,0x20);
        uVar8 = SignedSaturate(iVar27 + 0x8000,0x20);
        SignedDoesSaturate(uVar8,0x20);
        psVar33 = psVar33 + 1;
        *psVar33 = (short)((uint)uVar8 >> 0x10);
      } while (psVar33 != (short *)((int)puVar29 + 0x386));
      psVar37 = (short *)((-0x7ffffe51 - (int)psVar36) * 2 + 0x28 + (int)puVar29);
      psVar36 = (short *)(puVar29 + 0x16c);
      do {
        psVar37 = psVar37 + 1;
        uVar26 = SignedSaturate((int)*(short *)((int)puVar29 + 0x6da) * (int)*psVar37 * 2,0x20);
        SignedDoesSaturate(uVar26,0x20);
        uVar22 = uVar26 ^ uVar26 << 1;
        iVar30 = uVar26 << 1;
        if (((uVar22 == 0) || (LZCOUNT(uVar22) == 0)) && (uVar26 != 0)) {
          if ((int)uVar26 < 0) {
            iVar30 = 0;
          }
          else {
            iVar30 = 0x7fffffff;
          }
          iVar30 = SignedSaturate(iVar30 * 2,0x20);
          SignedDoesSaturate(iVar30,0x20);
        }
        uVar8 = SignedSaturate(iVar30 + 0x8000,0x20);
        SignedDoesSaturate(uVar8,0x20);
        psVar33 = psVar33 + 1;
        *psVar33 = (short)((uint)uVar8 >> 0x10);
      } while (psVar33 != psVar36);
      uVar26 = (uint)*(short *)(puVar29 + 0x1bc);
      iStack_8e0 = (int)*(short *)(puVar29 + 0x1b6) << 0x10;
      uVar22 = uVar26 << 0x10;
    }
    iVar30 = SignedSaturate(iStack_8e0 + -0x1c000000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    if (iVar30 < 0x10000) {
      psVar37 = (short *)((int)&uStack_770 + 2);
      sVar41 = *(short *)((int)puVar29 + 0x6f6);
      psVar36 = psVar37;
      uVar34 = uVar22;
      while( true ) {
        iVar30 = SignedSaturate(uVar34 - 0x7e0000,0x20);
        SignedDoesSaturate(iVar30,0x20);
        if (0xffff < iVar30) {
          uVar34 = SignedSaturate(uVar34 - 0x7f0000,0x20);
          SignedDoesSaturate(uVar34,0x20);
          uVar26 = (int)uVar34 >> 0x10;
          uVar34 = uVar34 & DAT_1401a6fc;
        }
        uVar8 = SignedSaturate(((int)sVar41 * (int)*(short *)(DAT_1401a6f0 + (uVar26 & 0x7f) * 2) +
                               0x4000) * 2,0x20);
        SignedDoesSaturate(uVar8,0x20);
        psVar36 = psVar36 + 1;
        *psVar36 = (short)((uint)uVar8 >> 0x10);
        iVar30 = SignedSaturate(uVar34 + uVar22,0x20);
        SignedDoesSaturate(iVar30,0x20);
        uVar26 = iVar30 >> 0x10;
        if (psVar36 == &sStack_51c) break;
        uVar34 = uVar26 << 0x10;
      }
      sVar41 = *(short *)((int)puVar29 + 0x5d2);
      uStack_514 = *(undefined4 *)((int)puVar29 + 0x5b6);
      sVar1 = *(short *)((int)puVar29 + 0x5c2);
      uStack_510 = *(undefined4 *)((int)puVar29 + 0x5ba);
      sVar2 = *(short *)(puVar29 + 0x171);
      uStack_50c = *(undefined4 *)((int)puVar29 + 0x5be);
      sVar3 = *(short *)((int)puVar29 + 0x5c6);
      uStack_518 = *(undefined4 *)((int)puVar29 + 0x5b2);
      sVar4 = *(short *)(puVar29 + 0x173);
      sVar5 = *(short *)(puVar29 + 0x172);
      sVar6 = *(short *)((int)puVar29 + 0x5ce);
      sVar7 = *(short *)((int)puVar29 + 0x5ca);
      sVar12 = *(short *)(puVar29 + 0x174);
      psVar36 = (short *)&uStack_518;
      do {
        while( true ) {
          psVar37 = psVar37 + 1;
          iVar30 = SignedSaturate((int)*psVar37 * (int)sVar1 - (int)psVar36[7] * (int)sVar2,0x20);
          SignedDoesSaturate(iVar30,0x20);
          iVar30 = SignedSaturate(iVar30 - (int)psVar36[6] * (int)sVar3,0x20);
          SignedDoesSaturate(iVar30,0x20);
          iVar30 = SignedSaturate(iVar30 - (int)psVar36[5] * (int)sVar5,0x20);
          SignedDoesSaturate(iVar30,0x20);
          iVar30 = SignedSaturate(iVar30 - (int)psVar36[4] * (int)sVar7,0x20);
          SignedDoesSaturate(iVar30,0x20);
          iVar30 = SignedSaturate(iVar30 - (int)psVar36[3] * (int)sVar4,0x20);
          SignedDoesSaturate(iVar30,0x20);
          iVar30 = SignedSaturate(iVar30 - (int)psVar36[2] * (int)sVar6,0x20);
          SignedDoesSaturate(iVar30,0x20);
          psVar33 = psVar36 + 1;
          iVar30 = SignedSaturate(iVar30 - (int)*psVar33 * (int)sVar12,0x20);
          SignedDoesSaturate(iVar30,0x20);
          uVar26 = SignedSaturate(iVar30 - (int)*psVar36 * (int)sVar41,0x20);
          SignedDoesSaturate(uVar26,0x20);
          uVar22 = uVar26 ^ uVar26 << 1;
          if (((uVar22 == 0) || ((LZCOUNT(uVar22) & 0x1cU) == 0)) && (uVar26 != 0)) break;
          uVar8 = SignedSaturate(uVar26 * 0x10 + 0x8000,0x20);
          SignedDoesSaturate(uVar8,0x20);
          psVar36[8] = (short)((uint)uVar8 >> 0x10);
          psVar36 = psVar33;
          if (psVar37 == &sStack_51c) goto LAB_1401a830;
        }
        if ((int)uVar26 < 0) {
          iVar30 = 0;
        }
        else {
          iVar30 = 0x7fffffff;
        }
        iVar30 = SignedSaturate(iVar30 * 2,0x20);
        SignedDoesSaturate(iVar30,0x20);
        uVar8 = SignedSaturate(iVar30 + 0x8000,0x20);
        SignedDoesSaturate(uVar8,0x20);
        psVar36[8] = (short)((uint)uVar8 >> 0x10);
        psVar36 = psVar33;
      } while (psVar37 != &sStack_51c);
LAB_1401a830:
      puVar35 = &uStack_50c;
      psVar36 = asStack_76c;
      do {
        puVar35 = puVar35 + 1;
        psVar37 = psVar36 + 2;
        *(undefined4 *)psVar36 = *puVar35;
        psVar36 = psVar37;
      } while (psVar37 != &sStack_51c);
      sStack_51c = sStack_2b8;
      iVar30 = SignedSaturate(0x1400,0xf);
      SignedDoesSaturate(0x1400,0xf);
      iVar30 = SignedSaturate(iStack_8e0 + iVar30 * -0x10000,0x20);
      SignedDoesSaturate(iVar30,0x20);
      if (iVar30 < 0x10000) {
        *(undefined2 *)((int)puVar29 + 0x6d6) = 0x7fff;
        puVar35 = &uStack_770;
        puVar18 = puVar29 + 0xd8;
        do {
          puVar35 = puVar35 + 1;
          psVar36 = (short *)*puVar35;
          *puVar18 = psVar36;
          puVar18 = puVar18 + 1;
        } while (&uStack_520 != puVar35);
        *(short *)(puVar29 + 0x16c) = sStack_2b8;
        uVar22 = (int)*(short *)(puVar29 + 0x1bc) << 0x10;
      }
      else {
        iVar30 = SignedSaturate(0x1c000000 - iStack_8e0,0x20);
        SignedDoesSaturate(iVar30,0x20);
        if (iVar30 >> 0x10 == 0) {
          sVar41 = (short)((uint)iVar30 >> 0x10);
          iVar30 = 0;
        }
        else {
          iVar17 = (iVar30 >> 0x10) << 4;
          iVar30 = SignedSaturate(iVar17,0xf);
          SignedDoesSaturate(iVar17,0xf);
          sVar41 = (short)iVar30;
          iVar30 = iVar30 << 0x10;
        }
        *(short *)((int)puVar29 + 0x6d6) = sVar41;
        iVar9 = SignedSaturate(DAT_1401abc8 - iVar30,0x20);
        SignedDoesSaturate(iVar9,0x20);
        iVar30 = SignedSaturate((iVar9 >> 0x10) * (int)*(short *)(puVar29 + 0xd8) * 2,0x20);
        SignedDoesSaturate(iVar30,0x20);
        iVar17 = SignedSaturate((int)asStack_76c[0] * (int)sVar41 * 2,0x20);
        SignedDoesSaturate(iVar17,0x20);
        iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
        SignedDoesSaturate(iVar30,0x20);
        uVar8 = SignedSaturate(iVar30 + 0x8000,0x20);
        SignedDoesSaturate(uVar8,0x20);
        *(short *)(puVar29 + 0xd8) = (short)((uint)uVar8 >> 0x10);
        psVar37 = (short *)(puVar29 + 0xd8);
        puVar20 = (ushort *)(asStack_76c + 1);
        do {
          psVar37 = psVar37 + 1;
          iVar30 = SignedSaturate((iVar9 >> 0x10) * (int)*psVar37 * 2,0x20);
          SignedDoesSaturate(iVar30,0x20);
          puVar21 = puVar20 + 1;
          psVar36 = (short *)(uint)*puVar20;
          iVar17 = SignedSaturate((int)*(short *)((int)puVar29 + 0x6d6) * (int)(short)*puVar20 * 2,
                                  0x20);
          SignedDoesSaturate(iVar17,0x20);
          iVar30 = SignedSaturate(iVar30 + iVar17,0x20);
          SignedDoesSaturate(iVar30,0x20);
          uVar8 = SignedSaturate(iVar30 + 0x8000,0x20);
          SignedDoesSaturate(uVar8,0x20);
          *psVar37 = (short)((uint)uVar8 >> 0x10);
          puVar20 = puVar21;
        } while (puVar21 != &uStack_51a);
        uVar22 = (int)*(short *)(puVar29 + 0x1bc) << 0x10;
      }
    }
    else {
      *(undefined2 *)((int)puVar29 + 0x6d6) = 0;
    }
    iVar30 = SignedSaturate(uVar22 - 0x20000,0x20);
    SignedDoesSaturate(iVar30,0x20);
    if (0xffff < iVar30) {
      iVar30 = SignedSaturate(uVar22 - 0x60000,0x20);
      SignedDoesSaturate(iVar30,0x20);
      if (iVar30 < 0x10000) {
        iVar17 = SignedSaturate(uVar22 - 0x30000,0x20);
        SignedDoesSaturate(iVar17,0x20);
        iVar30 = 0x7fff;
        iVar17 = *(short *)(DAT_1401a6ec + (iVar17 >> 0x10) * 2) * 0x10000;
        psVar37 = (short *)((int)puVar29 + 0x35e);
        do {
          psVar37 = psVar37 + 1;
          uVar8 = SignedSaturate((int)*psVar37 * (int)(short)iVar30 * 2,0x20);
          SignedDoesSaturate(uVar8,0x20);
          *psVar37 = (short)((uint)uVar8 >> 0x10);
          iVar30 = SignedSaturate(iVar30 * 0x10000 + iVar17,0x20);
          SignedDoesSaturate(iVar30,0x20);
          iVar30 = iVar30 >> 0x10;
        } while (psVar37 != (short *)((int)puVar29 + 0x44e));
        psVar36 = (short *)0x60000;
        iVar9 = SignedSaturate(*(short *)(puVar29 + 0x1bc) * 0x10000 + -0x60000,0x20);
        SignedDoesSaturate(iVar9,0x20);
        if (iVar9 < 0) {
          psVar36 = (short *)(puVar29 + 0x16c);
          do {
            psVar37 = psVar37 + 1;
            uVar8 = SignedSaturate((int)*psVar37 * (int)(short)iVar30 * 2,0x20);
            SignedDoesSaturate(uVar8,0x20);
            *psVar37 = (short)((uint)uVar8 >> 0x10);
            iVar30 = SignedSaturate(iVar30 * 0x10000 + iVar17,0x20);
            SignedDoesSaturate(iVar30,0x20);
            iVar30 = iVar30 >> 0x10;
          } while (psVar37 != psVar36);
        }
        else {
          puVar35 = puVar32;
          do {
            puVar18 = puVar35 + 1;
            *puVar35 = 0;
            puVar35 = puVar18;
          } while (puVar18 != puVar29 + 0x16c);
          *(undefined2 *)(puVar29 + 0x16c) = 0;
        }
      }
      else {
        puVar35 = puVar29 + 0xd8;
        do {
          puVar18 = puVar35 + 1;
          *puVar35 = 0;
          puVar35 = puVar18;
        } while (puVar18 != puVar29 + 0x16c);
        *(undefined2 *)(puVar29 + 0x16c) = 0;
      }
    }
    if (extraout_r2 != (undefined4 *)0x0) {
      puVar35 = puVar29 + 0xd8;
      if (extraout_r2 == (undefined4 *)((int)puVar29 + 0x362)) {
        puVar18 = puVar35;
        do {
          puVar28 = (undefined4 *)((int)puVar18 + 2);
          puVar35 = (undefined4 *)((int)puVar35 + 2);
          *(undefined2 *)puVar35 = *(undefined2 *)puVar18;
          puVar18 = puVar28;
        } while (puVar28 != (undefined4 *)((int)puVar29 + 0x4e2));
      }
      else {
        puVar18 = extraout_r2;
        do {
          puVar28 = puVar18 + 1;
          *puVar18 = *puVar35;
          puVar18 = puVar28;
          puVar35 = puVar35 + 1;
        } while (puVar28 != extraout_r2 + 0x60);
        *(undefined2 *)(extraout_r2 + 0x60) = *(undefined2 *)(puVar29 + 0x138);
      }
    }
    FUN_14019bc8(puVar29,(int)((ulonglong)uVar47 >> 0x20),puVar19,0);
    if (extraout_r3 != (undefined4 *)0x0) {
      if (extraout_r3 == (undefined4 *)((int)puVar29 + 0x452)) {
        puVar29 = puVar29 + 0x153;
        puVar18 = puVar32;
        puVar35 = puVar32;
        do {
          puVar28 = (undefined4 *)((int)puVar18 + 2);
          puVar35 = (undefined4 *)((int)puVar35 + 2);
          *(undefined2 *)puVar35 = *(undefined2 *)puVar18;
          puVar18 = puVar28;
        } while (puVar29 != puVar28);
      }
      else {
        puVar35 = puVar32;
        puVar18 = extraout_r3;
        do {
          puVar28 = puVar18 + 1;
          *puVar18 = *puVar35;
          puVar35 = puVar35 + 1;
          puVar18 = puVar28;
        } while (puVar28 != extraout_r3 + 0x3f);
      }
    }
    cVar42 = (int)(*DAT_1401a6e8 ^ uStack_2b4) < 0;
    if ((*DAT_1401a6e8 ^ uStack_2b4) == 0) {
      return;
    }
    FUN_1401cfd0();
    if (cVar42 != '\0') break;
    iVar30 = func_0x1429d280();
    uVar26 = iVar30 << 0xd;
    uVar34 = extraout_r3_00;
    uVar22 = uVar26;
  } while( true );
  puVar29 = (undefined4 *)&DAT_000003b0;
  puVar19 = extraout_r2_00;
  puVar32 = puVar29;
  if (extraout_r2_00 == (undefined4 *)0x3ae) {
    puVar40 = (undefined2 *)0x3ae;
    iVar30 = 0x3b0;
    while( true ) {
      puVar40 = puVar40 + 1;
      *puVar40 = *(undefined2 *)(iVar30 + -2);
      if (iVar30 == 0x49e) break;
      iVar30 = iVar30 + 2;
    }
  }
  else {
    do {
      puVar35 = puVar32 + 1;
      *puVar32 = *puVar19;
      puVar19 = puVar19 + 1;
      puVar32 = puVar35;
    } while (puVar35 != (undefined4 *)&DAT_000004a0);
  }
  if (_DAT_00000740 == 0) {
    iVar30 = (int)(short)(_DAT_00000742 + 1);
    if (8 < iVar30) {
      iVar30 = 9;
    }
    _DAT_00000742 = (short)iVar30;
    iVar30 = iVar30 << 0x10;
  }
  else {
    _DAT_00000744 = _DAT_00000740;
    _DAT_00000742 = 1;
    iVar30 = 0x10000;
  }
  _DAT_00000740 = 0;
  uVar26 = SignedSaturate(iVar30 + -0x10000,0x20);
  SignedDoesSaturate(uVar26,0x20);
  if (uVar26 >> 0x10 == 0) {
    uVar26 = SignedSaturate(_DAT_00000726 * 0x10000 - DAT_1401aff8,0x20);
    SignedDoesSaturate(uVar26,0x20);
    if (uVar26 >> 0x10 == 0) {
      sVar41 = 8;
      _DAT_0000074a = CONCAT22(_DAT_0000074c,8);
      _DAT_00000750 = DAT_1401b008;
      _DAT_00000754 = DAT_1401b004;
    }
    else {
      sVar41 = 0x78;
      _DAT_0000074a = CONCAT22(_DAT_0000074c,0x8c);
      _DAT_00000750 = DAT_1401b000;
      _DAT_00000754 = DAT_1401affc;
    }
    iVar30 = 0;
    psVar36 = (short *)0x3ae;
    do {
      psVar37 = psVar36 + 1;
      iVar17 = SignedSaturate((int)*(short *)(_DAT_00000750 + iVar30 * 2) * (int)*psVar37 * 2,0x20);
      SignedDoesSaturate(iVar17,0x20);
      iVar9 = SignedSaturate((int)*(short *)(_DAT_00000754 + iVar30 * 2) * (int)psVar36[0x79] * 2,
                             0x20);
      SignedDoesSaturate(iVar9,0x20);
      iVar17 = SignedSaturate(iVar17 + iVar9,0x20);
      SignedDoesSaturate(iVar17,0x20);
      uVar8 = SignedSaturate(iVar17 + 0x8000,0x20);
      SignedDoesSaturate(uVar8,0x20);
      iVar30 = iVar30 + 1;
      *psVar37 = (short)((uint)uVar8 >> 0x10);
      psVar36 = psVar37;
    } while ((short)iVar30 < sVar41);
    if (_DAT_0000074a < 0x79) {
      _DAT_0000074a = 0;
    }
    else {
      uVar11 = SignedSaturate(_DAT_0000074a * 0x10000 + -0x780000,0x20);
      SignedDoesSaturate(uVar11,0x20);
      uVar8 = SignedSaturate(_DAT_0000074c * 0x10000 + 0x780000,0x20);
      SignedDoesSaturate(uVar8,0x20);
      _DAT_0000074a = CONCAT22((short)((uint)uVar8 >> 0x10),(short)((uint)uVar11 >> 0x10));
    }
    puVar19 = puVar29;
    puVar32 = puVar29;
    if (extraout_r1 == (undefined4 *)&DAT_000003b2) {
      do {
        puVar35 = (undefined4 *)((int)puVar19 + 2);
        *(undefined2 *)((int)puVar32 + 2) = *(undefined2 *)puVar19;
        puVar19 = puVar35;
        puVar32 = (undefined4 *)((int)puVar32 + 2);
      } while (puVar35 != (undefined4 *)&DAT_000004a0);
      iVar30 = (int)_DAT_00000742 << 0x10;
    }
    else {
      puVar19 = extraout_r1;
      do {
        puVar35 = puVar19 + 1;
        *puVar19 = *puVar32;
        puVar19 = puVar35;
        puVar32 = puVar32 + 1;
      } while (puVar35 != extraout_r1 + 0x3c);
      iVar30 = (int)_DAT_00000742 << 0x10;
    }
  }
  iVar30 = SignedSaturate(iVar30 + -0x10000,0x20);
  SignedDoesSaturate(iVar30,0x20);
  if ((0xffff < iVar30) && (0 < _DAT_0000074a)) {
    iVar30 = (int)_DAT_0000074c;
    if (_DAT_0000074a < 0x79) {
      sVar41 = _DAT_0000074c + _DAT_0000074a;
    }
    else {
      sVar41 = _DAT_0000074c + 0x78;
    }
    psVar36 = (short *)0x3ae;
    do {
      psVar36 = psVar36 + 1;
      iVar17 = SignedSaturate((int)*(short *)(_DAT_00000750 + iVar30 * 2) * (int)*psVar36 * 2,0x20);
      SignedDoesSaturate(iVar17,0x20);
      iVar9 = SignedSaturate((int)*(short *)(_DAT_00000754 + iVar30 * 2) *
                             (int)*(short *)(iVar30 * 2 + 0x4a0) * 2,0x20);
      SignedDoesSaturate(iVar9,0x20);
      iVar17 = SignedSaturate(iVar17 + iVar9,0x20);
      SignedDoesSaturate(iVar17,0x20);
      uVar8 = SignedSaturate(iVar17 + 0x8000,0x20);
      SignedDoesSaturate(uVar8,0x20);
      iVar30 = (int)(short)((short)iVar30 + 1);
      *psVar36 = (short)((uint)uVar8 >> 0x10);
    } while (iVar30 != sVar41);
    if (_DAT_0000074a < 0x79) {
      _DAT_0000074a = 0;
    }
    else {
      uVar11 = SignedSaturate(_DAT_0000074a * 0x10000 + -0x780000,0x20);
      SignedDoesSaturate(uVar11,0x20);
      uVar8 = SignedSaturate(_DAT_0000074c * 0x10000 + 0x780000,0x20);
      SignedDoesSaturate(uVar8,0x20);
      _DAT_0000074a = CONCAT22((short)((uint)uVar8 >> 0x10),(short)((uint)uVar11 >> 0x10));
    }
    puVar19 = puVar29;
    if (extraout_r1 == (undefined4 *)&DAT_000003b2) {
      do {
        puVar40 = (undefined2 *)((int)puVar19 + 2);
        *(undefined2 *)((int)puVar29 + 2) = *(undefined2 *)puVar19;
        if (puVar40 == (undefined2 *)&DAT_000004a0) break;
        puVar19 = puVar19 + 1;
        puVar29 = puVar29 + 1;
        *(undefined2 *)puVar29 = *puVar40;
      } while (puVar19 != (undefined4 *)&DAT_000004a0);
    }
    else {
      puVar19 = extraout_r1;
      do {
        puVar32 = puVar19 + 1;
        *puVar19 = *puVar29;
        puVar19 = puVar32;
        puVar29 = puVar29 + 1;
      } while (extraout_r1 + 0x3c != puVar32);
    }
  }
  FUN_14019bc8(0x50,extraout_r1,0x5c,1);
  return;
}


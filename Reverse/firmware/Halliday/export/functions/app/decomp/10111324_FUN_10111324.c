/* FUN_10111324 @ 0x10111324 */

int FUN_10111324(int param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  char cVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  short *psVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  bool bVar19;
  int *piVar20;
  byte bVar21;
  byte *pbVar22;
  int iVar23;
  byte bVar24;
  float *pfVar25;
  undefined4 *puVar26;
  undefined1 uVar27;
  uint in_fpscr;
  uint uVar28;
  uint uVar29;
  undefined4 *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  float fVar40;
  undefined4 *puVar41;
  undefined4 *puVar42;
  int local_ac;
  float *local_a4;
  int local_94;
  float local_90;
  int local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  float local_80;
  float local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x2c) == 0) ||
     (psVar14 = *(short **)(param_1 + 0x34), psVar14 == (short *)0x0)) {
switchD_10111514_default:
    return 1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_10139762();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  fVar33 = *(float *)(psVar14 + 2);
  uVar10 = in_fpscr & 0xfffffff | (uint)(fVar33 < 2.5) << 0x1f;
  uVar28 = uVar10 | (uint)NAN(fVar33) << 0x1c;
  if (((byte)(uVar10 >> 0x1f) == ((byte)(uVar28 >> 0x1c) & 1)) &&
     (uVar10 = in_fpscr & 0xfffffff | (uint)(fVar33 < 1.0) << 0x1f,
     uVar28 = uVar10 | (uint)NAN(fVar33) << 0x1c,
     (byte)(uVar10 >> 0x1f) == ((byte)(uVar28 >> 0x1c) & 1))) {
    *(undefined1 *)(psVar14 + 0x46) = 1;
  }
  iVar16 = *(int *)(psVar14 + 8);
  *(undefined1 *)(psVar14 + 0x2a) = *(undefined1 *)(param_1 + 0x44);
  if ((iVar16 != 0) && (*(int *)(psVar14 + 6) != 0)) {
    if (iVar16 << 0x1f < 0) {
      iVar16 = iVar16 + -1;
    }
    fVar33 = *(float *)(psVar14 + 10);
    puVar5 = (undefined4 *)FUN_100f0524(iVar16 << 2);
    puVar12 = DAT_101116d0;
    if (puVar5 == (undefined4 *)0x0) {
      return 5;
    }
    pfVar8 = *(float **)(psVar14 + 6);
    *(undefined4 **)(psVar14 + 0x12) = DAT_101116d0;
    pfVar18 = pfVar8;
    for (iVar9 = 0; iVar16 != iVar9; iVar9 = iVar9 + 1) {
      puVar26 = (undefined4 *)*pfVar18;
      pfVar18 = pfVar18 + 1;
      uVar28 = uVar28 & 0xfffffff;
      if ((float)puVar26 < 0.0) {
        puVar26 = puVar12;
      }
      *puVar5 = puVar26;
      puVar5 = puVar5 + 1;
      *(float *)(psVar14 + 0x12) = *(float *)(psVar14 + 0x12) + (float)puVar26;
    }
    fVar34 = *(float *)(psVar14 + 0x12);
    uVar28 = uVar28 & 0xfffffff;
    if (DAT_101116c4 <= fVar34) {
      for (; fVar33 < 0.0; fVar33 = fVar33 + fVar34) {
      }
      while (uVar28 = uVar28 & 0xfffffff | (uint)(fVar34 == fVar33) << 0x1e |
                      (uint)(fVar33 <= fVar34) << 0x1d, bVar24 = (byte)(uVar28 >> 0x18),
            !(bool)(bVar24 >> 5 & 1) || (bool)(bVar24 >> 6)) {
        fVar33 = fVar33 - fVar34;
      }
      iVar16 = 0;
      while( true ) {
        fVar34 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        if ((iVar16 == *(int *)(psVar14 + 8)) ||
           (uVar28 = uVar28 & 0xfffffff | (uint)(fVar33 == fVar34) << 0x1e |
                     (uint)(fVar34 <= fVar33) << 0x1d, bVar24 = (byte)(uVar28 >> 0x18),
           !(bool)(bVar24 >> 5 & 1) || (bool)(bVar24 >> 6))) break;
        fVar33 = fVar33 - fVar34;
        iVar16 = iVar16 + 1;
      }
      *(int *)(psVar14 + 0xe) = iVar16;
      *(float *)(psVar14 + 0xc) = fVar34 - fVar33;
    }
    else {
      psVar14[8] = 0;
      psVar14[9] = 0;
    }
    FUN_10139762();
  }
  uVar10 = (uint)*(byte *)(param_1 + 0x11);
  if (3 < uVar10) {
    return 1;
  }
  uVar17 = (uint)*(byte *)(DAT_101116c8 + uVar10);
  pcVar11 = *(code **)(DAT_101116cc + uVar10 * 4);
  if (*(byte *)(param_1 + 0x32) - 2 < 2) {
    uVar10 = *(uint *)(param_1 + 0x28);
    if (uVar10 == uVar17 * 3 * (uVar10 / (uVar17 * 3))) {
      *(undefined1 *)(psVar14 + 0x2a) = 1;
      *(uint *)(param_1 + 0x28) = uVar10 + uVar17;
      iVar16 = FUN_100f0524();
      if (iVar16 == 0) {
        return 5;
      }
      FUN_1011ea48(iVar16,0,*(undefined4 *)(param_1 + 0x28));
      FUN_1011ea40(iVar16,*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0x28) - uVar17);
      FUN_10139762(*(undefined4 *)(param_1 + 0x2c));
      *(int *)(param_1 + 0x2c) = iVar16;
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    *(bool *)(psVar14 + 0x2a) = *(char *)(param_1 + 0x44) == '\x01';
  }
  iVar16 = *(int *)(param_1 + 0x28);
  pbVar22 = *(byte **)(param_1 + 0x2c);
  if ((((int)(char)*pbVar22 & 0xfeU) != 2) &&
     (iVar9 = FUN_1013be10(DAT_101116d0,psVar14), iVar9 != 0)) {
    return iVar9;
  }
  puVar4 = DAT_101116d0;
  puVar5 = DAT_101116d0;
  puVar12 = DAT_101116d0;
  puVar26 = DAT_101116d0;
  puVar36 = DAT_101116d0;
  bVar24 = 0xff;
LAB_1011195c:
  puVar41 = puVar12;
  puVar37 = puVar5;
  if (iVar16 == 0) {
    if (bVar24 != 0) {
      *(undefined4 *)(*(int *)(*(int *)(psVar14 + 0x28) + 4) + 0x18) = 0;
      *(undefined4 *)(*(int *)(psVar14 + 0x18) + 0x18) = 0;
      if (*(int *)(psVar14 + 0x1a) == 1) {
        iVar16 = *(int *)(psVar14 + 0x16);
        *(undefined4 *)(iVar16 + 0xc) = 0;
        *(undefined4 *)(iVar16 + 0x10) = 0;
        *(undefined4 *)(iVar16 + 0x14) = 0;
      }
    }
    puVar12 = *(undefined4 **)(psVar14 + 0x26);
    goto LAB_101119fa;
  }
  bVar21 = *pbVar22 & 0x1f;
  puVar5 = puVar37;
  puVar12 = puVar41;
  switch(bVar21) {
  case 0:
    iVar16 = iVar16 + -1;
    if (bVar24 != 0) {
      if ((bVar24 & 0xfe) == 2) {
        puVar37 = *(undefined4 **)(psVar14 + 0x28);
        FUN_10139762(*puVar37);
        FUN_10139762(puVar37);
        if (*(int *)(psVar14 + 0x28) == *(int *)(psVar14 + 0x26)) {
          psVar14[0x26] = 0;
          psVar14[0x27] = 0;
          psVar14[0x28] = 0;
          psVar14[0x29] = 0;
          psVar14[0x16] = 0;
          psVar14[0x17] = 0;
          psVar14[0x18] = 0;
          psVar14[0x19] = 0;
          psVar14[0x1a] = 0;
          psVar14[0x1b] = 0;
          bVar24 = 0;
        }
        else {
          *(int *)(psVar14 + 0x28) = *(int *)(psVar14 + 0x26);
          while( true ) {
            iVar9 = *(int *)(psVar14 + 0x28);
            if (puVar37 == *(undefined4 **)(iVar9 + 0xc)) break;
            *(undefined4 **)(psVar14 + 0x28) = *(undefined4 **)(iVar9 + 0xc);
          }
          *(undefined4 *)(psVar14 + 0x18) = *(undefined4 *)(iVar9 + 4);
          *(undefined4 *)(psVar14 + 0x1a) = *(undefined4 *)(iVar9 + 8);
          *(undefined4 *)(iVar9 + 0xc) = 0;
          bVar24 = 0;
        }
      }
      else if ((char)psVar14[0x2a] == '\0') {
        uVar10 = uVar28 & 0xfffffff;
        uVar28 = uVar10 | (uint)((float)puVar26 == (float)puVar41) << 0x1e;
        if ((((byte)(uVar28 >> 0x1e) == 0) ||
            (uVar28 = uVar10 | (uint)((float)puVar36 == (float)puVar37) << 0x1e,
            (byte)(uVar28 >> 0x1e) == 0)) &&
           (iVar9 = FUN_10110c8c(puVar26,puVar36,psVar14), iVar9 != 0)) {
          return iVar9;
        }
        iVar9 = *(int *)(psVar14 + 0x16);
        iVar23 = *(int *)(psVar14 + 0x18);
        if (iVar9 == iVar23) {
          *(undefined4 **)(iVar23 + 0xc) = puVar4;
          *(undefined4 **)(iVar23 + 0x10) = puVar4;
          *(undefined4 **)(iVar23 + 0x14) = puVar4;
        }
        else {
          *(undefined4 *)(iVar23 + 0x14) = *(undefined4 *)(iVar9 + 0x14);
          uVar13 = *(undefined4 *)(iVar9 + 0x10);
          *(undefined4 *)(iVar23 + 0xc) = *(undefined4 *)(iVar9 + 0xc);
          *(undefined4 *)(iVar23 + 0x10) = uVar13;
        }
        *(undefined1 *)(*(int *)(psVar14 + 0x28) + 0x10) = 1;
        *(undefined1 *)((int)psVar14 + 0x8d) = 1;
        *(undefined4 *)(iVar23 + 0x18) = 0;
        bVar24 = 0;
      }
      else {
        bVar24 = 0;
      }
    }
    goto LAB_1011195c;
  case 1:
    uVar10 = (uint)pbVar22 & uVar17 - 1;
    pbVar22 = pbVar22 + (uVar17 - uVar10);
    iVar16 = (iVar16 - uVar17) + uVar10;
    if (bVar24 != 1) {
      uVar10 = uVar28 & 0xfffffff;
      uVar28 = uVar10 | (uint)((float)puVar26 == (float)puVar41) << 0x1e;
      if ((((byte)(uVar28 >> 0x1e) == 0) ||
          (uVar28 = uVar10 | (uint)((float)puVar36 == (float)puVar37) << 0x1e,
          (byte)(uVar28 >> 0x1e) == 0)) &&
         (iVar9 = FUN_10110c8c(puVar26,puVar36,psVar14), iVar9 != 0)) {
        return iVar9;
      }
      iVar23 = *(int *)(psVar14 + 0x16);
      iVar9 = *(int *)(psVar14 + 0x18);
      if (iVar23 == iVar9) {
        *(undefined4 **)(iVar23 + 0xc) = puVar4;
        *(undefined4 **)(iVar23 + 0x10) = puVar4;
        *(undefined4 **)(iVar23 + 0x14) = puVar4;
      }
      else {
        *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(iVar23 + 0x14);
        uVar13 = *(undefined4 *)(iVar23 + 0x10);
        *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar23 + 0xc);
        *(undefined4 *)(iVar9 + 0x10) = uVar13;
      }
      *(undefined1 *)(*(int *)(psVar14 + 0x28) + 0x10) = 1;
      *(undefined1 *)((int)psVar14 + 0x8d) = 1;
      puVar5 = puVar36;
      puVar12 = puVar26;
      bVar24 = 1;
    }
    goto LAB_1011195c;
  case 2:
    bVar19 = false;
    break;
  case 3:
    bVar19 = true;
    break;
  case 4:
    bVar19 = false;
    goto LAB_101116ee;
  case 5:
    bVar19 = true;
LAB_101116ee:
    uVar10 = (uint)pbVar22 & uVar17 - 1;
    pbVar22 = pbVar22 + (uVar17 - uVar10);
    puVar12 = (undefined4 *)(*pcVar11)(pbVar22);
    puVar5 = (undefined4 *)(*pcVar11)(pbVar22 + uVar17);
    pbVar22 = pbVar22 + uVar17 + uVar17;
    iVar16 = iVar16 + uVar17 * -3 + uVar10;
    if (bVar19) {
      puVar12 = (undefined4 *)((float)puVar41 + (float)puVar12);
      puVar5 = (undefined4 *)((float)puVar37 + (float)puVar5);
    }
    iVar9 = FUN_10110c8c(puVar12,puVar5,psVar14);
    goto joined_r0x101117ea;
  case 6:
    bVar19 = false;
    goto LAB_1011174e;
  case 7:
    bVar19 = true;
LAB_1011174e:
    uVar10 = (uint)pbVar22 & uVar17 - 1;
    pbVar22 = pbVar22 + (uVar17 - uVar10);
    fVar33 = (float)(*pcVar11)(pbVar22);
    pbVar22 = pbVar22 + uVar17;
    fVar34 = (float)(*pcVar11)(pbVar22);
    pbVar22 = pbVar22 + uVar17;
    if (bVar19) {
      fVar33 = fVar33 + (float)puVar41;
      fVar34 = fVar34 + (float)puVar37;
    }
    puVar12 = (undefined4 *)(*pcVar11)(pbVar22);
    puVar5 = (undefined4 *)(*pcVar11)(pbVar22 + uVar17);
    pbVar22 = pbVar22 + uVar17 + uVar17;
    iVar16 = iVar16 + uVar17 * -5 + uVar10;
    if (bVar19) {
      puVar12 = (undefined4 *)((float)puVar12 + (float)puVar41);
      puVar5 = (undefined4 *)((float)puVar5 + (float)puVar37);
    }
    uVar10 = uVar28 & 0xfffffff;
    uVar29 = uVar10 | (uint)((float)puVar41 == fVar33) << 0x1e;
    if (((byte)(uVar29 >> 0x1e) != 0) &&
       (uVar29 = uVar10 | (uint)((float)puVar37 == fVar34) << 0x1e, (byte)(uVar29 >> 0x1e) != 0)) {
      uVar28 = uVar10 | (uint)((float)puVar41 == (float)puVar12) << 0x1e;
      if (((byte)(uVar28 >> 0x1e) == 0) ||
         (uVar28 = uVar10 | (uint)((float)puVar37 == (float)puVar5) << 0x1e, bVar24 = bVar21,
         (byte)(uVar28 >> 0x1e) == 0)) {
LAB_101117d8:
        iVar9 = FUN_10110c8c(puVar12,puVar5,psVar14);
        goto joined_r0x101117ea;
      }
      goto LAB_1011195c;
    }
    uVar28 = uVar29 & 0xfffffff | (uint)(fVar33 == (float)puVar12) << 0x1e;
    if (((byte)(uVar28 >> 0x1e) != 0) &&
       (uVar28 = uVar29 & 0xfffffff | (uint)(fVar34 == (float)puVar5) << 0x1e,
       (byte)(uVar28 >> 0x1e) != 0)) goto LAB_101117d8;
    local_88 = puVar41;
    local_84 = puVar37;
    local_80 = fVar33;
    local_7c = fVar34;
    local_78 = puVar12;
    local_74 = puVar5;
    iVar9 = FUN_101110dc(psVar14,&local_88,0);
    goto joined_r0x101117ea;
  case 8:
    bVar19 = false;
    goto LAB_10111838;
  case 9:
    bVar19 = true;
LAB_10111838:
    uVar10 = (uint)pbVar22 & uVar17 - 1;
    pbVar22 = pbVar22 + (uVar17 - uVar10);
    fVar33 = (float)(*pcVar11)(pbVar22);
    pbVar22 = pbVar22 + uVar17;
    fVar34 = (float)(*pcVar11)(pbVar22);
    pbVar22 = pbVar22 + uVar17;
    if (bVar19) {
      fVar33 = fVar33 + (float)puVar41;
      fVar34 = fVar34 + (float)puVar37;
    }
    puVar30 = (undefined4 *)(*pcVar11)(pbVar22);
    pbVar22 = pbVar22 + uVar17;
    puVar38 = (undefined4 *)(*pcVar11)(pbVar22);
    pbVar22 = pbVar22 + uVar17;
    if (bVar19) {
      puVar30 = (undefined4 *)((float)puVar30 + (float)puVar41);
      puVar38 = (undefined4 *)((float)puVar38 + (float)puVar37);
    }
    puVar12 = (undefined4 *)(*pcVar11)(pbVar22);
    puVar5 = (undefined4 *)(*pcVar11)(pbVar22 + uVar17);
    pbVar22 = pbVar22 + uVar17 + uVar17;
    iVar16 = iVar16 + uVar17 * -7 + uVar10;
    if (bVar19) {
      puVar12 = (undefined4 *)((float)puVar12 + (float)puVar41);
      puVar5 = (undefined4 *)((float)puVar5 + (float)puVar37);
    }
    uVar10 = uVar28 & 0xfffffff;
    uVar28 = uVar10 | (uint)((float)puVar41 == fVar33) << 0x1e;
    if (((((byte)(uVar28 >> 0x1e) == 0) ||
         (uVar28 = uVar10 | (uint)((float)puVar37 == fVar34) << 0x1e, (byte)(uVar28 >> 0x1e) == 0))
        || ((uVar28 = uVar10 | (uint)((float)puVar41 == (float)puVar30) << 0x1e,
            (byte)(uVar28 >> 0x1e) == 0 ||
            ((uVar28 = uVar10 | (uint)((float)puVar37 == (float)puVar38) << 0x1e,
             (byte)(uVar28 >> 0x1e) == 0 ||
             (uVar28 = uVar10 | (uint)((float)puVar41 == (float)puVar12) << 0x1e,
             (byte)(uVar28 >> 0x1e) == 0)))))) ||
       (uVar28 = uVar10 | (uint)((float)puVar37 == (float)puVar5) << 0x1e, bVar24 = bVar21,
       (byte)(uVar28 >> 0x1e) == 0)) {
      local_88 = puVar41;
      local_84 = puVar37;
      local_80 = fVar33;
      local_7c = fVar34;
      local_78 = puVar30;
      local_74 = puVar38;
      local_70 = puVar12;
      local_6c = puVar5;
      iVar9 = FUN_10005868(psVar14,&local_88,0);
      goto joined_r0x101117ea;
    }
    goto LAB_1011195c;
  default:
    goto switchD_10111514_default;
  }
  uVar10 = (uint)pbVar22 & uVar17 - 1;
  pbVar22 = pbVar22 + (uVar17 - uVar10);
  puVar26 = (undefined4 *)(*pcVar11)(pbVar22);
  puVar36 = (undefined4 *)(*pcVar11)(pbVar22 + uVar17);
  pbVar22 = pbVar22 + uVar17 + uVar17;
  iVar16 = iVar16 + uVar17 * -3 + uVar10;
  if (bVar19) {
    puVar26 = (undefined4 *)((float)puVar26 + (float)puVar41);
    puVar36 = (undefined4 *)((float)puVar36 + (float)puVar37);
  }
  puVar5 = puVar36;
  puVar12 = puVar26;
  if ((bVar24 & 0xfe) == 2) {
    pfVar18 = *(float **)(psVar14 + 0x16);
    *pfVar18 = (float)puVar26;
    pfVar18[1] = (float)puVar36;
    bVar24 = bVar21;
    goto LAB_1011195c;
  }
  iVar9 = FUN_1013be10(puVar26,puVar36,psVar14);
joined_r0x101117ea:
  bVar24 = bVar21;
  if (iVar9 != 0) {
    return iVar9;
  }
  goto LAB_1011195c;
LAB_101119fa:
  fVar33 = *(float *)(psVar14 + 0x10);
  if (puVar12 == (undefined4 *)0x0) {
    puVar12 = *(undefined4 **)(psVar14 + 0x26);
    if (puVar12 != (undefined4 *)0x0) {
      *(undefined4 *)(psVar14 + 0x18) = puVar12[1];
      uVar13 = puVar12[2];
      *(undefined4 *)(psVar14 + 0x16) = *puVar12;
      *(undefined4 *)(psVar14 + 0x1a) = uVar13;
    }
    fVar34 = DAT_10111cc4;
    piVar20 = *(int **)(psVar14 + 0x2c);
    do {
      if (piVar20 == (int *)0x0) {
        if (*(int *)(param_1 + 0x3c) == 0) {
          puVar6 = (undefined1 *)FUN_100f0524(4);
          *(undefined1 **)(param_1 + 0x38) = puVar6;
          if (puVar6 == (undefined1 *)0x0) {
            return 5;
          }
          *puVar6 = 0;
          *(undefined4 *)(param_1 + 0x3c) = 4;
        }
        return 0;
      }
      pfVar8 = (float *)piVar20[2];
      fVar35 = (float)VectorUnsignedToFloat(piVar20[1] * 0xc + 4,(byte)(uVar28 >> 0x16) & 3);
      fVar35 = fVar35 + (float)puVar4;
      pfVar18 = pfVar8;
      while (pfVar18 != (float *)0x0) {
        pbVar22 = (byte *)((int)pfVar18 + 9);
        pfVar18 = (float *)pfVar18[6];
        if (*pbVar22 - 3 < 2) {
          fVar35 = fVar35 + fVar34;
        }
      }
      iVar9 = *(int *)(param_1 + 0x38);
      iVar23 = *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x3c) = (int)fVar35 + iVar23;
      iVar16 = FUN_100f0524();
      *(int *)(param_1 + 0x38) = iVar16;
      if (iVar16 == 0) {
        if (iVar9 == 0) {
          return 5;
        }
        FUN_10139762(iVar9);
        return 5;
      }
      FUN_1011ea48(iVar16,0,*(undefined4 *)(param_1 + 0x3c));
      if (iVar9 != 0) {
        FUN_1011ea40(*(undefined4 *)(param_1 + 0x38),iVar9,iVar23);
        FUN_10139762(iVar9);
      }
      fVar35 = 12.0;
      iVar16 = *(int *)(param_1 + 0x38);
      *(undefined1 *)(iVar16 + iVar23) = 2;
      iVar16 = iVar16 + iVar23;
      pfVar18 = (float *)pfVar8[6];
      *(float *)(iVar16 + 4) = *pfVar8;
      *(float *)(iVar16 + 8) = pfVar8[1];
      puVar6 = (undefined1 *)(iVar16 + 0xc);
      while (pfVar25 = pfVar18, pfVar25 != (float *)0x0) {
        cVar1 = *(char *)((int)pfVar25 + 9);
        if (cVar1 == '\0') {
          uVar10 = uVar28 & 0xfffffff;
          uVar28 = uVar10 | (uint)(*pfVar25 == *pfVar8) << 0x1e;
          if (((byte)(uVar28 >> 0x1e) == 0) ||
             (uVar28 = uVar10 | (uint)(pfVar25[1] == pfVar8[1]) << 0x1e, (byte)(uVar28 >> 0x1e) == 0
             )) {
LAB_101123e4:
            *puVar6 = 4;
            fVar35 = fVar35 + 12.0;
            *(float *)(puVar6 + 4) = *pfVar25;
            puVar15 = puVar6 + 0xc;
            *(float *)(puVar6 + 8) = pfVar25[1];
          }
          else {
            *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -0xc;
            puVar15 = puVar6;
          }
        }
        else if (cVar1 == '\x01') {
          *puVar6 = 6;
          pfVar18 = (float *)pfVar25[6];
          *(float *)(puVar6 + 4) = *pfVar25;
          fVar35 = fVar35 + 20.0;
          *(float *)(puVar6 + 8) = pfVar25[1];
          *(float *)(puVar6 + 0xc) = *pfVar18;
          puVar15 = puVar6 + 0x14;
          *(float *)(puVar6 + 0x10) = pfVar18[1];
          pfVar25 = pfVar18;
        }
        else {
          iVar16 = FUN_10110ab0(fVar33,pfVar25[3],pfVar25[4],*pfVar8,pfVar8[1],*pfVar25,pfVar25[1],
                                cVar1 != '\x03',&local_88);
          if (iVar16 != 0) {
            return iVar16;
          }
          puVar12 = local_88;
          if (local_88 == (undefined4 *)0x0) goto LAB_101123e4;
          do {
            puVar15 = puVar6 + 0x14;
            *puVar6 = 6;
            puVar5 = (undefined4 *)puVar12[6];
            puVar26 = (undefined4 *)puVar5[6];
            *(undefined4 *)(puVar6 + 4) = *puVar12;
            *(undefined4 *)(puVar6 + 8) = puVar12[1];
            *(undefined4 *)(puVar6 + 0xc) = *puVar5;
            fVar35 = fVar35 + 20.0;
            *(undefined4 *)(puVar6 + 0x10) = puVar5[1];
            FUN_10139762();
            FUN_10139762(puVar5);
            puVar12 = puVar26;
            puVar6 = puVar15;
          } while (puVar26 != (undefined4 *)0x0);
        }
        puVar6 = puVar15;
        pfVar8 = pfVar25;
        pfVar18 = (float *)pfVar25[6];
      }
      *puVar6 = *piVar20 != 0;
      piVar20 = (int *)*piVar20;
      *(int *)(param_1 + 0x3c) = (int)(fVar35 + 4.0) + iVar23;
    } while( true );
  }
  local_8c = *(int *)(psVar14 + 0xe);
  *(undefined4 *)(psVar14 + 0x18) = puVar12[1];
  pfVar18 = (float *)*puVar12;
  uVar13 = puVar12[2];
  *(float **)(psVar14 + 0x16) = pfVar18;
  *(undefined4 *)(psVar14 + 0x1a) = uVar13;
  local_94 = 0;
  cVar1 = *(char *)(puVar12 + 4);
  iVar16 = *(int *)(psVar14 + 8);
  *(char *)((int)psVar14 + 0x8d) = cVar1;
  local_90 = *(float *)(psVar14 + 0xc);
  cVar2 = *(char *)((int)psVar14 + 0x55);
  if ((*psVar14 == 0x1700) || (cVar1 != '\0')) {
    cVar7 = '\0';
    puVar5 = DAT_10111cd0;
    for (pfVar8 = pfVar18; pfVar8 != (float *)0x0; pfVar8 = (float *)pfVar8[6]) {
      puVar5 = (undefined4 *)((float)puVar5 + pfVar8[5]);
      if (*(char *)(pfVar8 + 2) != '\0') {
        cVar7 = '\x01';
      }
    }
    *(undefined4 **)(psVar14 + 0x42) = puVar5;
    uVar27 = cVar7 != '\0';
  }
  else {
    uVar27 = false;
    cVar7 = '\0';
    puVar5 = DAT_101116d0;
  }
  *(char *)(psVar14 + 0x40) = cVar7;
  pfVar8 = (float *)pfVar18[6];
  if (pfVar8 == (float *)0x0) {
    if (((iVar16 == 0) || (-1 < local_8c << 0x1f)) && (*psVar14 != 0x1700)) {
      iVar16 = FUN_1013ba14(psVar14,&local_88);
      if (iVar16 != 0) {
        return iVar16;
      }
      if (*psVar14 == 0x1702) {
        uVar10 = uVar28 & 0xfffffff;
        uVar28 = uVar10 | (uint)(pfVar18[3] == 0.0) << 0x1e;
        puVar5 = DAT_10111cd0;
        if ((byte)(uVar28 >> 0x1e) == 0) {
          uVar28 = uVar10 | (uint)(pfVar18[4] == 0.0) << 0x1e;
          if ((byte)(uVar28 >> 0x1e) == 0) {
            fVar34 = pfVar18[3] * fVar33;
            fVar33 = fVar33 * pfVar18[4];
            puVar5 = (undefined4 *)-fVar34;
          }
        }
        pfVar8 = (float *)FUN_100f0524(0x20);
        if (pfVar8 == (float *)0x0) {
          return 5;
        }
        FUN_1011ea48(pfVar8,0,0x20);
        *pfVar8 = fVar33 + *pfVar18 + (float)puVar5;
        pfVar8[1] = (pfVar18[1] - fVar33) + (float)puVar5;
        *(undefined1 *)((int)pfVar8 + 9) = 0;
        fVar35 = pfVar18[1];
        fVar34 = *pfVar18;
        *(float **)(psVar14 + 0x1e) = pfVar8;
        local_88[2] = pfVar8;
        local_88[1] = 1;
        iVar16 = FUN_1013ba4c((fVar33 + fVar34) - (float)puVar5,fVar33 + fVar35 + (float)puVar5,
                              psVar14);
        if (iVar16 != 0) {
          return iVar16;
        }
        iVar16 = FUN_1013ba4c((*pfVar18 - fVar33) - (float)puVar5,
                              (fVar33 + pfVar18[1]) - (float)puVar5,psVar14);
        if (iVar16 != 0) {
          return iVar16;
        }
        iVar16 = FUN_1013ba4c((*pfVar18 - fVar33) + (float)puVar5,
                              (pfVar18[1] - fVar33) - (float)puVar5,psVar14);
        if (iVar16 != 0) {
          return iVar16;
        }
      }
      else {
        pfVar8 = (float *)FUN_100f0524(0x20);
        if (pfVar8 == (float *)0x0) {
          return 5;
        }
        FUN_1011ea48(pfVar8,0,0x20);
        *pfVar8 = *pfVar18 + fVar33;
        fVar34 = pfVar18[1];
        *(undefined1 *)((int)pfVar8 + 9) = 0;
        fVar35 = *pfVar18;
        pfVar8[1] = fVar34;
        *(float **)(psVar14 + 0x1e) = pfVar8;
        fVar34 = pfVar18[1];
        local_88[2] = pfVar8;
        local_88[1] = 1;
        iVar16 = FUN_1013ba4c(fVar35 - fVar33,fVar34,psVar14);
        if (iVar16 != 0) {
          return iVar16;
        }
        iVar16 = *(int *)(psVar14 + 0x1e);
        *(undefined1 *)(iVar16 + 9) = 4;
        fVar34 = *pfVar18;
        fVar35 = pfVar18[1];
        *(float *)(iVar16 + 0xc) = fVar34;
        *(float *)(iVar16 + 0x10) = fVar35;
        iVar16 = FUN_1013ba4c(fVar33 + fVar34,psVar14);
        if (iVar16 != 0) {
          return iVar16;
        }
        iVar16 = *(int *)(psVar14 + 0x1e);
        *(undefined1 *)(iVar16 + 9) = 4;
        *(float *)(iVar16 + 0xc) = *pfVar18;
        *(float *)(iVar16 + 0x10) = pfVar18[1];
      }
      iVar16 = *(int *)(psVar14 + 0x1e);
      local_88[3] = iVar16;
      *(undefined4 *)(iVar16 + 0x18) = 0;
    }
  }
  else {
    if (iVar16 == 0) {
      bVar19 = cVar1 == '\0';
    }
    else {
      if ((cVar1 != '\0') && (local_8c << 0x1f < 0)) {
        *(undefined1 *)((int)psVar14 + 0x8d) = 0;
      }
      bVar19 = true;
    }
    fVar34 = pfVar18[3];
    fVar35 = pfVar18[4];
    puVar26 = (undefined4 *)pfVar18[5];
    puVar36 = (undefined4 *)(fVar33 * fVar35);
    puVar37 = (undefined4 *)-(fVar34 * fVar33);
    if (cVar7 != '\0') {
      *(undefined4 **)(psVar14 + 0x3a) = puVar26;
    }
    fVar40 = DAT_10111ccc;
    fVar31 = *pfVar18;
    fVar32 = pfVar18[1];
    if (iVar16 == 0) {
      iVar9 = FUN_1013baa4(fVar31,fVar32,puVar36,puVar37,psVar14,bVar19,&local_94);
      if (iVar9 != 0) {
        return iVar9;
      }
      bVar3 = true;
      bVar19 = true;
      pfVar18 = (float *)0x0;
      pfVar25 = (float *)0x0;
      puVar41 = DAT_10111cd0;
      puVar30 = DAT_10111cd0;
    }
    else {
      bVar3 = false;
      pfVar25 = (float *)0x0;
      pfVar18 = (float *)0x0;
      local_ac = 0;
      puVar41 = DAT_10111cd0;
      puVar30 = DAT_10111cd0;
      while( true ) {
        if (-1 < local_8c << 0x1f) {
          iVar9 = FUN_1013baa4(fVar31,fVar32,puVar36,puVar37,psVar14,bVar19,&local_94);
          if (iVar9 != 0) {
            return iVar9;
          }
          if ((*(char *)((int)psVar14 + 0x8d) != '\0') && (local_ac == 0)) {
            pfVar25 = *(float **)(psVar14 + 0x1c);
            pfVar18 = *(float **)(psVar14 + 0x1e);
            local_ac = *(int *)(psVar14 + 0x2e);
            puVar41 = puVar36;
            puVar30 = puVar37;
          }
          bVar3 = true;
          bVar19 = true;
        }
        puVar38 = (undefined4 *)((float)puVar26 - local_90);
        uVar10 = uVar28 & 0xfffffff;
        uVar17 = uVar10 | (uint)((float)puVar38 < fVar40) << 0x1f;
        uVar28 = uVar17 | (uint)(NAN((float)puVar38) || NAN(fVar40)) << 0x1c;
        if ((byte)(uVar17 >> 0x1f) != ((byte)(uVar28 >> 0x1c) & 1)) break;
        fVar31 = fVar31 + fVar34 * local_90;
        fVar32 = fVar32 + fVar35 * local_90;
        if (-1 < local_8c << 0x1f) {
          iVar9 = FUN_1013bd72(fVar31,fVar32,puVar36,puVar37,psVar14);
          bVar3 = false;
          if (iVar9 != 0) {
            return iVar9;
          }
        }
        iVar9 = FUN_1013b9ee(psVar14,&local_8c,&local_90);
        puVar26 = puVar38;
        if (iVar9 != 0) {
          return iVar9;
        }
      }
      uVar28 = uVar10 | (uint)((float)puVar38 == DAT_10111cc8) << 0x1e |
               (uint)(DAT_10111cc8 <= (float)puVar38) << 0x1d;
      bVar24 = (byte)(uVar28 >> 0x18);
      if ((bool)(bVar24 >> 5 & 1) && !(bool)(bVar24 >> 6)) {
        if (-1 < local_8c << 0x1f) {
          iVar9 = FUN_1013bd72(*pfVar8,pfVar8[1],puVar36,puVar37,psVar14);
          bVar3 = false;
          if (iVar9 != 0) {
            return iVar9;
          }
        }
        iVar9 = FUN_1013b9ee(psVar14,&local_8c,&local_90);
        puVar26 = DAT_10111cd0;
        if (iVar9 != 0) {
          return iVar9;
        }
      }
      else {
        local_90 = -(float)puVar38;
      }
    }
    puVar38 = puVar26;
    puVar39 = DAT_10111cd0;
    for (local_a4 = (float *)pfVar8[6]; local_a4 != (float *)0x0; local_a4 = (float *)local_a4[6]) {
      if ((iVar16 == 0) || ((-1 < local_8c << 0x1f && (bVar3)))) {
        iVar9 = FUN_1013ba4c((float)puVar36 + *pfVar8,(float)puVar37 + pfVar8[1],psVar14);
        if (iVar9 != 0) {
          return iVar9;
        }
        iVar9 = FUN_1013bbca(*pfVar8 - (float)puVar36,pfVar8[1] - (float)puVar37,psVar14);
        if (iVar9 != 0) {
          return iVar9;
        }
      }
      fVar34 = pfVar8[3];
      fVar35 = pfVar8[4];
      puVar42 = (undefined4 *)pfVar8[5];
      puVar36 = (undefined4 *)(fVar33 * fVar35);
      puVar37 = (undefined4 *)-(fVar34 * fVar33);
      if (cVar7 != '\0') {
        puVar39 = (undefined4 *)((float)puVar39 + *(float *)((int)pfVar8[7] + 0x14));
        uVar10 = uVar28 & 0xfffffff;
        uVar17 = uVar10 | (uint)(fVar33 < (float)puVar39) << 0x1f |
                 (uint)(fVar33 == (float)puVar39) << 0x1e;
        uVar28 = uVar17 | (uint)(NAN(fVar33) || NAN((float)puVar39)) << 0x1c;
        bVar24 = (byte)(uVar17 >> 0x18);
        *(undefined4 **)(psVar14 + 0x3a) = puVar39;
        if ((bool)(bVar24 >> 6 & 1) || bVar24 >> 7 != ((byte)(uVar28 >> 0x1c) & 1)) {
          fVar40 = (float)puVar5 - (float)puVar39;
          uVar10 = uVar10 | (uint)(fVar33 < fVar40) << 0x1f | (uint)(fVar33 == fVar40) << 0x1e;
          uVar28 = uVar10 | (uint)(NAN(fVar33) || NAN(fVar40)) << 0x1c;
          bVar24 = (byte)(uVar10 >> 0x18);
          if ((bool)(bVar24 >> 6 & 1) || bVar24 >> 7 != ((byte)(uVar28 >> 0x1c) & 1)) {
            uVar27 = 0;
          }
          else {
            uVar27 = 2;
          }
        }
        else {
          uVar27 = 1;
        }
      }
      fVar40 = *pfVar8;
      fVar31 = pfVar8[1];
      if (iVar16 == 0) {
        iVar9 = FUN_10110484(puVar42,puVar38,(float)puVar36 + fVar40,(float)puVar37 + fVar31,
                             fVar40 - (float)puVar36,fVar31 - (float)puVar37,psVar14,pfVar8,uVar27);
        puVar38 = puVar42;
joined_r0x10112166:
        if (iVar9 != 0) {
          return iVar9;
        }
      }
      else {
        fVar32 = DAT_10112348;
        if (-1 < local_8c << 0x1f) {
          if (bVar3) {
            iVar9 = FUN_10110484(local_90,puVar38,(float)puVar36 + fVar40,(float)puVar37 + fVar31,
                                 fVar40 - (float)puVar36,fVar31 - (float)puVar37,psVar14,pfVar8,
                                 uVar27);
            fVar32 = DAT_10112348;
            if (iVar9 != 0) {
              return iVar9;
            }
          }
          else {
            iVar9 = FUN_1013baa4(fVar40,fVar31,puVar36,puVar37,psVar14,bVar19,&local_94);
            if (iVar9 != 0) {
              return iVar9;
            }
            bVar19 = true;
            bVar3 = true;
            fVar32 = DAT_10112348;
          }
        }
        while( true ) {
          puVar38 = (undefined4 *)((float)puVar42 - local_90);
          uVar10 = uVar28 & 0xfffffff;
          uVar17 = uVar10 | (uint)((float)puVar38 < fVar32) << 0x1f;
          uVar28 = uVar17 | (uint)(NAN((float)puVar38) || NAN(fVar32)) << 0x1c;
          if ((byte)(uVar17 >> 0x1f) != ((byte)(uVar28 >> 0x1c) & 1)) break;
          fVar40 = fVar40 + fVar34 * local_90;
          fVar31 = fVar31 + fVar35 * local_90;
          if (-1 < local_8c << 0x1f) {
            iVar9 = FUN_1013bd72(fVar40,fVar31,puVar36,puVar37,psVar14);
            bVar3 = false;
            if (iVar9 != 0) {
              return iVar9;
            }
          }
          iVar9 = FUN_1013b9ee(psVar14,&local_8c,&local_90);
          if (iVar9 != 0) {
            return iVar9;
          }
          puVar42 = puVar38;
          if (-1 < local_8c << 0x1f) {
            iVar9 = FUN_1013baa4(fVar40,fVar31,puVar36,puVar37,psVar14,bVar19,&local_94);
            if (iVar9 != 0) {
              return iVar9;
            }
            bVar3 = true;
            bVar19 = true;
          }
        }
        uVar28 = uVar10 | (uint)((float)puVar38 == DAT_1011234c) << 0x1e |
                 (uint)(DAT_1011234c <= (float)puVar38) << 0x1d;
        bVar24 = (byte)(uVar28 >> 0x18);
        if ((bool)(bVar24 >> 5 & 1) && !(bool)(bVar24 >> 6)) {
          if (-1 < local_8c << 0x1f) {
            iVar9 = FUN_1013bd72(*local_a4,local_a4[1],puVar36,puVar37,psVar14);
            bVar3 = false;
            if (iVar9 != 0) {
              return iVar9;
            }
          }
          iVar9 = FUN_1013b9ee(psVar14,&local_8c,&local_90);
          puVar38 = DAT_10112350;
          goto joined_r0x10112166;
        }
        local_90 = -(float)puVar38;
        puVar38 = puVar42;
      }
      pfVar8 = local_a4;
    }
    if (cVar7 != '\0') {
      fVar34 = (float)puVar39 + *(float *)((int)pfVar8[7] + 0x14);
      uVar10 = uVar28 & 0xfffffff;
      uVar17 = uVar10 | (uint)(fVar33 < fVar34) << 0x1f | (uint)(fVar33 == fVar34) << 0x1e;
      uVar28 = uVar17 | (uint)(NAN(fVar33) || NAN(fVar34)) << 0x1c;
      bVar24 = (byte)(uVar17 >> 0x18);
      *(float *)(psVar14 + 0x3a) = fVar34;
      if ((bool)(bVar24 >> 6 & 1) || bVar24 >> 7 != ((byte)(uVar28 >> 0x1c) & 1)) {
        fVar34 = (float)puVar5 - fVar34;
        uVar10 = uVar10 | (uint)(fVar33 < fVar34) << 0x1f | (uint)(fVar33 == fVar34) << 0x1e;
        uVar28 = uVar10 | (uint)(NAN(fVar33) || NAN(fVar34)) << 0x1c;
        bVar24 = (byte)(uVar10 >> 0x18);
        if ((bool)(bVar24 >> 6 & 1) || bVar24 >> 7 != ((byte)(uVar28 >> 0x1c) & 1)) {
          uVar27 = 0;
        }
        else {
          uVar27 = 2;
        }
      }
      else {
        uVar27 = 1;
      }
    }
    if ((*(int *)(psVar14 + 0x30) != 0) &&
       (iVar9 = FUN_1013bc22(psVar14,*(undefined4 *)(psVar14 + 0x18),0), iVar9 != 0)) {
      return iVar9;
    }
    if (*(char *)((int)psVar14 + 0x8d) == '\0') {
      if (iVar16 != 0) {
        if (-1 < local_8c << 0x1f) {
          fVar33 = *(float *)(*(int *)(psVar14 + 6) + local_8c * 4);
          uVar10 = uVar28 & 0xfffffff | (uint)(fVar33 < local_90) << 0x1f |
                   (uint)(fVar33 == local_90) << 0x1e;
          uVar28 = uVar10 | (uint)(NAN(fVar33) || NAN(local_90)) << 0x1c;
          bVar24 = (byte)(uVar10 >> 0x18);
          if (!(bool)(bVar24 >> 6 & 1) && bVar24 >> 7 == ((byte)(uVar28 >> 0x1c) & 1))
          goto LAB_10111e80;
        }
        goto LAB_10112230;
      }
LAB_10111e80:
      iVar9 = FUN_1013bd72(*pfVar8,pfVar8[1],puVar36,puVar37,psVar14);
      if (iVar9 != 0) {
        return iVar9;
      }
      if ((cVar2 != '\0') || (iVar16 == 0)) goto LAB_101119f6;
    }
    else {
      if ((iVar16 == 0) || (bVar3)) {
        iVar9 = FUN_1013ba4c((float)puVar36 + *pfVar8,(float)puVar37 + pfVar8[1],psVar14);
        if (iVar9 != 0) {
          return iVar9;
        }
        iVar9 = FUN_1013bbca(*pfVar8 - (float)puVar36,pfVar8[1] - (float)puVar37,psVar14);
        if (iVar9 != 0) {
          return iVar9;
        }
        if (iVar16 == 0) {
          if ((local_94 != 0) &&
             (iVar16 = FUN_10110a58(puVar26,puVar38,psVar14,pfVar8,uVar27,
                                    *(undefined4 *)(local_94 + 8),*(undefined4 *)(local_94 + 0xc)),
             iVar16 != 0)) {
            return iVar16;
          }
          goto LAB_101119f6;
        }
        if (pfVar18 == (float *)0x0) {
          return 1;
        }
        if (pfVar25 == (float *)0x0) {
          return 1;
        }
        iVar16 = FUN_10110a58(puVar26,puVar38,psVar14,pfVar8,uVar27,pfVar18,pfVar25);
        if (iVar16 != 0) {
          return iVar16;
        }
      }
      else if (*psVar14 != 0x1700) {
        if (*psVar14 == 0x1702) {
          if (pfVar18 == (float *)0x0) {
            return 1;
          }
          if (pfVar25 == (float *)0x0) {
            return 1;
          }
          *pfVar18 = *pfVar18 + (float)puVar30;
          pfVar18[1] = pfVar18[1] - (float)puVar41;
          *pfVar25 = *pfVar25 + (float)puVar30;
          pfVar25[1] = pfVar25[1] - (float)puVar41;
        }
        else {
          iVar9 = *(int *)(psVar14 + 0x2e);
          iVar16 = *(int *)(iVar9 + 8);
          puVar5 = (undefined4 *)FUN_100f0524(0x20);
          if (puVar5 == (undefined4 *)0x0) {
            return 5;
          }
          FUN_1011ea48(puVar5,0,0x20);
          uVar13 = (*(undefined4 **)(iVar9 + 0xc))[1];
          *puVar5 = **(undefined4 **)(iVar9 + 0xc);
          puVar5[1] = uVar13;
          puVar5[6] = iVar16;
          *(undefined1 *)(iVar16 + 9) = 3;
          puVar26 = *(undefined4 **)(psVar14 + 0x16);
          *(undefined4 **)(iVar16 + 0x1c) = puVar5;
          uVar13 = puVar26[1];
          *(undefined4 *)(iVar16 + 0xc) = *puVar26;
          *(undefined4 *)(iVar16 + 0x10) = uVar13;
          *(undefined4 **)(iVar9 + 8) = puVar5;
        }
      }
LAB_10112230:
      if (cVar2 != '\0') goto LAB_101119f6;
    }
    if ((-1 < local_8c << 0x1f) ||
       (uVar28 = uVar28 & 0xfffffff,
       DAT_10111ccc <= *(float *)(*(int *)(psVar14 + 6) + local_8c * 4) - local_90)) {
      *(float *)(psVar14 + 0xc) = local_90;
      *(int *)(psVar14 + 0xe) = local_8c;
    }
    else {
      *(int *)(psVar14 + 0xe) = local_8c + -1;
      psVar14[0xc] = 0;
      psVar14[0xd] = 0;
    }
  }
LAB_101119f6:
  puVar12 = (undefined4 *)puVar12[3];
  goto LAB_101119fa;
}


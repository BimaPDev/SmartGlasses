/* FUN_2c000d20 @ 0x2c000d20 */

undefined4 FUN_2c000d20(void)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  short *psVar13;
  undefined1 *puVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  ushort uVar17;
  undefined4 uVar18;
  uint uVar19;
  char cVar20;
  undefined2 uVar21;
  undefined4 uVar22;
  undefined1 uVar23;
  char cVar24;
  byte bVar25;
  byte bVar26;
  undefined2 uVar27;
  undefined4 uVar28;
  uint uVar29;
  int iVar30;
  undefined2 uVar31;
  undefined4 uVar32;
  int *piVar33;
  undefined2 uVar34;
  undefined4 *puVar35;
  undefined2 uVar36;
  undefined2 uVar37;
  ushort local_36;
  undefined2 local_34;
  undefined4 local_30;
  int local_2c;
  
  puVar5 = DAT_2c001080;
  pbVar4 = DAT_2c00107c;
  puVar3 = DAT_2c00106c;
  local_2c = *DAT_2c001070;
  FUN_2c003818(4,0x1843,DAT_2c001078,DAT_2c001074,DAT_2c001068,0x708,0x708);
  uVar18 = puVar3[1];
  uVar22 = puVar3[2];
  uVar28 = puVar3[3];
  puVar35 = puVar3 + 10;
  *puVar5 = *puVar3;
  puVar5[1] = uVar18;
  puVar5[2] = uVar22;
  puVar5[3] = uVar28;
  *(short *)(puVar5 + 4) = (short)puVar3[4];
  uVar18 = puVar3[5];
  uVar22 = puVar3[6];
  uVar28 = puVar3[7];
  *(undefined4 *)((int)puVar5 + 0x1e) = puVar3[8];
  uVar31 = *(undefined2 *)(puVar3 + 9);
  *(undefined4 *)((int)puVar5 + 0x12) = uVar18;
  *(undefined4 *)((int)puVar5 + 0x16) = uVar22;
  *(undefined4 *)((int)puVar5 + 0x1a) = uVar28;
  *(undefined2 *)((int)puVar5 + 0x22) = uVar31;
  uVar18 = puVar3[0xb];
  uVar22 = puVar3[0xc];
  uVar28 = puVar3[0xd];
  uVar32 = puVar3[0xe];
  puVar5[9] = *puVar35;
  puVar5[10] = uVar18;
  puVar5[0xb] = uVar22;
  puVar5[0xc] = uVar28;
  uVar15 = (undefined2)uVar32;
  *(undefined2 *)(puVar5 + 0xd) = uVar15;
  uVar18 = *puVar35;
  uVar22 = puVar3[0xb];
  uVar28 = puVar3[0xc];
  *(undefined4 *)((int)puVar5 + 0x42) = puVar3[0xd];
  uVar31 = *(undefined2 *)(puVar3 + 0xe);
  *(undefined4 *)((int)puVar5 + 0x36) = uVar18;
  *(undefined2 *)((int)puVar5 + 0x46) = uVar31;
  bVar26 = *pbVar4;
  *(undefined4 *)((int)puVar5 + 0x3a) = uVar22;
  *(undefined4 *)((int)puVar5 + 0x3e) = uVar28;
  uVar18 = puVar3[0xb];
  uVar22 = puVar3[0xc];
  uVar28 = puVar3[0xd];
  puVar5[0x12] = *puVar35;
  puVar5[0x13] = uVar18;
  puVar5[0x14] = uVar22;
  puVar5[0x15] = uVar28;
  *(undefined2 *)(puVar5 + 0x16) = uVar15;
  if (bVar26 == 0) {
    uVar37 = 0xf0;
    uVar36 = 0xf;
    uVar34 = 0x400;
    uVar31 = 0x800;
    uVar15 = 0x1000;
    uVar16 = 0x100;
    uVar21 = 0x200;
    uVar27 = 4;
  }
  else {
    uVar34 = 0x1000;
    uVar31 = 0x2000;
    uVar15 = 0x4000;
    uVar16 = 0x400;
    uVar21 = 0x800;
    if (bVar26 == 3) {
      uVar37 = 0xf0;
      uVar36 = 0xf;
      uVar27 = 4;
    }
    else {
      uVar37 = 0x3e0;
      uVar36 = 0x1f;
      uVar27 = 5;
    }
  }
  *(undefined2 *)((int)puVar5 + 0x62) = uVar34;
  *(undefined2 *)((int)puVar5 + 0x6a) = uVar27;
  puVar3 = DAT_2c001084;
  *(undefined2 *)((int)puVar5 + 0x5a) = uVar21;
  *(undefined2 *)(puVar5 + 0x17) = uVar16;
  *(undefined2 *)((int)puVar5 + 0x5e) = uVar15;
  *(undefined2 *)((int)puVar5 + 0x66) = 0;
  *(undefined2 *)(puVar5 + 0x18) = uVar31;
  *(undefined2 *)(puVar5 + 0x1a) = uVar37;
  puVar35 = DAT_2c001088;
  *(undefined2 *)(puVar5 + 0x19) = uVar36;
  uVar18 = puVar3[1];
  uVar22 = puVar3[2];
  uVar28 = puVar3[3];
  *puVar35 = *puVar3;
  puVar35[1] = uVar18;
  puVar35[2] = uVar22;
  puVar35[3] = uVar28;
  *(short *)(puVar35 + 4) = (short)puVar3[4];
  uVar18 = puVar3[6];
  uVar22 = puVar3[7];
  uVar28 = puVar3[8];
  *(undefined4 *)((int)puVar5 + 0x7e) = puVar3[5];
  *(undefined4 *)((int)puVar35 + 0x1e) = uVar28;
  uVar31 = *(undefined2 *)(puVar3 + 9);
  *(undefined4 *)((int)puVar35 + 0x16) = uVar18;
  *(undefined4 *)((int)puVar35 + 0x1a) = uVar22;
  *(undefined2 *)((int)puVar35 + 0x22) = uVar31;
  uVar18 = puVar3[0xb];
  uVar22 = puVar3[0xc];
  uVar28 = puVar3[0xd];
  puVar35[9] = puVar3[10];
  puVar35[10] = uVar18;
  puVar35[0xb] = uVar22;
  puVar35[0xc] = uVar28;
  *(short *)(puVar35 + 0xd) = (short)puVar3[0xe];
  uVar18 = puVar3[0x10];
  uVar22 = puVar3[0x11];
  uVar28 = puVar3[0x12];
  *(undefined4 *)((int)puVar5 + 0xa2) = puVar3[0xf];
  *(undefined4 *)((int)puVar35 + 0x42) = uVar28;
  uVar31 = *(undefined2 *)(puVar3 + 0x13);
  *(undefined4 *)((int)puVar35 + 0x3a) = uVar18;
  *(undefined4 *)((int)puVar35 + 0x3e) = uVar22;
  *(undefined2 *)((int)puVar35 + 0x46) = uVar31;
  uVar18 = puVar3[0x15];
  uVar22 = puVar3[0x16];
  uVar28 = puVar3[0x17];
  puVar35[0x12] = puVar3[0x14];
  puVar35[0x13] = uVar18;
  puVar35[0x14] = uVar22;
  puVar35[0x15] = uVar28;
  *(short *)(puVar35 + 0x16) = (short)puVar3[0x18];
  puVar14 = DAT_2c001540;
  puVar6 = DAT_2c001090;
  if (bVar26 == 2) {
    *DAT_2c00153c = 0x89;
    *puVar14 = 0x89;
    puVar6 = DAT_2c00154c;
    *DAT_2c001548 = 0xc;
    *puVar6 = 0x2d;
  }
  else {
    if (bVar26 == 1) {
      uVar23 = 0xe;
      *DAT_2c00153c = 0x58;
      *puVar14 = 0x58;
    }
    else {
      uVar23 = 0xc;
      *DAT_2c00108c = 0x5c;
      *puVar6 = 0x5c;
    }
    puVar6 = DAT_2c001098;
    *DAT_2c001094 = uVar23;
    *puVar6 = 0x58;
  }
  FUN_2c003898(0x26,0);
  FUN_2c003898(0x27,0);
  FUN_2c003748(0x5e,&local_36);
  FUN_2c003898(0x5e,local_36);
  FUN_2c003748(0x52,&local_36);
  if ((*pbVar4 == 0) || (*pbVar4 == 3)) {
    uVar18 = 0x51;
  }
  else {
    uVar18 = 0x52;
  }
  FUN_2c003898(uVar18,local_36);
  FUN_2c003748(2,&local_36);
  local_36 = local_36 & 0xefcf | 0x20;
  FUN_2c003898(2);
  if (*pbVar4 == 3) {
    FUN_2c003748(0xbb,&local_36);
    local_36 = local_36 | 0x4000;
    FUN_2c003898(0xbb);
    FUN_2c003748(0xbc,&local_36);
    local_36 = local_36 | 0x6000;
    FUN_2c003898(0xbc);
  }
  FUN_2c003748(3,&local_36);
  local_36 = local_36 & 0xfdff;
  FUN_2c003898(3);
  uVar29 = (uint)*pbVar4;
  if (uVar29 - 1 < 2) {
    FUN_2c003748(0x1b,&local_36);
    local_36 = local_36 & 0xc0ff | 0x3000;
    FUN_2c003898(0x1b);
    FUN_2c003748(0x17,&local_36);
    local_36 = local_36 & 0xc0ff | 0x3000;
    FUN_2c003898(0x17);
    FUN_2c003748(0x34,&local_36);
    local_36 = local_36 & 0xc0ff | 0x3000;
    FUN_2c003898(0x34);
    uVar29 = (uint)*pbVar4;
    if (uVar29 == 1) {
      FUN_2c003748(0x1c,&local_36);
      local_36 = local_36 & 0xefff;
      FUN_2c003898(0x1c);
      FUN_2c003748(0x18,&local_36);
      local_36 = local_36 & 0xefff;
      FUN_2c003898(0x18);
      FUN_2c003748(0x35,&local_36);
      local_36 = local_36 & 0xefff;
      FUN_2c003898(0x35);
      uVar29 = (uint)*pbVar4;
      if (uVar29 == 2) goto LAB_2c0015c4;
      goto LAB_2c000f42;
    }
    if (uVar29 != 2) goto LAB_2c000f48;
LAB_2c0015c4:
    FUN_2c003818(4,0x18ad,DAT_2c0018a4,DAT_2c0018a0,DAT_2c00189c,*DAT_2c001898);
    FUN_2c003818(0,0x18ae,DAT_2c0018a4,DAT_2c0018a0,DAT_2c0018b0,*DAT_2c0018ac,*DAT_2c0018a8);
    FUN_2c003898(0x129,0);
    FUN_2c003748(0x11d,&local_36);
    local_36 = local_36 | 1;
    FUN_2c003898(0x11d);
    FUN_2c003748(0x16,&local_36);
    local_36 = 0x8e1f;
    FUN_2c003898(0x16,0x8e1f);
    FUN_2c003748(0x18,&local_36);
    local_36 = 0xb424;
    FUN_2c003898(0x18,0xb424);
    FUN_2c003748(0x1a,&local_36);
    local_36 = 0x8e1f;
    FUN_2c003898(0x1a,0x8e1f);
    FUN_2c003748(0x1c,&local_36);
    local_36 = 0xb444;
    FUN_2c003898(0x1c);
    FUN_2c003748(0x11c,&local_36);
    local_36 = local_36 | 1;
    FUN_2c003898(0x11c);
    FUN_2c003748(0x33,&local_36);
    local_36 = 0x8e1f;
    FUN_2c003898(0x33,0x8e1f);
    FUN_2c003748(0x35,&local_36);
    local_36 = 0xb424;
    FUN_2c003898(0x35,0xb424);
    FUN_2c003748(0x39,&local_36);
    piVar33 = DAT_2c0018b4;
    if ((*pbVar4 == 0) || (*pbVar4 == 3)) {
      uVar17 = 0xe;
    }
    else {
      uVar17 = 0x70;
    }
    local_36 = uVar17 | local_36;
    FUN_2c003898(0x39);
    FUN_2c003748(0x41,&local_36);
    local_36 = 0x1014;
    FUN_2c003898(0x41);
    FUN_2c003748(0x42,&local_36);
    local_36 = local_36 & 0xff | 0x1c00;
    FUN_2c003898(0x42);
    FUN_2c003748(0x11a,&local_36);
    local_36 = local_36 | 2;
    FUN_2c003898(0x11a);
    local_36 = 0xe955;
    FUN_2c003898(0x116);
    if (*piVar33 != 0) goto LAB_2c000f5e;
LAB_2c00176a:
    iVar30 = FUN_2c647174(1,0,DAT_2c0018b8);
    *DAT_2c0018bc = iVar30;
    if (iVar30 == 0) {
      FUN_2c003818(4,0x19b1,DAT_2c001ea8,DAT_2c001ea4,DAT_2c001eb0);
      goto LAB_2c0013d2;
    }
    iVar30 = FUN_2c64418c(DAT_2c0018c0,0,0);
    *piVar33 = iVar30;
    uVar18 = FUN_2c003698();
    uVar22 = FUN_2c0035f8();
    FUN_2c003818(4,0x19b6,DAT_2c0018a4,DAT_2c0018a0,DAT_2c0018c4,uVar22);
    iVar30 = FUN_2c0035f8(uVar18);
    uVar29 = 0xb54 - iVar30;
    if (3000 < uVar29) {
      uVar29 = 100;
    }
    FUN_2c6448b4(*piVar33,uVar29);
    bVar26 = *pbVar4;
  }
  else {
LAB_2c000f42:
    pbVar10 = DAT_2c001bd4;
    if (uVar29 == 1) {
      FUN_2c003818(4,0x1912,DAT_2c001be0,DAT_2c001bdc,DAT_2c001bd8,*DAT_2c001bd4);
      if (*pbVar10 == 1) {
        FUN_2c003748(0x102,&local_36);
        local_36 = local_36 & 0xff90 | 0x48;
        FUN_2c003898(0x102);
      }
      else if (1 < *pbVar10) {
        FUN_2c003748(4,&local_36);
        local_36 = local_36 & 63999;
        FUN_2c003898(4);
        FUN_2c003748(0x102,&local_36);
        local_36 = local_36 & 0xbdde | 0xa540;
        FUN_2c003898(0x102);
      }
      FUN_2c003748(0x16,&local_36);
      local_36 = 0x8e18;
      FUN_2c003898(0x16,0x8e18);
      FUN_2c003748(0x1a,&local_36);
      local_36 = 0x8e12;
      FUN_2c003898(0x1a);
      FUN_2c003748(0x33,&local_36);
      local_36 = 0x8e18;
      FUN_2c003898(0x33,0x8e18);
      uVar18 = DAT_2c001be4;
      FUN_2c003748(0x36,&local_36);
      uVar17 = (ushort)uVar18;
      local_36 = local_36 | uVar17;
      FUN_2c003898(0x36);
      FUN_2c003748(0x19,&local_36);
      local_36 = local_36 | uVar17;
      FUN_2c003898(0x19);
      FUN_2c003748(0x1d,&local_36);
      local_36 = local_36 | uVar17;
      FUN_2c003898(0x1d);
      if (*pbVar10 < 2) {
        FUN_2c003748(0x11d,&local_36);
        local_36 = local_36 | 0x100;
        FUN_2c003898(0x11d);
      }
      FUN_2c003748(0x116,&local_36);
      local_36 = 0xe955;
      FUN_2c003898(0x116);
      FUN_2c003748(0x4c,&local_36);
      local_36 = local_36 & 0xf000 | 0x410;
      FUN_2c003898(0x4c);
      if (*pbVar10 == 0) {
        FUN_2c003748(0x6c,&local_36);
        local_36 = local_36 & 0x9fff | 0x8000;
        FUN_2c003898(0x6c);
        FUN_2c003718(0x50);
        FUN_2c003748(0x10,&local_36);
        local_36 = local_36 & 0xfc00 | 0x35a;
        FUN_2c003898(0x10);
        FUN_2c003748(0x66,&local_36);
        local_36 = local_36 | 0x3000;
        FUN_2c003898(0x66);
        FUN_2c003748(0x66,&local_36);
        local_36 = local_36 & 0xffbf;
        FUN_2c003898(0x66);
        FUN_2c003748(0x6c,&local_36);
        local_36 = local_36 | 0x4000;
        FUN_2c003898(0x6c);
      }
    }
    else {
LAB_2c000f48:
      if (uVar29 == 0) {
        FUN_2c003818(4,0x197d,DAT_2c001ea8,DAT_2c001ea4,DAT_2c001eac,*DAT_2c001e9c);
      }
      else {
        if (uVar29 != 3) goto LAB_2c000f54;
        FUN_2c003818(4,0x197f,DAT_2c001ea8,DAT_2c001ea4,DAT_2c001ea0,*DAT_2c001e9c);
      }
      local_36 = 0x211;
      FUN_2c003898(0x16,0x8e1f);
      FUN_2c003898(0x17,local_36);
      FUN_2c003898(0x18,0xa444);
      FUN_2c003898(0x19,0xe210);
      FUN_2c003898(0x1a,0x8e1f);
      FUN_2c003898(0x1b,local_36);
      FUN_2c003898(0x1c,0xa484);
      FUN_2c003898(0x1d,0xe210);
      FUN_2c003898(0x33,0x8e1f);
      FUN_2c003898(0x34,local_36);
      FUN_2c003898(0x35,0xa484);
      FUN_2c003898(0x36,0xe210);
      FUN_2c003748(0x1b,&local_36);
      local_36 = local_36 & 0xf0ff | 0x800;
      FUN_2c003898(0x1b);
      FUN_2c003748(0x17,&local_36);
      local_36 = local_36 & 0xf0ff | 0x800;
      FUN_2c003898(0x17);
      FUN_2c003748(0x34,&local_36);
      local_36 = local_36 & 0xf0ff | 0x800;
      FUN_2c003898(0x34);
      FUN_2c003748(0x39,&local_36);
      if ((*pbVar4 == 0) || (*pbVar4 == 3)) {
        uVar17 = 8;
      }
      else {
        uVar17 = 0x40;
      }
      local_36 = uVar17 | local_36;
      FUN_2c003898(0x39);
      FUN_2c003748(0x41,&local_36);
      local_36 = local_36 & 0xff | 0xe000;
      FUN_2c003898(0x41);
    }
LAB_2c000f54:
    piVar33 = DAT_2c00109c;
    if (*DAT_2c00109c == 0) goto LAB_2c00176a;
LAB_2c000f5e:
    bVar26 = *pbVar4;
  }
  if (bVar26 - 1 < 2) {
    FUN_2c003748(99,&local_36);
    local_36 = local_36 | 0x3f00;
    FUN_2c003898(99);
  }
  FUN_2c0037c8(7,&local_34);
  pbVar10 = DAT_2c0010b8;
  if ((int)((uint)(byte)local_34 << 0x1a) < 0) {
    bVar26 = -(byte)(((uint)(byte)local_34 << 0x1b) >> 0x1b);
  }
  else {
    bVar26 = (byte)local_34 & 0x1f;
  }
  *DAT_2c0010b8 = bVar26;
  pcVar11 = DAT_2c0010bc;
  uVar29 = (uint)local_34._1_1_;
  cVar20 = (char)((local_34 & 0x3ff) >> 6);
  if ((int)(uVar29 << 0x1d) < 0) {
    cVar20 = -(byte)(((uint)local_34 << 0x16) >> 0x1c);
  }
  cVar24 = (char)((uVar29 & 0x7f) >> 3);
  *DAT_2c0010bc = cVar20;
  pcVar7 = DAT_2c0010a0;
  if ((local_34 & 0x8000) != 0) {
    cVar24 = -(byte)((uVar29 << 0x19) >> 0x1c);
  }
  *DAT_2c0010a0 = cVar24;
  FUN_2c0037c8(9,&local_34);
  pbVar8 = DAT_2c0010a4;
  if ((int)((uint)(byte)local_34 << 0x1a) < 0) {
    bVar26 = -(byte)(((uint)(byte)local_34 << 0x1b) >> 0x1b);
  }
  else {
    bVar26 = (byte)local_34 & 0x1f;
  }
  *DAT_2c0010a4 = bVar26;
  pbVar9 = DAT_2c0010a8;
  bVar25 = (byte)(((uint)local_34 << 0x16) >> 0x18);
  bVar26 = bVar25 >> 4;
  if ((int)((uint)local_34._1_1_ << 0x1d) < 0) {
    bVar26 = -(bVar25 >> 4);
  }
  bVar2 = (byte)(((uint)local_34._1_1_ << 0x19) >> 0x18);
  bVar25 = bVar2 >> 4;
  *DAT_2c0010a8 = bVar26;
  pbVar12 = DAT_2c0010c0;
  if ((local_34 & 0x8000) != 0) {
    bVar25 = -(bVar2 >> 4);
  }
  bVar26 = *pbVar4;
  *DAT_2c0010c0 = bVar25;
  if ((bVar26 == 0) || (bVar26 == 3)) {
    *pbVar12 = bVar25 + 3;
  }
  FUN_2c003818(4,0xcaf,DAT_2c001078,DAT_2c001074,DAT_2c0010ac,(int)(char)*pbVar10);
  FUN_2c003818(4,0xcb0,DAT_2c001078,DAT_2c001074,DAT_2c0010b0,(int)*pcVar11);
  FUN_2c003818(4,0xcb1,DAT_2c001078,DAT_2c001074,DAT_2c0010b4,(int)*pcVar7);
  FUN_2c003818(4,0xcb2,DAT_2c001078,DAT_2c0013f0,DAT_2c0013ec,(int)(char)*pbVar8);
  FUN_2c003818(4,0xcb3,DAT_2c0013f4,DAT_2c0013f0,DAT_2c0013f8,(int)(char)*pbVar9);
  FUN_2c003818(4,0xcb4,DAT_2c0013f4,DAT_2c0013f0,DAT_2c0013fc,(int)(char)*pbVar12);
  FUN_2c0036b8();
  FUN_2c003728(1);
  if (*pbVar4 == 2) {
    FUN_2c003748(0x15,&local_34);
    local_34 = local_34 & 0xffc3;
    FUN_2c003898(0x15);
    FUN_2c003748(0x4a,&local_34);
    local_34 = local_34 & 0xffc3;
    FUN_2c003898(0x4a);
    FUN_2c003748(0x74,&local_34);
    local_34 = local_34 & 0xf3ff;
    FUN_2c003898(0x74);
    FUN_2c003748(0x75,&local_34);
    local_34 = local_34 & 0xf3ff;
    FUN_2c003898(0x75);
  }
  else if (*pbVar4 == 1) {
    FUN_2c003748(0xd,&local_34);
    local_34 = local_34 | 0xc000;
    FUN_2c003898(0xd);
    FUN_2c003748(0x15,&local_34);
    local_34 = local_34 & 0xffc3;
    FUN_2c003898(0x15);
    FUN_2c003748(0x74,&local_34);
    local_34 = local_34 & 0xf3ff;
    FUN_2c003898(0x74);
    FUN_2c003748(0xd,&local_34);
    local_34 = (ushort)(((uint)local_34 << 0x11) >> 0x11);
    FUN_2c003898(0xd);
  }
  FUN_2c0035e8(1,1,0,1,0);
  FUN_2c0035e8(9,1,0,1,0);
  if (1 < *pbVar4 - 1) {
    FUN_2c003748(0xe,&local_34);
    local_34 = local_34 & 0x9fff;
    FUN_2c003898(0xe);
  }
  local_36 = 0xbc;
  FUN_2c0035b8(0xbc);
  FUN_2c003748(0x1d,&local_34);
  local_34 = local_34 | 1;
  FUN_2c003898(0x1d);
  FUN_2c003748(0x4b,&local_34);
  local_34 = local_34 & 0xfcfc | 0x203;
  FUN_2c003898(0x4b);
  if (*pbVar4 == 2) {
    uVar18 = 1000;
  }
  else {
    uVar18 = 100;
  }
  FUN_2c003788(uVar18);
  FUN_2c003748(0x1d,&local_34);
  local_34 = local_34 & 0xfffe;
  FUN_2c003898(0x1d);
  FUN_2c0035e8(3,1,0,1,0);
  FUN_2c0035e8(4,1,0,1,0);
  if (*pbVar4 == 1) {
    FUN_2c003748(0x10f,&local_34);
    local_34 = local_34 & 0xfbff | 0x800;
    FUN_2c003898(0x10f);
  }
  FUN_2c003628(0);
  FUN_2c0035e8(8,1,0,1,0);
  FUN_2c0035e8(7,1,0,1,0);
  local_36 = 5;
  FUN_2c003648(8,5);
  local_36 = 0xbc;
  FUN_2c003748(0x48,&local_34);
  uVar19 = (uint)local_36;
  iVar30 = (uint)(byte)local_34 - (int)*pcVar7;
  uVar29 = UnsignedSaturate(iVar30,8);
  UnsignedDoesSaturate(iVar30,8);
  uVar29 = uVar29 & 0xffff;
  if (uVar29 < uVar19) {
    do {
      uVar29 = uVar29 + 1 & 0xffff;
      FUN_2c0035b8(uVar29);
    } while (uVar29 < local_36);
  }
  else {
    iVar30 = (uint)(local_34 >> 8) - (int)(char)*pbVar12;
    uVar1 = UnsignedSaturate(iVar30,8);
    UnsignedDoesSaturate(iVar30,8);
    if (((uVar1 & 0xffff) != uVar19) || (uVar19 != uVar29)) {
      FUN_2c0035b8(uVar19);
    }
  }
  FUN_2c003818(4,0x1a3e,DAT_2c0013f4,DAT_2c0013f0,DAT_2c001400,0x6a4);
  FUN_2c003778(DAT_2c001404,0x6a4);
  if (*DAT_2c001408 != '\x03') {
    FUN_2c003838(3);
  }
  if (*pbVar4 - 1 < 2) {
    FUN_2c003748(0x11a,&local_34);
    local_34 = local_34 | 6;
    FUN_2c003898(0x11a);
    FUN_2c003748(0x120,&local_34);
    local_34 = local_34 | 0x400;
    FUN_2c003898(0x120);
    FUN_2c003748(0x69,&local_34);
    local_34 = local_34 | 0xc0;
    FUN_2c003898(0x69);
    FUN_2c0036e8(0);
    bVar26 = *pbVar4;
  }
  else {
    FUN_2c0036e8(0);
    bVar26 = *pbVar4;
  }
  if (bVar26 == 2) {
    FUN_2c003518();
  }
  FUN_2c0038b8();
  if (*pbVar4 - 1 < 2) {
    if (*DAT_2c001544 != '\0') {
      if (*pbVar4 == 2) {
        FUN_2c003748(0x11,&local_34);
        uVar29 = (local_34 & 3) >> 1;
      }
      else {
        FUN_2c003748(0x128,&local_34);
        uVar29 = local_34 & 1;
      }
      if ((uVar29 == 0) && (*pbVar4 - 1 < 2)) {
        FUN_2c003748(0x102,&local_34);
        local_34 = local_34 & 0xfeff;
        FUN_2c003898(0x102);
        local_34 = local_34 | 0x100;
        FUN_2c003898(0x102);
      }
    }
    FUN_2c003748(0x52,&local_34);
    if ((int)((uint)local_34 << 0x12) < 0) {
      FUN_2c0037b8(0);
    }
    if (1 < *pbVar4 - 1) goto LAB_2c0012c6;
    FUN_2c003898(0x37,0x7ffe);
    FUN_2c0037a8();
    if (*pbVar4 - 1 < 2) goto LAB_2c0014da;
LAB_2c0012d4:
    FUN_2c003808();
    bVar26 = *pbVar4;
  }
  else {
LAB_2c0012c6:
    FUN_2c0037a8();
    if (1 < *pbVar4 - 1) goto LAB_2c0012d4;
LAB_2c0014da:
    FUN_2c0037c8(0xd,&local_36);
    if ((int)((uint)local_36 << 0x13) < 0) {
      FUN_2c4b6d24(1);
    }
    if (1 < *pbVar4 - 1) goto LAB_2c0012d4;
    FUN_2c003748(0x1e,&local_34);
    local_34 = local_34 | 4;
    FUN_2c003898(0x1e);
    FUN_2c003808();
    bVar26 = *pbVar4;
  }
  if (bVar26 == 1) {
    FUN_2c003848();
  }
  pcVar11 = DAT_2c00140c;
  FUN_2c000558();
  FUN_2c001eb4();
  psVar13 = DAT_2c001410;
  if ((*pcVar11 == '\0') || (*DAT_2c001410 != 0x1e0)) {
    FUN_2c003818(4,0xf88,DAT_2c0013f4,DAT_2c0013f0,DAT_2c001418,DAT_2c001414,0x1e0);
    FUN_2c003898(0x2335,0x1400);
    FUN_2c003898(0x2334,0);
    FUN_2c003898(0x2340,0x3908);
    FUN_2c003898(0x2341,0xffff);
    FUN_2c003898(0x233a,0x707);
    FUN_2c003898(0x2342,0x4000);
    FUN_2c003898(0x20ad,0xd580);
    FUN_2c003898(0x20ab,0x7964);
    FUN_2c003898(0x20ac,0x6965);
    *psVar13 = 0x1e0;
    *pcVar11 = '\x01';
  }
  FUN_2c0036a8();
  local_30 = *DAT_2c00141c;
  FUN_2c003758(&local_30,1);
  FUN_2c4c0248(0x48,0,1);
  FUN_2c0036f8(1,DAT_2c001420,100);
  FUN_2c4c0248(100,1);
  FUN_2c4c0248(0x69,1);
  FUN_2c4c0248(0x81,1);
  FUN_2c4c0248(0x66,1);
LAB_2c0013d2:
  if (*DAT_2c001424 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c003558();
  }
  return 0;
}


/* FUN_2c412a10 @ 0x2c412a10 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c415dec) */
/* WARNING: Removing unreachable block (ram,0x2c415dc0) */
/* WARNING: Removing unreachable block (ram,0x2c415dc2) */
/* WARNING: Removing unreachable block (ram,0x2c415f60) */
/* WARNING: Removing unreachable block (ram,0x2c415fa2) */
/* WARNING: Removing unreachable block (ram,0x2c415fa6) */
/* WARNING: Removing unreachable block (ram,0x2c415fa8) */
/* WARNING: Removing unreachable block (ram,0x2c415fae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c412a10(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  int unaff_r4;
  int iVar23;
  int *piVar24;
  undefined4 *puVar25;
  int unaff_r5;
  int iVar26;
  uint *puVar27;
  undefined4 *unaff_r6;
  int iVar28;
  uint uVar29;
  int iVar30;
  undefined1 *puVar31;
  uint uVar32;
  int iVar33;
  undefined1 *puVar34;
  char unaff_r8;
  undefined1 *puVar35;
  uint unaff_lr;
  char in_ZR;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  uint *puVar39;
  undefined4 in_cr3;
  undefined8 in_d3;
  undefined8 unaff_d12;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [16];
  undefined1 uVar11;
  
  *(char *)(unaff_r4 + 1) = (char)unaff_r5;
  iVar23 = *(int *)(unaff_r5 + 0x74);
  uVar15 = *unaff_r6;
  uVar18 = unaff_r6[1];
  iVar26 = unaff_r6[3];
  iVar28 = unaff_r6[4];
  *(int *)(iVar28 + 0x58) = iVar26;
  *(char *)(iVar28 + 0xd) = (char)param_1;
  uVar8 = (undefined1)uVar15;
  *(undefined1 *)(iVar26 + 0x19) = uVar8;
  puVar39 = (uint *)auStack_34;
  *(char *)(iVar23 + 5) = (char)iVar26;
  iVar21 = *(int *)(iVar23 + 0x14);
  *(undefined4 *)(iVar28 + 0x34) = uVar18;
  *(int *)(*(ushort *)(iVar23 + 0xe) + 0x58) = iVar28;
  *(undefined4 *)(iVar28 + 0x34) = uVar15;
  uVar18 = *(undefined4 *)(iVar26 + 100);
  *(int *)(*(ushort *)(iVar23 + 0xe) + 0x58) = iVar26;
  *(undefined1 *)(iVar28 + 0xd) = uVar8;
  uVar15 = *(undefined4 *)(iVar26 + 0x54);
  *(uint *)(param_1 + 0x58) = (uint)*(ushort *)(iVar23 + 0xe);
  *(char *)(iVar28 + 0xd) = (char)uVar15;
  *(int *)(iVar26 + 0x14) = iVar23;
  uVar8 = (undefined1)iVar28;
  *(undefined1 *)(iVar26 + 0x11) = uVar8;
  uVar9 = (undefined1)uVar18;
  *(undefined1 *)(iVar23 + 0x11) = uVar9;
  *(undefined1 *)(iVar26 + 0x11) = uVar8;
  *(undefined1 *)(iVar26 + 0x11) = uVar8;
  iVar23 = *(int *)(iVar26 + 0x18);
  uVar29 = *(uint *)(iVar21 + 0x48);
  piVar24 = *(int **)(iVar23 + 4);
  *(char *)((int)piVar24 + 9) = (char)*(undefined4 *)(iVar23 + 100);
  *(undefined1 *)(iVar23 + 0x11) = uVar9;
  uVar4 = *(ushort *)((int)piVar24 + 0xe);
  iVar21 = *piVar24;
  uVar32 = piVar24[1];
  uVar13 = *(uint *)(uVar32 + 0x68);
  *(char *)(iVar21 + 5) = (char)iVar23;
  puVar27 = *(uint **)(uVar29 + 0x14);
  puVar27[0x19] = uVar32;
  uVar22 = *(uint *)(iVar21 + 0x14);
  *(uint *)(iVar21 + 0x54) = uVar22;
  iVar21 = *(int *)(iVar21 + 0x14);
  *puVar27 = (uint)uVar4;
  puVar27[1] = uVar22;
  puVar27[2] = (uint)puVar27;
  puVar27[3] = uVar29;
  *(char *)(uVar4 + 10) = (char)uVar32;
  *(uint *)(iVar21 + 0x54) = uVar22;
  uVar32 = puVar27[0x11];
  uVar8 = (undefined1)uVar32;
  *(undefined1 *)(uVar32 + 10) = uVar8;
  *(char *)(iVar21 + 0x15) = (char)uVar22;
  bVar3 = *(byte *)(iVar21 + 0x15);
  uVar19 = (uint)bVar3;
  *(uint *)(uVar29 + 0x34) = uVar19;
  uVar9 = (undefined1)uVar13;
  uVar10 = (undefined1)iVar21;
  uVar11 = SUB41(puVar27,0);
  if (in_ZR == '\0') {
    puVar27[5] = uVar13;
    *(byte *)(uVar29 + 1) = bVar3;
    *(char *)((int)puVar27 + 0xd) = (char)uVar29;
    *(ushort *)(iVar21 + 0x3e) = (ushort)bVar3;
    *(undefined1 *)(uVar32 + 10) = uVar10;
    puVar27[0x1d] = uVar32;
    *(undefined1 *)((int)puVar27 + 0x11) = uVar9;
    uVar15 = *(undefined4 *)(uVar29 + 0x14);
    iVar33 = *(int *)(iVar21 + 4);
    *(int *)(uVar29 + 0x14) = iVar21;
    uVar8 = (undefined1)uVar15;
    *(undefined1 *)(uVar29 + 9) = uVar8;
    cVar12 = (char)iVar33;
    *(char *)((int)puVar27 + 0x1d) = cVar12;
    *(char *)(uVar29 + 0x15) = (char)uVar22;
    *(undefined1 *)(iVar21 + 0xd) = uVar8;
    uVar32 = puVar27[0x15];
    *(char *)(uVar13 + 0xe) = cVar12;
    *(uint **)(uVar29 + 0x24) = puVar27;
    *(char *)(uVar29 + 0x15) = (char)auStack_30 + -0x7c;
    iVar23 = *(int *)(iVar21 + 0x74);
    *(undefined1 *)(iVar21 + 9) = uVar11;
    uVar4 = *(ushort *)(iVar21 + 0x26);
    *(undefined1 *)(iVar23 + 0x16) = uVar11;
    *(uint *)(uVar29 + 0x34) = (uint)uVar4;
    uVar15 = *(undefined4 *)(uVar29 + 0x74);
    *(char *)(iVar23 + 0x11) = cVar12;
    *(char *)(iVar33 + 1) = (char)uVar32;
    iVar21 = uVar32 + 0x20;
    *(undefined1 *)((int)puVar27 + -0x2d) = 0x26;
    iVar28 = *(int *)((int)puVar27 + 6);
    *(int *)(iVar23 + 0x24) = iVar33;
    iVar26 = *(int *)(iVar28 + 0x74);
    iVar23 = *(int *)(iVar26 + 0x34);
    *(char *)(iVar23 + 0x11) = cVar12;
    *(char *)(iVar33 + 1) = (char)iVar21;
    _Reserved6 = 0x65;
    uRamfffffffc = (undefined1)uVar15;
    uRam0000002d = uRamfffffffc;
    *(char *)(iVar26 + 9) = (char)iVar28 + -0x3c;
    *(char *)(iVar26 + 0x15) = (char)iVar23;
    uVar15 = s_make_block_2c41536c._0_4_;
    iVar28 = *(int *)(iVar26 + 100);
    iVar30 = iVar28 + -0x21;
    *(int *)(iVar21 * 2 + 0x44) = iVar21;
    iVar26 = (int)*(short *)(iVar21 * 2 + iVar30);
    *(int *)(uVar15 + 0x54) = iVar26;
    *(undefined1 *)(iVar33 + 0x31) = 0x74;
    *(char *)(iVar23 + 0x11) = cVar12 + ' ';
    sVar6 = *(short *)(iVar30 * 2);
    iVar33 = (int)sVar6;
    *(char *)(iVar28 + -0x10) = (char)uVar15;
    uVar18 = *(undefined4 *)(iVar26 + 0x14);
    *(undefined4 *)(iVar28 + 0x33) = uVar15;
    iVar21 = uVar15 << 1;
    *(undefined4 *)(iVar26 + 0x44) = uVar18;
    sVar5 = *(short *)(iVar26 + iVar30);
    iVar23 = *(int *)(sVar5 + 4);
    uVar18 = *(undefined4 *)(iVar28 + 0x23);
    *(undefined4 *)(uVar15 + 0x14) = 0x74;
    *(char *)(uVar15 + 0xd) = (char)iVar21;
    iVar26 = (int)*(short *)(sVar5 * 2 + iVar30);
    *(undefined1 *)(iVar26 + 0x11) = 0x74;
    iVar28 = *(int *)(iVar26 + 0x44);
    *(int *)(iVar23 + 0x24) = iVar33;
    iVar23 = *(int *)(iVar28 + 0x74);
    *(char *)(*(int *)(iVar23 + 0x34) + 1) = (char)sVar6;
    *(int *)(uVar15 + 0x54) = iVar21;
    iVar30 = *(int *)(iVar23 + 0x14);
    *(int *)(iVar28 + 0x14) = iVar30;
    iVar23 = *(int *)(iVar28 + 0x14);
    *(int *)(iVar33 + 0x54) = iVar21;
    *(char *)(iVar30 + 9) = (char)(iVar33 << 1);
    *(int *)(iVar28 + 0x34) = iVar33;
    uVar8 = (undefined1)iVar28;
    *(undefined1 *)(iVar23 + 0xd) = uVar8;
    iVar26 = *(int *)(iVar28 + 0x14);
    *(int *)(iVar28 + 0x54) = iVar30;
    uVar9 = (undefined1)uVar18;
    *(undefined1 *)(iVar26 + 9) = uVar9;
    iVar23 = (int)*(short *)(iVar28 * 2);
    *(int *)(iVar30 + 0x14) = iVar33 << 1;
    *(char *)(iVar30 + 0xd) = (char)iVar21;
    *(undefined1 *)(iVar26 + 9) = uVar8;
    uVar15 = *(undefined4 *)(iVar23 + 100);
    *(undefined1 *)(iVar26 + 0x1d) = uVar8;
    uVar8 = (undefined1)uVar15;
    *(undefined1 *)(iVar23 + 0x1d) = uVar8;
    *(undefined1 *)(iVar28 + 0x11) = uVar9;
    *(int *)(iVar28 + 0x54) = iVar28;
    iVar26 = (int)*(short *)(iVar28 * 2);
    *(undefined1 *)(iVar23 + 9) = uVar8;
    uVar15 = *(undefined4 *)(iVar26 + 0x74);
    *(int *)(iVar26 + 0x14) = iVar26;
    *(int *)(iVar26 + 0x54) = iVar23;
    *(undefined4 *)(iVar23 + 0x24) = uVar15;
    iVar23 = *(int *)(iVar26 + 0x74);
    iVar21 = *(int *)(iVar23 + 0x34);
    *(int *)(iVar26 + 0x14) = iVar26;
    *(int *)(iVar26 + 0x54) = iVar21;
    *(undefined4 *)(iVar21 + 0x44) = uVar15;
    *(undefined4 *)(iVar26 + 0x34) = uVar15;
    iVar21 = *(int *)(iVar23 + 100);
    *(char *)(iVar21 + 0x19) = (char)*(undefined2 *)(iVar30 + iVar21);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(uVar13 + 10) = uVar9;
  *(int *)(iVar21 + 0x34) = iVar21;
  *(undefined1 *)(uVar19 + 0xe) = uVar9;
  *(undefined1 *)(uVar29 + 0xd) = uVar8;
  *(undefined1 *)(uVar29 + 1) = uVar11;
  *(undefined1 *)(iVar21 + 0x16) = uVar9;
  *(undefined1 *)(uVar13 + 9) = uVar8;
  uVar15 = *(undefined4 *)(uVar29 + 100);
  sVar6 = *(short *)((uint)*(byte *)(uVar32 + 10) * 2);
  iVar26 = (int)sVar6;
  *(uint *)(uVar29 + 0x14) = uVar13;
  *(byte *)(uVar29 + 0xd) = bVar3;
  *(char *)(iVar21 + 9) = (char)sVar6;
  *(undefined4 *)(uVar22 + 100) = uVar15;
  uVar8 = (undefined1)*(undefined4 *)(iVar26 + 100);
  *(undefined1 *)(iVar26 + 0xd) = uVar8;
  *(undefined1 *)(iVar26 + 0x19) = uVar10;
  *(char *)(uVar22 + 0xd) = (char)uVar15;
  *(undefined1 *)(uVar29 + 9) = uVar10;
  *(int *)(iVar21 + 0x14) = iVar26;
  uVar7 = *(undefined2 *)(iVar26 * 2);
  *(int *)(uVar29 + 0x14) = iVar26 << 1;
  *(byte *)(uVar29 + 0xd) = bVar3;
  *(char *)(iVar21 + 9) = (char)uVar7;
  *(undefined4 *)(uVar22 + 0x34) = uVar15;
  *(uint *)(uVar29 + 0x54) = uVar19;
  *(undefined1 *)(iVar21 + 0x11) = uVar8;
  iVar21 = iVar21 * 2;
  iVar23 = *(int *)(uVar29 + 4);
  *(undefined1 *)(iVar21 + 9) = uVar8;
  *(char *)(iVar23 + 1) = (char)iVar23;
  *(undefined1 *)(iVar23 + 9) = uVar8;
  bVar3 = *(byte *)(uVar29 + 5);
  uVar13 = (uint)bVar3;
  *(char *)(iVar21 + 0xc) = (char)uVar15;
  *(uint *)(uVar29 + 0x14) = uVar13;
  *(byte *)(iVar21 + 0x19) = bVar3;
  uVar15 = *(undefined4 *)(uVar13 + 0x44);
  *(undefined4 *)(iVar21 + 0x10) = uVar15;
  *(char *)(uVar29 + 1) = (char)(iVar26 << 1);
  *(undefined4 *)(iVar21 + 0x30) = uVar15;
  *(int *)(iVar21 + 0x14) = iVar21;
  iVar23 = *(int *)(uVar29 + 0x34);
  *(char *)(iVar21 + 0xc) = (char)uVar15;
  *(int *)(uVar29 + 0x34) = iVar23;
  iVar33 = *(int *)(iVar21 + 0x10);
  iVar30 = *(int *)(iVar21 + 0x44);
  uVar15 = *(undefined4 *)(iVar21 + 100);
  *(char *)(uVar13 + 0xd) = (char)iVar21;
  *(int *)(iVar21 + 0x30) = iVar30;
  *(uint *)(uVar13 + 0x54) = uVar13;
  iVar26 = *(int *)(iVar21 + 0x14);
  iVar28 = iVar21 + -0x3d;
  *(undefined1 *)(iVar26 + 0xc) = 0x6d;
  *(int *)(iVar30 + 0x24) = iVar28;
  iVar30 = *(int *)(iVar33 + 0x40);
  uVar8 = (undefined1)uVar15;
  *(undefined1 *)(iVar26 + 0xd) = uVar8;
  *(int *)(*(short *)(iVar30 + iVar28) + 0x54) = (int)*(short *)(iVar30 + iVar28);
  iVar21 = *(int *)(iVar21 + -0x29);
  *(undefined1 *)(iVar21 + 9) = uVar8;
  *(undefined4 *)(iVar30 + 0x54) = *(undefined4 *)(iVar21 + 0x54);
  *(char *)(iVar28 * 2 + 0x11) = (char)iVar30;
  iVar26 = *(int *)(iVar21 + 100);
  iVar21 = iVar30 * 2;
  *(undefined4 *)(iVar21 + 0x74) = *(undefined4 *)(iVar26 + 0x54);
  *(undefined4 *)(iVar21 + 0x30) = 0x44;
  *(int *)(iVar30 + 0x54) = iVar21;
  *(char *)(iVar26 + 0x11) = (char)iVar30;
  iVar21 = iRam0000006e;
  uVar8 = (undefined1)iRam0000006e;
  *(char *)(_DAT_0000004e + 0xc) = (char)*(undefined4 *)(_DAT_0000004e + 100);
  puVar14 = puRam2c415834;
  iVar26 = *(int *)(puRam2c415834 + 0x74);
  uRam000000ac = (undefined2)iVar21;
  _DAT_000000ae = (undefined2)((uint)iVar21 >> 0x10);
  *(undefined4 *)(iVar21 + 0x14) = 0x72;
  *(int *)(iVar21 + 0x54) = iVar23 + -0x74;
  uRam00000053 = SUB41(puVar14,0);
  iVar30 = *(int *)(iVar26 + 100);
  uRam00000069 = uVar8;
  _DAT_0000007e = iVar30;
  *puVar14 = 0x3a;
  *(undefined4 *)(puVar14 + 0x30) = 0x70;
  iVar28 = *(int *)(puVar14 + 0x44);
  iVar26 = (int)*(short *)(iVar28 * 2);
  *(int *)(iVar26 + 0x54) = iVar26;
  *(int *)(iVar26 + 0x40) = iVar28;
  *(undefined1 *)(iVar26 + 0xc) = 0x70;
  *(int *)(iVar21 + 0x14) = iVar26;
  *(char *)(iVar21 + 0x11) = (char)(iVar23 + -0x151);
  *(int *)(iVar26 + 0x40) = iVar28;
  *(char *)(iVar26 + 0x14) = (char)iVar28;
  uVar15 = *(undefined4 *)(iVar26 + 0x60);
  *(char *)(iVar28 + 0x11) = (char)iVar30;
  *(undefined4 *)(iVar26 + 0x10) = uVar15;
  *(undefined4 *)(iVar26 + 0x30) = uVar15;
  iVar30 = *(int *)(iVar28 + 100);
  *(int *)(iVar21 + 0x14) = iVar26;
  uVar15 = *(undefined4 *)(iVar28 + 100);
  *(char *)(iVar26 + 9) = (char)iVar28;
  *(char *)(iVar28 + 0x11) = (char)uVar15 + unaff_r8;
  uVar15 = *(undefined4 *)(iVar26 + 0x74);
  *(undefined1 *)(*(int *)(iVar26 + 0x54) + 0x11) = uVar8;
  iVar28 = *(int *)(iVar26 + 100);
  sVar6 = (short)(iVar23 + -0x151) + -0xd9;
  *(char *)(iVar26 + 0xc) = (char)iVar28;
  *(short *)(iVar26 + 6) = sVar6;
  *(short *)(iVar26 + 6) = sVar6;
  uVar8 = (undefined1)uVar15;
  *(undefined1 *)(iVar21 + 0x15) = uVar8;
  *(undefined1 *)(iVar21 + -0x18) = uVar8;
  uVar15 = *(undefined4 *)(iVar28 + 100);
  *(undefined1 *)(iVar21 + -0x45) = 0x3c;
  *(int *)(iVar28 + 0x54) = iVar26;
  *(undefined1 *)(iVar26 + 0xc) = 0x6e;
  iVar23 = *(int *)(iVar30 + 0x10);
  iRam0000004a = iVar28;
  *(char *)(iVar28 + 1) = (char)iVar23;
  *(char *)(iVar23 + 0x11) = (char)iVar28;
  *(int *)(iVar28 + 0x40) = iVar23;
  *(char *)(iVar26 + 0x11) = (char)uVar15;
  *(undefined1 *)(iVar23 + 0x15) = uVar8;
  iVar21 = *(int *)(iVar26 + 0x24);
  iVar23 = (uint)*(byte *)(iVar23 + -0x2d + iVar28) * 2;
  uVar7 = (undefined2)iVar21;
  *(undefined2 *)(iVar23 + 6) = uVar7;
  *(undefined2 *)(iVar23 + 6) = uVar7;
  iVar23 = iVar21 * 4;
  *(undefined2 *)(iVar23 + 6) = uVar7;
  iVar28 = iVar21 * 0x10;
  *(int *)(iVar28 + 0x54) = iVar21;
  *(int *)(iVar28 + 0x54) = iVar28;
  *(int *)(iVar21 * 4 + 0x44) = iVar30;
  iVar21 = *(int *)(iVar23 + 0x44);
  uVar8 = (undefined1)*(undefined4 *)(iVar21 + 0x54);
  *(undefined1 *)(iVar21 + 0x11) = uVar8;
  *(char *)(iVar23 + 9) = (char)iVar21;
  *(undefined1 *)(iVar28 + 9) = 0;
  *(int *)(iVar21 + 0x34) = iVar30;
  *(char *)(iVar23 + 0xd) = (char)iVar21;
  iVar21 = (int)*(short *)(iVar28 + iVar21);
  iVar26 = *(int *)(iVar23 + 0x54);
  uVar15 = *(undefined4 *)(iVar28 + 4);
  *(undefined1 *)(iVar23 + 0xd) = uVar8;
  *(undefined1 *)(iVar26 + 0xd) = uVar8;
  *(char *)(iVar26 + 0x19) = (char)iVar23;
  *(char *)(iVar21 + 0xd) = (char)iVar30;
  *(char *)(iVar23 + 0x11) = (char)iVar26;
  *(int *)(iVar21 + 0x34) = iVar30;
  iVar30 = *(int *)(iVar26 + 100);
  *(int *)(iVar28 + 0x54) = iVar23;
  *(char *)(iVar26 + 0x11) = (char)iVar28;
  *(undefined4 *)(iVar28 + 0x54) = uVar15;
  iVar26 = *(int *)(iVar23 + 0x34);
  *(int *)(iVar21 + 0x34) = iVar30;
  *(undefined4 *)(iVar26 + 0x14) = uVar15;
  *(char *)(iVar30 + 0x14) = (char)iVar23;
  iVar23 = *(int *)(*(int *)(iVar26 + 0x74) + 100);
  iVar21 = *(int *)(iVar23 + 4);
  *(undefined1 *)(iVar26 + 9) = uVar8;
  *(char *)(iVar21 + 1) = (char)iVar21;
  *(undefined1 *)(iVar21 + 9) = uVar8;
  bVar3 = *(byte *)(iVar23 + 5);
  uVar13 = (uint)bVar3;
  *(char *)(iVar26 + 0xc) = (char)iVar23;
  *(uint *)(iVar23 + 0x14) = uVar13;
  iVar21 = *(int *)(uVar13 + 0x14);
  *(byte *)(iVar26 + 0x19) = bVar3;
  uVar18 = *(undefined4 *)(uVar13 + 0x44);
  *(undefined4 *)(iVar26 + 0x10) = uVar18;
  *(char *)(iVar23 + 1) = (char)uVar15;
  *(undefined4 *)(iVar26 + 0x30) = uVar18;
  *(int *)(iVar26 + 0x14) = iVar26;
  puVar20 = *(undefined1 **)(iVar23 + 0x34);
  *(char *)(iVar26 + 0xc) = (char)uVar18;
  *(undefined1 **)(iVar23 + 0x34) = puVar20;
  *(undefined4 *)(iVar26 + 0x44) = *(undefined4 *)(iVar26 + 0x60);
  uVar15 = *(undefined4 *)(iVar21 + 100);
  *(int *)(iVar23 + 0x14) = iVar23;
  puVar31 = puRam0000009b;
  uVar13 = *(uint *)(iVar26 + 0x14);
  *(uint *)(uVar13 + 0x54) = uVar13;
  *(undefined1 *)(uVar13 + 0x10) = 0x6e;
  uVar8 = (undefined1)uVar15;
  DAT_00000074 = uVar8;
  *(undefined1 *)(uVar13 + 0xc) = 0x27;
  *(undefined4 *)(uVar13 + 0x10) = 0x65;
  *(undefined4 *)(uVar13 + 0x40) = 0x27;
  uVar13 = uVar13 >> 9;
  *(uint *)(uVar13 + 0x54) = uVar13;
  *(undefined4 *)(*(int *)(uVar13 + 0x74) + 0x24) = 0x73;
  iVar21 = _DAT_0000007e;
  iRam0000004a._0_2_ = CONCAT11(0x74,(undefined1)iRam0000004a);
  *(undefined4 *)(*(int *)(CONCAT22(uRam000000b0,_DAT_000000ae) + 0x34) + 0x24) = 0x73;
  iVar23 = *(int *)(*(int *)(iVar21 + 0x74) + 0x34);
  uVar9 = (undefined1)iVar23;
  *(undefined1 *)(*(int *)(iVar21 + 0x74) + 0x15) = uVar9;
  puVar31[0x11] = uVar9;
  uVar18 = *(undefined4 *)(iVar21 + 0x54);
  *(undefined4 *)(iVar23 + 0x24) = uVar18;
  iVar26 = *(int *)(iVar21 + 0x74);
  iVar23 = *(int *)(iVar26 + 0x34);
  *(undefined4 *)(puVar31 + 0x14) = 0x74;
  *(undefined1 **)(puVar31 + 0x14) = puVar20;
  *(char *)(iVar26 + 9) = (char)uVar18;
  *(undefined1 *)(iVar26 + 1) = uVar8;
  puVar14 = (undefined1 *)(iVar21 << 1);
  do {
    *(undefined1 **)(iVar21 + 0x54) = puVar14;
    *(undefined4 *)(iVar26 + 0x44) = uVar15;
    uVar15 = *(undefined4 *)(iVar21 + 100);
    iVar28 = *(int *)(puVar31 + 4);
    iVar21 = *(int *)(iVar28 + 0x54);
    *(char *)(iVar28 + 0x11) = (char)uVar15;
    *(undefined4 *)(iVar21 + 0x34) = uVar15;
    *(int *)(iVar23 + 0x24) = iVar26 << 1;
    *(undefined1 **)(puVar31 + 0x54) = puVar20;
    *(int *)(puVar31 + 0x14) = iVar28;
    puVar20 = *(undefined1 **)(iVar28 + 0x44);
code_r0x2c415b00:
    iVar21 = (int)*(short *)(iVar28 + iVar21);
    *(int *)(iVar28 + 0x54) = iVar23;
    iVar23 = *(int *)(iVar21 + 0x44);
    *(char *)(iVar23 + 0x11) = (char)puVar31;
    *(char *)(iVar23 + 9) = (char)puVar20;
    *(int *)(iVar23 + 0x14) = iVar21;
    iVar26 = *(int *)(iVar21 + 0x14);
    *(undefined1 **)(iVar21 + 0x54) = puVar31;
    *(char *)(iVar26 + 9) = (char)puVar20;
    *(int *)(iVar26 + 0x14) = iVar21;
code_r0x2c415b1c:
    iVar23 = iVar21 * 2;
    *(char *)(iVar21 + 0x11) = (char)puVar14;
    iVar21 = *(int *)(*(int *)(iVar21 + 0x44) + 0x44);
    uVar8 = (undefined1)iVar23;
    *(undefined1 *)(iVar26 + 0x15) = uVar8;
    *(undefined1 *)(iVar21 + 0x11) = uVar8;
    puVar34 = *(undefined1 **)(iVar23 + 0x14);
    puVar31 = *(undefined1 **)(iVar26 * 2 + 0x44);
    iVar21 = *(int *)(iVar26 + 0x54);
    puVar14 = *(undefined1 **)(puVar31 + 4);
code_r0x2c415b40:
    puVar31[0x11] = uVar8;
    *(undefined1 **)(iVar21 + 0x74) = puVar31;
    iVar30 = iRam2c415e88;
    puVar31 = *(undefined1 **)(iVar21 + 0x34);
    puVar20 = (undefined1 *)0xdc;
    while( true ) {
      uVar13 = (uint)(byte)puVar14[iVar21];
      iVar26 = uVar13 - 0x2b;
      uVar15 = uRam2c415c88;
      if (SBORROW4(uVar13 - 0x16,0x15)) break;
      iVar28 = uVar13 - 0x69;
      if (SBORROW4(iVar26,0x3e)) goto code_r0x2c415b00;
      bVar38 = SBORROW4(iVar28,0x3e);
      iVar28 = uVar13 - 0xa7;
      while( true ) {
        iVar26 = iVar28;
        if (bVar38) goto code_r0x2c415b1c;
        if (SBORROW4(iVar26,0x3e)) goto code_r0x2c415b40;
        if (SBORROW4(iVar26 + -0x3e,0x3e)) break;
        bVar38 = SBORROW4(iVar26 + -0x7c,0x3e);
        iVar28 = iVar26 + -0xba;
        if (!bVar38) {
          bVar38 = SBORROW4(iVar26 + -0x137,0x3e);
          uVar13 = iVar26 - 0x175;
          puVar16 = puRam2c415cf4;
          if (bVar38) {
            VectorWidenMultipyAccumulate(in_d3,unaff_d12,1);
            if (SBORROW4(uVar13,0x3e)) {
              uVar13 = iVar26 - 0x1f1;
              if (SBORROW4(iVar26 + -0x1b3,0x3e)) {
                bVar38 = SBORROW4(uVar13,0x3e);
                uVar13 = iVar26 - 0x1df;
                coprocessor_loadlong(0xc,in_cr3,uVar13);
                goto code_r0x2c415b9c;
              }
            }
            else {
              uVar8 = SUB41(puRam2c415cf4,0);
              *(undefined1 *)(iRam2c415e88 + 9) = uVar8;
              *(char *)(iVar26 + -0x1b2) = (char)(iVar26 + -0x1b3);
              *(undefined1 *)(iVar26 + -0x1aa) = uVar8;
              bVar3 = puVar31[5];
              uVar13 = (uint)bVar3;
              *(char *)(iVar30 + 0xc) = (char)puVar34;
              *(uint *)(puVar31 + 0x14) = uVar13;
              puVar16 = *(undefined1 **)(uVar13 + 0x14);
              *(byte *)(iVar30 + 0x19) = bVar3;
              puVar34 = *(undefined1 **)(uVar13 + 0x44);
              *(undefined1 **)(iVar30 + 0x10) = puVar34;
              puVar31[1] = (char)puVar14;
              *(undefined1 **)(iVar30 + 0x30) = puVar34;
            }
            *(int *)(iVar30 + 0x14) = iVar30;
            uVar15 = *(undefined4 *)(puVar31 + 0x34);
            *(char *)(iVar30 + 0xc) = (char)puVar34;
            *(undefined4 *)(puVar31 + 0x34) = uVar15;
            *(char *)(iVar30 + 0x14) = (char)puVar34;
            *(uint *)(puVar31 + 100) = uVar13;
            *(int *)(puVar31 + 0x34) = iVar30;
            puVar14 = puVar31 + -0x20;
            *(char *)(uVar13 + 9) = (char)puVar16;
            iVar23 = (int)*(short *)(iVar30 * 2);
            puVar31[-0xf] = (char)iVar30;
            puVar31 = puVar14;
code_r0x2c415bf8:
            bVar38 = SBORROW4((int)puVar14,0x66);
            puVar31[9] = (char)puVar14 + -0x66;
            *(undefined1 **)(iVar30 + 0x34) = puVar34;
            *(undefined1 **)(iVar23 + 0x54) = puVar34;
            *(undefined1 **)(iVar30 + 0x34) = puVar31;
            *(undefined1 **)(iVar30 + 0x44) = puVar34;
            *(char *)(uVar13 + 9) = (char)puVar16;
            puVar16 = &stack0xffffffe0;
code_r0x2c415c14:
            uVar13 = _DAT_00000104;
            puVar14 = puVar16 + 0x30c;
            puVar17 = puVar16 + 0x30c;
            puVar20 = puVar16 + 0x30c;
            puVar25 = (undefined4 *)(puVar16 + 0x30c);
            puVar31 = puVar16 + 0x30c;
            puVar34 = puVar16 + 0x30c;
            puVar39 = (uint *)(puVar16 + -0x10c);
            puVar35 = puVar16 + -0x10c;
            if (puVar16 != (undefined1 *)0xfffffcf4) {
              if (((uint)puVar14 & 0xff) != 0) {
                *(undefined1 **)(puVar16 + -0x110) = puVar34;
                *(undefined1 **)(puVar16 + -0x114) = puVar31;
                *(undefined1 **)(puVar16 + -0x118) = puVar17;
                puVar39 = (uint *)(puVar16 + -0x11c);
                *puVar39 = (uint)puVar14;
FUN_2c415c38:
                puVar39[-1] = unaff_lr;
                puVar39[-2] = (uint)puVar34;
                puVar39[-3] = (uint)puVar31;
                puVar39[-4] = (uint)puVar17;
                puVar39[-5] = (uint)puVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar34 = puVar16 + 0x208;
              if (puVar16 == (undefined1 *)0xfffffdf8) goto code_r0x2c415cf4;
              if (puVar16 != (undefined1 *)0xfffffdf8) {
                *(uint *)(puVar16 + -0x110) = unaff_lr;
                *(undefined1 **)(puVar16 + -0x114) = puVar16 + 0x208;
                *(undefined1 **)(puVar16 + -0x118) = puVar31;
                *(undefined1 **)(puVar16 + -0x11c) = puVar20;
                *(undefined1 **)(puVar16 + -0x120) = puVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar19 = 8;
              uVar22 = _DAT_00000104 << 2;
              bVar36 = (int)uVar22 < 0;
              bVar37 = uVar22 == 0;
              uRamfffffce8 = unaff_lr;
              uRamfffffce4 = 8;
              iRamfffffce0 = _DAT_00000110;
              uRamfffffcdc = 0x104;
              uRamfffffcd8 = _DAT_00000104;
              puVar14 = (undefined1 *)0xfffffcd4;
              uRamfffffcd4 = 0x104;
              iRamffffffec = _DAT_0000010c;
              uVar32 = _DAT_00000104;
              uVar15 = _DAT_00000108;
              if (bVar37 || bVar36 != bVar38) {
                iVar21 = _DAT_00000110;
                if (bVar37 || bVar36 != bVar38) {
                  if (bVar37 || bVar36 != bVar38) {
                    return CONCAT44(_DAT_00000104,0x104);
                  }
                  puVar1 = (undefined2 *)(_DAT_00000104 + 0x1e);
                  puVar2 = (undefined2 *)(_DAT_00000104 + 0x3e);
                  if (bVar37 || bVar36 != bVar38) {
                    *(undefined2 *)(_DAT_00000104 + 0x2e) = 0x104;
                    *puVar2 = 0x104;
                  }
                  else {
                    *(undefined2 *)(_DAT_00000104 + 0xe) = 0x104;
                    *puVar1 = 0x104;
                  }
                  uVar29 = (uint)*(ushort *)(uVar13 + 0x3e);
                  uRamfffffff4 = 8;
                  uVar32 = 0xfffffff4;
                  uVar15 = 0xfffffff4;
                  iVar21 = iRamffffffec;
                  goto LAB_2c415d8a;
                }
LAB_2c415dcc:
                *(short *)(uVar32 + 0xe) = (short)uVar22;
                puVar14 = (undefined1 *)0xfffffcd4;
                if (iVar21 != 0) {
                  uVar22 = uVar32 & 0xff;
                  if (uVar22 == 0) {
                    _UsageFault = uVar19;
                    if (uVar19 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffed8;
                      uRamfffffb88 = uVar19;
                      uRamfffffb84 = uVar19;
                      uRamfffffb80 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if ((uVar19 & 0xff) != 0) {
                      uRamfffffb90 = uVar19;
                      uRamfffffb8c = uVar19;
                      uRamfffffb88 = uVar19;
                      uRamfffffb84 = unaff_lr;
                      uRamfffffb80 = uVar19;
                      uRamfffffb7c = uVar19;
                      uRamfffffb78 = uVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar19 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffee0;
                      uRamfffffb88 = uVar19;
                      uRamfffffb84 = uVar19;
                      uRamfffffb80 = 0xfffffee0;
                      uRamfffffb7c = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar19 == 0) {
                      uRamfffffa3c = 0xfffffee8;
                      uRamfffffa38 = 0xfffffee8;
                      uRamfffffa34 = 0xfffffee8;
                      uRamfffffa30 = 0xfffffee8;
                      uRamfffffa2c = 0xfffffee8;
                      uRamfffffa28 = unaff_lr;
                      uRamfffffa24 = 0xfffffee8;
                      uRamfffffa20 = 0xfffffee8;
                      uRamfffffa1c = 0xfffffee8;
                      uRamfffffa18 = 0xfffffee8;
                      uRamfffffa14 = 0xfffffee8;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    uRamfffffb90 = unaff_lr;
                    uRamfffffb8c = 0xfffffedc;
                    uRamfffffb88 = uVar19;
                    uRamfffffb84 = uVar19;
                    uRamfffffb80 = 0xfffffedc;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  uRamfffffcc4 = 0x104;
                  puVar14 = (undefined1 *)0xfffffcc0;
                  uVar18 = 0x104;
                  uRamfffffcc0 = uVar32;
                  uRamfffffcc8 = uVar15;
                  uRamfffffccc = uVar22;
                  uRamfffffcd0 = uVar19;
LAB_2c415dd6:
                  *(uint *)(puVar14 + -4) = unaff_lr;
                  *(uint *)(puVar14 + -8) = uVar19;
                  *(uint *)(puVar14 + -0xc) = uVar22;
                  *(undefined4 *)(puVar14 + -0x10) = uVar15;
                  *(undefined4 *)(puVar14 + -0x14) = uVar18;
                  *(uint *)(puVar14 + -0x18) = uVar32;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                uVar29 = 0x104;
                iVar21 = _DAT_00000110;
LAB_2c415d8a:
                uVar19 = 0xfffffff4;
                if (uVar29 == 0) {
                  puVar14 = (undefined1 *)0xfffffcd4;
                  uVar19 = (uint)*(ushort *)(uVar32 + 0x36);
                  if (iVar21 == 0) {
                    uVar22 = (uint)*(ushort *)(uVar32 + 6);
                    iVar21 = 0;
                    goto LAB_2c415dcc;
                  }
                }
                else {
                  if (uVar29 == 0) goto LAB_2c415e06;
                  puVar14 = (undefined1 *)0xfffffce0;
                  uVar18 = 0;
                  uVar15 = uRamfffffcd4;
                  uVar22 = uRamfffffcd8;
                  uVar19 = uRamfffffcdc;
                  if (iRamfffffff8 == 0) goto LAB_2c415dd6;
                  *(short *)(uVar32 + 0x16) = (short)uVar32;
                  *(short *)(uVar29 + 6) = (short)(uVar13 << 4);
                  *(short *)(uVar32 + 0x3e) = (short)uVar32;
                  uVar32 = (uint)*(ushort *)
                                  (*(ushort *)(*(ushort *)(*(ushort *)(uVar32 + 0xe) + 0x1e) + 0x2e)
                                  + 0x3e);
                  if (uVar13 << 4 != 0) {
                    return CONCAT44(iRamfffffce0,uVar29);
                  }
                  if (uVar13 << 4 != 0) {
                    if (uVar13 << 4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    *(undefined2 *)(uVar32 + 0xe) = 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  software_bkpt(0xce);
                  uVar7 = (undefined2)uRamfffffcdc;
                  *(undefined2 *)(uVar32 + 0xe) = uVar7;
                  *(undefined2 *)(uVar32 + 0x1e) = uVar7;
                  *(undefined2 *)(uVar32 + 0x26) = uVar7;
                  *(undefined2 *)(uVar32 + 0x2e) = uVar7;
                  *(undefined2 *)(uVar32 + 0x36) = uVar7;
                  *(undefined2 *)(uVar32 + 0x3e) = uVar7;
                }
                uVar19 = (uint)*(ushort *)(uVar32 + 0x1e);
                *(ushort *)(uVar32 + 0x2e) = *(ushort *)(uVar32 + 0x1e);
              }
              uVar22 = (uint)*(ushort *)(uVar32 + 6);
LAB_2c415e06:
              *(short *)(uVar32 + 0xe) = (short)uVar22;
              *(short *)(uVar32 + 0x1e) = (short)uVar19;
              *(uint *)(puVar14 + 0x33c) = uVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
code_r0x2c415b9c:
            if (!bVar38) goto code_r0x2c415bf8;
            bVar38 = SBORROW4(uVar13,0x3e);
            puVar16 = (undefined1 *)puVar39;
            if (!bVar38) goto code_r0x2c415c14;
            puVar17 = puRam2c415cf4;
            if (!SBORROW4(uVar13 - 0x3e,0x3e)) goto FUN_2c415c38;
            if (SBORROW4(uVar13 - 0x7c,0x3e)) {
              puVar25 = (undefined4 *)(uVar13 - 0xf8);
              if (SBORROW4(uVar13 - 0xba,0x3e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              uVar7 = (undefined2)(uVar13 - 0xba);
              *(undefined2 *)(puVar14 + 0xe) = uVar7;
              *(undefined2 *)(puVar14 + 0x1e) = uVar7;
              *(undefined2 *)(puVar14 + 0x2e) = uVar7;
              *(undefined2 *)(puVar14 + 0x3e) = uVar7;
              puVar25 = (undefined4 *)(uint)*(ushort *)(puVar14 + 0x3e);
            }
          }
          puVar14 = (undefined1 *)*puVar25;
          puVar34 = (undefined1 *)puVar25[1];
          puVar31 = (undefined1 *)puVar25[3];
          puVar35 = (undefined1 *)puVar39;
          if (puVar25 != (undefined4 *)0xfffffff0) {
            *(uint *)((int)puVar39 + -4) = unaff_lr;
            *(int *)((int)puVar39 + -8) = (int)puVar14 << 2;
            *(undefined1 **)((int)puVar39 + -0xc) = puVar31;
            *(undefined1 **)((int)puVar39 + -0x10) = puVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x2c415cf4:
          *(uint *)(puVar35 + -4) = unaff_lr;
          *(undefined1 **)(puVar35 + -8) = puVar35 + 0x324;
          *(undefined1 **)(puVar35 + -0xc) = puVar31;
          *(undefined1 **)(puVar35 + -0x10) = puVar34;
          *(undefined1 **)(puVar35 + -0x14) = puVar14;
          uRam2c41601a = (short)puVar20;
          uRam2c416032 = (short)puVar20;
          *(undefined1 **)(puVar35 + -0x130) = puVar35 + 0x324;
          *(undefined1 **)(puVar35 + -0x134) = puVar31;
          *(uint *)(puVar35 + -0x138) = (uint)puVar20 & 0xffff;
          *(undefined4 *)(puVar35 + -0x13c) = 0x2c416014;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  } while( true );
}


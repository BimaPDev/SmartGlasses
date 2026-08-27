/* FUN_2c411ae6 @ 0x2c411ae6 */

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

undefined8 FUN_2c411ae6(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  uint uVar22;
  int unaff_r4;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  int unaff_r6;
  int iVar28;
  int iVar29;
  undefined1 *puVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint uVar33;
  int iVar34;
  undefined1 *puVar35;
  char unaff_r8;
  undefined1 *puVar36;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  uint *puVar40;
  undefined4 in_cr3;
  undefined8 in_d3;
  undefined8 unaff_d12;
  ushort in_stack_00000276;
  int in_stack_000003ac;
  undefined1 auStack_14 [12];
  
  puVar40 = (uint *)auStack_14;
  *(int *)(unaff_r4 + 0x54) = unaff_r4;
  *(undefined4 *)(unaff_r6 + param_2) = param_3;
  uVar10 = (undefined1)param_2;
  *(undefined1 *)(unaff_r4 + 9) = uVar10;
  iVar25 = *(int *)(unaff_r4 + 100);
  iVar23 = *(int *)(unaff_r6 + 4);
  uVar11 = (undefined1)iVar25;
  *(undefined1 *)(iVar23 + 0xd) = uVar11;
  *(undefined1 *)(iVar25 + 0xd) = uVar10;
  *(undefined1 *)(param_4 + unaff_r6) = uVar11;
  uVar5 = *(ushort *)(iVar23 + 0x1e);
  *(char *)(param_1 + *(int *)(iVar25 + 0x14)) = (char)param_4;
  iVar28 = *(int *)(iVar25 + 0x14);
  uVar31 = *(undefined4 *)(iVar25 + 100);
  iVar15 = *(int *)(uVar5 + 0x44);
  *(undefined1 *)(iVar28 + 0xd) = uVar11;
  uVar5 = *(ushort *)(iVar23 + 0x16);
  *(char *)(param_2 + iVar28) = (char)iVar28;
  *(undefined4 *)(iVar25 + 0x74) = uVar31;
  uVar32 = *(undefined4 *)(iVar25 + 100);
  *(int *)(iVar28 + 100) = iVar15;
  uVar6 = *(ushort *)(uVar5 + 0x24);
  uVar26 = (uint)uVar6;
  uVar11 = (undefined1)uVar6;
  *(undefined1 *)(uVar5 + 1) = uVar11;
  *(undefined1 *)(iVar15 + 9) = uVar10;
  uVar31 = *(undefined4 *)(iVar28 + 0x74);
  *(undefined4 *)(iVar15 + 0x28) = uVar31;
  *(int *)(uVar26 + 0x74) = param_2;
  uVar21 = *(undefined4 *)(iVar23 + 0x14);
  *(undefined4 *)(iVar28 + 0x34) = uVar31;
  *(undefined4 *)(uVar26 + 0x28) = uVar32;
  *(int *)(uVar26 + 0x74) = param_2;
  *(char *)(iVar23 + 0x15) = (char)uVar21;
  *(undefined1 *)(iVar23 + 0x11) = uVar10;
  *(int *)(iVar15 + 0x34) = iVar15;
  iVar25 = *(int *)(uVar26 + 0x54);
  *(undefined1 *)(iVar23 + 1) = uVar11;
  *(undefined1 *)(iVar23 + 9) = uVar10;
  uVar5 = *(ushort *)(iVar23 + 0x1e);
  *(uint *)(uVar5 + 0x58) = uVar26;
  *(int *)(iVar28 + 0x14) = iVar15;
  uVar11 = (undefined1)uVar5;
  *(undefined1 *)(iVar28 + 0xd) = uVar11;
  *(ushort *)(*(int *)(uVar26 + 0x44) + 0xe) = uVar5;
  uVar31 = *(undefined4 *)(iVar15 + 8);
  *(undefined1 *)(iVar25 + 1) = uVar10;
  *(int *)(uVar26 + 0x54) = iVar15;
  iVar15 = *(int *)(iVar25 + 0x48);
  iVar23 = *(int *)(iVar15 + 0x44);
  uVar12 = (undefined1)uVar31;
  *(undefined1 *)(iVar15 + 0x15) = uVar12;
  *(uint *)(iVar23 + 0x14) = (uint)uVar5;
  *(undefined1 *)(iVar23 + 9) = uVar11;
  uVar16 = *(uint *)(uVar26 + 0x34);
  *(ushort *)(iVar15 + 0x36) = uVar5;
  *(undefined1 *)(uVar26 + 10) = uVar11;
  *(undefined1 *)(iVar15 + 9) = uVar10;
  uVar31 = *(undefined4 *)(iVar23 + 0x44);
  *(char *)(uVar16 + 0xe) = (char)iVar15;
  iVar25 = *(int *)(uVar26 + 0x44);
  *(undefined4 *)(iVar15 + 0x14) = uVar31;
  *(undefined1 *)(iVar25 + 0xd) = uVar10;
  *(undefined1 *)(iVar15 + 9) = uVar12;
  *(undefined1 *)(iVar25 + 0x15) = uVar10;
  bVar3 = *(byte *)(iVar15 + 5);
  uVar22 = (uint)bVar3;
  uVar26 = (uint)in_stack_00000276;
  uVar10 = (undefined1)in_stack_00000276;
  *(undefined1 *)(iVar25 + 0x15) = uVar10;
  piVar27 = *(int **)(in_stack_000003ac + 0x44);
  if (in_ZR || in_NG != in_OV) {
    piVar27 = (int *)(int)(short)((ushort)((uVar16 & 0xff) << 8) | (ushort)(uVar16 >> 8) & 0xff);
  }
  else {
    *(undefined1 **)(iVar25 + 0x14) = &stack0x00000240;
    *(byte *)(iVar15 + 0x15) = bVar3;
    *(int *)(iVar23 + 0x54) = iVar15;
  }
  *(undefined1 **)(iVar25 + 0x34) = &stack0x00000240;
  *(undefined1 *)(iVar15 + 9) = uVar10;
  iVar25 = piVar27[0x19];
  software_bkpt(0xc5);
  *(undefined1 **)(iVar25 + 0x34) = &stack0x00000240;
  if (in_ZR != false) {
    *(int *)(uVar16 + 0x54) = iVar15;
    *(char *)(iVar15 + 0x15) = (char)&stack0x00000240;
    iVar29 = *(int *)(iVar15 + 0x14);
    *(undefined1 **)(iVar25 + 0x54) = &stack0x000001d9;
    *(undefined1 *)(iVar29 + 0x10) = 0x70;
    *(undefined1 *)(iVar25 + 1) = uVar10;
    *(undefined1 *)(iVar29 + 0xc) = 0x20;
    iVar15 = iRam00000094;
    *(int *)(iVar29 + 0x54) = iVar29;
    *(int *)(uVar22 + 0x34) = iVar25;
    iVar23 = iRam00000084;
    *(int *)(iVar15 + 0x54) = iVar29;
    cRam00000031 = (char)iVar15 + -0x2d;
    *(uint *)(iVar23 + 0x54) = uVar26;
    *(undefined4 *)(iVar15 + -0x19) = 0x3c;
    *(uint *)(iVar15 + 0x27) = uVar26;
    iVar28 = *(int *)(iVar29 + 0x54);
    *(undefined1 *)(iVar29 + 9) = uVar10;
    puVar17 = *(undefined1 **)(iVar29 + 0x14);
    *(uint *)(iVar23 + 0x54) = uVar26;
    puVar17[0x10] = 0x6b;
    *(undefined4 *)(puVar17 + 0x14) = 0x73;
    puVar17[0x11] = uVar10;
    *(int *)(puVar17 + 0x30) = iVar28;
    *puVar17 = 0x73;
    uVar31 = *(undefined4 *)(puVar17 + 0x74);
    *(int *)(puVar17 + 0x54) = iVar28;
    puVar17[0xd] = (char)iVar28;
    iVar25 = iRam00000084;
    iVar15 = _DAT_0000007e;
    iRam0000004a._0_2_ = CONCAT11(0x65,(undefined1)iRam0000004a);
    *(int *)(iVar28 + 0x24) = iVar23;
    iVar28 = *(int *)(*(int *)(iVar15 + 0x74) + 0x34);
    cVar14 = (char)iVar23;
    *(char *)(iVar28 + 0x11) = cVar14;
    *(char *)(iVar23 + 1) = (char)iVar25;
    iVar25 = iVar25 + 0x20;
    *(undefined1 *)(iVar15 + -0x2d) = 0x26;
    iVar29 = *(int *)(iVar15 + 6);
    *(int *)(iVar28 + 0x24) = iVar23;
    iVar28 = *(int *)(iVar29 + 0x74);
    iVar15 = *(int *)(iVar28 + 0x34);
    *(char *)(iVar15 + 0x11) = cVar14;
    *(char *)(iVar23 + 1) = (char)iVar25;
    _Reserved6 = 0x65;
    uRamfffffffc = (undefined1)uVar31;
    uRam0000002d = uRamfffffffc;
    *(char *)(iVar28 + 9) = (char)iVar29 + -0x3c;
    *(char *)(iVar28 + 0x15) = (char)iVar15;
    uVar31 = s_make_block_2c41536c._0_4_;
    iVar28 = *(int *)(iVar28 + 100);
    iVar29 = iVar28 + -0x21;
    *(int *)(iVar25 * 2 + 0x44) = iVar25;
    iVar25 = (int)*(short *)(iVar25 * 2 + iVar29);
    *(int *)(uVar31 + 0x54) = iVar25;
    *(undefined1 *)(iVar23 + 0x31) = 0x74;
    *(char *)(iVar15 + 0x11) = cVar14 + ' ';
    sVar8 = *(short *)(iVar29 * 2);
    iVar34 = (int)sVar8;
    *(char *)(iVar28 + -0x10) = (char)uVar31;
    uVar21 = *(undefined4 *)(iVar25 + 0x14);
    *(undefined4 *)(iVar28 + 0x33) = uVar31;
    iVar15 = uVar31 << 1;
    *(undefined4 *)(iVar25 + 0x44) = uVar21;
    sVar7 = *(short *)(iVar25 + iVar29);
    iVar23 = *(int *)(sVar7 + 4);
    uVar21 = *(undefined4 *)(iVar28 + 0x23);
    *(undefined4 *)(uVar31 + 0x14) = 0x74;
    *(char *)(uVar31 + 0xd) = (char)iVar15;
    iVar25 = (int)*(short *)(sVar7 * 2 + iVar29);
    *(undefined1 *)(iVar25 + 0x11) = 0x74;
    iVar28 = *(int *)(iVar25 + 0x44);
    *(int *)(iVar23 + 0x24) = iVar34;
    iVar23 = *(int *)(iVar28 + 0x74);
    *(char *)(*(int *)(iVar23 + 0x34) + 1) = (char)sVar8;
    *(int *)(uVar31 + 0x54) = iVar15;
    iVar29 = *(int *)(iVar23 + 0x14);
    *(int *)(iVar28 + 0x14) = iVar29;
    iVar23 = *(int *)(iVar28 + 0x14);
    *(int *)(iVar34 + 0x54) = iVar15;
    *(char *)(iVar29 + 9) = (char)(iVar34 << 1);
    *(int *)(iVar28 + 0x34) = iVar34;
    uVar10 = (undefined1)iVar28;
    *(undefined1 *)(iVar23 + 0xd) = uVar10;
    iVar25 = *(int *)(iVar28 + 0x14);
    *(int *)(iVar28 + 0x54) = iVar29;
    *(undefined1 *)(iVar25 + 9) = uVar13;
    iVar23 = (int)*(short *)(iVar28 * 2);
    *(int *)(iVar29 + 0x14) = iVar34 << 1;
    *(char *)(iVar29 + 0xd) = (char)iVar15;
    *(undefined1 *)(iVar25 + 9) = uVar10;
    uVar31 = *(undefined4 *)(iVar23 + 100);
    *(undefined1 *)(iVar25 + 0x1d) = uVar10;
    uVar10 = (undefined1)uVar31;
    *(undefined1 *)(iVar23 + 0x1d) = uVar10;
    uVar13 = (undefined1)uVar21;
    *(undefined1 *)(iVar28 + 0x11) = uVar13;
    *(int *)(iVar28 + 0x54) = iVar28;
    iVar25 = (int)*(short *)(iVar28 * 2);
    *(undefined1 *)(iVar23 + 9) = uVar10;
    uVar31 = *(undefined4 *)(iVar25 + 0x74);
    *(int *)(iVar25 + 0x14) = iVar25;
    *(int *)(iVar25 + 0x54) = iVar23;
    *(undefined4 *)(iVar23 + 0x24) = uVar31;
    iVar23 = *(int *)(iVar25 + 0x74);
    iVar15 = *(int *)(iVar23 + 0x34);
    *(int *)(iVar25 + 0x14) = iVar25;
    *(int *)(iVar25 + 0x54) = iVar15;
    *(undefined4 *)(iVar15 + 0x44) = uVar31;
    *(undefined4 *)(iVar25 + 0x34) = uVar31;
    iVar15 = *(int *)(iVar23 + 100);
    *(char *)(iVar15 + 0x19) = (char)*(undefined2 *)(iVar29 + iVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = *(byte *)(iVar23 + 10);
  uVar33 = (uint)bVar3;
  iVar15 = *(int *)(iVar15 + 0x74);
  *piVar27 = (int)&stack0x00000240;
  piVar27[1] = iVar15;
  piVar27[2] = (int)piVar27;
  piVar27[3] = iVar23;
  bVar4 = *(byte *)(uVar33 + 10);
  uVar26 = (uint)bVar4;
  *(int **)(uVar26 + 0x54) = piVar27;
  *(byte *)(iVar23 + 9) = bVar4;
  *(char *)(uVar26 + 9) = (char)piVar27;
  *(uint *)(uVar26 + 0x30) = uVar16;
  piVar27[5] = (int)piVar27;
  iVar15 = *(int *)(iVar23 + 0x34);
  *(char *)((int)piVar27 + 0xd) = (char)*(undefined4 *)(uVar26 + 100);
  uVar21 = s_____>_ADD_item__content__s_2c415784._0_4_;
  uVar31 = s_______thirdparty_star_air_lvgl_a_2c415680._48_4_;
  *(uint *)(iVar15 + 0x54) = uVar22;
  *(undefined4 *)(uVar31 + 0x14) = 0x74;
  uVar10 = (undefined1)iVar15;
  *(undefined1 *)(uVar31 + 0xd) = uVar10;
  *(char *)(uVar21 + 9) = (char)piVar27;
  *(undefined4 *)(uVar21 + 0x60) = 0x74;
  *(char *)((int)piVar27 + 0xd) = (char)piVar27[0x19];
  piVar27[0x15] = 0x74;
  iVar28 = *(int *)(uVar21 + 0x44);
  *(int *)(uVar21 + 0x74) = piVar27[0x19];
  cVar14 = (char)uVar21;
  *(char *)((int)piVar27 + 0x19) = cVar14;
  *(byte *)(uVar22 + 0xd) = bVar3;
  *(char *)(iVar28 + 9) = cVar14;
  *(int **)(uVar21 + 0x14) = piVar27;
  sVar8 = *(short *)((int)piVar27 * 2);
  iVar23 = (int)sVar8;
  *(undefined4 *)(iVar28 + 0x14) = 100;
  *(undefined1 *)(iVar28 + 0xd) = uVar10;
  *(char *)(uVar21 + 9) = (char)sVar8;
  *(uint *)(uVar22 + 100) = uVar33;
  uVar11 = (undefined1)*(undefined4 *)(iVar23 + 100);
  *(undefined1 *)(iVar23 + 0xd) = uVar11;
  *(char *)(iVar23 + 0x19) = cVar14;
  *(byte *)(uVar22 + 0xd) = bVar3;
  *(char *)(iVar28 + 9) = cVar14;
  *(int *)(uVar21 + 0x14) = iVar23;
  uVar9 = *(undefined2 *)(iVar23 * 2);
  *(int *)(iVar28 + 0x14) = iVar23 << 1;
  *(undefined1 *)(iVar28 + 0xd) = uVar10;
  *(char *)(uVar21 + 9) = (char)uVar9;
  *(uint *)(uVar22 + 0x34) = uVar33;
  *(int *)(iVar28 + 0x54) = iVar15;
  *(undefined1 *)(uVar21 + 0x11) = uVar11;
  iVar25 = uVar21 * 2;
  iVar15 = *(int *)(iVar28 + 4);
  *(undefined1 *)(iVar25 + 9) = uVar11;
  *(char *)(iVar15 + 1) = (char)iVar15;
  *(undefined1 *)(iVar15 + 9) = uVar11;
  bVar4 = *(byte *)(iVar28 + 5);
  uVar16 = (uint)bVar4;
  *(byte *)(iVar25 + 0xc) = bVar3;
  *(uint *)(iVar28 + 0x14) = uVar16;
  *(byte *)(iVar25 + 0x19) = bVar4;
  uVar31 = *(undefined4 *)(uVar16 + 0x44);
  *(undefined4 *)(iVar25 + 0x10) = uVar31;
  *(char *)(iVar28 + 1) = (char)(iVar23 << 1);
  *(undefined4 *)(iVar25 + 0x30) = uVar31;
  *(int *)(iVar25 + 0x14) = iVar25;
  iVar23 = *(int *)(iVar28 + 0x34);
  *(char *)(iVar25 + 0xc) = (char)uVar31;
  *(int *)(iVar28 + 0x34) = iVar23;
  iVar34 = *(int *)(iVar25 + 0x10);
  iVar29 = *(int *)(iVar25 + 0x44);
  uVar31 = *(undefined4 *)(iVar25 + 100);
  *(char *)(uVar16 + 0xd) = (char)iVar25;
  *(int *)(iVar25 + 0x30) = iVar29;
  *(uint *)(uVar16 + 0x54) = uVar16;
  iVar15 = *(int *)(iVar25 + 0x14);
  iVar28 = iVar25 + -0x3d;
  *(undefined1 *)(iVar15 + 0xc) = 0x6d;
  *(int *)(iVar29 + 0x24) = iVar28;
  iVar29 = *(int *)(iVar34 + 0x40);
  uVar10 = (undefined1)uVar31;
  *(undefined1 *)(iVar15 + 0xd) = uVar10;
  *(int *)(*(short *)(iVar29 + iVar28) + 0x54) = (int)*(short *)(iVar29 + iVar28);
  iVar15 = *(int *)(iVar25 + -0x29);
  *(undefined1 *)(iVar15 + 9) = uVar10;
  *(undefined4 *)(iVar29 + 0x54) = *(undefined4 *)(iVar15 + 0x54);
  *(char *)(iVar28 * 2 + 0x11) = (char)iVar29;
  iVar25 = *(int *)(iVar15 + 100);
  iVar15 = iVar29 * 2;
  *(undefined4 *)(iVar15 + 0x74) = *(undefined4 *)(iVar25 + 0x54);
  *(undefined4 *)(iVar15 + 0x30) = 0x44;
  *(int *)(iVar29 + 0x54) = iVar15;
  *(char *)(iVar25 + 0x11) = (char)iVar29;
  iVar15 = iRam0000006e;
  uVar10 = (undefined1)iRam0000006e;
  *(char *)(_DAT_0000004e + 0xc) = (char)*(undefined4 *)(_DAT_0000004e + 100);
  puVar17 = puRam2c415834;
  iVar25 = *(int *)(puRam2c415834 + 0x74);
  uRam000000ac = (undefined2)iVar15;
  _DAT_000000ae = (undefined2)((uint)iVar15 >> 0x10);
  *(undefined4 *)(iVar15 + 0x14) = 0x72;
  *(int *)(iVar15 + 0x54) = iVar23 + -0x74;
  uRam00000053 = SUB41(puVar17,0);
  iVar29 = *(int *)(iVar25 + 100);
  uRam00000069 = uVar10;
  _DAT_0000007e = iVar29;
  *puVar17 = 0x3a;
  *(undefined4 *)(puVar17 + 0x30) = 0x70;
  iVar28 = *(int *)(puVar17 + 0x44);
  iVar25 = (int)*(short *)(iVar28 * 2);
  *(int *)(iVar25 + 0x54) = iVar25;
  *(int *)(iVar25 + 0x40) = iVar28;
  *(undefined1 *)(iVar25 + 0xc) = 0x70;
  *(int *)(iVar15 + 0x14) = iVar25;
  *(char *)(iVar15 + 0x11) = (char)(iVar23 + -0x151);
  *(int *)(iVar25 + 0x40) = iVar28;
  *(char *)(iVar25 + 0x14) = (char)iVar28;
  uVar31 = *(undefined4 *)(iVar25 + 0x60);
  *(char *)(iVar28 + 0x11) = (char)iVar29;
  *(undefined4 *)(iVar25 + 0x10) = uVar31;
  *(undefined4 *)(iVar25 + 0x30) = uVar31;
  iVar29 = *(int *)(iVar28 + 100);
  *(int *)(iVar15 + 0x14) = iVar25;
  uVar31 = *(undefined4 *)(iVar28 + 100);
  *(char *)(iVar25 + 9) = (char)iVar28;
  *(char *)(iVar28 + 0x11) = (char)uVar31 + unaff_r8;
  uVar31 = *(undefined4 *)(iVar25 + 0x74);
  *(undefined1 *)(*(int *)(iVar25 + 0x54) + 0x11) = uVar10;
  iVar28 = *(int *)(iVar25 + 100);
  sVar8 = (short)(iVar23 + -0x151) + -0xd9;
  *(char *)(iVar25 + 0xc) = (char)iVar28;
  *(short *)(iVar25 + 6) = sVar8;
  *(short *)(iVar25 + 6) = sVar8;
  uVar10 = (undefined1)uVar31;
  *(undefined1 *)(iVar15 + 0x15) = uVar10;
  *(undefined1 *)(iVar15 + -0x18) = uVar10;
  uVar31 = *(undefined4 *)(iVar28 + 100);
  *(undefined1 *)(iVar15 + -0x45) = 0x3c;
  *(int *)(iVar28 + 0x54) = iVar25;
  *(undefined1 *)(iVar25 + 0xc) = 0x6e;
  iVar23 = *(int *)(iVar29 + 0x10);
  iRam0000004a = iVar28;
  *(char *)(iVar28 + 1) = (char)iVar23;
  *(char *)(iVar23 + 0x11) = (char)iVar28;
  *(int *)(iVar28 + 0x40) = iVar23;
  *(char *)(iVar25 + 0x11) = (char)uVar31;
  *(undefined1 *)(iVar23 + 0x15) = uVar10;
  iVar15 = *(int *)(iVar25 + 0x24);
  iVar23 = (uint)*(byte *)(iVar23 + -0x2d + iVar28) * 2;
  uVar9 = (undefined2)iVar15;
  *(undefined2 *)(iVar23 + 6) = uVar9;
  *(undefined2 *)(iVar23 + 6) = uVar9;
  iVar23 = iVar15 * 4;
  *(undefined2 *)(iVar23 + 6) = uVar9;
  iVar28 = iVar15 * 0x10;
  *(int *)(iVar28 + 0x54) = iVar15;
  *(int *)(iVar28 + 0x54) = iVar28;
  *(int *)(iVar15 * 4 + 0x44) = iVar29;
  iVar15 = *(int *)(iVar23 + 0x44);
  uVar10 = (undefined1)*(undefined4 *)(iVar15 + 0x54);
  *(undefined1 *)(iVar15 + 0x11) = uVar10;
  *(char *)(iVar23 + 9) = (char)iVar15;
  *(undefined1 *)(iVar28 + 9) = 0;
  *(int *)(iVar15 + 0x34) = iVar29;
  *(char *)(iVar23 + 0xd) = (char)iVar15;
  iVar15 = (int)*(short *)(iVar28 + iVar15);
  iVar25 = *(int *)(iVar23 + 0x54);
  uVar31 = *(undefined4 *)(iVar28 + 4);
  *(undefined1 *)(iVar23 + 0xd) = uVar10;
  *(undefined1 *)(iVar25 + 0xd) = uVar10;
  *(char *)(iVar25 + 0x19) = (char)iVar23;
  *(char *)(iVar15 + 0xd) = (char)iVar29;
  *(char *)(iVar23 + 0x11) = (char)iVar25;
  *(int *)(iVar15 + 0x34) = iVar29;
  iVar29 = *(int *)(iVar25 + 100);
  *(int *)(iVar28 + 0x54) = iVar23;
  *(char *)(iVar25 + 0x11) = (char)iVar28;
  *(undefined4 *)(iVar28 + 0x54) = uVar31;
  iVar25 = *(int *)(iVar23 + 0x34);
  *(int *)(iVar15 + 0x34) = iVar29;
  *(undefined4 *)(iVar25 + 0x14) = uVar31;
  *(char *)(iVar29 + 0x14) = (char)iVar23;
  iVar23 = *(int *)(*(int *)(iVar25 + 0x74) + 100);
  iVar15 = *(int *)(iVar23 + 4);
  *(undefined1 *)(iVar25 + 9) = uVar10;
  *(char *)(iVar15 + 1) = (char)iVar15;
  *(undefined1 *)(iVar15 + 9) = uVar10;
  bVar3 = *(byte *)(iVar23 + 5);
  uVar16 = (uint)bVar3;
  *(char *)(iVar25 + 0xc) = (char)iVar23;
  *(uint *)(iVar23 + 0x14) = uVar16;
  iVar15 = *(int *)(uVar16 + 0x14);
  *(byte *)(iVar25 + 0x19) = bVar3;
  uVar21 = *(undefined4 *)(uVar16 + 0x44);
  *(undefined4 *)(iVar25 + 0x10) = uVar21;
  *(char *)(iVar23 + 1) = (char)uVar31;
  *(undefined4 *)(iVar25 + 0x30) = uVar21;
  *(int *)(iVar25 + 0x14) = iVar25;
  puVar20 = *(undefined1 **)(iVar23 + 0x34);
  *(char *)(iVar25 + 0xc) = (char)uVar21;
  *(undefined1 **)(iVar23 + 0x34) = puVar20;
  *(undefined4 *)(iVar25 + 0x44) = *(undefined4 *)(iVar25 + 0x60);
  uVar31 = *(undefined4 *)(iVar15 + 100);
  *(int *)(iVar23 + 0x14) = iVar23;
  puVar30 = puRam0000009b;
  uVar16 = *(uint *)(iVar25 + 0x14);
  *(uint *)(uVar16 + 0x54) = uVar16;
  *(undefined1 *)(uVar16 + 0x10) = 0x6e;
  uVar10 = (undefined1)uVar31;
  DAT_00000074 = uVar10;
  *(undefined1 *)(uVar16 + 0xc) = 0x27;
  *(undefined4 *)(uVar16 + 0x10) = 0x65;
  *(undefined4 *)(uVar16 + 0x40) = 0x27;
  uVar16 = uVar16 >> 9;
  *(uint *)(uVar16 + 0x54) = uVar16;
  *(undefined4 *)(*(int *)(uVar16 + 0x74) + 0x24) = 0x73;
  iVar15 = _DAT_0000007e;
  iRam0000004a._0_2_ = CONCAT11(0x74,(undefined1)iRam0000004a);
  *(undefined4 *)(*(int *)(CONCAT22(uRam000000b0,_DAT_000000ae) + 0x34) + 0x24) = 0x73;
  iVar23 = *(int *)(*(int *)(iVar15 + 0x74) + 0x34);
  uVar11 = (undefined1)iVar23;
  *(undefined1 *)(*(int *)(iVar15 + 0x74) + 0x15) = uVar11;
  puVar30[0x11] = uVar11;
  uVar21 = *(undefined4 *)(iVar15 + 0x54);
  *(undefined4 *)(iVar23 + 0x24) = uVar21;
  iVar25 = *(int *)(iVar15 + 0x74);
  iVar23 = *(int *)(iVar25 + 0x34);
  *(undefined4 *)(puVar30 + 0x14) = 0x74;
  *(undefined1 **)(puVar30 + 0x14) = puVar20;
  *(char *)(iVar25 + 9) = (char)uVar21;
  *(undefined1 *)(iVar25 + 1) = uVar10;
  puVar17 = (undefined1 *)(iVar15 << 1);
  do {
    *(undefined1 **)(iVar15 + 0x54) = puVar17;
    *(undefined4 *)(iVar25 + 0x44) = uVar31;
    uVar31 = *(undefined4 *)(iVar15 + 100);
    iVar28 = *(int *)(puVar30 + 4);
    iVar15 = *(int *)(iVar28 + 0x54);
    *(char *)(iVar28 + 0x11) = (char)uVar31;
    *(undefined4 *)(iVar15 + 0x34) = uVar31;
    *(int *)(iVar23 + 0x24) = iVar25 << 1;
    *(undefined1 **)(puVar30 + 0x54) = puVar20;
    *(int *)(puVar30 + 0x14) = iVar28;
    puVar20 = *(undefined1 **)(iVar28 + 0x44);
code_r0x2c415b00:
    iVar15 = (int)*(short *)(iVar28 + iVar15);
    *(int *)(iVar28 + 0x54) = iVar23;
    iVar23 = *(int *)(iVar15 + 0x44);
    *(char *)(iVar23 + 0x11) = (char)puVar30;
    *(char *)(iVar23 + 9) = (char)puVar20;
    *(int *)(iVar23 + 0x14) = iVar15;
    iVar25 = *(int *)(iVar15 + 0x14);
    *(undefined1 **)(iVar15 + 0x54) = puVar30;
    *(char *)(iVar25 + 9) = (char)puVar20;
    *(int *)(iVar25 + 0x14) = iVar15;
code_r0x2c415b1c:
    iVar23 = iVar15 * 2;
    *(char *)(iVar15 + 0x11) = (char)puVar17;
    iVar15 = *(int *)(*(int *)(iVar15 + 0x44) + 0x44);
    uVar10 = (undefined1)iVar23;
    *(undefined1 *)(iVar25 + 0x15) = uVar10;
    *(undefined1 *)(iVar15 + 0x11) = uVar10;
    puVar35 = *(undefined1 **)(iVar23 + 0x14);
    puVar30 = *(undefined1 **)(iVar25 * 2 + 0x44);
    iVar15 = *(int *)(iVar25 + 0x54);
    puVar17 = *(undefined1 **)(puVar30 + 4);
code_r0x2c415b40:
    puVar30[0x11] = uVar10;
    *(undefined1 **)(iVar15 + 0x74) = puVar30;
    iVar29 = iRam2c415e88;
    puVar30 = *(undefined1 **)(iVar15 + 0x34);
    puVar20 = (undefined1 *)0xdc;
    while( true ) {
      uVar16 = (uint)(byte)puVar17[iVar15];
      iVar25 = uVar16 - 0x2b;
      uVar31 = uRam2c415c88;
      if (SBORROW4(uVar16 - 0x16,0x15)) break;
      iVar28 = uVar16 - 0x69;
      if (SBORROW4(iVar25,0x3e)) goto code_r0x2c415b00;
      bVar39 = SBORROW4(iVar28,0x3e);
      iVar28 = uVar16 - 0xa7;
      while( true ) {
        iVar25 = iVar28;
        if (bVar39) goto code_r0x2c415b1c;
        if (SBORROW4(iVar25,0x3e)) goto code_r0x2c415b40;
        if (SBORROW4(iVar25 + -0x3e,0x3e)) break;
        bVar39 = SBORROW4(iVar25 + -0x7c,0x3e);
        iVar28 = iVar25 + -0xba;
        if (!bVar39) {
          bVar39 = SBORROW4(iVar25 + -0x137,0x3e);
          uVar16 = iVar25 - 0x175;
          puVar19 = puRam2c415cf4;
          if (bVar39) {
            VectorWidenMultipyAccumulate(in_d3,unaff_d12,1);
            if (SBORROW4(uVar16,0x3e)) {
              uVar16 = iVar25 - 0x1f1;
              if (SBORROW4(iVar25 + -0x1b3,0x3e)) {
                bVar39 = SBORROW4(uVar16,0x3e);
                uVar16 = iVar25 - 0x1df;
                coprocessor_loadlong(0xc,in_cr3,uVar16);
                goto code_r0x2c415b9c;
              }
            }
            else {
              uVar10 = SUB41(puRam2c415cf4,0);
              *(undefined1 *)(iRam2c415e88 + 9) = uVar10;
              *(char *)(iVar25 + -0x1b2) = (char)(iVar25 + -0x1b3);
              *(undefined1 *)(iVar25 + -0x1aa) = uVar10;
              bVar3 = puVar30[5];
              uVar16 = (uint)bVar3;
              *(char *)(iVar29 + 0xc) = (char)puVar35;
              *(uint *)(puVar30 + 0x14) = uVar16;
              puVar19 = *(undefined1 **)(uVar16 + 0x14);
              *(byte *)(iVar29 + 0x19) = bVar3;
              puVar35 = *(undefined1 **)(uVar16 + 0x44);
              *(undefined1 **)(iVar29 + 0x10) = puVar35;
              puVar30[1] = (char)puVar17;
              *(undefined1 **)(iVar29 + 0x30) = puVar35;
            }
            *(int *)(iVar29 + 0x14) = iVar29;
            uVar31 = *(undefined4 *)(puVar30 + 0x34);
            *(char *)(iVar29 + 0xc) = (char)puVar35;
            *(undefined4 *)(puVar30 + 0x34) = uVar31;
            *(char *)(iVar29 + 0x14) = (char)puVar35;
            *(uint *)(puVar30 + 100) = uVar16;
            *(int *)(puVar30 + 0x34) = iVar29;
            puVar17 = puVar30 + -0x20;
            *(char *)(uVar16 + 9) = (char)puVar19;
            iVar23 = (int)*(short *)(iVar29 * 2);
            puVar30[-0xf] = (char)iVar29;
            puVar30 = puVar17;
code_r0x2c415bf8:
            bVar39 = SBORROW4((int)puVar17,0x66);
            puVar30[9] = (char)puVar17 + -0x66;
            *(undefined1 **)(iVar29 + 0x34) = puVar35;
            *(undefined1 **)(iVar23 + 0x54) = puVar35;
            *(undefined1 **)(iVar29 + 0x34) = puVar30;
            *(undefined1 **)(iVar29 + 0x44) = puVar35;
            *(char *)(uVar16 + 9) = (char)puVar19;
code_r0x2c415c14:
            uVar16 = _DAT_00000104;
            puVar17 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar19 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar20 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar24 = (undefined4 *)((int)register0x00000054 + 0x30c);
            puVar30 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar35 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar40 = (uint *)((int)register0x00000054 + -0x10c);
            puVar36 = (undefined1 *)((int)register0x00000054 + -0x10c);
            if ((undefined1 *)register0x00000054 != (undefined1 *)0xfffffcf4) {
              if (((uint)puVar17 & 0xff) != 0) {
                *(undefined1 **)((int)register0x00000054 + -0x110) = puVar35;
                *(undefined1 **)((int)register0x00000054 + -0x114) = puVar30;
                *(undefined1 **)((int)register0x00000054 + -0x118) = puVar19;
                puVar40 = (uint *)((int)register0x00000054 + -0x11c);
                *puVar40 = (uint)puVar17;
FUN_2c415c38:
                puVar40[-1] = unaff_lr;
                puVar40[-2] = (uint)puVar35;
                puVar40[-3] = (uint)puVar30;
                puVar40[-4] = (uint)puVar19;
                puVar40[-5] = (uint)puVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar35 = (undefined1 *)((int)register0x00000054 + 0x208);
              if ((undefined1 *)register0x00000054 == (undefined1 *)0xfffffdf8)
              goto code_r0x2c415cf4;
              if ((undefined1 *)register0x00000054 != (undefined1 *)0xfffffdf8) {
                *(uint *)((int)register0x00000054 + -0x110) = unaff_lr;
                *(undefined1 **)((int)register0x00000054 + -0x114) =
                     (undefined1 *)((int)register0x00000054 + 0x208);
                *(undefined1 **)((int)register0x00000054 + -0x118) = puVar30;
                *(undefined1 **)((int)register0x00000054 + -0x11c) = puVar20;
                *(undefined1 **)((int)register0x00000054 + -0x120) = puVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar22 = 8;
              uVar33 = _DAT_00000104 << 2;
              bVar37 = (int)uVar33 < 0;
              bVar38 = uVar33 == 0;
              uRamfffffce8 = unaff_lr;
              uRamfffffce4 = 8;
              iRamfffffce0 = _DAT_00000110;
              uRamfffffcdc = 0x104;
              uRamfffffcd8 = _DAT_00000104;
              puVar17 = (undefined1 *)0xfffffcd4;
              uRamfffffcd4 = 0x104;
              iRamffffffec = _DAT_0000010c;
              uVar26 = _DAT_00000104;
              uVar31 = _DAT_00000108;
              if (bVar38 || bVar37 != bVar39) {
                iVar15 = _DAT_00000110;
                if (bVar38 || bVar37 != bVar39) {
                  if (bVar38 || bVar37 != bVar39) {
                    return CONCAT44(_DAT_00000104,0x104);
                  }
                  puVar1 = (undefined2 *)(_DAT_00000104 + 0x1e);
                  puVar2 = (undefined2 *)(_DAT_00000104 + 0x3e);
                  if (bVar38 || bVar37 != bVar39) {
                    *(undefined2 *)(_DAT_00000104 + 0x2e) = 0x104;
                    *puVar2 = 0x104;
                  }
                  else {
                    *(undefined2 *)(_DAT_00000104 + 0xe) = 0x104;
                    *puVar1 = 0x104;
                  }
                  uVar18 = (uint)*(ushort *)(uVar16 + 0x3e);
                  uRamfffffff4 = 8;
                  uVar26 = 0xfffffff4;
                  uVar31 = 0xfffffff4;
                  iVar15 = iRamffffffec;
                  goto LAB_2c415d8a;
                }
LAB_2c415dcc:
                *(short *)(uVar26 + 0xe) = (short)uVar33;
                puVar17 = (undefined1 *)0xfffffcd4;
                if (iVar15 != 0) {
                  uVar33 = uVar26 & 0xff;
                  if (uVar33 == 0) {
                    _UsageFault = uVar22;
                    if (uVar22 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffed8;
                      uRamfffffb88 = uVar22;
                      uRamfffffb84 = uVar22;
                      uRamfffffb80 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if ((uVar22 & 0xff) != 0) {
                      uRamfffffb90 = uVar22;
                      uRamfffffb8c = uVar22;
                      uRamfffffb88 = uVar22;
                      uRamfffffb84 = unaff_lr;
                      uRamfffffb80 = uVar22;
                      uRamfffffb7c = uVar22;
                      uRamfffffb78 = uVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar22 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffee0;
                      uRamfffffb88 = uVar22;
                      uRamfffffb84 = uVar22;
                      uRamfffffb80 = 0xfffffee0;
                      uRamfffffb7c = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar22 == 0) {
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
                    uRamfffffb88 = uVar22;
                    uRamfffffb84 = uVar22;
                    uRamfffffb80 = 0xfffffedc;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  uRamfffffcc4 = 0x104;
                  puVar17 = (undefined1 *)0xfffffcc0;
                  uVar21 = 0x104;
                  uRamfffffcc0 = uVar26;
                  uRamfffffcc8 = uVar31;
                  uRamfffffccc = uVar33;
                  uRamfffffcd0 = uVar22;
LAB_2c415dd6:
                  *(uint *)(puVar17 + -4) = unaff_lr;
                  *(uint *)(puVar17 + -8) = uVar22;
                  *(uint *)(puVar17 + -0xc) = uVar33;
                  *(undefined4 *)(puVar17 + -0x10) = uVar31;
                  *(undefined4 *)(puVar17 + -0x14) = uVar21;
                  *(uint *)(puVar17 + -0x18) = uVar26;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                uVar18 = 0x104;
                iVar15 = _DAT_00000110;
LAB_2c415d8a:
                uVar22 = 0xfffffff4;
                if (uVar18 == 0) {
                  puVar17 = (undefined1 *)0xfffffcd4;
                  uVar22 = (uint)*(ushort *)(uVar26 + 0x36);
                  if (iVar15 == 0) {
                    uVar33 = (uint)*(ushort *)(uVar26 + 6);
                    iVar15 = 0;
                    goto LAB_2c415dcc;
                  }
                }
                else {
                  if (uVar18 == 0) goto LAB_2c415e06;
                  puVar17 = (undefined1 *)0xfffffce0;
                  uVar21 = 0;
                  uVar31 = uRamfffffcd4;
                  uVar33 = uRamfffffcd8;
                  uVar22 = uRamfffffcdc;
                  if (iRamfffffff8 == 0) goto LAB_2c415dd6;
                  *(short *)(uVar26 + 0x16) = (short)uVar26;
                  *(short *)(uVar18 + 6) = (short)(uVar16 << 4);
                  *(short *)(uVar26 + 0x3e) = (short)uVar26;
                  uVar26 = (uint)*(ushort *)
                                  (*(ushort *)(*(ushort *)(*(ushort *)(uVar26 + 0xe) + 0x1e) + 0x2e)
                                  + 0x3e);
                  if (uVar16 << 4 != 0) {
                    return CONCAT44(iRamfffffce0,uVar18);
                  }
                  if (uVar16 << 4 != 0) {
                    if (uVar16 << 4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    *(undefined2 *)(uVar26 + 0xe) = 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  software_bkpt(0xce);
                  uVar9 = (undefined2)uRamfffffcdc;
                  *(undefined2 *)(uVar26 + 0xe) = uVar9;
                  *(undefined2 *)(uVar26 + 0x1e) = uVar9;
                  *(undefined2 *)(uVar26 + 0x26) = uVar9;
                  *(undefined2 *)(uVar26 + 0x2e) = uVar9;
                  *(undefined2 *)(uVar26 + 0x36) = uVar9;
                  *(undefined2 *)(uVar26 + 0x3e) = uVar9;
                }
                uVar22 = (uint)*(ushort *)(uVar26 + 0x1e);
                *(ushort *)(uVar26 + 0x2e) = *(ushort *)(uVar26 + 0x1e);
              }
              uVar33 = (uint)*(ushort *)(uVar26 + 6);
LAB_2c415e06:
              *(short *)(uVar26 + 0xe) = (short)uVar33;
              *(short *)(uVar26 + 0x1e) = (short)uVar22;
              *(uint *)(puVar17 + 0x33c) = uVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
code_r0x2c415b9c:
            if (!bVar39) goto code_r0x2c415bf8;
            bVar39 = SBORROW4(uVar16,0x3e);
            register0x00000054 = (BADSPACEBASE *)puVar40;
            if (!bVar39) goto code_r0x2c415c14;
            if (!SBORROW4(uVar16 - 0x3e,0x3e)) goto FUN_2c415c38;
            if (SBORROW4(uVar16 - 0x7c,0x3e)) {
              puVar24 = (undefined4 *)(uVar16 - 0xf8);
              if (SBORROW4(uVar16 - 0xba,0x3e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              uVar9 = (undefined2)(uVar16 - 0xba);
              *(undefined2 *)(puVar17 + 0xe) = uVar9;
              *(undefined2 *)(puVar17 + 0x1e) = uVar9;
              *(undefined2 *)(puVar17 + 0x2e) = uVar9;
              *(undefined2 *)(puVar17 + 0x3e) = uVar9;
              puVar24 = (undefined4 *)(uint)*(ushort *)(puVar17 + 0x3e);
            }
          }
          puVar17 = (undefined1 *)*puVar24;
          puVar35 = (undefined1 *)puVar24[1];
          puVar30 = (undefined1 *)puVar24[3];
          puVar36 = (undefined1 *)puVar40;
          if (puVar24 != (undefined4 *)0xfffffff0) {
            *(uint *)((int)puVar40 + -4) = unaff_lr;
            *(int *)((int)puVar40 + -8) = (int)puVar17 << 2;
            *(undefined1 **)((int)puVar40 + -0xc) = puVar30;
            *(undefined1 **)((int)puVar40 + -0x10) = puVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x2c415cf4:
          *(uint *)(puVar36 + -4) = unaff_lr;
          *(undefined1 **)(puVar36 + -8) = puVar36 + 0x324;
          *(undefined1 **)(puVar36 + -0xc) = puVar30;
          *(undefined1 **)(puVar36 + -0x10) = puVar35;
          *(undefined1 **)(puVar36 + -0x14) = puVar17;
          uRam2c41601a = (short)puVar20;
          uRam2c416032 = (short)puVar20;
          *(undefined1 **)(puVar36 + -0x130) = puVar36 + 0x324;
          *(undefined1 **)(puVar36 + -0x134) = puVar30;
          *(uint *)(puVar36 + -0x138) = (uint)puVar20 & 0xffff;
          *(undefined4 *)(puVar36 + -0x13c) = 0x2c416014;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  } while( true );
}


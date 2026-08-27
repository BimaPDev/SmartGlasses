/* FUN_2c411728 @ 0x2c411728 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c415dec) */
/* WARNING: Removing unreachable block (ram,0x2c41522e) */
/* WARNING: Removing unreachable block (ram,0x2c415dc0) */
/* WARNING: Removing unreachable block (ram,0x2c415dc2) */
/* WARNING: Removing unreachable block (ram,0x2c415f60) */
/* WARNING: Removing unreachable block (ram,0x2c415fa2) */
/* WARNING: Removing unreachable block (ram,0x2c415fa6) */
/* WARNING: Removing unreachable block (ram,0x2c415fa8) */
/* WARNING: Removing unreachable block (ram,0x2c415fae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c411728(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  short sVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  int unaff_r4;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  int unaff_r5;
  int iVar21;
  uint uVar22;
  int *piVar23;
  int unaff_r6;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  undefined4 uVar27;
  uint uVar28;
  int iVar29;
  undefined4 uVar30;
  undefined1 *puVar31;
  char unaff_r8;
  undefined1 *puVar32;
  uint unaff_lr;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  uint *puVar36;
  undefined4 in_cr3;
  undefined8 in_d3;
  undefined8 unaff_d12;
  undefined1 in_stack_0000027a;
  int in_stack_000003b0;
  undefined1 auStack_10 [8];
  
  puVar36 = (uint *)auStack_10;
  uVar27 = *(undefined4 *)(unaff_r4 + 4);
  *(char *)(unaff_r6 + unaff_r5) = (char)unaff_r4;
  *(char *)(unaff_r5 + 0x1d) = (char)uVar27;
  iVar24 = (int)*(char *)(unaff_r5 + param_2);
  *(int *)(unaff_r4 + 0x34) = unaff_r5;
  *(undefined4 *)(*(int *)(iVar24 + 0x74) + 0x14) = param_4;
  iVar18 = -unaff_r5;
  *(char *)(iVar18 + 9) = (char)param_2;
  uVar5 = *(ushort *)(iVar18 + 6);
  uVar15 = (uint)uVar5;
  cVar6 = *(char *)(iVar18 + uVar15);
  *(char *)(iVar18 + 9) = (char)unaff_r5;
  *(int *)(*(int *)(iVar24 + 0x14) + 0x14) = (int)cVar6;
  uVar27 = *(undefined4 *)(unaff_r5 + 100);
  bVar3 = *(byte *)(_DAT_2c411de4 + 0x11);
  *(int *)(uVar15 + 0x54) = iVar24;
  uVar9 = (undefined1)uVar5;
  *(undefined1 *)(iVar24 + 0x11) = uVar9;
  *(undefined4 *)(bVar3 + 0x34) = uVar27;
  *(int *)(uVar15 + 0x54) = (int)cVar6;
  *(uint *)(iVar24 + 0x14) = param_1 + unaff_lr;
  *(uint *)(iVar24 + 0x14) = uVar15;
  iVar17 = *(int *)(iVar24 + 0x74);
  *(char *)(iVar17 + 0xd) = cVar6;
  *(byte *)(iVar24 + 1) = bVar3;
  *(byte *)(iVar17 + 5) = bVar3;
  iVar21 = *(int *)(iVar24 + 0x14);
  iVar24 = iVar24 + unaff_lr;
  *(int *)(iVar17 + 0x34) = iVar21;
  if (iVar18 == 0) {
    *(char *)(iVar21 + 1) = (char)*(undefined4 *)(iVar21 + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar22 = (uint)*(byte *)(iVar17 + 1);
  uVar27 = *(undefined4 *)(iVar17 + 0x44);
  *(undefined4 *)(uVar22 + 100) = 0x2c413218;
  iVar18 = *(int *)(uVar22 + 4);
  *(undefined1 *)(iVar18 + 9) = 0x18;
  uVar10 = (undefined1)uVar27;
  *(undefined1 *)(iVar18 + 0x15) = uVar10;
  *(uint *)(iVar24 + 0x14) = uVar15;
  *(undefined1 *)(iVar24 + 9) = uVar9;
  uVar15 = *(uint *)(uVar22 + 0x34);
  *(ushort *)(iVar18 + 0x36) = uVar5;
  *(undefined1 *)(uVar22 + 10) = uVar9;
  *(undefined1 *)(iVar18 + 9) = 0x18;
  uVar27 = *(undefined4 *)(iVar24 + 0x44);
  *(char *)(uVar15 + 0xe) = (char)iVar18;
  iVar17 = *(int *)(uVar22 + 0x44);
  *(undefined4 *)(iVar18 + 0x14) = uVar27;
  *(undefined1 *)(iVar17 + 0xd) = 0x18;
  *(undefined1 *)(iVar18 + 9) = uVar10;
  *(undefined1 *)(iVar17 + 0x15) = 0x18;
  bVar3 = *(byte *)(iVar18 + 5);
  uVar22 = (uint)bVar3;
  *(undefined1 *)(iVar17 + 0x15) = in_stack_0000027a;
  piVar23 = *(int **)(in_stack_000003b0 + 0x44);
  if (unaff_r5 < 1) {
    *(undefined1 **)(iVar17 + 0x14) = &stack0x00000244;
    *(byte *)(iVar18 + 0x15) = bVar3;
    *(int *)(iVar24 + 0x54) = iVar18;
  }
  else {
    piVar23 = (int *)(int)(short)((ushort)((uVar15 & 0xff) << 8) | (ushort)(uVar15 >> 8) & 0xff);
  }
  *(undefined1 **)(iVar17 + 0x34) = &stack0x00000244;
  *(undefined1 *)(iVar18 + 9) = in_stack_0000027a;
  software_bkpt(0xc5);
  *(undefined1 **)(piVar23[0x19] + 0x34) = &stack0x00000244;
  bVar3 = *(byte *)(iVar24 + 10);
  uVar28 = (uint)bVar3;
  iVar18 = *(int *)(iVar18 + 0x74);
  *piVar23 = (int)&stack0x00000244;
  piVar23[1] = iVar18;
  piVar23[2] = (int)piVar23;
  piVar23[3] = iVar24;
  bVar4 = *(byte *)(uVar28 + 10);
  uVar19 = (uint)bVar4;
  *(int **)(uVar19 + 0x54) = piVar23;
  *(byte *)(iVar24 + 9) = bVar4;
  *(char *)(uVar19 + 9) = (char)piVar23;
  *(uint *)(uVar19 + 0x30) = uVar15;
  piVar23[5] = (int)piVar23;
  iVar18 = *(int *)(iVar24 + 0x34);
  *(char *)((int)piVar23 + 0xd) = (char)*(undefined4 *)(uVar19 + 100);
  uVar30 = s_____>_ADD_item__content__s_2c415784._0_4_;
  uVar27 = s_______thirdparty_star_air_lvgl_a_2c415680._48_4_;
  *(uint *)(iVar18 + 0x54) = uVar22;
  *(undefined4 *)(uVar27 + 0x14) = 0x74;
  uVar9 = (undefined1)iVar18;
  *(undefined1 *)(uVar27 + 0xd) = uVar9;
  *(char *)(uVar30 + 9) = (char)piVar23;
  *(undefined4 *)(uVar30 + 0x60) = 0x74;
  *(char *)((int)piVar23 + 0xd) = (char)piVar23[0x19];
  piVar23[0x15] = 0x74;
  iVar24 = *(int *)(uVar30 + 0x44);
  *(int *)(uVar30 + 0x74) = piVar23[0x19];
  cVar6 = (char)uVar30;
  *(char *)((int)piVar23 + 0x19) = cVar6;
  *(byte *)(uVar22 + 0xd) = bVar3;
  *(char *)(iVar24 + 9) = cVar6;
  *(int **)(uVar30 + 0x14) = piVar23;
  sVar7 = *(short *)((int)piVar23 * 2);
  iVar17 = (int)sVar7;
  *(undefined4 *)(iVar24 + 0x14) = 100;
  *(undefined1 *)(iVar24 + 0xd) = uVar9;
  *(char *)(uVar30 + 9) = (char)sVar7;
  *(uint *)(uVar22 + 100) = uVar28;
  uVar10 = (undefined1)*(undefined4 *)(iVar17 + 100);
  *(undefined1 *)(iVar17 + 0xd) = uVar10;
  *(char *)(iVar17 + 0x19) = cVar6;
  *(byte *)(uVar22 + 0xd) = bVar3;
  *(char *)(iVar24 + 9) = cVar6;
  *(int *)(uVar30 + 0x14) = iVar17;
  uVar8 = *(undefined2 *)(iVar17 * 2);
  *(int *)(iVar24 + 0x14) = iVar17 << 1;
  *(undefined1 *)(iVar24 + 0xd) = uVar9;
  *(char *)(uVar30 + 9) = (char)uVar8;
  *(uint *)(uVar22 + 0x34) = uVar28;
  *(int *)(iVar24 + 0x54) = iVar18;
  *(undefined1 *)(uVar30 + 0x11) = uVar10;
  iVar21 = uVar30 * 2;
  iVar18 = *(int *)(iVar24 + 4);
  *(undefined1 *)(iVar21 + 9) = uVar10;
  *(char *)(iVar18 + 1) = (char)iVar18;
  *(undefined1 *)(iVar18 + 9) = uVar10;
  bVar4 = *(byte *)(iVar24 + 5);
  uVar15 = (uint)bVar4;
  *(byte *)(iVar21 + 0xc) = bVar3;
  *(uint *)(iVar24 + 0x14) = uVar15;
  *(byte *)(iVar21 + 0x19) = bVar4;
  uVar27 = *(undefined4 *)(uVar15 + 0x44);
  *(undefined4 *)(iVar21 + 0x10) = uVar27;
  *(char *)(iVar24 + 1) = (char)(iVar17 << 1);
  *(undefined4 *)(iVar21 + 0x30) = uVar27;
  *(int *)(iVar21 + 0x14) = iVar21;
  iVar17 = *(int *)(iVar24 + 0x34);
  *(char *)(iVar21 + 0xc) = (char)uVar27;
  *(int *)(iVar24 + 0x34) = iVar17;
  iVar29 = *(int *)(iVar21 + 0x10);
  iVar25 = *(int *)(iVar21 + 0x44);
  uVar27 = *(undefined4 *)(iVar21 + 100);
  *(char *)(uVar15 + 0xd) = (char)iVar21;
  *(int *)(iVar21 + 0x30) = iVar25;
  *(uint *)(uVar15 + 0x54) = uVar15;
  iVar18 = *(int *)(iVar21 + 0x14);
  iVar24 = iVar21 + -0x3d;
  *(undefined1 *)(iVar18 + 0xc) = 0x6d;
  *(int *)(iVar25 + 0x24) = iVar24;
  iVar25 = *(int *)(iVar29 + 0x40);
  uVar9 = (undefined1)uVar27;
  *(undefined1 *)(iVar18 + 0xd) = uVar9;
  *(int *)(*(short *)(iVar25 + iVar24) + 0x54) = (int)*(short *)(iVar25 + iVar24);
  iVar18 = *(int *)(iVar21 + -0x29);
  *(undefined1 *)(iVar18 + 9) = uVar9;
  *(undefined4 *)(iVar25 + 0x54) = *(undefined4 *)(iVar18 + 0x54);
  *(char *)(iVar24 * 2 + 0x11) = (char)iVar25;
  iVar21 = *(int *)(iVar18 + 100);
  iVar18 = iVar25 * 2;
  *(undefined4 *)(iVar18 + 0x74) = *(undefined4 *)(iVar21 + 0x54);
  *(undefined4 *)(iVar18 + 0x30) = 0x44;
  *(int *)(iVar25 + 0x54) = iVar18;
  *(char *)(iVar21 + 0x11) = (char)iVar25;
  iVar18 = iRam0000006e;
  uVar9 = (undefined1)iRam0000006e;
  *(char *)(_DAT_0000004e + 0xc) = (char)*(undefined4 *)(_DAT_0000004e + 100);
  puVar11 = puRam2c415834;
  iVar21 = *(int *)(puRam2c415834 + 0x74);
  uRam000000ac = (undefined2)iVar18;
  _DAT_000000ae = (undefined2)((uint)iVar18 >> 0x10);
  *(undefined4 *)(iVar18 + 0x14) = 0x72;
  *(int *)(iVar18 + 0x54) = iVar17 + -0x74;
  uRam00000053 = SUB41(puVar11,0);
  iVar25 = *(int *)(iVar21 + 100);
  uRam00000069 = uVar9;
  _DAT_0000007e = iVar25;
  *puVar11 = 0x3a;
  *(undefined4 *)(puVar11 + 0x30) = 0x70;
  iVar24 = *(int *)(puVar11 + 0x44);
  iVar21 = (int)*(short *)(iVar24 * 2);
  *(int *)(iVar21 + 0x54) = iVar21;
  *(int *)(iVar21 + 0x40) = iVar24;
  *(undefined1 *)(iVar21 + 0xc) = 0x70;
  *(int *)(iVar18 + 0x14) = iVar21;
  *(char *)(iVar18 + 0x11) = (char)(iVar17 + -0x151);
  *(int *)(iVar21 + 0x40) = iVar24;
  *(char *)(iVar21 + 0x14) = (char)iVar24;
  uVar27 = *(undefined4 *)(iVar21 + 0x60);
  *(char *)(iVar24 + 0x11) = (char)iVar25;
  *(undefined4 *)(iVar21 + 0x10) = uVar27;
  *(undefined4 *)(iVar21 + 0x30) = uVar27;
  iVar25 = *(int *)(iVar24 + 100);
  *(int *)(iVar18 + 0x14) = iVar21;
  uVar27 = *(undefined4 *)(iVar24 + 100);
  *(char *)(iVar21 + 9) = (char)iVar24;
  *(char *)(iVar24 + 0x11) = (char)uVar27 + unaff_r8;
  uVar27 = *(undefined4 *)(iVar21 + 0x74);
  *(undefined1 *)(*(int *)(iVar21 + 0x54) + 0x11) = uVar9;
  iVar24 = *(int *)(iVar21 + 100);
  sVar7 = (short)(iVar17 + -0x151) + -0xd9;
  *(char *)(iVar21 + 0xc) = (char)iVar24;
  *(short *)(iVar21 + 6) = sVar7;
  *(short *)(iVar21 + 6) = sVar7;
  uVar9 = (undefined1)uVar27;
  *(undefined1 *)(iVar18 + 0x15) = uVar9;
  *(undefined1 *)(iVar18 + -0x18) = uVar9;
  uVar27 = *(undefined4 *)(iVar24 + 100);
  *(undefined1 *)(iVar18 + -0x45) = 0x3c;
  *(int *)(iVar24 + 0x54) = iVar21;
  *(undefined1 *)(iVar21 + 0xc) = 0x6e;
  iVar17 = *(int *)(iVar25 + 0x10);
  iRam0000004a = iVar24;
  *(char *)(iVar24 + 1) = (char)iVar17;
  *(char *)(iVar17 + 0x11) = (char)iVar24;
  *(int *)(iVar24 + 0x40) = iVar17;
  *(char *)(iVar21 + 0x11) = (char)uVar27;
  *(undefined1 *)(iVar17 + 0x15) = uVar9;
  iVar18 = *(int *)(iVar21 + 0x24);
  iVar17 = (uint)*(byte *)(iVar17 + -0x2d + iVar24) * 2;
  uVar8 = (undefined2)iVar18;
  *(undefined2 *)(iVar17 + 6) = uVar8;
  *(undefined2 *)(iVar17 + 6) = uVar8;
  iVar17 = iVar18 * 4;
  *(undefined2 *)(iVar17 + 6) = uVar8;
  iVar24 = iVar18 * 0x10;
  *(int *)(iVar24 + 0x54) = iVar18;
  *(int *)(iVar24 + 0x54) = iVar24;
  *(int *)(iVar18 * 4 + 0x44) = iVar25;
  iVar18 = *(int *)(iVar17 + 0x44);
  uVar9 = (undefined1)*(undefined4 *)(iVar18 + 0x54);
  *(undefined1 *)(iVar18 + 0x11) = uVar9;
  *(char *)(iVar17 + 9) = (char)iVar18;
  *(undefined1 *)(iVar24 + 9) = 0;
  *(int *)(iVar18 + 0x34) = iVar25;
  *(char *)(iVar17 + 0xd) = (char)iVar18;
  iVar18 = (int)*(short *)(iVar24 + iVar18);
  iVar21 = *(int *)(iVar17 + 0x54);
  uVar27 = *(undefined4 *)(iVar24 + 4);
  *(undefined1 *)(iVar17 + 0xd) = uVar9;
  *(undefined1 *)(iVar21 + 0xd) = uVar9;
  *(char *)(iVar21 + 0x19) = (char)iVar17;
  *(char *)(iVar18 + 0xd) = (char)iVar25;
  *(char *)(iVar17 + 0x11) = (char)iVar21;
  *(int *)(iVar18 + 0x34) = iVar25;
  iVar25 = *(int *)(iVar21 + 100);
  *(int *)(iVar24 + 0x54) = iVar17;
  *(char *)(iVar21 + 0x11) = (char)iVar24;
  *(undefined4 *)(iVar24 + 0x54) = uVar27;
  iVar21 = *(int *)(iVar17 + 0x34);
  *(int *)(iVar18 + 0x34) = iVar25;
  *(undefined4 *)(iVar21 + 0x14) = uVar27;
  *(char *)(iVar25 + 0x14) = (char)iVar17;
  iVar17 = *(int *)(*(int *)(iVar21 + 0x74) + 100);
  iVar18 = *(int *)(iVar17 + 4);
  *(undefined1 *)(iVar21 + 9) = uVar9;
  *(char *)(iVar18 + 1) = (char)iVar18;
  *(undefined1 *)(iVar18 + 9) = uVar9;
  bVar3 = *(byte *)(iVar17 + 5);
  uVar15 = (uint)bVar3;
  *(char *)(iVar21 + 0xc) = (char)iVar17;
  *(uint *)(iVar17 + 0x14) = uVar15;
  iVar18 = *(int *)(uVar15 + 0x14);
  *(byte *)(iVar21 + 0x19) = bVar3;
  uVar30 = *(undefined4 *)(uVar15 + 0x44);
  *(undefined4 *)(iVar21 + 0x10) = uVar30;
  *(char *)(iVar17 + 1) = (char)uVar27;
  *(undefined4 *)(iVar21 + 0x30) = uVar30;
  *(int *)(iVar21 + 0x14) = iVar21;
  puVar16 = *(undefined1 **)(iVar17 + 0x34);
  *(char *)(iVar21 + 0xc) = (char)uVar30;
  *(undefined1 **)(iVar17 + 0x34) = puVar16;
  *(undefined4 *)(iVar21 + 0x44) = *(undefined4 *)(iVar21 + 0x60);
  uVar27 = *(undefined4 *)(iVar18 + 100);
  *(int *)(iVar17 + 0x14) = iVar17;
  puVar26 = puRam0000009b;
  uVar15 = *(uint *)(iVar21 + 0x14);
  *(uint *)(uVar15 + 0x54) = uVar15;
  *(undefined1 *)(uVar15 + 0x10) = 0x6e;
  uVar9 = (undefined1)uVar27;
  DAT_00000074 = uVar9;
  *(undefined1 *)(uVar15 + 0xc) = 0x27;
  *(undefined4 *)(uVar15 + 0x10) = 0x65;
  *(undefined4 *)(uVar15 + 0x40) = 0x27;
  uVar15 = uVar15 >> 9;
  *(uint *)(uVar15 + 0x54) = uVar15;
  *(undefined4 *)(*(int *)(uVar15 + 0x74) + 0x24) = 0x73;
  iVar18 = _DAT_0000007e;
  iRam0000004a._0_2_ = CONCAT11(0x74,(undefined1)iRam0000004a);
  *(undefined4 *)(*(int *)(CONCAT22(uRam000000b0,_DAT_000000ae) + 0x34) + 0x24) = 0x73;
  iVar17 = *(int *)(*(int *)(iVar18 + 0x74) + 0x34);
  uVar10 = (undefined1)iVar17;
  *(undefined1 *)(*(int *)(iVar18 + 0x74) + 0x15) = uVar10;
  puVar26[0x11] = uVar10;
  uVar30 = *(undefined4 *)(iVar18 + 0x54);
  *(undefined4 *)(iVar17 + 0x24) = uVar30;
  iVar21 = *(int *)(iVar18 + 0x74);
  iVar17 = *(int *)(iVar21 + 0x34);
  *(undefined4 *)(puVar26 + 0x14) = 0x74;
  *(undefined1 **)(puVar26 + 0x14) = puVar16;
  *(char *)(iVar21 + 9) = (char)uVar30;
  *(undefined1 *)(iVar21 + 1) = uVar9;
  puVar11 = (undefined1 *)(iVar18 << 1);
  do {
    *(undefined1 **)(iVar18 + 0x54) = puVar11;
    *(undefined4 *)(iVar21 + 0x44) = uVar27;
    uVar27 = *(undefined4 *)(iVar18 + 100);
    iVar24 = *(int *)(puVar26 + 4);
    iVar18 = *(int *)(iVar24 + 0x54);
    *(char *)(iVar24 + 0x11) = (char)uVar27;
    *(undefined4 *)(iVar18 + 0x34) = uVar27;
    *(int *)(iVar17 + 0x24) = iVar21 << 1;
    *(undefined1 **)(puVar26 + 0x54) = puVar16;
    *(int *)(puVar26 + 0x14) = iVar24;
    puVar16 = *(undefined1 **)(iVar24 + 0x44);
code_r0x2c415b00:
    iVar18 = (int)*(short *)(iVar24 + iVar18);
    *(int *)(iVar24 + 0x54) = iVar17;
    iVar17 = *(int *)(iVar18 + 0x44);
    *(char *)(iVar17 + 0x11) = (char)puVar26;
    *(char *)(iVar17 + 9) = (char)puVar16;
    *(int *)(iVar17 + 0x14) = iVar18;
    iVar21 = *(int *)(iVar18 + 0x14);
    *(undefined1 **)(iVar18 + 0x54) = puVar26;
    *(char *)(iVar21 + 9) = (char)puVar16;
    *(int *)(iVar21 + 0x14) = iVar18;
code_r0x2c415b1c:
    iVar17 = iVar18 * 2;
    *(char *)(iVar18 + 0x11) = (char)puVar11;
    iVar18 = *(int *)(*(int *)(iVar18 + 0x44) + 0x44);
    uVar9 = (undefined1)iVar17;
    *(undefined1 *)(iVar21 + 0x15) = uVar9;
    *(undefined1 *)(iVar18 + 0x11) = uVar9;
    puVar31 = *(undefined1 **)(iVar17 + 0x14);
    puVar26 = *(undefined1 **)(iVar21 * 2 + 0x44);
    iVar18 = *(int *)(iVar21 + 0x54);
    puVar11 = *(undefined1 **)(puVar26 + 4);
code_r0x2c415b40:
    puVar26[0x11] = uVar9;
    *(undefined1 **)(iVar18 + 0x74) = puVar26;
    iVar25 = iRam2c415e88;
    puVar26 = *(undefined1 **)(iVar18 + 0x34);
    puVar16 = (undefined1 *)0xdc;
    while( true ) {
      uVar15 = (uint)(byte)puVar11[iVar18];
      iVar21 = uVar15 - 0x2b;
      uVar27 = uRam2c415c88;
      if (SBORROW4(uVar15 - 0x16,0x15)) break;
      iVar24 = uVar15 - 0x69;
      if (SBORROW4(iVar21,0x3e)) goto code_r0x2c415b00;
      bVar35 = SBORROW4(iVar24,0x3e);
      iVar24 = uVar15 - 0xa7;
      while( true ) {
        iVar21 = iVar24;
        if (bVar35) goto code_r0x2c415b1c;
        if (SBORROW4(iVar21,0x3e)) goto code_r0x2c415b40;
        if (SBORROW4(iVar21 + -0x3e,0x3e)) break;
        bVar35 = SBORROW4(iVar21 + -0x7c,0x3e);
        iVar24 = iVar21 + -0xba;
        if (!bVar35) {
          bVar35 = SBORROW4(iVar21 + -0x137,0x3e);
          uVar15 = iVar21 - 0x175;
          puVar13 = puRam2c415cf4;
          if (bVar35) {
            VectorWidenMultipyAccumulate(in_d3,unaff_d12,1);
            if (SBORROW4(uVar15,0x3e)) {
              uVar15 = iVar21 - 0x1f1;
              if (SBORROW4(iVar21 + -0x1b3,0x3e)) {
                bVar35 = SBORROW4(uVar15,0x3e);
                uVar15 = iVar21 - 0x1df;
                coprocessor_loadlong(0xc,in_cr3,uVar15);
                goto code_r0x2c415b9c;
              }
            }
            else {
              uVar9 = SUB41(puRam2c415cf4,0);
              *(undefined1 *)(iRam2c415e88 + 9) = uVar9;
              *(char *)(iVar21 + -0x1b2) = (char)(iVar21 + -0x1b3);
              *(undefined1 *)(iVar21 + -0x1aa) = uVar9;
              bVar3 = puVar26[5];
              uVar15 = (uint)bVar3;
              *(char *)(iVar25 + 0xc) = (char)puVar31;
              *(uint *)(puVar26 + 0x14) = uVar15;
              puVar13 = *(undefined1 **)(uVar15 + 0x14);
              *(byte *)(iVar25 + 0x19) = bVar3;
              puVar31 = *(undefined1 **)(uVar15 + 0x44);
              *(undefined1 **)(iVar25 + 0x10) = puVar31;
              puVar26[1] = (char)puVar11;
              *(undefined1 **)(iVar25 + 0x30) = puVar31;
            }
            *(int *)(iVar25 + 0x14) = iVar25;
            uVar27 = *(undefined4 *)(puVar26 + 0x34);
            *(char *)(iVar25 + 0xc) = (char)puVar31;
            *(undefined4 *)(puVar26 + 0x34) = uVar27;
            *(char *)(iVar25 + 0x14) = (char)puVar31;
            *(uint *)(puVar26 + 100) = uVar15;
            *(int *)(puVar26 + 0x34) = iVar25;
            puVar11 = puVar26 + -0x20;
            *(char *)(uVar15 + 9) = (char)puVar13;
            iVar17 = (int)*(short *)(iVar25 * 2);
            puVar26[-0xf] = (char)iVar25;
            puVar26 = puVar11;
code_r0x2c415bf8:
            bVar35 = SBORROW4((int)puVar11,0x66);
            puVar26[9] = (char)puVar11 + -0x66;
            *(undefined1 **)(iVar25 + 0x34) = puVar31;
            *(undefined1 **)(iVar17 + 0x54) = puVar31;
            *(undefined1 **)(iVar25 + 0x34) = puVar26;
            *(undefined1 **)(iVar25 + 0x44) = puVar31;
            *(char *)(uVar15 + 9) = (char)puVar13;
            puVar13 = &stack0x00000004;
code_r0x2c415c14:
            uVar15 = _DAT_00000104;
            puVar11 = puVar13 + 0x30c;
            puVar14 = puVar13 + 0x30c;
            puVar16 = puVar13 + 0x30c;
            puVar20 = (undefined4 *)(puVar13 + 0x30c);
            puVar26 = puVar13 + 0x30c;
            puVar31 = puVar13 + 0x30c;
            puVar36 = (uint *)(puVar13 + -0x10c);
            puVar32 = puVar13 + -0x10c;
            if (puVar13 != (undefined1 *)0xfffffcf4) {
              if (((uint)puVar11 & 0xff) != 0) {
                *(undefined1 **)(puVar13 + -0x110) = puVar31;
                *(undefined1 **)(puVar13 + -0x114) = puVar26;
                *(undefined1 **)(puVar13 + -0x118) = puVar14;
                puVar36 = (uint *)(puVar13 + -0x11c);
                *puVar36 = (uint)puVar11;
FUN_2c415c38:
                puVar36[-1] = unaff_lr;
                puVar36[-2] = (uint)puVar31;
                puVar36[-3] = (uint)puVar26;
                puVar36[-4] = (uint)puVar14;
                puVar36[-5] = (uint)puVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar31 = puVar13 + 0x208;
              if (puVar13 == (undefined1 *)0xfffffdf8) goto code_r0x2c415cf4;
              if (puVar13 != (undefined1 *)0xfffffdf8) {
                *(uint *)(puVar13 + -0x110) = unaff_lr;
                *(undefined1 **)(puVar13 + -0x114) = puVar13 + 0x208;
                *(undefined1 **)(puVar13 + -0x118) = puVar26;
                *(undefined1 **)(puVar13 + -0x11c) = puVar16;
                *(undefined1 **)(puVar13 + -0x120) = puVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar19 = 8;
              uVar28 = _DAT_00000104 << 2;
              bVar33 = (int)uVar28 < 0;
              bVar34 = uVar28 == 0;
              uRamfffffce8 = unaff_lr;
              uRamfffffce4 = 8;
              iRamfffffce0 = _DAT_00000110;
              uRamfffffcdc = 0x104;
              uRamfffffcd8 = _DAT_00000104;
              puVar11 = (undefined1 *)0xfffffcd4;
              uRamfffffcd4 = 0x104;
              iRamffffffec = _DAT_0000010c;
              uVar22 = _DAT_00000104;
              uVar27 = _DAT_00000108;
              if (bVar34 || bVar33 != bVar35) {
                iVar18 = _DAT_00000110;
                if (bVar34 || bVar33 != bVar35) {
                  if (bVar34 || bVar33 != bVar35) {
                    return CONCAT44(_DAT_00000104,0x104);
                  }
                  puVar1 = (undefined2 *)(_DAT_00000104 + 0x1e);
                  puVar2 = (undefined2 *)(_DAT_00000104 + 0x3e);
                  if (bVar34 || bVar33 != bVar35) {
                    *(undefined2 *)(_DAT_00000104 + 0x2e) = 0x104;
                    *puVar2 = 0x104;
                  }
                  else {
                    *(undefined2 *)(_DAT_00000104 + 0xe) = 0x104;
                    *puVar1 = 0x104;
                  }
                  uVar12 = (uint)*(ushort *)(uVar15 + 0x3e);
                  uRamfffffff4 = 8;
                  uVar22 = 0xfffffff4;
                  uVar27 = 0xfffffff4;
                  iVar18 = iRamffffffec;
                  goto LAB_2c415d8a;
                }
LAB_2c415dcc:
                *(short *)(uVar22 + 0xe) = (short)uVar28;
                puVar11 = (undefined1 *)0xfffffcd4;
                if (iVar18 != 0) {
                  uVar28 = uVar22 & 0xff;
                  if (uVar28 == 0) {
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
                  puVar11 = (undefined1 *)0xfffffcc0;
                  uVar30 = 0x104;
                  uRamfffffcc0 = uVar22;
                  uRamfffffcc8 = uVar27;
                  uRamfffffccc = uVar28;
                  uRamfffffcd0 = uVar19;
LAB_2c415dd6:
                  *(uint *)(puVar11 + -4) = unaff_lr;
                  *(uint *)(puVar11 + -8) = uVar19;
                  *(uint *)(puVar11 + -0xc) = uVar28;
                  *(undefined4 *)(puVar11 + -0x10) = uVar27;
                  *(undefined4 *)(puVar11 + -0x14) = uVar30;
                  *(uint *)(puVar11 + -0x18) = uVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                uVar12 = 0x104;
                iVar18 = _DAT_00000110;
LAB_2c415d8a:
                uVar19 = 0xfffffff4;
                if (uVar12 == 0) {
                  puVar11 = (undefined1 *)0xfffffcd4;
                  uVar19 = (uint)*(ushort *)(uVar22 + 0x36);
                  if (iVar18 == 0) {
                    uVar28 = (uint)*(ushort *)(uVar22 + 6);
                    iVar18 = 0;
                    goto LAB_2c415dcc;
                  }
                }
                else {
                  if (uVar12 == 0) goto LAB_2c415e06;
                  puVar11 = (undefined1 *)0xfffffce0;
                  uVar30 = 0;
                  uVar27 = uRamfffffcd4;
                  uVar28 = uRamfffffcd8;
                  uVar19 = uRamfffffcdc;
                  if (iRamfffffff8 == 0) goto LAB_2c415dd6;
                  *(short *)(uVar22 + 0x16) = (short)uVar22;
                  *(short *)(uVar12 + 6) = (short)(uVar15 << 4);
                  *(short *)(uVar22 + 0x3e) = (short)uVar22;
                  uVar22 = (uint)*(ushort *)
                                  (*(ushort *)(*(ushort *)(*(ushort *)(uVar22 + 0xe) + 0x1e) + 0x2e)
                                  + 0x3e);
                  if (uVar15 << 4 != 0) {
                    return CONCAT44(iRamfffffce0,uVar12);
                  }
                  if (uVar15 << 4 != 0) {
                    if (uVar15 << 4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    *(undefined2 *)(uVar22 + 0xe) = 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  software_bkpt(0xce);
                  uVar8 = (undefined2)uRamfffffcdc;
                  *(undefined2 *)(uVar22 + 0xe) = uVar8;
                  *(undefined2 *)(uVar22 + 0x1e) = uVar8;
                  *(undefined2 *)(uVar22 + 0x26) = uVar8;
                  *(undefined2 *)(uVar22 + 0x2e) = uVar8;
                  *(undefined2 *)(uVar22 + 0x36) = uVar8;
                  *(undefined2 *)(uVar22 + 0x3e) = uVar8;
                }
                uVar19 = (uint)*(ushort *)(uVar22 + 0x1e);
                *(ushort *)(uVar22 + 0x2e) = *(ushort *)(uVar22 + 0x1e);
              }
              uVar28 = (uint)*(ushort *)(uVar22 + 6);
LAB_2c415e06:
              *(short *)(uVar22 + 0xe) = (short)uVar28;
              *(short *)(uVar22 + 0x1e) = (short)uVar19;
              *(uint *)(puVar11 + 0x33c) = uVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
code_r0x2c415b9c:
            if (!bVar35) goto code_r0x2c415bf8;
            bVar35 = SBORROW4(uVar15,0x3e);
            puVar13 = (undefined1 *)puVar36;
            if (!bVar35) goto code_r0x2c415c14;
            puVar14 = puRam2c415cf4;
            if (!SBORROW4(uVar15 - 0x3e,0x3e)) goto FUN_2c415c38;
            if (SBORROW4(uVar15 - 0x7c,0x3e)) {
              puVar20 = (undefined4 *)(uVar15 - 0xf8);
              if (SBORROW4(uVar15 - 0xba,0x3e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              uVar8 = (undefined2)(uVar15 - 0xba);
              *(undefined2 *)(puVar11 + 0xe) = uVar8;
              *(undefined2 *)(puVar11 + 0x1e) = uVar8;
              *(undefined2 *)(puVar11 + 0x2e) = uVar8;
              *(undefined2 *)(puVar11 + 0x3e) = uVar8;
              puVar20 = (undefined4 *)(uint)*(ushort *)(puVar11 + 0x3e);
            }
          }
          puVar11 = (undefined1 *)*puVar20;
          puVar31 = (undefined1 *)puVar20[1];
          puVar26 = (undefined1 *)puVar20[3];
          puVar32 = (undefined1 *)puVar36;
          if (puVar20 != (undefined4 *)0xfffffff0) {
            *(uint *)((int)puVar36 + -4) = unaff_lr;
            *(int *)((int)puVar36 + -8) = (int)puVar11 << 2;
            *(undefined1 **)((int)puVar36 + -0xc) = puVar26;
            *(undefined1 **)((int)puVar36 + -0x10) = puVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x2c415cf4:
          *(uint *)(puVar32 + -4) = unaff_lr;
          *(undefined1 **)(puVar32 + -8) = puVar32 + 0x324;
          *(undefined1 **)(puVar32 + -0xc) = puVar26;
          *(undefined1 **)(puVar32 + -0x10) = puVar31;
          *(undefined1 **)(puVar32 + -0x14) = puVar11;
          uRam2c41601a = (short)puVar16;
          uRam2c416032 = (short)puVar16;
          *(undefined1 **)(puVar32 + -0x130) = puVar32 + 0x324;
          *(undefined1 **)(puVar32 + -0x134) = puVar26;
          *(uint *)(puVar32 + -0x138) = (uint)puVar16 & 0xffff;
          *(undefined4 *)(puVar32 + -0x13c) = 0x2c416014;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  } while( true );
}


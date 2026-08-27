/* FUN_2c41506a @ 0x2c41506a */

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

undefined8 FUN_2c41506a(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  int unaff_r4;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  int unaff_r5;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 *puVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int iVar28;
  undefined1 *puVar29;
  uint uVar30;
  char unaff_r8;
  undefined1 *puVar31;
  uint unaff_lr;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  uint *puVar35;
  undefined4 in_cr3;
  undefined8 in_d3;
  undefined8 unaff_d12;
  int in_stack_0000036c;
  undefined1 auStack_1c [16];
  
  puVar35 = (uint *)auStack_1c;
  *(undefined1 *)(unaff_r4 + 1) = param_2;
  uVar16 = (uint)*(byte *)(in_stack_0000036c + 2);
  iVar22 = *(int *)(unaff_r5 + 0x14);
  iVar21 = *(int *)(iVar22 + 0x44);
  *(uint *)(iVar22 + 0x54) = uVar16;
  *(undefined4 *)(uVar16 + 0x10) = *(undefined4 *)(iVar22 + 0x74);
  *(char *)(iVar22 + 0x11) = (char)*(undefined4 *)(uVar16 + 0x74);
  uVar11 = *(undefined4 *)(iVar21 + 100);
  *(int *)(param_4 + 0x34) = param_4;
  *(int *)(iVar21 + 0x14) = iVar21;
  *(int *)(uVar16 + 0x14) = param_4;
  iVar17 = *(int *)(iVar21 + 0x44);
  *(undefined4 *)(iVar21 + 0x34) = 0;
  *(undefined1 *)(iVar17 + 8) = 0x5d;
  uVar6 = (undefined1)iVar21;
  *(undefined1 *)(iVar17 + 0x11) = uVar6;
  *(undefined1 *)(iVar22 + 9) = uVar6;
  *(int *)(iVar21 + 0x54) = iVar22;
  *(char *)(iVar21 + 0x15) = (char)iVar22;
  puVar18 = *(undefined1 **)(iVar21 + 0x44);
  *puVar18 = 100;
  iVar25 = *(int *)(iVar21 + 0x14);
  *(char *)(iVar21 + 0x11) = (char)iVar22;
  puVar18[9] = uVar6;
  *(undefined4 *)(puVar18 + 0x24) = uVar11;
  *(char *)(iVar21 + 9) = (char)iVar25;
  iVar17 = *(int *)(iVar22 + 0x14);
  *(int *)(iVar21 + 0x74) = iVar22;
  *(undefined4 *)(iVar25 + 0x34) = 0x2c;
  uVar11 = *(undefined4 *)(iVar17 + 0x44);
  iVar17 = *(int *)(iVar21 + 0x74);
  *(undefined1 *)(iVar25 + 9) = 0x2c;
  *(int *)(iVar17 + 0x14) = iVar21;
  *(int *)(iVar21 + 0x34) = iVar25;
  iVar17 = *(int *)(iVar22 + 4);
  uVar7 = (undefined1)uVar11;
  *(undefined1 *)(iVar21 + 9) = uVar7;
  *(char *)(iVar17 + 1) = (char)iVar17;
  *(undefined1 *)(iVar17 + 9) = uVar7;
  bVar3 = *(byte *)(iVar22 + 5);
  uVar16 = (uint)bVar3;
  *(char *)(iVar21 + 0xc) = (char)iVar25;
  *(uint *)(iVar22 + 0x14) = uVar16;
  iVar17 = *(int *)(uVar16 + 0x14);
  *(byte *)(iVar21 + 0x19) = bVar3;
  uVar26 = *(undefined4 *)(uVar16 + 0x44);
  *(undefined4 *)(iVar21 + 0x10) = uVar26;
  *(undefined1 *)(iVar22 + 1) = 0x2c;
  *(undefined4 *)(iVar21 + 0x30) = uVar26;
  *(int *)(iVar21 + 0x14) = iVar21;
  uVar11 = *(undefined4 *)(iVar22 + 0x34);
  *(char *)(iVar21 + 0xc) = (char)uVar26;
  *(undefined4 *)(iVar22 + 0x34) = uVar11;
  sVar4 = *(short *)(iVar22 + iVar21);
  iVar25 = (int)sVar4;
  *(undefined4 *)(iVar25 + 0x14) = 0x2c;
  uVar7 = (undefined1)uVar11;
  *(undefined1 *)(iVar25 + 0xd) = uVar7;
  *(undefined1 *)(uVar16 + 9) = uVar6;
  *(int *)(iVar21 + 0x30) = iVar25;
  *(char *)(uVar16 + 9) = (char)iVar17;
  iVar22 = (int)*(short *)(iVar21 * 2);
  *(undefined4 *)(iVar25 + 0x14) = 0x2c;
  *(undefined1 *)(iVar25 + 0xd) = uVar7;
  *(undefined1 *)(uVar16 + 9) = uVar6;
  *(undefined1 *)(uVar16 + 0x1d) = uVar6;
  uVar27 = *(undefined4 *)(iVar22 + 0x44);
  *(int *)(iVar25 + 0x74) = iVar25;
  *(char *)(iVar17 + iVar21) = (char)sVar4;
  uVar11 = s_container_parent__p_lv_node__p_c_2c415734._20_4_;
  *(undefined1 *)(s_container_parent__p_lv_node__p_c_2c415734._20_4_ + 9) = uVar6;
  *(undefined4 *)(uVar11 + 0x30) = 0x6c;
  *(int *)(iVar21 + 0x14) = iVar21;
  iVar17 = *(int *)(iVar25 + 0x34);
  *(char *)(iVar21 + 0xd) = (char)*(undefined4 *)(uVar11 + 100);
  uVar26 = s_____>_ADD_item__content__s_2c415784._0_4_;
  uVar11 = s_______thirdparty_star_air_lvgl_a_2c415680._48_4_;
  *(int *)(iVar17 + 0x54) = iVar22;
  *(undefined4 *)(uVar11 + 0x14) = 0x74;
  uVar7 = (undefined1)iVar17;
  *(undefined1 *)(uVar11 + 0xd) = uVar7;
  *(undefined1 *)(uVar26 + 9) = uVar6;
  *(undefined4 *)(uVar26 + 0x60) = 0x74;
  *(char *)(iVar21 + 0xd) = (char)*(undefined4 *)(iVar21 + 100);
  *(undefined4 *)(iVar21 + 0x54) = 0x74;
  iVar23 = *(int *)(uVar26 + 0x44);
  *(undefined4 *)(uVar26 + 0x74) = *(undefined4 *)(iVar21 + 100);
  cVar8 = (char)uVar26;
  *(char *)(iVar21 + 0x19) = cVar8;
  uVar6 = (undefined1)uVar27;
  *(undefined1 *)(iVar22 + 0xd) = uVar6;
  *(char *)(iVar23 + 9) = cVar8;
  *(int *)(uVar26 + 0x14) = iVar21;
  sVar4 = *(short *)(iVar21 * 2);
  iVar21 = (int)sVar4;
  *(undefined4 *)(iVar23 + 0x14) = 100;
  *(undefined1 *)(iVar23 + 0xd) = uVar7;
  *(char *)(uVar26 + 9) = (char)sVar4;
  *(undefined4 *)(iVar22 + 100) = uVar27;
  uVar9 = (undefined1)*(undefined4 *)(iVar21 + 100);
  *(undefined1 *)(iVar21 + 0xd) = uVar9;
  *(char *)(iVar21 + 0x19) = cVar8;
  *(undefined1 *)(iVar22 + 0xd) = uVar6;
  *(char *)(iVar23 + 9) = cVar8;
  *(int *)(uVar26 + 0x14) = iVar21;
  uVar5 = *(undefined2 *)(iVar21 * 2);
  *(int *)(iVar23 + 0x14) = iVar21 << 1;
  *(undefined1 *)(iVar23 + 0xd) = uVar7;
  *(char *)(uVar26 + 9) = (char)uVar5;
  *(undefined4 *)(iVar22 + 0x34) = uVar27;
  *(int *)(iVar23 + 0x54) = iVar17;
  *(undefined1 *)(uVar26 + 0x11) = uVar9;
  iVar25 = uVar26 * 2;
  iVar17 = *(int *)(iVar23 + 4);
  *(undefined1 *)(iVar25 + 9) = uVar9;
  *(char *)(iVar17 + 1) = (char)iVar17;
  *(undefined1 *)(iVar17 + 9) = uVar9;
  bVar3 = *(byte *)(iVar23 + 5);
  uVar16 = (uint)bVar3;
  *(undefined1 *)(iVar25 + 0xc) = uVar6;
  *(uint *)(iVar23 + 0x14) = uVar16;
  *(byte *)(iVar25 + 0x19) = bVar3;
  uVar11 = *(undefined4 *)(uVar16 + 0x44);
  *(undefined4 *)(iVar25 + 0x10) = uVar11;
  *(char *)(iVar23 + 1) = (char)(iVar21 << 1);
  *(undefined4 *)(iVar25 + 0x30) = uVar11;
  *(int *)(iVar25 + 0x14) = iVar25;
  iVar22 = *(int *)(iVar23 + 0x34);
  *(char *)(iVar25 + 0xc) = (char)uVar11;
  *(int *)(iVar23 + 0x34) = iVar22;
  iVar28 = *(int *)(iVar25 + 0x10);
  iVar23 = *(int *)(iVar25 + 0x44);
  uVar11 = *(undefined4 *)(iVar25 + 100);
  *(char *)(uVar16 + 0xd) = (char)iVar25;
  *(int *)(iVar25 + 0x30) = iVar23;
  *(uint *)(uVar16 + 0x54) = uVar16;
  iVar17 = *(int *)(iVar25 + 0x14);
  iVar21 = iVar25 + -0x3d;
  *(undefined1 *)(iVar17 + 0xc) = 0x6d;
  *(int *)(iVar23 + 0x24) = iVar21;
  iVar23 = *(int *)(iVar28 + 0x40);
  uVar6 = (undefined1)uVar11;
  *(undefined1 *)(iVar17 + 0xd) = uVar6;
  *(int *)(*(short *)(iVar23 + iVar21) + 0x54) = (int)*(short *)(iVar23 + iVar21);
  iVar17 = *(int *)(iVar25 + -0x29);
  *(undefined1 *)(iVar17 + 9) = uVar6;
  *(undefined4 *)(iVar23 + 0x54) = *(undefined4 *)(iVar17 + 0x54);
  *(char *)(iVar21 * 2 + 0x11) = (char)iVar23;
  iVar21 = *(int *)(iVar17 + 100);
  iVar17 = iVar23 * 2;
  *(undefined4 *)(iVar17 + 0x74) = *(undefined4 *)(iVar21 + 0x54);
  *(undefined4 *)(iVar17 + 0x30) = 0x44;
  *(int *)(iVar23 + 0x54) = iVar17;
  *(char *)(iVar21 + 0x11) = (char)iVar23;
  iVar17 = iRam0000006e;
  uVar6 = (undefined1)iRam0000006e;
  *(char *)(_DAT_0000004e + 0xc) = (char)*(undefined4 *)(_DAT_0000004e + 100);
  puVar18 = puRam2c415834;
  iVar21 = *(int *)(puRam2c415834 + 0x74);
  uRam000000ac = (undefined2)iVar17;
  _DAT_000000ae = (undefined2)((uint)iVar17 >> 0x10);
  *(undefined4 *)(iVar17 + 0x14) = 0x72;
  *(int *)(iVar17 + 0x54) = iVar22 + -0x74;
  uRam00000053 = SUB41(puVar18,0);
  iVar23 = *(int *)(iVar21 + 100);
  uRam00000069 = uVar6;
  _DAT_0000007e = iVar23;
  *puVar18 = 0x3a;
  *(undefined4 *)(puVar18 + 0x30) = 0x70;
  iVar25 = *(int *)(puVar18 + 0x44);
  iVar21 = (int)*(short *)(iVar25 * 2);
  *(int *)(iVar21 + 0x54) = iVar21;
  *(int *)(iVar21 + 0x40) = iVar25;
  *(undefined1 *)(iVar21 + 0xc) = 0x70;
  *(int *)(iVar17 + 0x14) = iVar21;
  *(char *)(iVar17 + 0x11) = (char)(iVar22 + -0x151);
  *(int *)(iVar21 + 0x40) = iVar25;
  *(char *)(iVar21 + 0x14) = (char)iVar25;
  uVar11 = *(undefined4 *)(iVar21 + 0x60);
  *(char *)(iVar25 + 0x11) = (char)iVar23;
  *(undefined4 *)(iVar21 + 0x10) = uVar11;
  *(undefined4 *)(iVar21 + 0x30) = uVar11;
  iVar23 = *(int *)(iVar25 + 100);
  *(int *)(iVar17 + 0x14) = iVar21;
  uVar11 = *(undefined4 *)(iVar25 + 100);
  *(char *)(iVar21 + 9) = (char)iVar25;
  *(char *)(iVar25 + 0x11) = (char)uVar11 + unaff_r8;
  uVar11 = *(undefined4 *)(iVar21 + 0x74);
  *(undefined1 *)(*(int *)(iVar21 + 0x54) + 0x11) = uVar6;
  iVar25 = *(int *)(iVar21 + 100);
  sVar4 = (short)(iVar22 + -0x151) + -0xd9;
  *(char *)(iVar21 + 0xc) = (char)iVar25;
  *(short *)(iVar21 + 6) = sVar4;
  *(short *)(iVar21 + 6) = sVar4;
  uVar6 = (undefined1)uVar11;
  *(undefined1 *)(iVar17 + 0x15) = uVar6;
  *(undefined1 *)(iVar17 + -0x18) = uVar6;
  uVar11 = *(undefined4 *)(iVar25 + 100);
  *(undefined1 *)(iVar17 + -0x45) = 0x3c;
  *(int *)(iVar25 + 0x54) = iVar21;
  *(undefined1 *)(iVar21 + 0xc) = 0x6e;
  iVar22 = *(int *)(iVar23 + 0x10);
  iRam0000004a = iVar25;
  *(char *)(iVar25 + 1) = (char)iVar22;
  *(char *)(iVar22 + 0x11) = (char)iVar25;
  *(int *)(iVar25 + 0x40) = iVar22;
  *(char *)(iVar21 + 0x11) = (char)uVar11;
  *(undefined1 *)(iVar22 + 0x15) = uVar6;
  iVar17 = *(int *)(iVar21 + 0x24);
  iVar22 = (uint)*(byte *)(iVar22 + -0x2d + iVar25) * 2;
  uVar5 = (undefined2)iVar17;
  *(undefined2 *)(iVar22 + 6) = uVar5;
  *(undefined2 *)(iVar22 + 6) = uVar5;
  iVar22 = iVar17 * 4;
  *(undefined2 *)(iVar22 + 6) = uVar5;
  iVar25 = iVar17 * 0x10;
  *(int *)(iVar25 + 0x54) = iVar17;
  *(int *)(iVar25 + 0x54) = iVar25;
  *(int *)(iVar17 * 4 + 0x44) = iVar23;
  iVar17 = *(int *)(iVar22 + 0x44);
  uVar6 = (undefined1)*(undefined4 *)(iVar17 + 0x54);
  *(undefined1 *)(iVar17 + 0x11) = uVar6;
  *(char *)(iVar22 + 9) = (char)iVar17;
  *(undefined1 *)(iVar25 + 9) = 0;
  *(int *)(iVar17 + 0x34) = iVar23;
  *(char *)(iVar22 + 0xd) = (char)iVar17;
  iVar17 = (int)*(short *)(iVar25 + iVar17);
  iVar21 = *(int *)(iVar22 + 0x54);
  uVar11 = *(undefined4 *)(iVar25 + 4);
  *(undefined1 *)(iVar22 + 0xd) = uVar6;
  *(undefined1 *)(iVar21 + 0xd) = uVar6;
  *(char *)(iVar21 + 0x19) = (char)iVar22;
  *(char *)(iVar17 + 0xd) = (char)iVar23;
  *(char *)(iVar22 + 0x11) = (char)iVar21;
  *(int *)(iVar17 + 0x34) = iVar23;
  iVar23 = *(int *)(iVar21 + 100);
  *(int *)(iVar25 + 0x54) = iVar22;
  *(char *)(iVar21 + 0x11) = (char)iVar25;
  *(undefined4 *)(iVar25 + 0x54) = uVar11;
  iVar21 = *(int *)(iVar22 + 0x34);
  *(int *)(iVar17 + 0x34) = iVar23;
  *(undefined4 *)(iVar21 + 0x14) = uVar11;
  *(char *)(iVar23 + 0x14) = (char)iVar22;
  iVar22 = *(int *)(*(int *)(iVar21 + 0x74) + 100);
  iVar17 = *(int *)(iVar22 + 4);
  *(undefined1 *)(iVar21 + 9) = uVar6;
  *(char *)(iVar17 + 1) = (char)iVar17;
  *(undefined1 *)(iVar17 + 9) = uVar6;
  bVar3 = *(byte *)(iVar22 + 5);
  uVar16 = (uint)bVar3;
  *(char *)(iVar21 + 0xc) = (char)iVar22;
  *(uint *)(iVar22 + 0x14) = uVar16;
  iVar17 = *(int *)(uVar16 + 0x14);
  *(byte *)(iVar21 + 0x19) = bVar3;
  uVar26 = *(undefined4 *)(uVar16 + 0x44);
  *(undefined4 *)(iVar21 + 0x10) = uVar26;
  *(char *)(iVar22 + 1) = (char)uVar11;
  *(undefined4 *)(iVar21 + 0x30) = uVar26;
  *(int *)(iVar21 + 0x14) = iVar21;
  puVar15 = *(undefined1 **)(iVar22 + 0x34);
  *(char *)(iVar21 + 0xc) = (char)uVar26;
  *(undefined1 **)(iVar22 + 0x34) = puVar15;
  *(undefined4 *)(iVar21 + 0x44) = *(undefined4 *)(iVar21 + 0x60);
  uVar11 = *(undefined4 *)(iVar17 + 100);
  *(int *)(iVar22 + 0x14) = iVar22;
  puVar24 = puRam0000009b;
  uVar16 = *(uint *)(iVar21 + 0x14);
  *(uint *)(uVar16 + 0x54) = uVar16;
  *(undefined1 *)(uVar16 + 0x10) = 0x6e;
  uVar6 = (undefined1)uVar11;
  DAT_00000074 = uVar6;
  *(undefined1 *)(uVar16 + 0xc) = 0x27;
  *(undefined4 *)(uVar16 + 0x10) = 0x65;
  *(undefined4 *)(uVar16 + 0x40) = 0x27;
  uVar16 = uVar16 >> 9;
  *(uint *)(uVar16 + 0x54) = uVar16;
  *(undefined4 *)(*(int *)(uVar16 + 0x74) + 0x24) = 0x73;
  iVar17 = _DAT_0000007e;
  iRam0000004a._0_2_ = CONCAT11(0x74,(undefined1)iRam0000004a);
  *(undefined4 *)(*(int *)(CONCAT22(uRam000000b0,_DAT_000000ae) + 0x34) + 0x24) = 0x73;
  iVar22 = *(int *)(*(int *)(iVar17 + 0x74) + 0x34);
  uVar7 = (undefined1)iVar22;
  *(undefined1 *)(*(int *)(iVar17 + 0x74) + 0x15) = uVar7;
  puVar24[0x11] = uVar7;
  uVar26 = *(undefined4 *)(iVar17 + 0x54);
  *(undefined4 *)(iVar22 + 0x24) = uVar26;
  iVar21 = *(int *)(iVar17 + 0x74);
  iVar22 = *(int *)(iVar21 + 0x34);
  *(undefined4 *)(puVar24 + 0x14) = 0x74;
  *(undefined1 **)(puVar24 + 0x14) = puVar15;
  *(char *)(iVar21 + 9) = (char)uVar26;
  *(undefined1 *)(iVar21 + 1) = uVar6;
  puVar18 = (undefined1 *)(iVar17 << 1);
  do {
    *(undefined1 **)(iVar17 + 0x54) = puVar18;
    *(undefined4 *)(iVar21 + 0x44) = uVar11;
    uVar11 = *(undefined4 *)(iVar17 + 100);
    iVar25 = *(int *)(puVar24 + 4);
    iVar17 = *(int *)(iVar25 + 0x54);
    *(char *)(iVar25 + 0x11) = (char)uVar11;
    *(undefined4 *)(iVar17 + 0x34) = uVar11;
    *(int *)(iVar22 + 0x24) = iVar21 << 1;
    *(undefined1 **)(puVar24 + 0x54) = puVar15;
    *(int *)(puVar24 + 0x14) = iVar25;
    puVar15 = *(undefined1 **)(iVar25 + 0x44);
code_r0x2c415b00:
    iVar17 = (int)*(short *)(iVar25 + iVar17);
    *(int *)(iVar25 + 0x54) = iVar22;
    iVar22 = *(int *)(iVar17 + 0x44);
    *(char *)(iVar22 + 0x11) = (char)puVar24;
    *(char *)(iVar22 + 9) = (char)puVar15;
    *(int *)(iVar22 + 0x14) = iVar17;
    iVar21 = *(int *)(iVar17 + 0x14);
    *(undefined1 **)(iVar17 + 0x54) = puVar24;
    *(char *)(iVar21 + 9) = (char)puVar15;
    *(int *)(iVar21 + 0x14) = iVar17;
code_r0x2c415b1c:
    iVar22 = iVar17 * 2;
    *(char *)(iVar17 + 0x11) = (char)puVar18;
    iVar17 = *(int *)(*(int *)(iVar17 + 0x44) + 0x44);
    uVar6 = (undefined1)iVar22;
    *(undefined1 *)(iVar21 + 0x15) = uVar6;
    *(undefined1 *)(iVar17 + 0x11) = uVar6;
    puVar29 = *(undefined1 **)(iVar22 + 0x14);
    puVar24 = *(undefined1 **)(iVar21 * 2 + 0x44);
    iVar17 = *(int *)(iVar21 + 0x54);
    puVar18 = *(undefined1 **)(puVar24 + 4);
code_r0x2c415b40:
    puVar24[0x11] = uVar6;
    *(undefined1 **)(iVar17 + 0x74) = puVar24;
    iVar23 = iRam2c415e88;
    puVar24 = *(undefined1 **)(iVar17 + 0x34);
    puVar15 = (undefined1 *)0xdc;
    while( true ) {
      uVar16 = (uint)(byte)puVar18[iVar17];
      iVar21 = uVar16 - 0x2b;
      uVar11 = uRam2c415c88;
      if (SBORROW4(uVar16 - 0x16,0x15)) break;
      iVar25 = uVar16 - 0x69;
      if (SBORROW4(iVar21,0x3e)) goto code_r0x2c415b00;
      bVar34 = SBORROW4(iVar25,0x3e);
      iVar25 = uVar16 - 0xa7;
      while( true ) {
        iVar21 = iVar25;
        if (bVar34) goto code_r0x2c415b1c;
        if (SBORROW4(iVar21,0x3e)) goto code_r0x2c415b40;
        if (SBORROW4(iVar21 + -0x3e,0x3e)) break;
        bVar34 = SBORROW4(iVar21 + -0x7c,0x3e);
        iVar25 = iVar21 + -0xba;
        if (!bVar34) {
          bVar34 = SBORROW4(iVar21 + -0x137,0x3e);
          uVar16 = iVar21 - 0x175;
          puVar12 = puRam2c415cf4;
          if (bVar34) {
            VectorWidenMultipyAccumulate(in_d3,unaff_d12,1);
            if (SBORROW4(uVar16,0x3e)) {
              uVar16 = iVar21 - 0x1f1;
              if (SBORROW4(iVar21 + -0x1b3,0x3e)) {
                bVar34 = SBORROW4(uVar16,0x3e);
                uVar16 = iVar21 - 0x1df;
                coprocessor_loadlong(0xc,in_cr3,uVar16);
                goto code_r0x2c415b9c;
              }
            }
            else {
              uVar6 = SUB41(puRam2c415cf4,0);
              *(undefined1 *)(iRam2c415e88 + 9) = uVar6;
              *(char *)(iVar21 + -0x1b2) = (char)(iVar21 + -0x1b3);
              *(undefined1 *)(iVar21 + -0x1aa) = uVar6;
              bVar3 = puVar24[5];
              uVar16 = (uint)bVar3;
              *(char *)(iVar23 + 0xc) = (char)puVar29;
              *(uint *)(puVar24 + 0x14) = uVar16;
              puVar12 = *(undefined1 **)(uVar16 + 0x14);
              *(byte *)(iVar23 + 0x19) = bVar3;
              puVar29 = *(undefined1 **)(uVar16 + 0x44);
              *(undefined1 **)(iVar23 + 0x10) = puVar29;
              puVar24[1] = (char)puVar18;
              *(undefined1 **)(iVar23 + 0x30) = puVar29;
            }
            *(int *)(iVar23 + 0x14) = iVar23;
            uVar11 = *(undefined4 *)(puVar24 + 0x34);
            *(char *)(iVar23 + 0xc) = (char)puVar29;
            *(undefined4 *)(puVar24 + 0x34) = uVar11;
            *(char *)(iVar23 + 0x14) = (char)puVar29;
            *(uint *)(puVar24 + 100) = uVar16;
            *(int *)(puVar24 + 0x34) = iVar23;
            puVar18 = puVar24 + -0x20;
            *(char *)(uVar16 + 9) = (char)puVar12;
            iVar22 = (int)*(short *)(iVar23 * 2);
            puVar24[-0xf] = (char)iVar23;
            puVar24 = puVar18;
code_r0x2c415bf8:
            bVar34 = SBORROW4((int)puVar18,0x66);
            puVar24[9] = (char)puVar18 + -0x66;
            *(undefined1 **)(iVar23 + 0x34) = puVar29;
            *(undefined1 **)(iVar22 + 0x54) = puVar29;
            *(undefined1 **)(iVar23 + 0x34) = puVar24;
            *(undefined1 **)(iVar23 + 0x44) = puVar29;
            *(char *)(uVar16 + 9) = (char)puVar12;
            puVar12 = &stack0xfffffff8;
code_r0x2c415c14:
            uVar16 = _DAT_00000104;
            puVar18 = puVar12 + 0x30c;
            puVar13 = puVar12 + 0x30c;
            puVar15 = puVar12 + 0x30c;
            puVar19 = (undefined4 *)(puVar12 + 0x30c);
            puVar24 = puVar12 + 0x30c;
            puVar29 = puVar12 + 0x30c;
            puVar35 = (uint *)(puVar12 + -0x10c);
            puVar31 = puVar12 + -0x10c;
            if (puVar12 != (undefined1 *)0xfffffcf4) {
              if (((uint)puVar18 & 0xff) != 0) {
                *(undefined1 **)(puVar12 + -0x110) = puVar29;
                *(undefined1 **)(puVar12 + -0x114) = puVar24;
                *(undefined1 **)(puVar12 + -0x118) = puVar13;
                puVar35 = (uint *)(puVar12 + -0x11c);
                *puVar35 = (uint)puVar18;
FUN_2c415c38:
                puVar35[-1] = unaff_lr;
                puVar35[-2] = (uint)puVar29;
                puVar35[-3] = (uint)puVar24;
                puVar35[-4] = (uint)puVar13;
                puVar35[-5] = (uint)puVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar29 = puVar12 + 0x208;
              if (puVar12 == (undefined1 *)0xfffffdf8) goto code_r0x2c415cf4;
              if (puVar12 != (undefined1 *)0xfffffdf8) {
                *(uint *)(puVar12 + -0x110) = unaff_lr;
                *(undefined1 **)(puVar12 + -0x114) = puVar12 + 0x208;
                *(undefined1 **)(puVar12 + -0x118) = puVar24;
                *(undefined1 **)(puVar12 + -0x11c) = puVar15;
                *(undefined1 **)(puVar12 + -0x120) = puVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar30 = 8;
              uVar20 = _DAT_00000104 << 2;
              bVar32 = (int)uVar20 < 0;
              bVar33 = uVar20 == 0;
              uRamfffffce8 = unaff_lr;
              uRamfffffce4 = 8;
              iRamfffffce0 = _DAT_00000110;
              uRamfffffcdc = 0x104;
              uRamfffffcd8 = _DAT_00000104;
              puVar18 = (undefined1 *)0xfffffcd4;
              uRamfffffcd4 = 0x104;
              iRamffffffec = _DAT_0000010c;
              uVar14 = _DAT_00000104;
              uVar11 = _DAT_00000108;
              if (bVar33 || bVar32 != bVar34) {
                iVar17 = _DAT_00000110;
                if (bVar33 || bVar32 != bVar34) {
                  if (bVar33 || bVar32 != bVar34) {
                    return CONCAT44(_DAT_00000104,0x104);
                  }
                  puVar1 = (undefined2 *)(_DAT_00000104 + 0x1e);
                  puVar2 = (undefined2 *)(_DAT_00000104 + 0x3e);
                  if (bVar33 || bVar32 != bVar34) {
                    *(undefined2 *)(_DAT_00000104 + 0x2e) = 0x104;
                    *puVar2 = 0x104;
                  }
                  else {
                    *(undefined2 *)(_DAT_00000104 + 0xe) = 0x104;
                    *puVar1 = 0x104;
                  }
                  uVar10 = (uint)*(ushort *)(uVar16 + 0x3e);
                  uRamfffffff4 = 8;
                  uVar14 = 0xfffffff4;
                  uVar11 = 0xfffffff4;
                  iVar17 = iRamffffffec;
                  goto LAB_2c415d8a;
                }
LAB_2c415dcc:
                *(short *)(uVar14 + 0xe) = (short)uVar20;
                puVar18 = (undefined1 *)0xfffffcd4;
                if (iVar17 != 0) {
                  uVar20 = uVar14 & 0xff;
                  if (uVar20 == 0) {
                    _UsageFault = uVar30;
                    if (uVar30 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffed8;
                      uRamfffffb88 = uVar30;
                      uRamfffffb84 = uVar30;
                      uRamfffffb80 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if ((uVar30 & 0xff) != 0) {
                      uRamfffffb90 = uVar30;
                      uRamfffffb8c = uVar30;
                      uRamfffffb88 = uVar30;
                      uRamfffffb84 = unaff_lr;
                      uRamfffffb80 = uVar30;
                      uRamfffffb7c = uVar30;
                      uRamfffffb78 = uVar30;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar30 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffee0;
                      uRamfffffb88 = uVar30;
                      uRamfffffb84 = uVar30;
                      uRamfffffb80 = 0xfffffee0;
                      uRamfffffb7c = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar30 == 0) {
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
                    uRamfffffb88 = uVar30;
                    uRamfffffb84 = uVar30;
                    uRamfffffb80 = 0xfffffedc;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  uRamfffffcc4 = 0x104;
                  puVar18 = (undefined1 *)0xfffffcc0;
                  uVar26 = 0x104;
                  uRamfffffcc0 = uVar14;
                  uRamfffffcc8 = uVar11;
                  uRamfffffccc = uVar20;
                  uRamfffffcd0 = uVar30;
LAB_2c415dd6:
                  *(uint *)(puVar18 + -4) = unaff_lr;
                  *(uint *)(puVar18 + -8) = uVar30;
                  *(uint *)(puVar18 + -0xc) = uVar20;
                  *(undefined4 *)(puVar18 + -0x10) = uVar11;
                  *(undefined4 *)(puVar18 + -0x14) = uVar26;
                  *(uint *)(puVar18 + -0x18) = uVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                uVar10 = 0x104;
                iVar17 = _DAT_00000110;
LAB_2c415d8a:
                uVar30 = 0xfffffff4;
                if (uVar10 == 0) {
                  puVar18 = (undefined1 *)0xfffffcd4;
                  uVar30 = (uint)*(ushort *)(uVar14 + 0x36);
                  if (iVar17 == 0) {
                    uVar20 = (uint)*(ushort *)(uVar14 + 6);
                    iVar17 = 0;
                    goto LAB_2c415dcc;
                  }
                }
                else {
                  if (uVar10 == 0) goto LAB_2c415e06;
                  puVar18 = (undefined1 *)0xfffffce0;
                  uVar26 = 0;
                  uVar11 = uRamfffffcd4;
                  uVar20 = uRamfffffcd8;
                  uVar30 = uRamfffffcdc;
                  if (iRamfffffff8 == 0) goto LAB_2c415dd6;
                  *(short *)(uVar14 + 0x16) = (short)uVar14;
                  *(short *)(uVar10 + 6) = (short)(uVar16 << 4);
                  *(short *)(uVar14 + 0x3e) = (short)uVar14;
                  uVar14 = (uint)*(ushort *)
                                  (*(ushort *)(*(ushort *)(*(ushort *)(uVar14 + 0xe) + 0x1e) + 0x2e)
                                  + 0x3e);
                  if (uVar16 << 4 != 0) {
                    return CONCAT44(iRamfffffce0,uVar10);
                  }
                  if (uVar16 << 4 != 0) {
                    if (uVar16 << 4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    *(undefined2 *)(uVar14 + 0xe) = 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  software_bkpt(0xce);
                  uVar5 = (undefined2)uRamfffffcdc;
                  *(undefined2 *)(uVar14 + 0xe) = uVar5;
                  *(undefined2 *)(uVar14 + 0x1e) = uVar5;
                  *(undefined2 *)(uVar14 + 0x26) = uVar5;
                  *(undefined2 *)(uVar14 + 0x2e) = uVar5;
                  *(undefined2 *)(uVar14 + 0x36) = uVar5;
                  *(undefined2 *)(uVar14 + 0x3e) = uVar5;
                }
                uVar30 = (uint)*(ushort *)(uVar14 + 0x1e);
                *(ushort *)(uVar14 + 0x2e) = *(ushort *)(uVar14 + 0x1e);
              }
              uVar20 = (uint)*(ushort *)(uVar14 + 6);
LAB_2c415e06:
              *(short *)(uVar14 + 0xe) = (short)uVar20;
              *(short *)(uVar14 + 0x1e) = (short)uVar30;
              *(uint *)(puVar18 + 0x33c) = uVar30;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
code_r0x2c415b9c:
            if (!bVar34) goto code_r0x2c415bf8;
            bVar34 = SBORROW4(uVar16,0x3e);
            puVar12 = (undefined1 *)puVar35;
            if (!bVar34) goto code_r0x2c415c14;
            puVar13 = puRam2c415cf4;
            if (!SBORROW4(uVar16 - 0x3e,0x3e)) goto FUN_2c415c38;
            if (SBORROW4(uVar16 - 0x7c,0x3e)) {
              puVar19 = (undefined4 *)(uVar16 - 0xf8);
              if (SBORROW4(uVar16 - 0xba,0x3e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              uVar5 = (undefined2)(uVar16 - 0xba);
              *(undefined2 *)(puVar18 + 0xe) = uVar5;
              *(undefined2 *)(puVar18 + 0x1e) = uVar5;
              *(undefined2 *)(puVar18 + 0x2e) = uVar5;
              *(undefined2 *)(puVar18 + 0x3e) = uVar5;
              puVar19 = (undefined4 *)(uint)*(ushort *)(puVar18 + 0x3e);
            }
          }
          puVar18 = (undefined1 *)*puVar19;
          puVar29 = (undefined1 *)puVar19[1];
          puVar24 = (undefined1 *)puVar19[3];
          puVar31 = (undefined1 *)puVar35;
          if (puVar19 != (undefined4 *)0xfffffff0) {
            *(uint *)((int)puVar35 + -4) = unaff_lr;
            *(int *)((int)puVar35 + -8) = (int)puVar18 << 2;
            *(undefined1 **)((int)puVar35 + -0xc) = puVar24;
            *(undefined1 **)((int)puVar35 + -0x10) = puVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x2c415cf4:
          *(uint *)(puVar31 + -4) = unaff_lr;
          *(undefined1 **)(puVar31 + -8) = puVar31 + 0x324;
          *(undefined1 **)(puVar31 + -0xc) = puVar24;
          *(undefined1 **)(puVar31 + -0x10) = puVar29;
          *(undefined1 **)(puVar31 + -0x14) = puVar18;
          uRam2c41601a = (short)puVar15;
          uRam2c416032 = (short)puVar15;
          *(undefined1 **)(puVar31 + -0x130) = puVar31 + 0x324;
          *(undefined1 **)(puVar31 + -0x134) = puVar24;
          *(uint *)(puVar31 + -0x138) = (uint)puVar15 & 0xffff;
          *(undefined4 *)(puVar31 + -0x13c) = 0x2c416014;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  } while( true );
}


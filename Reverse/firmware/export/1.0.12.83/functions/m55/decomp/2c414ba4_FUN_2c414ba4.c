/* FUN_2c414ba4 @ 0x2c414ba4 */

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

undefined8 FUN_2c414ba4(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char cVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int unaff_r4;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  int unaff_r5;
  int iVar19;
  uint unaff_r6;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  undefined1 *puVar28;
  uint uVar29;
  char unaff_r8;
  undefined1 *puVar30;
  uint unaff_lr;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  uint *puVar34;
  undefined4 in_cr3;
  undefined8 in_d3;
  undefined8 unaff_d12;
  int in_stack_000003ac;
  undefined1 auStack_14 [8];
  
  puVar34 = (uint *)auStack_14;
  *(char *)(unaff_r6 + 9) = (char)unaff_r4;
  *(undefined4 *)(unaff_r5 + 0x14) = param_2;
  *(uint *)(unaff_r5 + 0x74) = unaff_r6;
  *(int *)(unaff_r5 + 0x54) = unaff_r4;
  iVar15 = *(int *)(unaff_r4 + 0x74);
  *(char *)(*(int *)(unaff_r6 + 100) + 0x12) = (char)*(int *)(unaff_r6 + 100);
  uVar12 = *(undefined4 *)(iVar15 + 100);
  iVar24 = *(int *)(iVar15 + 0x44);
  *(undefined4 *)(iVar15 + 100) = *(undefined4 *)(iVar15 + 0x44);
  *(undefined1 *)(iVar24 + 0xd) = param_1;
  *(undefined1 *)(iVar15 + 9) = param_4;
  *(undefined1 *)(iVar24 + 0xd) = param_1;
  *(undefined4 *)(unaff_r6 + 0x34) = uVar12;
  uVar6 = (undefined1)in_stack_000003ac;
  *(undefined1 *)(unaff_r6 + 1) = uVar6;
  uVar20 = unaff_r6 >> 0x10 & 0xff;
  *(undefined1 *)(uVar20 + 1) = uVar6;
  *(char *)(in_stack_000003ac + 0x15) = (char)iVar15;
  *(undefined1 **)(iVar24 + 0x34) = &stack0x00000374;
  uVar12 = *(undefined4 *)(iVar15 + 0x44);
  iVar15 = *(int *)(in_stack_000003ac + 0x74);
  uVar7 = SUB41(&stack0x00000374,0);
  *(undefined1 *)(iVar24 + 9) = uVar7;
  *(int *)(iVar15 + 0x14) = in_stack_000003ac;
  *(int *)(in_stack_000003ac + 0x34) = iVar24;
  iVar15 = *(int *)(uVar20 + 4);
  uVar8 = (undefined1)uVar12;
  *(undefined1 *)(in_stack_000003ac + 9) = uVar8;
  *(char *)(iVar15 + 1) = (char)iVar15;
  *(undefined1 *)(iVar15 + 9) = uVar8;
  bVar3 = *(byte *)(uVar20 + 5);
  uVar16 = (uint)bVar3;
  *(char *)(in_stack_000003ac + 0xc) = (char)iVar24;
  *(uint *)(uVar20 + 0x14) = uVar16;
  iVar15 = *(int *)(uVar16 + 0x14);
  *(byte *)(in_stack_000003ac + 0x19) = bVar3;
  uVar25 = *(undefined4 *)(uVar16 + 0x44);
  *(undefined4 *)(in_stack_000003ac + 0x10) = uVar25;
  *(undefined1 *)(uVar20 + 1) = uVar7;
  *(undefined4 *)(in_stack_000003ac + 0x30) = uVar25;
  *(int *)(in_stack_000003ac + 0x14) = in_stack_000003ac;
  uVar12 = *(undefined4 *)(uVar20 + 0x34);
  *(char *)(in_stack_000003ac + 0xc) = (char)uVar25;
  *(undefined4 *)(uVar20 + 0x34) = uVar12;
  sVar4 = *(short *)(uVar20 + in_stack_000003ac);
  iVar21 = (int)sVar4;
  *(undefined1 **)(iVar21 + 0x14) = &stack0x00000374;
  uVar7 = (undefined1)uVar12;
  *(undefined1 *)(iVar21 + 0xd) = uVar7;
  *(undefined1 *)(uVar16 + 9) = uVar6;
  *(int *)(in_stack_000003ac + 0x30) = iVar21;
  *(char *)(uVar16 + 9) = (char)iVar15;
  iVar24 = (int)*(short *)(in_stack_000003ac * 2);
  *(undefined1 **)(iVar21 + 0x14) = &stack0x00000374;
  *(undefined1 *)(iVar21 + 0xd) = uVar7;
  *(undefined1 *)(uVar16 + 9) = uVar6;
  *(undefined1 *)(uVar16 + 0x1d) = uVar6;
  uVar26 = *(undefined4 *)(iVar24 + 0x44);
  *(int *)(iVar21 + 0x74) = iVar21;
  *(char *)(iVar15 + in_stack_000003ac) = (char)sVar4;
  uVar12 = s_container_parent__p_lv_node__p_c_2c415734._20_4_;
  *(undefined1 *)(s_container_parent__p_lv_node__p_c_2c415734._20_4_ + 9) = uVar6;
  *(undefined4 *)(uVar12 + 0x30) = 0x6c;
  *(int *)(in_stack_000003ac + 0x14) = in_stack_000003ac;
  iVar15 = *(int *)(iVar21 + 0x34);
  *(char *)(in_stack_000003ac + 0xd) = (char)*(undefined4 *)(uVar12 + 100);
  uVar25 = s_____>_ADD_item__content__s_2c415784._0_4_;
  uVar12 = s_______thirdparty_star_air_lvgl_a_2c415680._48_4_;
  *(int *)(iVar15 + 0x54) = iVar24;
  *(undefined4 *)(uVar12 + 0x14) = 0x74;
  uVar7 = (undefined1)iVar15;
  *(undefined1 *)(uVar12 + 0xd) = uVar7;
  *(undefined1 *)(uVar25 + 9) = uVar6;
  *(undefined4 *)(uVar25 + 0x60) = 0x74;
  *(char *)(in_stack_000003ac + 0xd) = (char)*(undefined4 *)(in_stack_000003ac + 100);
  *(undefined4 *)(in_stack_000003ac + 0x54) = 0x74;
  iVar22 = *(int *)(uVar25 + 0x44);
  *(undefined4 *)(uVar25 + 0x74) = *(undefined4 *)(in_stack_000003ac + 100);
  cVar9 = (char)uVar25;
  *(char *)(in_stack_000003ac + 0x19) = cVar9;
  uVar6 = (undefined1)uVar26;
  *(undefined1 *)(iVar24 + 0xd) = uVar6;
  *(char *)(iVar22 + 9) = cVar9;
  *(int *)(uVar25 + 0x14) = in_stack_000003ac;
  sVar4 = *(short *)(in_stack_000003ac * 2);
  iVar21 = (int)sVar4;
  *(undefined4 *)(iVar22 + 0x14) = 100;
  *(undefined1 *)(iVar22 + 0xd) = uVar7;
  *(char *)(uVar25 + 9) = (char)sVar4;
  *(undefined4 *)(iVar24 + 100) = uVar26;
  uVar8 = (undefined1)*(undefined4 *)(iVar21 + 100);
  *(undefined1 *)(iVar21 + 0xd) = uVar8;
  *(char *)(iVar21 + 0x19) = cVar9;
  *(undefined1 *)(iVar24 + 0xd) = uVar6;
  *(char *)(iVar22 + 9) = cVar9;
  *(int *)(uVar25 + 0x14) = iVar21;
  uVar5 = *(undefined2 *)(iVar21 * 2);
  *(int *)(iVar22 + 0x14) = iVar21 << 1;
  *(undefined1 *)(iVar22 + 0xd) = uVar7;
  *(char *)(uVar25 + 9) = (char)uVar5;
  *(undefined4 *)(iVar24 + 0x34) = uVar26;
  *(int *)(iVar22 + 0x54) = iVar15;
  *(undefined1 *)(uVar25 + 0x11) = uVar8;
  iVar19 = uVar25 * 2;
  iVar15 = *(int *)(iVar22 + 4);
  *(undefined1 *)(iVar19 + 9) = uVar8;
  *(char *)(iVar15 + 1) = (char)iVar15;
  *(undefined1 *)(iVar15 + 9) = uVar8;
  bVar3 = *(byte *)(iVar22 + 5);
  uVar16 = (uint)bVar3;
  *(undefined1 *)(iVar19 + 0xc) = uVar6;
  *(uint *)(iVar22 + 0x14) = uVar16;
  *(byte *)(iVar19 + 0x19) = bVar3;
  uVar12 = *(undefined4 *)(uVar16 + 0x44);
  *(undefined4 *)(iVar19 + 0x10) = uVar12;
  *(char *)(iVar22 + 1) = (char)(iVar21 << 1);
  *(undefined4 *)(iVar19 + 0x30) = uVar12;
  *(int *)(iVar19 + 0x14) = iVar19;
  iVar24 = *(int *)(iVar22 + 0x34);
  *(char *)(iVar19 + 0xc) = (char)uVar12;
  *(int *)(iVar22 + 0x34) = iVar24;
  iVar27 = *(int *)(iVar19 + 0x10);
  iVar22 = *(int *)(iVar19 + 0x44);
  uVar12 = *(undefined4 *)(iVar19 + 100);
  *(char *)(uVar16 + 0xd) = (char)iVar19;
  *(int *)(iVar19 + 0x30) = iVar22;
  *(uint *)(uVar16 + 0x54) = uVar16;
  iVar15 = *(int *)(iVar19 + 0x14);
  iVar21 = iVar19 + -0x3d;
  *(undefined1 *)(iVar15 + 0xc) = 0x6d;
  *(int *)(iVar22 + 0x24) = iVar21;
  iVar22 = *(int *)(iVar27 + 0x40);
  uVar6 = (undefined1)uVar12;
  *(undefined1 *)(iVar15 + 0xd) = uVar6;
  *(int *)(*(short *)(iVar22 + iVar21) + 0x54) = (int)*(short *)(iVar22 + iVar21);
  iVar15 = *(int *)(iVar19 + -0x29);
  *(undefined1 *)(iVar15 + 9) = uVar6;
  *(undefined4 *)(iVar22 + 0x54) = *(undefined4 *)(iVar15 + 0x54);
  *(char *)(iVar21 * 2 + 0x11) = (char)iVar22;
  iVar21 = *(int *)(iVar15 + 100);
  iVar15 = iVar22 * 2;
  *(undefined4 *)(iVar15 + 0x74) = *(undefined4 *)(iVar21 + 0x54);
  *(undefined4 *)(iVar15 + 0x30) = 0x44;
  *(int *)(iVar22 + 0x54) = iVar15;
  *(char *)(iVar21 + 0x11) = (char)iVar22;
  iVar15 = iRam0000006e;
  *(char *)(_DAT_0000004e + 0xc) = (char)*(undefined4 *)(_DAT_0000004e + 100);
  puVar10 = puRam2c415834;
  iVar21 = *(int *)(puRam2c415834 + 0x74);
  uRam000000ac = (undefined2)iVar15;
  _DAT_000000ae = (undefined2)((uint)iVar15 >> 0x10);
  *(undefined4 *)(iVar15 + 0x14) = 0x72;
  *(int *)(iVar15 + 0x54) = iVar24 + -0x74;
  uRam00000053 = SUB41(puVar10,0);
  iVar22 = *(int *)(iVar21 + 100);
  uRam00000069 = (char)iVar15;
  _DAT_0000007e = iVar22;
  *puVar10 = 0x3a;
  *(undefined4 *)(puVar10 + 0x30) = 0x70;
  iVar19 = *(int *)(puVar10 + 0x44);
  iVar21 = (int)*(short *)(iVar19 * 2);
  *(int *)(iVar21 + 0x54) = iVar21;
  *(int *)(iVar21 + 0x40) = iVar19;
  *(undefined1 *)(iVar21 + 0xc) = 0x70;
  *(int *)(iVar15 + 0x14) = iVar21;
  *(char *)(iVar15 + 0x11) = (char)(iVar24 + -0x151);
  *(int *)(iVar21 + 0x40) = iVar19;
  *(char *)(iVar21 + 0x14) = (char)iVar19;
  uVar12 = *(undefined4 *)(iVar21 + 0x60);
  *(char *)(iVar19 + 0x11) = (char)iVar22;
  *(undefined4 *)(iVar21 + 0x10) = uVar12;
  *(undefined4 *)(iVar21 + 0x30) = uVar12;
  iVar22 = *(int *)(iVar19 + 100);
  *(int *)(iVar15 + 0x14) = iVar21;
  uVar12 = *(undefined4 *)(iVar19 + 100);
  *(char *)(iVar21 + 9) = (char)iVar19;
  *(char *)(iVar19 + 0x11) = (char)uVar12 + unaff_r8;
  uVar12 = *(undefined4 *)(iVar21 + 0x74);
  *(char *)(*(int *)(iVar21 + 0x54) + 0x11) = (char)iVar15;
  iVar19 = *(int *)(iVar21 + 100);
  sVar4 = (short)(iVar24 + -0x151) + -0xd9;
  *(char *)(iVar21 + 0xc) = (char)iVar19;
  *(short *)(iVar21 + 6) = sVar4;
  *(short *)(iVar21 + 6) = sVar4;
  uVar6 = (undefined1)uVar12;
  *(undefined1 *)(iVar15 + 0x15) = uVar6;
  *(undefined1 *)(iVar15 + -0x18) = uVar6;
  uVar12 = *(undefined4 *)(iVar19 + 100);
  *(undefined1 *)(iVar15 + -0x45) = 0x3c;
  *(int *)(iVar19 + 0x54) = iVar21;
  *(undefined1 *)(iVar21 + 0xc) = 0x6e;
  iVar24 = *(int *)(iVar22 + 0x10);
  iRam0000004a = iVar19;
  *(char *)(iVar19 + 1) = (char)iVar24;
  *(char *)(iVar24 + 0x11) = (char)iVar19;
  *(int *)(iVar19 + 0x40) = iVar24;
  *(char *)(iVar21 + 0x11) = (char)uVar12;
  *(undefined1 *)(iVar24 + 0x15) = uVar6;
  iVar15 = *(int *)(iVar21 + 0x24);
  iVar24 = (uint)*(byte *)(iVar24 + -0x2d + iVar19) * 2;
  uVar5 = (undefined2)iVar15;
  *(undefined2 *)(iVar24 + 6) = uVar5;
  *(undefined2 *)(iVar24 + 6) = uVar5;
  iVar24 = iVar15 * 4;
  *(undefined2 *)(iVar24 + 6) = uVar5;
  iVar19 = iVar15 * 0x10;
  *(int *)(iVar19 + 0x54) = iVar15;
  *(int *)(iVar19 + 0x54) = iVar19;
  *(int *)(iVar15 * 4 + 0x44) = iVar22;
  iVar15 = *(int *)(iVar24 + 0x44);
  uVar6 = (undefined1)*(undefined4 *)(iVar15 + 0x54);
  *(undefined1 *)(iVar15 + 0x11) = uVar6;
  *(char *)(iVar24 + 9) = (char)iVar15;
  *(undefined1 *)(iVar19 + 9) = 0;
  *(int *)(iVar15 + 0x34) = iVar22;
  *(char *)(iVar24 + 0xd) = (char)iVar15;
  iVar15 = (int)*(short *)(iVar19 + iVar15);
  iVar21 = *(int *)(iVar24 + 0x54);
  uVar12 = *(undefined4 *)(iVar19 + 4);
  *(undefined1 *)(iVar24 + 0xd) = uVar6;
  *(undefined1 *)(iVar21 + 0xd) = uVar6;
  *(char *)(iVar21 + 0x19) = (char)iVar24;
  *(char *)(iVar15 + 0xd) = (char)iVar22;
  *(char *)(iVar24 + 0x11) = (char)iVar21;
  *(int *)(iVar15 + 0x34) = iVar22;
  iVar22 = *(int *)(iVar21 + 100);
  *(int *)(iVar19 + 0x54) = iVar24;
  *(char *)(iVar21 + 0x11) = (char)iVar19;
  *(undefined4 *)(iVar19 + 0x54) = uVar12;
  iVar21 = *(int *)(iVar24 + 0x34);
  *(int *)(iVar15 + 0x34) = iVar22;
  *(undefined4 *)(iVar21 + 0x14) = uVar12;
  *(char *)(iVar22 + 0x14) = (char)iVar24;
  iVar24 = *(int *)(*(int *)(iVar21 + 0x74) + 100);
  iVar15 = *(int *)(iVar24 + 4);
  *(undefined1 *)(iVar21 + 9) = uVar6;
  *(char *)(iVar15 + 1) = (char)iVar15;
  *(undefined1 *)(iVar15 + 9) = uVar6;
  bVar3 = *(byte *)(iVar24 + 5);
  uVar16 = (uint)bVar3;
  *(char *)(iVar21 + 0xc) = (char)iVar24;
  *(uint *)(iVar24 + 0x14) = uVar16;
  iVar15 = *(int *)(uVar16 + 0x14);
  *(byte *)(iVar21 + 0x19) = bVar3;
  uVar25 = *(undefined4 *)(uVar16 + 0x44);
  *(undefined4 *)(iVar21 + 0x10) = uVar25;
  *(char *)(iVar24 + 1) = (char)uVar12;
  *(undefined4 *)(iVar21 + 0x30) = uVar25;
  *(int *)(iVar21 + 0x14) = iVar21;
  puVar14 = *(undefined1 **)(iVar24 + 0x34);
  *(char *)(iVar21 + 0xc) = (char)uVar25;
  *(undefined1 **)(iVar24 + 0x34) = puVar14;
  *(undefined4 *)(iVar21 + 0x44) = *(undefined4 *)(iVar21 + 0x60);
  uVar12 = *(undefined4 *)(iVar15 + 100);
  *(int *)(iVar24 + 0x14) = iVar24;
  puVar23 = puRam0000009b;
  uVar16 = *(uint *)(iVar21 + 0x14);
  *(uint *)(uVar16 + 0x54) = uVar16;
  *(undefined1 *)(uVar16 + 0x10) = 0x6e;
  uVar6 = (undefined1)uVar12;
  DAT_00000074 = uVar6;
  *(undefined1 *)(uVar16 + 0xc) = 0x27;
  *(undefined4 *)(uVar16 + 0x10) = 0x65;
  *(undefined4 *)(uVar16 + 0x40) = 0x27;
  uVar16 = uVar16 >> 9;
  *(uint *)(uVar16 + 0x54) = uVar16;
  *(undefined4 *)(*(int *)(uVar16 + 0x74) + 0x24) = 0x73;
  iVar15 = _DAT_0000007e;
  iRam0000004a._0_2_ = CONCAT11(0x74,(undefined1)iRam0000004a);
  *(undefined4 *)(*(int *)(CONCAT22(uRam000000b0,_DAT_000000ae) + 0x34) + 0x24) = 0x73;
  iVar24 = *(int *)(*(int *)(iVar15 + 0x74) + 0x34);
  uVar7 = (undefined1)iVar24;
  *(undefined1 *)(*(int *)(iVar15 + 0x74) + 0x15) = uVar7;
  puVar23[0x11] = uVar7;
  uVar25 = *(undefined4 *)(iVar15 + 0x54);
  *(undefined4 *)(iVar24 + 0x24) = uVar25;
  iVar21 = *(int *)(iVar15 + 0x74);
  iVar24 = *(int *)(iVar21 + 0x34);
  *(undefined4 *)(puVar23 + 0x14) = 0x74;
  *(undefined1 **)(puVar23 + 0x14) = puVar14;
  *(char *)(iVar21 + 9) = (char)uVar25;
  *(undefined1 *)(iVar21 + 1) = uVar6;
  puVar10 = (undefined1 *)(iVar15 << 1);
  do {
    *(undefined1 **)(iVar15 + 0x54) = puVar10;
    *(undefined4 *)(iVar21 + 0x44) = uVar12;
    uVar12 = *(undefined4 *)(iVar15 + 100);
    iVar19 = *(int *)(puVar23 + 4);
    iVar15 = *(int *)(iVar19 + 0x54);
    *(char *)(iVar19 + 0x11) = (char)uVar12;
    *(undefined4 *)(iVar15 + 0x34) = uVar12;
    *(int *)(iVar24 + 0x24) = iVar21 << 1;
    *(undefined1 **)(puVar23 + 0x54) = puVar14;
    *(int *)(puVar23 + 0x14) = iVar19;
    puVar14 = *(undefined1 **)(iVar19 + 0x44);
code_r0x2c415b00:
    iVar15 = (int)*(short *)(iVar19 + iVar15);
    *(int *)(iVar19 + 0x54) = iVar24;
    iVar24 = *(int *)(iVar15 + 0x44);
    *(char *)(iVar24 + 0x11) = (char)puVar23;
    *(char *)(iVar24 + 9) = (char)puVar14;
    *(int *)(iVar24 + 0x14) = iVar15;
    iVar21 = *(int *)(iVar15 + 0x14);
    *(undefined1 **)(iVar15 + 0x54) = puVar23;
    *(char *)(iVar21 + 9) = (char)puVar14;
    *(int *)(iVar21 + 0x14) = iVar15;
code_r0x2c415b1c:
    iVar24 = iVar15 * 2;
    *(char *)(iVar15 + 0x11) = (char)puVar10;
    iVar15 = *(int *)(*(int *)(iVar15 + 0x44) + 0x44);
    uVar6 = (undefined1)iVar24;
    *(undefined1 *)(iVar21 + 0x15) = uVar6;
    *(undefined1 *)(iVar15 + 0x11) = uVar6;
    puVar28 = *(undefined1 **)(iVar24 + 0x14);
    puVar23 = *(undefined1 **)(iVar21 * 2 + 0x44);
    iVar15 = *(int *)(iVar21 + 0x54);
    puVar10 = *(undefined1 **)(puVar23 + 4);
code_r0x2c415b40:
    puVar23[0x11] = uVar6;
    *(undefined1 **)(iVar15 + 0x74) = puVar23;
    iVar22 = iRam2c415e88;
    puVar23 = *(undefined1 **)(iVar15 + 0x34);
    puVar14 = (undefined1 *)0xdc;
    while( true ) {
      uVar16 = (uint)(byte)puVar10[iVar15];
      iVar21 = uVar16 - 0x2b;
      uVar12 = uRam2c415c88;
      if (SBORROW4(uVar16 - 0x16,0x15)) break;
      iVar19 = uVar16 - 0x69;
      if (SBORROW4(iVar21,0x3e)) goto code_r0x2c415b00;
      bVar33 = SBORROW4(iVar19,0x3e);
      iVar19 = uVar16 - 0xa7;
      while( true ) {
        iVar21 = iVar19;
        if (bVar33) goto code_r0x2c415b1c;
        if (SBORROW4(iVar21,0x3e)) goto code_r0x2c415b40;
        if (SBORROW4(iVar21 + -0x3e,0x3e)) break;
        bVar33 = SBORROW4(iVar21 + -0x7c,0x3e);
        iVar19 = iVar21 + -0xba;
        if (!bVar33) {
          bVar33 = SBORROW4(iVar21 + -0x137,0x3e);
          uVar16 = iVar21 - 0x175;
          puVar13 = puRam2c415cf4;
          if (bVar33) {
            VectorWidenMultipyAccumulate(in_d3,unaff_d12,1);
            if (SBORROW4(uVar16,0x3e)) {
              uVar16 = iVar21 - 0x1f1;
              if (SBORROW4(iVar21 + -0x1b3,0x3e)) {
                bVar33 = SBORROW4(uVar16,0x3e);
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
              bVar3 = puVar23[5];
              uVar16 = (uint)bVar3;
              *(char *)(iVar22 + 0xc) = (char)puVar28;
              *(uint *)(puVar23 + 0x14) = uVar16;
              puVar13 = *(undefined1 **)(uVar16 + 0x14);
              *(byte *)(iVar22 + 0x19) = bVar3;
              puVar28 = *(undefined1 **)(uVar16 + 0x44);
              *(undefined1 **)(iVar22 + 0x10) = puVar28;
              puVar23[1] = (char)puVar10;
              *(undefined1 **)(iVar22 + 0x30) = puVar28;
            }
            *(int *)(iVar22 + 0x14) = iVar22;
            uVar12 = *(undefined4 *)(puVar23 + 0x34);
            *(char *)(iVar22 + 0xc) = (char)puVar28;
            *(undefined4 *)(puVar23 + 0x34) = uVar12;
            *(char *)(iVar22 + 0x14) = (char)puVar28;
            *(uint *)(puVar23 + 100) = uVar16;
            *(int *)(puVar23 + 0x34) = iVar22;
            puVar10 = puVar23 + -0x20;
            *(char *)(uVar16 + 9) = (char)puVar13;
            iVar24 = (int)*(short *)(iVar22 * 2);
            puVar23[-0xf] = (char)iVar22;
            puVar23 = puVar10;
code_r0x2c415bf8:
            bVar33 = SBORROW4((int)puVar10,0x66);
            puVar23[9] = (char)puVar10 + -0x66;
            *(undefined1 **)(iVar22 + 0x34) = puVar28;
            *(undefined1 **)(iVar24 + 0x54) = puVar28;
            *(undefined1 **)(iVar22 + 0x34) = puVar23;
            *(undefined1 **)(iVar22 + 0x44) = puVar28;
            *(char *)(uVar16 + 9) = (char)puVar13;
code_r0x2c415c14:
            uVar16 = _DAT_00000104;
            puVar10 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar13 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar14 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar17 = (undefined4 *)((int)register0x00000054 + 0x30c);
            puVar23 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar28 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar34 = (uint *)((int)register0x00000054 + -0x10c);
            puVar30 = (undefined1 *)((int)register0x00000054 + -0x10c);
            if ((undefined1 *)register0x00000054 != (undefined1 *)0xfffffcf4) {
              if (((uint)puVar10 & 0xff) != 0) {
                *(undefined1 **)((int)register0x00000054 + -0x110) = puVar28;
                *(undefined1 **)((int)register0x00000054 + -0x114) = puVar23;
                *(undefined1 **)((int)register0x00000054 + -0x118) = puVar13;
                puVar34 = (uint *)((int)register0x00000054 + -0x11c);
                *puVar34 = (uint)puVar10;
FUN_2c415c38:
                puVar34[-1] = unaff_lr;
                puVar34[-2] = (uint)puVar28;
                puVar34[-3] = (uint)puVar23;
                puVar34[-4] = (uint)puVar13;
                puVar34[-5] = (uint)puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar28 = (undefined1 *)((int)register0x00000054 + 0x208);
              if ((undefined1 *)register0x00000054 == (undefined1 *)0xfffffdf8)
              goto code_r0x2c415cf4;
              if ((undefined1 *)register0x00000054 != (undefined1 *)0xfffffdf8) {
                *(uint *)((int)register0x00000054 + -0x110) = unaff_lr;
                *(undefined1 **)((int)register0x00000054 + -0x114) =
                     (undefined1 *)((int)register0x00000054 + 0x208);
                *(undefined1 **)((int)register0x00000054 + -0x118) = puVar23;
                *(undefined1 **)((int)register0x00000054 + -0x11c) = puVar14;
                *(undefined1 **)((int)register0x00000054 + -0x120) = puVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar29 = 8;
              uVar18 = _DAT_00000104 << 2;
              bVar31 = (int)uVar18 < 0;
              bVar32 = uVar18 == 0;
              uRamfffffce8 = unaff_lr;
              uRamfffffce4 = 8;
              iRamfffffce0 = _DAT_00000110;
              uRamfffffcdc = 0x104;
              uRamfffffcd8 = _DAT_00000104;
              puVar10 = (undefined1 *)0xfffffcd4;
              uRamfffffcd4 = 0x104;
              iRamffffffec = _DAT_0000010c;
              uVar20 = _DAT_00000104;
              uVar12 = _DAT_00000108;
              if (bVar32 || bVar31 != bVar33) {
                iVar15 = _DAT_00000110;
                if (bVar32 || bVar31 != bVar33) {
                  if (bVar32 || bVar31 != bVar33) {
                    return CONCAT44(_DAT_00000104,0x104);
                  }
                  puVar1 = (undefined2 *)(_DAT_00000104 + 0x1e);
                  puVar2 = (undefined2 *)(_DAT_00000104 + 0x3e);
                  if (bVar32 || bVar31 != bVar33) {
                    *(undefined2 *)(_DAT_00000104 + 0x2e) = 0x104;
                    *puVar2 = 0x104;
                  }
                  else {
                    *(undefined2 *)(_DAT_00000104 + 0xe) = 0x104;
                    *puVar1 = 0x104;
                  }
                  uVar11 = (uint)*(ushort *)(uVar16 + 0x3e);
                  uRamfffffff4 = 8;
                  uVar20 = 0xfffffff4;
                  uVar12 = 0xfffffff4;
                  iVar15 = iRamffffffec;
                  goto LAB_2c415d8a;
                }
LAB_2c415dcc:
                *(short *)(uVar20 + 0xe) = (short)uVar18;
                puVar10 = (undefined1 *)0xfffffcd4;
                if (iVar15 != 0) {
                  uVar18 = uVar20 & 0xff;
                  if (uVar18 == 0) {
                    _UsageFault = uVar29;
                    if (uVar29 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffed8;
                      uRamfffffb88 = uVar29;
                      uRamfffffb84 = uVar29;
                      uRamfffffb80 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if ((uVar29 & 0xff) != 0) {
                      uRamfffffb90 = uVar29;
                      uRamfffffb8c = uVar29;
                      uRamfffffb88 = uVar29;
                      uRamfffffb84 = unaff_lr;
                      uRamfffffb80 = uVar29;
                      uRamfffffb7c = uVar29;
                      uRamfffffb78 = uVar29;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar29 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffee0;
                      uRamfffffb88 = uVar29;
                      uRamfffffb84 = uVar29;
                      uRamfffffb80 = 0xfffffee0;
                      uRamfffffb7c = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar29 == 0) {
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
                    uRamfffffb88 = uVar29;
                    uRamfffffb84 = uVar29;
                    uRamfffffb80 = 0xfffffedc;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  uRamfffffcc4 = 0x104;
                  puVar10 = (undefined1 *)0xfffffcc0;
                  uVar25 = 0x104;
                  uRamfffffcc0 = uVar20;
                  uRamfffffcc8 = uVar12;
                  uRamfffffccc = uVar18;
                  uRamfffffcd0 = uVar29;
LAB_2c415dd6:
                  *(uint *)(puVar10 + -4) = unaff_lr;
                  *(uint *)(puVar10 + -8) = uVar29;
                  *(uint *)(puVar10 + -0xc) = uVar18;
                  *(undefined4 *)(puVar10 + -0x10) = uVar12;
                  *(undefined4 *)(puVar10 + -0x14) = uVar25;
                  *(uint *)(puVar10 + -0x18) = uVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                uVar11 = 0x104;
                iVar15 = _DAT_00000110;
LAB_2c415d8a:
                uVar29 = 0xfffffff4;
                if (uVar11 == 0) {
                  puVar10 = (undefined1 *)0xfffffcd4;
                  uVar29 = (uint)*(ushort *)(uVar20 + 0x36);
                  if (iVar15 == 0) {
                    uVar18 = (uint)*(ushort *)(uVar20 + 6);
                    iVar15 = 0;
                    goto LAB_2c415dcc;
                  }
                }
                else {
                  if (uVar11 == 0) goto LAB_2c415e06;
                  puVar10 = (undefined1 *)0xfffffce0;
                  uVar25 = 0;
                  uVar12 = uRamfffffcd4;
                  uVar18 = uRamfffffcd8;
                  uVar29 = uRamfffffcdc;
                  if (iRamfffffff8 == 0) goto LAB_2c415dd6;
                  *(short *)(uVar20 + 0x16) = (short)uVar20;
                  *(short *)(uVar11 + 6) = (short)(uVar16 << 4);
                  *(short *)(uVar20 + 0x3e) = (short)uVar20;
                  uVar20 = (uint)*(ushort *)
                                  (*(ushort *)(*(ushort *)(*(ushort *)(uVar20 + 0xe) + 0x1e) + 0x2e)
                                  + 0x3e);
                  if (uVar16 << 4 != 0) {
                    return CONCAT44(iRamfffffce0,uVar11);
                  }
                  if (uVar16 << 4 != 0) {
                    if (uVar16 << 4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    *(undefined2 *)(uVar20 + 0xe) = 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  software_bkpt(0xce);
                  uVar5 = (undefined2)uRamfffffcdc;
                  *(undefined2 *)(uVar20 + 0xe) = uVar5;
                  *(undefined2 *)(uVar20 + 0x1e) = uVar5;
                  *(undefined2 *)(uVar20 + 0x26) = uVar5;
                  *(undefined2 *)(uVar20 + 0x2e) = uVar5;
                  *(undefined2 *)(uVar20 + 0x36) = uVar5;
                  *(undefined2 *)(uVar20 + 0x3e) = uVar5;
                }
                uVar29 = (uint)*(ushort *)(uVar20 + 0x1e);
                *(ushort *)(uVar20 + 0x2e) = *(ushort *)(uVar20 + 0x1e);
              }
              uVar18 = (uint)*(ushort *)(uVar20 + 6);
LAB_2c415e06:
              *(short *)(uVar20 + 0xe) = (short)uVar18;
              *(short *)(uVar20 + 0x1e) = (short)uVar29;
              *(uint *)(puVar10 + 0x33c) = uVar29;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
code_r0x2c415b9c:
            if (!bVar33) goto code_r0x2c415bf8;
            bVar33 = SBORROW4(uVar16,0x3e);
            register0x00000054 = (BADSPACEBASE *)puVar34;
            if (!bVar33) goto code_r0x2c415c14;
            if (!SBORROW4(uVar16 - 0x3e,0x3e)) goto FUN_2c415c38;
            if (SBORROW4(uVar16 - 0x7c,0x3e)) {
              puVar17 = (undefined4 *)(uVar16 - 0xf8);
              if (SBORROW4(uVar16 - 0xba,0x3e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              uVar5 = (undefined2)(uVar16 - 0xba);
              *(undefined2 *)(puVar10 + 0xe) = uVar5;
              *(undefined2 *)(puVar10 + 0x1e) = uVar5;
              *(undefined2 *)(puVar10 + 0x2e) = uVar5;
              *(undefined2 *)(puVar10 + 0x3e) = uVar5;
              puVar17 = (undefined4 *)(uint)*(ushort *)(puVar10 + 0x3e);
            }
          }
          puVar10 = (undefined1 *)*puVar17;
          puVar28 = (undefined1 *)puVar17[1];
          puVar23 = (undefined1 *)puVar17[3];
          puVar30 = (undefined1 *)puVar34;
          if (puVar17 != (undefined4 *)0xfffffff0) {
            *(uint *)((int)puVar34 + -4) = unaff_lr;
            *(int *)((int)puVar34 + -8) = (int)puVar10 << 2;
            *(undefined1 **)((int)puVar34 + -0xc) = puVar23;
            *(undefined1 **)((int)puVar34 + -0x10) = puVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x2c415cf4:
          *(uint *)(puVar30 + -4) = unaff_lr;
          *(undefined1 **)(puVar30 + -8) = puVar30 + 0x324;
          *(undefined1 **)(puVar30 + -0xc) = puVar23;
          *(undefined1 **)(puVar30 + -0x10) = puVar28;
          *(undefined1 **)(puVar30 + -0x14) = puVar10;
          uRam2c41601a = (short)puVar14;
          uRam2c416032 = (short)puVar14;
          *(undefined1 **)(puVar30 + -0x130) = puVar30 + 0x324;
          *(undefined1 **)(puVar30 + -0x134) = puVar23;
          *(uint *)(puVar30 + -0x138) = (uint)puVar14 & 0xffff;
          *(undefined4 *)(puVar30 + -0x13c) = 0x2c416014;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  } while( true );
}


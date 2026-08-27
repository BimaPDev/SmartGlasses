/* FUN_2c4144aa @ 0x2c4144aa */

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

undefined8 FUN_2c4144aa(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  int iVar19;
  int unaff_r4;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined1 *puVar23;
  undefined4 *puVar24;
  uint uVar25;
  int unaff_r5;
  int unaff_r6;
  int iVar26;
  int iVar27;
  undefined1 *puVar28;
  undefined2 unaff_r7;
  undefined4 uVar29;
  int iVar30;
  undefined1 *puVar31;
  uint uVar32;
  char unaff_r8;
  undefined1 *puVar33;
  uint unaff_lr;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  uint *puVar37;
  undefined4 in_cr3;
  undefined8 in_d3;
  undefined8 unaff_d12;
  undefined8 in_d24;
  undefined1 auStack_10 [4];
  
  puVar37 = (uint *)auStack_10;
  uVar7 = (undefined1)param_3;
  *(undefined1 *)(unaff_r6 + 1) = uVar7;
  *(char *)(unaff_r4 + 9) = (char)param_2;
  *(char *)(unaff_r5 + 8) = (char)param_2;
  *(undefined4 *)(unaff_r6 + 0x14) = param_1;
  *(undefined4 *)(unaff_r6 + 0x74) = param_3;
  *(short *)(param_2 + 0x3c) = (short)param_3;
  *(char *)(unaff_r6 + 0x15) = (char)param_4;
  *(undefined4 *)(unaff_r6 + 0x54) = param_1;
  *(undefined1 *)(unaff_r6 + 0xd) = uVar7;
  *(int *)(unaff_r5 + 0x74) = param_2;
  *(int *)(unaff_r5 + 0x14) = unaff_r5;
  *(undefined2 *)(param_2 + 0x16) = unaff_r7;
  *(int *)(unaff_r6 + 0x14) = unaff_r6;
  *(undefined1 *)(unaff_r6 + 0xd) = uVar7;
  *(int *)(unaff_r6 + 0x24) = unaff_r5;
  *(int *)(unaff_r6 + 0x54) = param_4;
  iVar20 = *(int *)(unaff_r6 + 100);
  uVar7 = (undefined1)unaff_r5;
  *(undefined1 *)(iVar20 + 5) = uVar7;
  uVar4 = *(undefined2 *)(iVar20 + 0x16);
  VectorShiftRight(in_d24,0x36);
  *(int *)(unaff_r6 + 0x14) = unaff_r6;
  *(char *)(unaff_r6 + 0xd) = (char)uVar4;
  *(int *)(unaff_r6 + 0x24) = unaff_r5;
  *(int *)(unaff_r6 + 0x54) = param_4;
  iVar21 = *(int *)(unaff_r6 + 100);
  *(undefined1 *)(iVar21 + 5) = uVar7;
  *(int *)(unaff_r6 + 0x14) = iVar21;
  uVar13 = *(undefined4 *)(iVar21 + 0x14);
  uVar8 = (undefined1)iVar21;
  *(undefined1 *)(unaff_r5 + 0x19) = uVar8;
  uVar29 = *(undefined4 *)(iVar21 + 0x44);
  *(undefined4 *)(unaff_r5 + 0x10) = uVar29;
  *(char *)(unaff_r6 + 1) = (char)param_1;
  *(undefined4 *)(unaff_r5 + 0x30) = uVar29;
  *(int *)(unaff_r5 + 0x14) = unaff_r5;
  uVar17 = *(undefined4 *)(unaff_r6 + 0x34);
  *(char *)(unaff_r5 + 0xc) = (char)uVar29;
  *(undefined4 *)(unaff_r6 + 0x34) = uVar17;
  sVar5 = *(short *)(unaff_r6 + unaff_r5);
  *(int *)(unaff_r5 + 0x44) = unaff_r5;
  *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(unaff_r5 + 0x40);
  *(char *)(unaff_r5 + 0xd) = (char)uVar13;
  uVar13 = *(undefined4 *)(sVar5 + 0x44);
  *(int *)(unaff_r5 + 0x30) = (int)sVar5;
  *(char *)(iVar21 + 0x10) = (char)uVar13;
  *(undefined1 *)(iVar21 + 9) = uVar7;
  *(undefined4 *)(iVar21 + 0x40) = uVar13;
  iVar20 = *(int *)(unaff_r5 + 0x74);
  *(char *)(iVar21 + 9) = (char)param_4;
  *(int *)(iVar21 + 0x14) = unaff_r5;
  *(int *)(iVar20 + 0x54) = iVar21;
  *(undefined1 *)(iVar21 + 9) = uVar8;
  *(int *)(iVar21 + 0x24) = (int)*(short *)(iVar20 + unaff_r5);
  *(undefined1 *)(iVar21 + 0xc) = 0x6b;
  *(int *)(iVar20 + 0x14) = iVar21;
  *(char *)(iVar20 + 0x11) = (char)uVar17;
  *(undefined1 *)(iVar21 + 9) = uVar8;
  sVar5 = *(short *)(iVar20 + unaff_r5);
  iVar19 = (int)sVar5;
  *(int *)(iVar21 + 0x24) = iVar19;
  *(undefined4 *)(iVar21 + 0x50) = 0x6b;
  *(int *)(unaff_r5 + 0x44) = iVar20;
  iVar20 = *(int *)(unaff_r5 + 0x54);
  *(undefined4 *)(iVar21 + 0x30) = 0x6b;
  iVar26 = *(int *)(unaff_r5 + 0x74);
  *(int *)(iVar21 + 0x54) = iVar21;
  uVar8 = (undefined1)iVar26;
  *(undefined1 *)(iVar20 + unaff_r5) = uVar8;
  uVar13 = s__cmark__realloc_returned_null_po_2c415548._16_4_;
  *(char *)(unaff_r5 + 0x19) = (char)s__cmark__realloc_returned_null_po_2c415548._16_4_;
  uVar4 = *(undefined2 *)(uVar13 + unaff_r5);
  *(undefined4 *)(iVar19 + 0x34) = *(undefined4 *)(iVar19 + 0x54);
  *(char *)(unaff_r5 + 0x19) = (char)uVar4;
  uVar17 = *(undefined4 *)(iVar19 + 0x54);
  *(int *)(iVar26 + 0x54) = iVar19;
  sVar6 = *(short *)(iVar26 + unaff_r5);
  uVar13 = *(undefined4 *)(unaff_r5 + 0x54);
  *(undefined4 *)(iVar19 + 0x34) = uVar17;
  *(int *)(iVar26 + 0x54) = (int)sVar6;
  *(undefined1 *)(unaff_r5 + 0x11) = uVar8;
  *(char *)(unaff_r5 + 0x19) = (char)sVar6;
  uVar17 = *(undefined4 *)(iVar19 + 0x54);
  sVar6 = *(short *)(sVar6 + unaff_r5);
  *(char *)(iVar26 + 0x11) = (char)sVar5;
  *(char *)(sVar6 + 9) = (char)uVar13;
  sVar5 = *(short *)(iVar26 + unaff_r5);
  *(undefined1 *)(unaff_r5 + 0x11) = uVar8;
  iVar19 = *(int *)(sVar5 + 100);
  iVar20 = *(int *)(iVar26 + 4);
  uVar7 = (undefined1)*(undefined4 *)(iVar19 + 0x54);
  *(undefined1 *)(iVar19 + 9) = uVar7;
  *(char *)(iVar20 + 1) = (char)iVar20;
  *(undefined1 *)(iVar20 + 9) = uVar7;
  bVar3 = *(byte *)(iVar26 + 5);
  uVar22 = (uint)bVar3;
  *(char *)(iVar19 + 0xc) = (char)uVar17;
  *(uint *)(iVar26 + 0x14) = uVar22;
  *(byte *)(iVar19 + 0x19) = bVar3;
  uVar17 = *(undefined4 *)(uVar22 + 0x44);
  *(undefined4 *)(iVar19 + 0x10) = uVar17;
  *(undefined1 *)(iVar26 + 1) = 0x73;
  *(undefined4 *)(iVar19 + 0x30) = uVar17;
  *(int *)(iVar19 + 0x14) = iVar19;
  uVar13 = *(undefined4 *)(iVar26 + 0x34);
  *(char *)(iVar19 + 0xc) = (char)uVar17;
  *(undefined4 *)(iVar26 + 0x34) = uVar13;
  *(undefined4 *)(iVar19 + 0x20) = uVar17;
  *(int *)(iVar26 + 100) = iVar19;
  *(int *)(uVar22 + 0x54) = iVar26;
  iVar20 = uVar22 * 2;
  *(uint *)(iVar26 + 0x14) = uVar22;
  *(undefined4 *)(iVar26 + 0x74) = uVar13;
  *(char *)(uVar22 + 0x11) = (char)iVar19;
  *(char *)(iVar20 + 0xd) = (char)uVar17;
  uVar7 = *(undefined1 *)(iVar19 + 9);
  *(int *)(iVar20 + 0x34) = iVar20;
  *(int *)(iVar19 + 0x14) = iVar19;
  uVar13 = *(undefined4 *)(iVar26 + 0x34);
  *(undefined1 *)(uVar22 + 9) = uVar7;
  sVar5 = *(short *)(iVar19 * 2);
  *(char *)(iVar26 + 0x11) = (char)sVar5;
  *(undefined4 *)(iVar26 + 0x24) = uVar13;
  *(int *)(iVar26 + 100) = iVar19;
  *(undefined4 *)(sVar5 + 0x74) = uVar17;
  *(undefined4 *)(iVar26 + 0x54) = *(undefined4 *)(iVar26 + 0x74);
  *(undefined1 *)(iVar26 + 0x15) = uVar7;
  *(char *)(uVar22 + 0xd) = (char)iVar19;
  *(byte *)(iVar26 + 0xd) = bVar3;
  *(undefined4 *)(uVar22 + 0x20) = 0x77;
  *(int *)(iVar26 + 100) = iVar19;
  *(int *)(uVar22 + 0x54) = iVar26;
  iVar19 = *(int *)(iVar26 + 4);
  *(undefined1 *)(iVar19 + 0xc) = 0x72;
  iVar21 = *(int *)(iVar19 + 0x40);
  *(undefined4 *)(iVar19 + 0x10) = 0x3e;
  uVar17 = *(undefined4 *)(iVar19 + 0x74);
  *(char *)(iVar26 + 0x11) = (char)uVar17;
  uVar13 = *(undefined4 *)(iVar21 + 100);
  *(undefined1 *)(iVar19 + 9) = uVar9;
  iVar20 = (int)*(short *)(iVar21 * 2);
  *(char *)(iVar26 + 0x11) = (char)*(short *)(iVar21 * 2);
  *(undefined4 *)(iVar26 + 0x24) = uVar17;
  *(int *)(iVar26 + 100) = iVar21;
  *(int *)(iVar20 + 0x74) = iVar19 << 1;
  iVar19 = *(int *)(iVar26 + 4);
  *(undefined1 *)(iVar21 + 9) = uVar9;
  *(char *)(iVar19 + 1) = (char)iVar19;
  uVar9 = (undefined1)uVar13;
  *(undefined1 *)(iVar19 + 9) = uVar9;
  bVar3 = *(byte *)(iVar26 + 5);
  *(char *)(iVar21 + 0xc) = (char)(iVar26 << 1);
  *(uint *)(iVar26 + 0x14) = (uint)bVar3;
  *(byte *)(iVar21 + 0x19) = bVar3;
  uVar17 = *(undefined4 *)(bVar3 + 0x44);
  *(undefined4 *)(iVar21 + 0x10) = uVar17;
  *(undefined1 *)(iVar26 + 1) = 0x3e;
  *(undefined4 *)(iVar21 + 0x30) = uVar17;
  *(int *)(iVar21 + 0x14) = iVar21;
  uVar13 = *(undefined4 *)(iVar26 + 0x34);
  *(char *)(iVar21 + 0xc) = (char)uVar17;
  *(undefined4 *)(iVar26 + 0x34) = uVar13;
  *(undefined4 *)(iVar21 + 0x30) = uVar17;
  *(int *)(iVar21 + 0x14) = iVar21;
  *(int *)(iVar21 + 0x30) = iVar26;
  *(int *)(iVar20 + 0x34) = iVar20;
  *(int *)(iVar21 + 0x14) = iVar21;
  *(undefined4 *)(iVar26 + 0x54) = *(undefined4 *)(iVar26 + 0x34);
  uVar22 = *(uint *)(iVar21 + 0x74);
  *(undefined4 *)(iVar26 + 0x54) = *(undefined4 *)(iVar26 + 0x34);
  *(char *)(iVar26 + 0x15) = (char)uVar22;
  *(int *)(uVar22 + 0x44) = iVar21;
  iVar21 = *(int *)(iVar26 + 0x44);
  *(uint *)(iVar26 + 0x54) = uVar22;
  *(undefined4 *)(uVar22 + 0x10) = *(undefined4 *)(iVar26 + 0x74);
  *(char *)(iVar26 + 0x11) = (char)*(undefined4 *)(uVar22 + 0x74);
  uVar13 = *(undefined4 *)(iVar21 + 100);
  *(int *)(iVar20 + 0x34) = iVar20;
  *(int *)(iVar21 + 0x14) = iVar21;
  *(int *)(uVar22 + 0x14) = iVar20;
  iVar20 = *(int *)(iVar21 + 0x44);
  *(uint *)(iVar21 + 0x34) = uVar22 >> 9;
  *(undefined1 *)(iVar20 + 8) = 0x5d;
  uVar7 = (undefined1)iVar21;
  *(undefined1 *)(iVar20 + 0x11) = uVar7;
  *(undefined1 *)(iVar26 + 9) = uVar7;
  *(int *)(iVar21 + 0x54) = iVar26;
  *(undefined1 *)(iVar21 + 0x15) = uVar8;
  puVar23 = *(undefined1 **)(iVar21 + 0x44);
  *puVar23 = 100;
  iVar19 = *(int *)(iVar21 + 0x14);
  *(undefined1 *)(iVar21 + 0x11) = uVar8;
  puVar23[9] = uVar7;
  *(undefined4 *)(puVar23 + 0x24) = uVar13;
  *(char *)(iVar21 + 9) = (char)iVar19;
  iVar20 = *(int *)(iVar26 + 0x14);
  *(int *)(iVar21 + 0x74) = iVar26;
  *(undefined4 *)(iVar19 + 0x34) = 0x2c;
  uVar13 = *(undefined4 *)(iVar20 + 0x44);
  iVar20 = *(int *)(iVar21 + 0x74);
  *(undefined1 *)(iVar19 + 9) = 0x2c;
  *(int *)(iVar20 + 0x14) = iVar21;
  *(int *)(iVar21 + 0x34) = iVar19;
  iVar20 = *(int *)(iVar26 + 4);
  uVar8 = (undefined1)uVar13;
  *(undefined1 *)(iVar21 + 9) = uVar8;
  *(char *)(iVar20 + 1) = (char)iVar20;
  *(undefined1 *)(iVar20 + 9) = uVar8;
  bVar3 = *(byte *)(iVar26 + 5);
  uVar22 = (uint)bVar3;
  *(char *)(iVar21 + 0xc) = (char)iVar19;
  *(uint *)(iVar26 + 0x14) = uVar22;
  iVar20 = *(int *)(uVar22 + 0x14);
  *(byte *)(iVar21 + 0x19) = bVar3;
  uVar17 = *(undefined4 *)(uVar22 + 0x44);
  *(undefined4 *)(iVar21 + 0x10) = uVar17;
  *(undefined1 *)(iVar26 + 1) = 0x2c;
  *(undefined4 *)(iVar21 + 0x30) = uVar17;
  *(int *)(iVar21 + 0x14) = iVar21;
  uVar13 = *(undefined4 *)(iVar26 + 0x34);
  *(char *)(iVar21 + 0xc) = (char)uVar17;
  *(undefined4 *)(iVar26 + 0x34) = uVar13;
  sVar5 = *(short *)(iVar26 + iVar21);
  iVar26 = (int)sVar5;
  *(undefined4 *)(iVar26 + 0x14) = 0x2c;
  uVar8 = (undefined1)uVar13;
  *(undefined1 *)(iVar26 + 0xd) = uVar8;
  *(undefined1 *)(uVar22 + 9) = uVar7;
  *(int *)(iVar21 + 0x30) = iVar26;
  *(char *)(uVar22 + 9) = (char)iVar20;
  iVar19 = (int)*(short *)(iVar21 * 2);
  *(undefined4 *)(iVar26 + 0x14) = 0x2c;
  *(undefined1 *)(iVar26 + 0xd) = uVar8;
  *(undefined1 *)(uVar22 + 9) = uVar7;
  *(undefined1 *)(uVar22 + 0x1d) = uVar7;
  uVar29 = *(undefined4 *)(iVar19 + 0x44);
  *(int *)(iVar26 + 0x74) = iVar26;
  *(char *)(iVar20 + iVar21) = (char)sVar5;
  uVar13 = s_container_parent__p_lv_node__p_c_2c415734._20_4_;
  *(undefined1 *)(s_container_parent__p_lv_node__p_c_2c415734._20_4_ + 9) = uVar7;
  *(undefined4 *)(uVar13 + 0x30) = 0x6c;
  *(int *)(iVar21 + 0x14) = iVar21;
  iVar20 = *(int *)(iVar26 + 0x34);
  *(char *)(iVar21 + 0xd) = (char)*(undefined4 *)(uVar13 + 100);
  uVar17 = s_____>_ADD_item__content__s_2c415784._0_4_;
  uVar13 = s_______thirdparty_star_air_lvgl_a_2c415680._48_4_;
  *(int *)(iVar20 + 0x54) = iVar19;
  *(undefined4 *)(uVar13 + 0x14) = 0x74;
  uVar8 = (undefined1)iVar20;
  *(undefined1 *)(uVar13 + 0xd) = uVar8;
  *(undefined1 *)(uVar17 + 9) = uVar7;
  *(undefined4 *)(uVar17 + 0x60) = 0x74;
  *(char *)(iVar21 + 0xd) = (char)*(undefined4 *)(iVar21 + 100);
  *(undefined4 *)(iVar21 + 0x54) = 0x74;
  iVar27 = *(int *)(uVar17 + 0x44);
  *(undefined4 *)(uVar17 + 0x74) = *(undefined4 *)(iVar21 + 100);
  cVar10 = (char)uVar17;
  *(char *)(iVar21 + 0x19) = cVar10;
  uVar7 = (undefined1)uVar29;
  *(undefined1 *)(iVar19 + 0xd) = uVar7;
  *(char *)(iVar27 + 9) = cVar10;
  *(int *)(uVar17 + 0x14) = iVar21;
  sVar5 = *(short *)(iVar21 * 2);
  iVar21 = (int)sVar5;
  *(undefined4 *)(iVar27 + 0x14) = 100;
  *(undefined1 *)(iVar27 + 0xd) = uVar8;
  *(char *)(uVar17 + 9) = (char)sVar5;
  *(undefined4 *)(iVar19 + 100) = uVar29;
  uVar11 = (undefined1)*(undefined4 *)(iVar21 + 100);
  *(undefined1 *)(iVar21 + 0xd) = uVar11;
  *(char *)(iVar21 + 0x19) = cVar10;
  *(undefined1 *)(iVar19 + 0xd) = uVar7;
  *(char *)(iVar27 + 9) = cVar10;
  *(int *)(uVar17 + 0x14) = iVar21;
  uVar4 = *(undefined2 *)(iVar21 * 2);
  *(int *)(iVar27 + 0x14) = iVar21 << 1;
  *(undefined1 *)(iVar27 + 0xd) = uVar8;
  *(char *)(uVar17 + 9) = (char)uVar4;
  *(undefined4 *)(iVar19 + 0x34) = uVar29;
  *(int *)(iVar27 + 0x54) = iVar20;
  *(undefined1 *)(uVar17 + 0x11) = uVar11;
  iVar26 = uVar17 * 2;
  iVar20 = *(int *)(iVar27 + 4);
  *(undefined1 *)(iVar26 + 9) = uVar11;
  *(char *)(iVar20 + 1) = (char)iVar20;
  *(undefined1 *)(iVar20 + 9) = uVar11;
  bVar3 = *(byte *)(iVar27 + 5);
  uVar22 = (uint)bVar3;
  *(undefined1 *)(iVar26 + 0xc) = uVar7;
  *(uint *)(iVar27 + 0x14) = uVar22;
  *(byte *)(iVar26 + 0x19) = bVar3;
  uVar13 = *(undefined4 *)(uVar22 + 0x44);
  *(undefined4 *)(iVar26 + 0x10) = uVar13;
  *(char *)(iVar27 + 1) = (char)(iVar21 << 1);
  *(undefined4 *)(iVar26 + 0x30) = uVar13;
  *(int *)(iVar26 + 0x14) = iVar26;
  iVar19 = *(int *)(iVar27 + 0x34);
  *(char *)(iVar26 + 0xc) = (char)uVar13;
  *(int *)(iVar27 + 0x34) = iVar19;
  iVar30 = *(int *)(iVar26 + 0x10);
  iVar27 = *(int *)(iVar26 + 0x44);
  uVar13 = *(undefined4 *)(iVar26 + 100);
  *(char *)(uVar22 + 0xd) = (char)iVar26;
  *(int *)(iVar26 + 0x30) = iVar27;
  *(uint *)(uVar22 + 0x54) = uVar22;
  iVar20 = *(int *)(iVar26 + 0x14);
  iVar21 = iVar26 + -0x3d;
  *(undefined1 *)(iVar20 + 0xc) = 0x6d;
  *(int *)(iVar27 + 0x24) = iVar21;
  iVar27 = *(int *)(iVar30 + 0x40);
  uVar7 = (undefined1)uVar13;
  *(undefined1 *)(iVar20 + 0xd) = uVar7;
  *(int *)(*(short *)(iVar27 + iVar21) + 0x54) = (int)*(short *)(iVar27 + iVar21);
  iVar20 = *(int *)(iVar26 + -0x29);
  *(undefined1 *)(iVar20 + 9) = uVar7;
  *(undefined4 *)(iVar27 + 0x54) = *(undefined4 *)(iVar20 + 0x54);
  *(char *)(iVar21 * 2 + 0x11) = (char)iVar27;
  iVar21 = *(int *)(iVar20 + 100);
  iVar20 = iVar27 * 2;
  *(undefined4 *)(iVar20 + 0x74) = *(undefined4 *)(iVar21 + 0x54);
  *(undefined4 *)(iVar20 + 0x30) = 0x44;
  *(int *)(iVar27 + 0x54) = iVar20;
  *(char *)(iVar21 + 0x11) = (char)iVar27;
  iVar20 = iRam0000006e;
  uVar7 = (undefined1)iRam0000006e;
  *(char *)(_DAT_0000004e + 0xc) = (char)*(undefined4 *)(_DAT_0000004e + 100);
  puVar23 = puRam2c415834;
  iVar21 = *(int *)(puRam2c415834 + 0x74);
  uRam000000ac = (undefined2)iVar20;
  _DAT_000000ae = (undefined2)((uint)iVar20 >> 0x10);
  *(undefined4 *)(iVar20 + 0x14) = 0x72;
  *(int *)(iVar20 + 0x54) = iVar19 + -0x74;
  uRam00000053 = SUB41(puVar23,0);
  iVar27 = *(int *)(iVar21 + 100);
  uRam00000069 = uVar7;
  _DAT_0000007e = iVar27;
  *puVar23 = 0x3a;
  *(undefined4 *)(puVar23 + 0x30) = 0x70;
  iVar26 = *(int *)(puVar23 + 0x44);
  iVar21 = (int)*(short *)(iVar26 * 2);
  *(int *)(iVar21 + 0x54) = iVar21;
  *(int *)(iVar21 + 0x40) = iVar26;
  *(undefined1 *)(iVar21 + 0xc) = 0x70;
  *(int *)(iVar20 + 0x14) = iVar21;
  *(char *)(iVar20 + 0x11) = (char)(iVar19 + -0x151);
  *(int *)(iVar21 + 0x40) = iVar26;
  *(char *)(iVar21 + 0x14) = (char)iVar26;
  uVar13 = *(undefined4 *)(iVar21 + 0x60);
  *(char *)(iVar26 + 0x11) = (char)iVar27;
  *(undefined4 *)(iVar21 + 0x10) = uVar13;
  *(undefined4 *)(iVar21 + 0x30) = uVar13;
  iVar27 = *(int *)(iVar26 + 100);
  *(int *)(iVar20 + 0x14) = iVar21;
  uVar13 = *(undefined4 *)(iVar26 + 100);
  *(char *)(iVar21 + 9) = (char)iVar26;
  *(char *)(iVar26 + 0x11) = (char)uVar13 + unaff_r8;
  uVar13 = *(undefined4 *)(iVar21 + 0x74);
  *(undefined1 *)(*(int *)(iVar21 + 0x54) + 0x11) = uVar7;
  iVar26 = *(int *)(iVar21 + 100);
  sVar5 = (short)(iVar19 + -0x151) + -0xd9;
  *(char *)(iVar21 + 0xc) = (char)iVar26;
  *(short *)(iVar21 + 6) = sVar5;
  *(short *)(iVar21 + 6) = sVar5;
  uVar7 = (undefined1)uVar13;
  *(undefined1 *)(iVar20 + 0x15) = uVar7;
  *(undefined1 *)(iVar20 + -0x18) = uVar7;
  uVar13 = *(undefined4 *)(iVar26 + 100);
  *(undefined1 *)(iVar20 + -0x45) = 0x3c;
  *(int *)(iVar26 + 0x54) = iVar21;
  *(undefined1 *)(iVar21 + 0xc) = 0x6e;
  iVar19 = *(int *)(iVar27 + 0x10);
  iRam0000004a = iVar26;
  *(char *)(iVar26 + 1) = (char)iVar19;
  *(char *)(iVar19 + 0x11) = (char)iVar26;
  *(int *)(iVar26 + 0x40) = iVar19;
  *(char *)(iVar21 + 0x11) = (char)uVar13;
  *(undefined1 *)(iVar19 + 0x15) = uVar7;
  iVar20 = *(int *)(iVar21 + 0x24);
  iVar19 = (uint)*(byte *)(iVar19 + -0x2d + iVar26) * 2;
  uVar4 = (undefined2)iVar20;
  *(undefined2 *)(iVar19 + 6) = uVar4;
  *(undefined2 *)(iVar19 + 6) = uVar4;
  iVar19 = iVar20 * 4;
  *(undefined2 *)(iVar19 + 6) = uVar4;
  iVar26 = iVar20 * 0x10;
  *(int *)(iVar26 + 0x54) = iVar20;
  *(int *)(iVar26 + 0x54) = iVar26;
  *(int *)(iVar20 * 4 + 0x44) = iVar27;
  iVar20 = *(int *)(iVar19 + 0x44);
  uVar7 = (undefined1)*(undefined4 *)(iVar20 + 0x54);
  *(undefined1 *)(iVar20 + 0x11) = uVar7;
  *(char *)(iVar19 + 9) = (char)iVar20;
  *(undefined1 *)(iVar26 + 9) = 0;
  *(int *)(iVar20 + 0x34) = iVar27;
  *(char *)(iVar19 + 0xd) = (char)iVar20;
  iVar20 = (int)*(short *)(iVar26 + iVar20);
  iVar21 = *(int *)(iVar19 + 0x54);
  uVar13 = *(undefined4 *)(iVar26 + 4);
  *(undefined1 *)(iVar19 + 0xd) = uVar7;
  *(undefined1 *)(iVar21 + 0xd) = uVar7;
  *(char *)(iVar21 + 0x19) = (char)iVar19;
  *(char *)(iVar20 + 0xd) = (char)iVar27;
  *(char *)(iVar19 + 0x11) = (char)iVar21;
  *(int *)(iVar20 + 0x34) = iVar27;
  iVar27 = *(int *)(iVar21 + 100);
  *(int *)(iVar26 + 0x54) = iVar19;
  *(char *)(iVar21 + 0x11) = (char)iVar26;
  *(undefined4 *)(iVar26 + 0x54) = uVar13;
  iVar21 = *(int *)(iVar19 + 0x34);
  *(int *)(iVar20 + 0x34) = iVar27;
  *(undefined4 *)(iVar21 + 0x14) = uVar13;
  *(char *)(iVar27 + 0x14) = (char)iVar19;
  iVar19 = *(int *)(*(int *)(iVar21 + 0x74) + 100);
  iVar20 = *(int *)(iVar19 + 4);
  *(undefined1 *)(iVar21 + 9) = uVar7;
  *(char *)(iVar20 + 1) = (char)iVar20;
  *(undefined1 *)(iVar20 + 9) = uVar7;
  bVar3 = *(byte *)(iVar19 + 5);
  uVar22 = (uint)bVar3;
  *(char *)(iVar21 + 0xc) = (char)iVar19;
  *(uint *)(iVar19 + 0x14) = uVar22;
  iVar20 = *(int *)(uVar22 + 0x14);
  *(byte *)(iVar21 + 0x19) = bVar3;
  uVar17 = *(undefined4 *)(uVar22 + 0x44);
  *(undefined4 *)(iVar21 + 0x10) = uVar17;
  *(char *)(iVar19 + 1) = (char)uVar13;
  *(undefined4 *)(iVar21 + 0x30) = uVar17;
  *(int *)(iVar21 + 0x14) = iVar21;
  puVar18 = *(undefined1 **)(iVar19 + 0x34);
  *(char *)(iVar21 + 0xc) = (char)uVar17;
  *(undefined1 **)(iVar19 + 0x34) = puVar18;
  *(undefined4 *)(iVar21 + 0x44) = *(undefined4 *)(iVar21 + 0x60);
  uVar13 = *(undefined4 *)(iVar20 + 100);
  *(int *)(iVar19 + 0x14) = iVar19;
  puVar28 = puRam0000009b;
  uVar22 = *(uint *)(iVar21 + 0x14);
  *(uint *)(uVar22 + 0x54) = uVar22;
  *(undefined1 *)(uVar22 + 0x10) = 0x6e;
  uVar7 = (undefined1)uVar13;
  DAT_00000074 = uVar7;
  *(undefined1 *)(uVar22 + 0xc) = 0x27;
  *(undefined4 *)(uVar22 + 0x10) = 0x65;
  *(undefined4 *)(uVar22 + 0x40) = 0x27;
  uVar22 = uVar22 >> 9;
  *(uint *)(uVar22 + 0x54) = uVar22;
  *(undefined4 *)(*(int *)(uVar22 + 0x74) + 0x24) = 0x73;
  iVar20 = _DAT_0000007e;
  iRam0000004a._0_2_ = CONCAT11(0x74,(undefined1)iRam0000004a);
  *(undefined4 *)(*(int *)(CONCAT22(uRam000000b0,_DAT_000000ae) + 0x34) + 0x24) = 0x73;
  iVar19 = *(int *)(*(int *)(iVar20 + 0x74) + 0x34);
  uVar8 = (undefined1)iVar19;
  *(undefined1 *)(*(int *)(iVar20 + 0x74) + 0x15) = uVar8;
  puVar28[0x11] = uVar8;
  uVar17 = *(undefined4 *)(iVar20 + 0x54);
  *(undefined4 *)(iVar19 + 0x24) = uVar17;
  iVar21 = *(int *)(iVar20 + 0x74);
  iVar19 = *(int *)(iVar21 + 0x34);
  *(undefined4 *)(puVar28 + 0x14) = 0x74;
  *(undefined1 **)(puVar28 + 0x14) = puVar18;
  *(char *)(iVar21 + 9) = (char)uVar17;
  *(undefined1 *)(iVar21 + 1) = uVar7;
  puVar23 = (undefined1 *)(iVar20 << 1);
  do {
    *(undefined1 **)(iVar20 + 0x54) = puVar23;
    *(undefined4 *)(iVar21 + 0x44) = uVar13;
    uVar13 = *(undefined4 *)(iVar20 + 100);
    iVar26 = *(int *)(puVar28 + 4);
    iVar20 = *(int *)(iVar26 + 0x54);
    *(char *)(iVar26 + 0x11) = (char)uVar13;
    *(undefined4 *)(iVar20 + 0x34) = uVar13;
    *(int *)(iVar19 + 0x24) = iVar21 << 1;
    *(undefined1 **)(puVar28 + 0x54) = puVar18;
    *(int *)(puVar28 + 0x14) = iVar26;
    puVar18 = *(undefined1 **)(iVar26 + 0x44);
code_r0x2c415b00:
    iVar20 = (int)*(short *)(iVar26 + iVar20);
    *(int *)(iVar26 + 0x54) = iVar19;
    iVar19 = *(int *)(iVar20 + 0x44);
    *(char *)(iVar19 + 0x11) = (char)puVar28;
    *(char *)(iVar19 + 9) = (char)puVar18;
    *(int *)(iVar19 + 0x14) = iVar20;
    iVar21 = *(int *)(iVar20 + 0x14);
    *(undefined1 **)(iVar20 + 0x54) = puVar28;
    *(char *)(iVar21 + 9) = (char)puVar18;
    *(int *)(iVar21 + 0x14) = iVar20;
code_r0x2c415b1c:
    iVar19 = iVar20 * 2;
    *(char *)(iVar20 + 0x11) = (char)puVar23;
    iVar20 = *(int *)(*(int *)(iVar20 + 0x44) + 0x44);
    uVar7 = (undefined1)iVar19;
    *(undefined1 *)(iVar21 + 0x15) = uVar7;
    *(undefined1 *)(iVar20 + 0x11) = uVar7;
    puVar31 = *(undefined1 **)(iVar19 + 0x14);
    puVar28 = *(undefined1 **)(iVar21 * 2 + 0x44);
    iVar20 = *(int *)(iVar21 + 0x54);
    puVar23 = *(undefined1 **)(puVar28 + 4);
code_r0x2c415b40:
    puVar28[0x11] = uVar7;
    *(undefined1 **)(iVar20 + 0x74) = puVar28;
    iVar27 = iRam2c415e88;
    puVar28 = *(undefined1 **)(iVar20 + 0x34);
    puVar18 = (undefined1 *)0xdc;
    while( true ) {
      uVar22 = (uint)(byte)puVar23[iVar20];
      iVar21 = uVar22 - 0x2b;
      uVar13 = uRam2c415c88;
      if (SBORROW4(uVar22 - 0x16,0x15)) break;
      iVar26 = uVar22 - 0x69;
      if (SBORROW4(iVar21,0x3e)) goto code_r0x2c415b00;
      bVar36 = SBORROW4(iVar26,0x3e);
      iVar26 = uVar22 - 0xa7;
      while( true ) {
        iVar21 = iVar26;
        if (bVar36) goto code_r0x2c415b1c;
        if (SBORROW4(iVar21,0x3e)) goto code_r0x2c415b40;
        if (SBORROW4(iVar21 + -0x3e,0x3e)) break;
        bVar36 = SBORROW4(iVar21 + -0x7c,0x3e);
        iVar26 = iVar21 + -0xba;
        if (!bVar36) {
          bVar36 = SBORROW4(iVar21 + -0x137,0x3e);
          uVar22 = iVar21 - 0x175;
          puVar14 = puRam2c415cf4;
          if (bVar36) {
            VectorWidenMultipyAccumulate(in_d3,unaff_d12,1);
            if (SBORROW4(uVar22,0x3e)) {
              uVar22 = iVar21 - 0x1f1;
              if (SBORROW4(iVar21 + -0x1b3,0x3e)) {
                bVar36 = SBORROW4(uVar22,0x3e);
                uVar22 = iVar21 - 0x1df;
                coprocessor_loadlong(0xc,in_cr3,uVar22);
                goto code_r0x2c415b9c;
              }
            }
            else {
              uVar7 = SUB41(puRam2c415cf4,0);
              *(undefined1 *)(iRam2c415e88 + 9) = uVar7;
              *(char *)(iVar21 + -0x1b2) = (char)(iVar21 + -0x1b3);
              *(undefined1 *)(iVar21 + -0x1aa) = uVar7;
              bVar3 = puVar28[5];
              uVar22 = (uint)bVar3;
              *(char *)(iVar27 + 0xc) = (char)puVar31;
              *(uint *)(puVar28 + 0x14) = uVar22;
              puVar14 = *(undefined1 **)(uVar22 + 0x14);
              *(byte *)(iVar27 + 0x19) = bVar3;
              puVar31 = *(undefined1 **)(uVar22 + 0x44);
              *(undefined1 **)(iVar27 + 0x10) = puVar31;
              puVar28[1] = (char)puVar23;
              *(undefined1 **)(iVar27 + 0x30) = puVar31;
            }
            *(int *)(iVar27 + 0x14) = iVar27;
            uVar13 = *(undefined4 *)(puVar28 + 0x34);
            *(char *)(iVar27 + 0xc) = (char)puVar31;
            *(undefined4 *)(puVar28 + 0x34) = uVar13;
            *(char *)(iVar27 + 0x14) = (char)puVar31;
            *(uint *)(puVar28 + 100) = uVar22;
            *(int *)(puVar28 + 0x34) = iVar27;
            puVar23 = puVar28 + -0x20;
            *(char *)(uVar22 + 9) = (char)puVar14;
            iVar19 = (int)*(short *)(iVar27 * 2);
            puVar28[-0xf] = (char)iVar27;
            puVar28 = puVar23;
code_r0x2c415bf8:
            bVar36 = SBORROW4((int)puVar23,0x66);
            puVar28[9] = (char)puVar23 + -0x66;
            *(undefined1 **)(iVar27 + 0x34) = puVar31;
            *(undefined1 **)(iVar19 + 0x54) = puVar31;
            *(undefined1 **)(iVar27 + 0x34) = puVar28;
            *(undefined1 **)(iVar27 + 0x44) = puVar31;
            *(char *)(uVar22 + 9) = (char)puVar14;
            puVar14 = &stack0x00000004;
code_r0x2c415c14:
            uVar22 = _DAT_00000104;
            puVar23 = puVar14 + 0x30c;
            puVar15 = puVar14 + 0x30c;
            puVar18 = puVar14 + 0x30c;
            puVar24 = (undefined4 *)(puVar14 + 0x30c);
            puVar28 = puVar14 + 0x30c;
            puVar31 = puVar14 + 0x30c;
            puVar37 = (uint *)(puVar14 + -0x10c);
            puVar33 = puVar14 + -0x10c;
            if (puVar14 != (undefined1 *)0xfffffcf4) {
              if (((uint)puVar23 & 0xff) != 0) {
                *(undefined1 **)(puVar14 + -0x110) = puVar31;
                *(undefined1 **)(puVar14 + -0x114) = puVar28;
                *(undefined1 **)(puVar14 + -0x118) = puVar15;
                puVar37 = (uint *)(puVar14 + -0x11c);
                *puVar37 = (uint)puVar23;
FUN_2c415c38:
                puVar37[-1] = unaff_lr;
                puVar37[-2] = (uint)puVar31;
                puVar37[-3] = (uint)puVar28;
                puVar37[-4] = (uint)puVar15;
                puVar37[-5] = (uint)puVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar31 = puVar14 + 0x208;
              if (puVar14 == (undefined1 *)0xfffffdf8) goto code_r0x2c415cf4;
              if (puVar14 != (undefined1 *)0xfffffdf8) {
                *(uint *)(puVar14 + -0x110) = unaff_lr;
                *(undefined1 **)(puVar14 + -0x114) = puVar14 + 0x208;
                *(undefined1 **)(puVar14 + -0x118) = puVar28;
                *(undefined1 **)(puVar14 + -0x11c) = puVar18;
                *(undefined1 **)(puVar14 + -0x120) = puVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar32 = 8;
              uVar25 = _DAT_00000104 << 2;
              bVar34 = (int)uVar25 < 0;
              bVar35 = uVar25 == 0;
              uRamfffffce8 = unaff_lr;
              uRamfffffce4 = 8;
              iRamfffffce0 = _DAT_00000110;
              uRamfffffcdc = 0x104;
              uRamfffffcd8 = _DAT_00000104;
              puVar23 = (undefined1 *)0xfffffcd4;
              uRamfffffcd4 = 0x104;
              iRamffffffec = _DAT_0000010c;
              uVar16 = _DAT_00000104;
              uVar13 = _DAT_00000108;
              if (bVar35 || bVar34 != bVar36) {
                iVar20 = _DAT_00000110;
                if (bVar35 || bVar34 != bVar36) {
                  if (bVar35 || bVar34 != bVar36) {
                    return CONCAT44(_DAT_00000104,0x104);
                  }
                  puVar1 = (undefined2 *)(_DAT_00000104 + 0x1e);
                  puVar2 = (undefined2 *)(_DAT_00000104 + 0x3e);
                  if (bVar35 || bVar34 != bVar36) {
                    *(undefined2 *)(_DAT_00000104 + 0x2e) = 0x104;
                    *puVar2 = 0x104;
                  }
                  else {
                    *(undefined2 *)(_DAT_00000104 + 0xe) = 0x104;
                    *puVar1 = 0x104;
                  }
                  uVar12 = (uint)*(ushort *)(uVar22 + 0x3e);
                  uRamfffffff4 = 8;
                  uVar16 = 0xfffffff4;
                  uVar13 = 0xfffffff4;
                  iVar20 = iRamffffffec;
                  goto LAB_2c415d8a;
                }
LAB_2c415dcc:
                *(short *)(uVar16 + 0xe) = (short)uVar25;
                puVar23 = (undefined1 *)0xfffffcd4;
                if (iVar20 != 0) {
                  uVar25 = uVar16 & 0xff;
                  if (uVar25 == 0) {
                    _UsageFault = uVar32;
                    if (uVar32 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffed8;
                      uRamfffffb88 = uVar32;
                      uRamfffffb84 = uVar32;
                      uRamfffffb80 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if ((uVar32 & 0xff) != 0) {
                      uRamfffffb90 = uVar32;
                      uRamfffffb8c = uVar32;
                      uRamfffffb88 = uVar32;
                      uRamfffffb84 = unaff_lr;
                      uRamfffffb80 = uVar32;
                      uRamfffffb7c = uVar32;
                      uRamfffffb78 = uVar32;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar32 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffee0;
                      uRamfffffb88 = uVar32;
                      uRamfffffb84 = uVar32;
                      uRamfffffb80 = 0xfffffee0;
                      uRamfffffb7c = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar32 == 0) {
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
                    uRamfffffb88 = uVar32;
                    uRamfffffb84 = uVar32;
                    uRamfffffb80 = 0xfffffedc;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  uRamfffffcc4 = 0x104;
                  puVar23 = (undefined1 *)0xfffffcc0;
                  uVar17 = 0x104;
                  uRamfffffcc0 = uVar16;
                  uRamfffffcc8 = uVar13;
                  uRamfffffccc = uVar25;
                  uRamfffffcd0 = uVar32;
LAB_2c415dd6:
                  *(uint *)(puVar23 + -4) = unaff_lr;
                  *(uint *)(puVar23 + -8) = uVar32;
                  *(uint *)(puVar23 + -0xc) = uVar25;
                  *(undefined4 *)(puVar23 + -0x10) = uVar13;
                  *(undefined4 *)(puVar23 + -0x14) = uVar17;
                  *(uint *)(puVar23 + -0x18) = uVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                uVar12 = 0x104;
                iVar20 = _DAT_00000110;
LAB_2c415d8a:
                uVar32 = 0xfffffff4;
                if (uVar12 == 0) {
                  puVar23 = (undefined1 *)0xfffffcd4;
                  uVar32 = (uint)*(ushort *)(uVar16 + 0x36);
                  if (iVar20 == 0) {
                    uVar25 = (uint)*(ushort *)(uVar16 + 6);
                    iVar20 = 0;
                    goto LAB_2c415dcc;
                  }
                }
                else {
                  if (uVar12 == 0) goto LAB_2c415e06;
                  puVar23 = (undefined1 *)0xfffffce0;
                  uVar17 = 0;
                  uVar13 = uRamfffffcd4;
                  uVar25 = uRamfffffcd8;
                  uVar32 = uRamfffffcdc;
                  if (iRamfffffff8 == 0) goto LAB_2c415dd6;
                  *(short *)(uVar16 + 0x16) = (short)uVar16;
                  *(short *)(uVar12 + 6) = (short)(uVar22 << 4);
                  *(short *)(uVar16 + 0x3e) = (short)uVar16;
                  uVar16 = (uint)*(ushort *)
                                  (*(ushort *)(*(ushort *)(*(ushort *)(uVar16 + 0xe) + 0x1e) + 0x2e)
                                  + 0x3e);
                  if (uVar22 << 4 != 0) {
                    return CONCAT44(iRamfffffce0,uVar12);
                  }
                  if (uVar22 << 4 != 0) {
                    if (uVar22 << 4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    *(undefined2 *)(uVar16 + 0xe) = 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  software_bkpt(0xce);
                  uVar4 = (undefined2)uRamfffffcdc;
                  *(undefined2 *)(uVar16 + 0xe) = uVar4;
                  *(undefined2 *)(uVar16 + 0x1e) = uVar4;
                  *(undefined2 *)(uVar16 + 0x26) = uVar4;
                  *(undefined2 *)(uVar16 + 0x2e) = uVar4;
                  *(undefined2 *)(uVar16 + 0x36) = uVar4;
                  *(undefined2 *)(uVar16 + 0x3e) = uVar4;
                }
                uVar32 = (uint)*(ushort *)(uVar16 + 0x1e);
                *(ushort *)(uVar16 + 0x2e) = *(ushort *)(uVar16 + 0x1e);
              }
              uVar25 = (uint)*(ushort *)(uVar16 + 6);
LAB_2c415e06:
              *(short *)(uVar16 + 0xe) = (short)uVar25;
              *(short *)(uVar16 + 0x1e) = (short)uVar32;
              *(uint *)(puVar23 + 0x33c) = uVar32;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
code_r0x2c415b9c:
            if (!bVar36) goto code_r0x2c415bf8;
            bVar36 = SBORROW4(uVar22,0x3e);
            puVar14 = (undefined1 *)puVar37;
            if (!bVar36) goto code_r0x2c415c14;
            puVar15 = puRam2c415cf4;
            if (!SBORROW4(uVar22 - 0x3e,0x3e)) goto FUN_2c415c38;
            if (SBORROW4(uVar22 - 0x7c,0x3e)) {
              puVar24 = (undefined4 *)(uVar22 - 0xf8);
              if (SBORROW4(uVar22 - 0xba,0x3e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              uVar4 = (undefined2)(uVar22 - 0xba);
              *(undefined2 *)(puVar23 + 0xe) = uVar4;
              *(undefined2 *)(puVar23 + 0x1e) = uVar4;
              *(undefined2 *)(puVar23 + 0x2e) = uVar4;
              *(undefined2 *)(puVar23 + 0x3e) = uVar4;
              puVar24 = (undefined4 *)(uint)*(ushort *)(puVar23 + 0x3e);
            }
          }
          puVar23 = (undefined1 *)*puVar24;
          puVar31 = (undefined1 *)puVar24[1];
          puVar28 = (undefined1 *)puVar24[3];
          puVar33 = (undefined1 *)puVar37;
          if (puVar24 != (undefined4 *)0xfffffff0) {
            *(uint *)((int)puVar37 + -4) = unaff_lr;
            *(int *)((int)puVar37 + -8) = (int)puVar23 << 2;
            *(undefined1 **)((int)puVar37 + -0xc) = puVar28;
            *(undefined1 **)((int)puVar37 + -0x10) = puVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x2c415cf4:
          *(uint *)(puVar33 + -4) = unaff_lr;
          *(undefined1 **)(puVar33 + -8) = puVar33 + 0x324;
          *(undefined1 **)(puVar33 + -0xc) = puVar28;
          *(undefined1 **)(puVar33 + -0x10) = puVar31;
          *(undefined1 **)(puVar33 + -0x14) = puVar23;
          uRam2c41601a = (short)puVar18;
          uRam2c416032 = (short)puVar18;
          *(undefined1 **)(puVar33 + -0x130) = puVar33 + 0x324;
          *(undefined1 **)(puVar33 + -0x134) = puVar28;
          *(uint *)(puVar33 + -0x138) = (uint)puVar18 & 0xffff;
          *(undefined4 *)(puVar33 + -0x13c) = 0x2c416014;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  } while( true );
}


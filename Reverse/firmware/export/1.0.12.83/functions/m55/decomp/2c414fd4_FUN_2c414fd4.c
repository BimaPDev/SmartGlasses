/* FUN_2c414fd4 @ 0x2c414fd4 */

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

undefined8 FUN_2c414fd4(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4)

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
  undefined1 uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  int iVar16;
  int unaff_r4;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 unaff_r5;
  int iVar22;
  int unaff_r6;
  int iVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined4 unaff_r7;
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
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  
  puVar35 = (uint *)auStack_14;
  *(undefined4 *)(unaff_r6 + 0x54) = unaff_r7;
  *(int *)(unaff_r4 + 0x24) = unaff_r4;
  *(undefined1 *)(unaff_r4 + 9) = param_2;
  *(char *)(param_4 + 0x1e) = (char)unaff_r7;
  *(undefined4 *)(unaff_r4 + 0x44) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x54) = unaff_r7;
  *(char *)(unaff_r4 + 0x1e) = (char)unaff_r7;
  *(undefined4 *)(unaff_r4 + 0x44) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x54) = unaff_r7;
  *(uint *)(unaff_r6 + 0x54) = (uint)*(ushort *)(unaff_r4 + 6);
  *(char *)(unaff_r6 + 0x15) = (char)auStack_10 + -0x7c;
  *(char *)(unaff_r4 + 0xd) = (char)unaff_r5;
  *(char *)(unaff_r6 + 0xd) = (char)unaff_r4;
  *(undefined4 *)(unaff_r4 + 0x20) = param_1;
  *(undefined4 *)(unaff_r6 + 100) = unaff_r5;
  *(int *)(unaff_r4 + 0x54) = unaff_r6;
  iVar17 = *(int *)(unaff_r6 + 4);
  *(undefined1 *)(iVar17 + 0xc) = 0x72;
  iVar22 = *(int *)(iVar17 + 0x40);
  *(undefined4 *)(iVar17 + 0x10) = 0x3e;
  uVar14 = *(undefined4 *)(iVar17 + 0x74);
  *(char *)(unaff_r6 + 0x11) = (char)uVar14;
  uVar6 = (undefined1)*(undefined4 *)(iVar22 + 100);
  *(undefined1 *)(iVar17 + 9) = uVar6;
  iVar16 = (int)*(short *)(iVar22 * 2);
  *(char *)(unaff_r6 + 0x11) = (char)*(short *)(iVar22 * 2);
  *(undefined4 *)(unaff_r6 + 0x24) = uVar14;
  *(int *)(unaff_r6 + 100) = iVar22;
  *(int *)(iVar16 + 0x74) = iVar17 << 1;
  iVar17 = *(int *)(unaff_r6 + 4);
  *(undefined1 *)(iVar22 + 9) = uVar6;
  *(char *)(iVar17 + 1) = (char)iVar17;
  *(undefined1 *)(iVar17 + 9) = uVar6;
  bVar3 = *(byte *)(unaff_r6 + 5);
  *(char *)(iVar22 + 0xc) = (char)(unaff_r6 << 1);
  *(uint *)(unaff_r6 + 0x14) = (uint)bVar3;
  *(byte *)(iVar22 + 0x19) = bVar3;
  uVar26 = *(undefined4 *)(bVar3 + 0x44);
  *(undefined4 *)(iVar22 + 0x10) = uVar26;
  *(undefined1 *)(unaff_r6 + 1) = 0x3e;
  *(undefined4 *)(iVar22 + 0x30) = uVar26;
  *(int *)(iVar22 + 0x14) = iVar22;
  uVar14 = *(undefined4 *)(unaff_r6 + 0x34);
  *(char *)(iVar22 + 0xc) = (char)uVar26;
  *(undefined4 *)(unaff_r6 + 0x34) = uVar14;
  *(undefined4 *)(iVar22 + 0x30) = uVar26;
  *(int *)(iVar22 + 0x14) = iVar22;
  *(int *)(iVar22 + 0x30) = unaff_r6;
  *(int *)(iVar16 + 0x34) = iVar16;
  *(int *)(iVar22 + 0x14) = iVar22;
  *(undefined4 *)(unaff_r6 + 0x54) = *(undefined4 *)(unaff_r6 + 0x34);
  uVar18 = *(uint *)(iVar22 + 0x74);
  *(undefined4 *)(unaff_r6 + 0x54) = *(undefined4 *)(unaff_r6 + 0x34);
  *(char *)(unaff_r6 + 0x15) = (char)uVar18;
  *(int *)(uVar18 + 0x44) = iVar22;
  iVar22 = *(int *)(unaff_r6 + 0x44);
  *(uint *)(unaff_r6 + 0x54) = uVar18;
  *(undefined4 *)(uVar18 + 0x10) = *(undefined4 *)(unaff_r6 + 0x74);
  *(char *)(unaff_r6 + 0x11) = (char)*(undefined4 *)(uVar18 + 0x74);
  uVar14 = *(undefined4 *)(iVar22 + 100);
  *(int *)(iVar16 + 0x34) = iVar16;
  *(int *)(iVar22 + 0x14) = iVar22;
  *(int *)(uVar18 + 0x14) = iVar16;
  iVar16 = *(int *)(iVar22 + 0x44);
  *(uint *)(iVar22 + 0x34) = uVar18 >> 9;
  *(undefined1 *)(iVar16 + 8) = 0x5d;
  uVar6 = (undefined1)iVar22;
  *(undefined1 *)(iVar16 + 0x11) = uVar6;
  *(undefined1 *)(unaff_r6 + 9) = uVar6;
  *(int *)(iVar22 + 0x54) = unaff_r6;
  *(char *)(iVar22 + 0x15) = (char)unaff_r6;
  puVar19 = *(undefined1 **)(iVar22 + 0x44);
  *puVar19 = 100;
  iVar17 = *(int *)(iVar22 + 0x14);
  *(char *)(iVar22 + 0x11) = (char)unaff_r6;
  puVar19[9] = uVar6;
  *(undefined4 *)(puVar19 + 0x24) = uVar14;
  *(char *)(iVar22 + 9) = (char)iVar17;
  iVar16 = *(int *)(unaff_r6 + 0x14);
  *(int *)(iVar22 + 0x74) = unaff_r6;
  *(undefined4 *)(iVar17 + 0x34) = 0x2c;
  uVar14 = *(undefined4 *)(iVar16 + 0x44);
  iVar16 = *(int *)(iVar22 + 0x74);
  *(undefined1 *)(iVar17 + 9) = 0x2c;
  *(int *)(iVar16 + 0x14) = iVar22;
  *(int *)(iVar22 + 0x34) = iVar17;
  iVar16 = *(int *)(unaff_r6 + 4);
  uVar7 = (undefined1)uVar14;
  *(undefined1 *)(iVar22 + 9) = uVar7;
  *(char *)(iVar16 + 1) = (char)iVar16;
  *(undefined1 *)(iVar16 + 9) = uVar7;
  bVar3 = *(byte *)(unaff_r6 + 5);
  uVar18 = (uint)bVar3;
  *(char *)(iVar22 + 0xc) = (char)iVar17;
  *(uint *)(unaff_r6 + 0x14) = uVar18;
  iVar16 = *(int *)(uVar18 + 0x14);
  *(byte *)(iVar22 + 0x19) = bVar3;
  uVar26 = *(undefined4 *)(uVar18 + 0x44);
  *(undefined4 *)(iVar22 + 0x10) = uVar26;
  *(undefined1 *)(unaff_r6 + 1) = 0x2c;
  *(undefined4 *)(iVar22 + 0x30) = uVar26;
  *(int *)(iVar22 + 0x14) = iVar22;
  uVar14 = *(undefined4 *)(unaff_r6 + 0x34);
  *(char *)(iVar22 + 0xc) = (char)uVar26;
  *(undefined4 *)(unaff_r6 + 0x34) = uVar14;
  sVar4 = *(short *)(unaff_r6 + iVar22);
  iVar23 = (int)sVar4;
  *(undefined4 *)(iVar23 + 0x14) = 0x2c;
  uVar7 = (undefined1)uVar14;
  *(undefined1 *)(iVar23 + 0xd) = uVar7;
  *(undefined1 *)(uVar18 + 9) = uVar6;
  *(int *)(iVar22 + 0x30) = iVar23;
  *(char *)(uVar18 + 9) = (char)iVar16;
  iVar17 = (int)*(short *)(iVar22 * 2);
  *(undefined4 *)(iVar23 + 0x14) = 0x2c;
  *(undefined1 *)(iVar23 + 0xd) = uVar7;
  *(undefined1 *)(uVar18 + 9) = uVar6;
  *(undefined1 *)(uVar18 + 0x1d) = uVar6;
  uVar27 = *(undefined4 *)(iVar17 + 0x44);
  *(int *)(iVar23 + 0x74) = iVar23;
  *(char *)(iVar16 + iVar22) = (char)sVar4;
  uVar14 = s_container_parent__p_lv_node__p_c_2c415734._20_4_;
  *(undefined1 *)(s_container_parent__p_lv_node__p_c_2c415734._20_4_ + 9) = uVar6;
  *(undefined4 *)(uVar14 + 0x30) = 0x6c;
  *(int *)(iVar22 + 0x14) = iVar22;
  iVar16 = *(int *)(iVar23 + 0x34);
  *(char *)(iVar22 + 0xd) = (char)*(undefined4 *)(uVar14 + 100);
  uVar26 = s_____>_ADD_item__content__s_2c415784._0_4_;
  uVar14 = s_______thirdparty_star_air_lvgl_a_2c415680._48_4_;
  *(int *)(iVar16 + 0x54) = iVar17;
  *(undefined4 *)(uVar14 + 0x14) = 0x74;
  *(undefined1 *)(uVar14 + 0xd) = uVar9;
  *(undefined1 *)(uVar26 + 9) = uVar6;
  *(undefined4 *)(uVar26 + 0x60) = 0x74;
  *(char *)(iVar22 + 0xd) = (char)*(undefined4 *)(iVar22 + 100);
  *(undefined4 *)(iVar22 + 0x54) = 0x74;
  iVar24 = *(int *)(uVar26 + 0x44);
  *(undefined4 *)(uVar26 + 0x74) = *(undefined4 *)(iVar22 + 100);
  *(char *)(iVar22 + 0x19) = cVar8;
  *(undefined1 *)(iVar17 + 0xd) = uVar10;
  *(char *)(iVar24 + 9) = cVar8;
  *(int *)(uVar26 + 0x14) = iVar22;
  sVar4 = *(short *)(iVar22 * 2);
  iVar22 = (int)sVar4;
  *(undefined4 *)(iVar24 + 0x14) = 100;
  *(undefined1 *)(iVar24 + 0xd) = uVar9;
  *(char *)(uVar26 + 9) = (char)sVar4;
  *(undefined4 *)(iVar17 + 100) = uVar27;
  uVar6 = (undefined1)*(undefined4 *)(iVar22 + 100);
  *(undefined1 *)(iVar22 + 0xd) = uVar6;
  *(char *)(iVar22 + 0x19) = cVar8;
  *(undefined1 *)(iVar17 + 0xd) = uVar10;
  cVar8 = (char)uVar26;
  *(char *)(iVar24 + 9) = cVar8;
  *(int *)(uVar26 + 0x14) = iVar22;
  uVar5 = *(undefined2 *)(iVar22 * 2);
  *(int *)(iVar24 + 0x14) = iVar22 << 1;
  uVar9 = (undefined1)iVar16;
  *(undefined1 *)(iVar24 + 0xd) = uVar9;
  *(char *)(uVar26 + 9) = (char)uVar5;
  *(undefined4 *)(iVar17 + 0x34) = uVar27;
  *(int *)(iVar24 + 0x54) = iVar16;
  *(undefined1 *)(uVar26 + 0x11) = uVar6;
  iVar23 = uVar26 * 2;
  iVar16 = *(int *)(iVar24 + 4);
  *(undefined1 *)(iVar23 + 9) = uVar6;
  *(char *)(iVar16 + 1) = (char)iVar16;
  *(undefined1 *)(iVar16 + 9) = uVar6;
  bVar3 = *(byte *)(iVar24 + 5);
  uVar18 = (uint)bVar3;
  uVar10 = (undefined1)uVar27;
  *(undefined1 *)(iVar23 + 0xc) = uVar10;
  *(uint *)(iVar24 + 0x14) = uVar18;
  *(byte *)(iVar23 + 0x19) = bVar3;
  uVar14 = *(undefined4 *)(uVar18 + 0x44);
  *(undefined4 *)(iVar23 + 0x10) = uVar14;
  *(char *)(iVar24 + 1) = (char)(iVar22 << 1);
  *(undefined4 *)(iVar23 + 0x30) = uVar14;
  *(int *)(iVar23 + 0x14) = iVar23;
  iVar17 = *(int *)(iVar24 + 0x34);
  *(char *)(iVar23 + 0xc) = (char)uVar14;
  *(int *)(iVar24 + 0x34) = iVar17;
  iVar28 = *(int *)(iVar23 + 0x10);
  iVar24 = *(int *)(iVar23 + 0x44);
  uVar14 = *(undefined4 *)(iVar23 + 100);
  *(char *)(uVar18 + 0xd) = (char)iVar23;
  *(int *)(iVar23 + 0x30) = iVar24;
  *(uint *)(uVar18 + 0x54) = uVar18;
  iVar16 = *(int *)(iVar23 + 0x14);
  iVar22 = iVar23 + -0x3d;
  *(undefined1 *)(iVar16 + 0xc) = 0x6d;
  *(int *)(iVar24 + 0x24) = iVar22;
  iVar24 = *(int *)(iVar28 + 0x40);
  uVar6 = (undefined1)uVar14;
  *(undefined1 *)(iVar16 + 0xd) = uVar6;
  *(int *)(*(short *)(iVar24 + iVar22) + 0x54) = (int)*(short *)(iVar24 + iVar22);
  iVar16 = *(int *)(iVar23 + -0x29);
  *(undefined1 *)(iVar16 + 9) = uVar6;
  *(undefined4 *)(iVar24 + 0x54) = *(undefined4 *)(iVar16 + 0x54);
  *(char *)(iVar22 * 2 + 0x11) = (char)iVar24;
  iVar22 = *(int *)(iVar16 + 100);
  iVar16 = iVar24 * 2;
  *(undefined4 *)(iVar16 + 0x74) = *(undefined4 *)(iVar22 + 0x54);
  *(undefined4 *)(iVar16 + 0x30) = 0x44;
  *(int *)(iVar24 + 0x54) = iVar16;
  *(char *)(iVar22 + 0x11) = (char)iVar24;
  iVar16 = iRam0000006e;
  uVar6 = (undefined1)iRam0000006e;
  *(char *)(_DAT_0000004e + 0xc) = (char)*(undefined4 *)(_DAT_0000004e + 100);
  puVar19 = puRam2c415834;
  iVar22 = *(int *)(puRam2c415834 + 0x74);
  uRam000000ac = (undefined2)iVar16;
  _DAT_000000ae = (undefined2)((uint)iVar16 >> 0x10);
  *(undefined4 *)(iVar16 + 0x14) = 0x72;
  *(int *)(iVar16 + 0x54) = iVar17 + -0x74;
  uRam00000053 = SUB41(puVar19,0);
  iVar24 = *(int *)(iVar22 + 100);
  uRam00000069 = uVar6;
  _DAT_0000007e = iVar24;
  *puVar19 = 0x3a;
  *(undefined4 *)(puVar19 + 0x30) = 0x70;
  iVar23 = *(int *)(puVar19 + 0x44);
  iVar22 = (int)*(short *)(iVar23 * 2);
  *(int *)(iVar22 + 0x54) = iVar22;
  *(int *)(iVar22 + 0x40) = iVar23;
  *(undefined1 *)(iVar22 + 0xc) = 0x70;
  *(int *)(iVar16 + 0x14) = iVar22;
  *(char *)(iVar16 + 0x11) = (char)(iVar17 + -0x151);
  *(int *)(iVar22 + 0x40) = iVar23;
  *(char *)(iVar22 + 0x14) = (char)iVar23;
  uVar14 = *(undefined4 *)(iVar22 + 0x60);
  *(char *)(iVar23 + 0x11) = (char)iVar24;
  *(undefined4 *)(iVar22 + 0x10) = uVar14;
  *(undefined4 *)(iVar22 + 0x30) = uVar14;
  iVar24 = *(int *)(iVar23 + 100);
  *(int *)(iVar16 + 0x14) = iVar22;
  uVar14 = *(undefined4 *)(iVar23 + 100);
  *(char *)(iVar22 + 9) = (char)iVar23;
  *(char *)(iVar23 + 0x11) = (char)uVar14 + unaff_r8;
  uVar14 = *(undefined4 *)(iVar22 + 0x74);
  *(undefined1 *)(*(int *)(iVar22 + 0x54) + 0x11) = uVar6;
  iVar23 = *(int *)(iVar22 + 100);
  sVar4 = (short)(iVar17 + -0x151) + -0xd9;
  *(char *)(iVar22 + 0xc) = (char)iVar23;
  *(short *)(iVar22 + 6) = sVar4;
  *(short *)(iVar22 + 6) = sVar4;
  uVar6 = (undefined1)uVar14;
  *(undefined1 *)(iVar16 + 0x15) = uVar6;
  *(undefined1 *)(iVar16 + -0x18) = uVar6;
  uVar14 = *(undefined4 *)(iVar23 + 100);
  *(undefined1 *)(iVar16 + -0x45) = 0x3c;
  *(int *)(iVar23 + 0x54) = iVar22;
  *(undefined1 *)(iVar22 + 0xc) = 0x6e;
  iVar17 = *(int *)(iVar24 + 0x10);
  iRam0000004a = iVar23;
  *(char *)(iVar23 + 1) = (char)iVar17;
  *(char *)(iVar17 + 0x11) = (char)iVar23;
  *(int *)(iVar23 + 0x40) = iVar17;
  *(char *)(iVar22 + 0x11) = (char)uVar14;
  *(undefined1 *)(iVar17 + 0x15) = uVar6;
  iVar16 = *(int *)(iVar22 + 0x24);
  iVar17 = (uint)*(byte *)(iVar17 + -0x2d + iVar23) * 2;
  uVar5 = (undefined2)iVar16;
  *(undefined2 *)(iVar17 + 6) = uVar5;
  *(undefined2 *)(iVar17 + 6) = uVar5;
  iVar17 = iVar16 * 4;
  *(undefined2 *)(iVar17 + 6) = uVar5;
  iVar23 = iVar16 * 0x10;
  *(int *)(iVar23 + 0x54) = iVar16;
  *(int *)(iVar23 + 0x54) = iVar23;
  *(int *)(iVar16 * 4 + 0x44) = iVar24;
  iVar16 = *(int *)(iVar17 + 0x44);
  uVar6 = (undefined1)*(undefined4 *)(iVar16 + 0x54);
  *(undefined1 *)(iVar16 + 0x11) = uVar6;
  *(char *)(iVar17 + 9) = (char)iVar16;
  *(undefined1 *)(iVar23 + 9) = 0;
  *(int *)(iVar16 + 0x34) = iVar24;
  *(char *)(iVar17 + 0xd) = (char)iVar16;
  iVar16 = (int)*(short *)(iVar23 + iVar16);
  iVar22 = *(int *)(iVar17 + 0x54);
  uVar14 = *(undefined4 *)(iVar23 + 4);
  *(undefined1 *)(iVar17 + 0xd) = uVar6;
  *(undefined1 *)(iVar22 + 0xd) = uVar6;
  *(char *)(iVar22 + 0x19) = (char)iVar17;
  *(char *)(iVar16 + 0xd) = (char)iVar24;
  *(char *)(iVar17 + 0x11) = (char)iVar22;
  *(int *)(iVar16 + 0x34) = iVar24;
  iVar24 = *(int *)(iVar22 + 100);
  *(int *)(iVar23 + 0x54) = iVar17;
  *(char *)(iVar22 + 0x11) = (char)iVar23;
  *(undefined4 *)(iVar23 + 0x54) = uVar14;
  iVar22 = *(int *)(iVar17 + 0x34);
  *(int *)(iVar16 + 0x34) = iVar24;
  *(undefined4 *)(iVar22 + 0x14) = uVar14;
  *(char *)(iVar24 + 0x14) = (char)iVar17;
  iVar17 = *(int *)(*(int *)(iVar22 + 0x74) + 100);
  iVar16 = *(int *)(iVar17 + 4);
  *(undefined1 *)(iVar22 + 9) = uVar6;
  *(char *)(iVar16 + 1) = (char)iVar16;
  *(undefined1 *)(iVar16 + 9) = uVar6;
  bVar3 = *(byte *)(iVar17 + 5);
  uVar18 = (uint)bVar3;
  *(char *)(iVar22 + 0xc) = (char)iVar17;
  *(uint *)(iVar17 + 0x14) = uVar18;
  iVar16 = *(int *)(uVar18 + 0x14);
  *(byte *)(iVar22 + 0x19) = bVar3;
  uVar26 = *(undefined4 *)(uVar18 + 0x44);
  *(undefined4 *)(iVar22 + 0x10) = uVar26;
  *(char *)(iVar17 + 1) = (char)uVar14;
  *(undefined4 *)(iVar22 + 0x30) = uVar26;
  *(int *)(iVar22 + 0x14) = iVar22;
  puVar15 = *(undefined1 **)(iVar17 + 0x34);
  *(char *)(iVar22 + 0xc) = (char)uVar26;
  *(undefined1 **)(iVar17 + 0x34) = puVar15;
  *(undefined4 *)(iVar22 + 0x44) = *(undefined4 *)(iVar22 + 0x60);
  uVar14 = *(undefined4 *)(iVar16 + 100);
  *(int *)(iVar17 + 0x14) = iVar17;
  puVar25 = puRam0000009b;
  uVar18 = *(uint *)(iVar22 + 0x14);
  *(uint *)(uVar18 + 0x54) = uVar18;
  *(undefined1 *)(uVar18 + 0x10) = 0x6e;
  uVar6 = (undefined1)uVar14;
  DAT_00000074 = uVar6;
  *(undefined1 *)(uVar18 + 0xc) = 0x27;
  *(undefined4 *)(uVar18 + 0x10) = 0x65;
  *(undefined4 *)(uVar18 + 0x40) = 0x27;
  uVar18 = uVar18 >> 9;
  *(uint *)(uVar18 + 0x54) = uVar18;
  *(undefined4 *)(*(int *)(uVar18 + 0x74) + 0x24) = 0x73;
  iVar16 = _DAT_0000007e;
  iRam0000004a._0_2_ = CONCAT11(0x74,(undefined1)iRam0000004a);
  *(undefined4 *)(*(int *)(CONCAT22(uRam000000b0,_DAT_000000ae) + 0x34) + 0x24) = 0x73;
  iVar17 = *(int *)(*(int *)(iVar16 + 0x74) + 0x34);
  uVar7 = (undefined1)iVar17;
  *(undefined1 *)(*(int *)(iVar16 + 0x74) + 0x15) = uVar7;
  puVar25[0x11] = uVar7;
  uVar26 = *(undefined4 *)(iVar16 + 0x54);
  *(undefined4 *)(iVar17 + 0x24) = uVar26;
  iVar22 = *(int *)(iVar16 + 0x74);
  iVar17 = *(int *)(iVar22 + 0x34);
  *(undefined4 *)(puVar25 + 0x14) = 0x74;
  *(undefined1 **)(puVar25 + 0x14) = puVar15;
  *(char *)(iVar22 + 9) = (char)uVar26;
  *(undefined1 *)(iVar22 + 1) = uVar6;
  puVar19 = (undefined1 *)(iVar16 << 1);
  do {
    *(undefined1 **)(iVar16 + 0x54) = puVar19;
    *(undefined4 *)(iVar22 + 0x44) = uVar14;
    uVar14 = *(undefined4 *)(iVar16 + 100);
    iVar23 = *(int *)(puVar25 + 4);
    iVar16 = *(int *)(iVar23 + 0x54);
    *(char *)(iVar23 + 0x11) = (char)uVar14;
    *(undefined4 *)(iVar16 + 0x34) = uVar14;
    *(int *)(iVar17 + 0x24) = iVar22 << 1;
    *(undefined1 **)(puVar25 + 0x54) = puVar15;
    *(int *)(puVar25 + 0x14) = iVar23;
    puVar15 = *(undefined1 **)(iVar23 + 0x44);
code_r0x2c415b00:
    iVar16 = (int)*(short *)(iVar23 + iVar16);
    *(int *)(iVar23 + 0x54) = iVar17;
    iVar17 = *(int *)(iVar16 + 0x44);
    *(char *)(iVar17 + 0x11) = (char)puVar25;
    *(char *)(iVar17 + 9) = (char)puVar15;
    *(int *)(iVar17 + 0x14) = iVar16;
    iVar22 = *(int *)(iVar16 + 0x14);
    *(undefined1 **)(iVar16 + 0x54) = puVar25;
    *(char *)(iVar22 + 9) = (char)puVar15;
    *(int *)(iVar22 + 0x14) = iVar16;
code_r0x2c415b1c:
    iVar17 = iVar16 * 2;
    *(char *)(iVar16 + 0x11) = (char)puVar19;
    iVar16 = *(int *)(*(int *)(iVar16 + 0x44) + 0x44);
    uVar6 = (undefined1)iVar17;
    *(undefined1 *)(iVar22 + 0x15) = uVar6;
    *(undefined1 *)(iVar16 + 0x11) = uVar6;
    puVar29 = *(undefined1 **)(iVar17 + 0x14);
    puVar25 = *(undefined1 **)(iVar22 * 2 + 0x44);
    iVar16 = *(int *)(iVar22 + 0x54);
    puVar19 = *(undefined1 **)(puVar25 + 4);
code_r0x2c415b40:
    puVar25[0x11] = uVar6;
    *(undefined1 **)(iVar16 + 0x74) = puVar25;
    iVar24 = iRam2c415e88;
    puVar25 = *(undefined1 **)(iVar16 + 0x34);
    puVar15 = (undefined1 *)0xdc;
    while( true ) {
      uVar18 = (uint)(byte)puVar19[iVar16];
      iVar22 = uVar18 - 0x2b;
      uVar14 = uRam2c415c88;
      if (SBORROW4(uVar18 - 0x16,0x15)) break;
      iVar23 = uVar18 - 0x69;
      if (SBORROW4(iVar22,0x3e)) goto code_r0x2c415b00;
      bVar34 = SBORROW4(iVar23,0x3e);
      iVar23 = uVar18 - 0xa7;
      while( true ) {
        iVar22 = iVar23;
        if (bVar34) goto code_r0x2c415b1c;
        if (SBORROW4(iVar22,0x3e)) goto code_r0x2c415b40;
        if (SBORROW4(iVar22 + -0x3e,0x3e)) break;
        bVar34 = SBORROW4(iVar22 + -0x7c,0x3e);
        iVar23 = iVar22 + -0xba;
        if (!bVar34) {
          bVar34 = SBORROW4(iVar22 + -0x137,0x3e);
          uVar18 = iVar22 - 0x175;
          puVar12 = puRam2c415cf4;
          if (bVar34) {
            VectorWidenMultipyAccumulate(in_d3,unaff_d12,1);
            if (SBORROW4(uVar18,0x3e)) {
              uVar18 = iVar22 - 0x1f1;
              if (SBORROW4(iVar22 + -0x1b3,0x3e)) {
                bVar34 = SBORROW4(uVar18,0x3e);
                uVar18 = iVar22 - 0x1df;
                coprocessor_loadlong(0xc,in_cr3,uVar18);
                goto code_r0x2c415b9c;
              }
            }
            else {
              uVar6 = SUB41(puRam2c415cf4,0);
              *(undefined1 *)(iRam2c415e88 + 9) = uVar6;
              *(char *)(iVar22 + -0x1b2) = (char)(iVar22 + -0x1b3);
              *(undefined1 *)(iVar22 + -0x1aa) = uVar6;
              bVar3 = puVar25[5];
              uVar18 = (uint)bVar3;
              *(char *)(iVar24 + 0xc) = (char)puVar29;
              *(uint *)(puVar25 + 0x14) = uVar18;
              puVar12 = *(undefined1 **)(uVar18 + 0x14);
              *(byte *)(iVar24 + 0x19) = bVar3;
              puVar29 = *(undefined1 **)(uVar18 + 0x44);
              *(undefined1 **)(iVar24 + 0x10) = puVar29;
              puVar25[1] = (char)puVar19;
              *(undefined1 **)(iVar24 + 0x30) = puVar29;
            }
            *(int *)(iVar24 + 0x14) = iVar24;
            uVar14 = *(undefined4 *)(puVar25 + 0x34);
            *(char *)(iVar24 + 0xc) = (char)puVar29;
            *(undefined4 *)(puVar25 + 0x34) = uVar14;
            *(char *)(iVar24 + 0x14) = (char)puVar29;
            *(uint *)(puVar25 + 100) = uVar18;
            *(int *)(puVar25 + 0x34) = iVar24;
            puVar19 = puVar25 + -0x20;
            *(char *)(uVar18 + 9) = (char)puVar12;
            iVar17 = (int)*(short *)(iVar24 * 2);
            puVar25[-0xf] = (char)iVar24;
            puVar25 = puVar19;
code_r0x2c415bf8:
            bVar34 = SBORROW4((int)puVar19,0x66);
            puVar25[9] = (char)puVar19 + -0x66;
            *(undefined1 **)(iVar24 + 0x34) = puVar29;
            *(undefined1 **)(iVar17 + 0x54) = puVar29;
            *(undefined1 **)(iVar24 + 0x34) = puVar25;
            *(undefined1 **)(iVar24 + 0x44) = puVar29;
            *(char *)(uVar18 + 9) = (char)puVar12;
code_r0x2c415c14:
            uVar18 = _DAT_00000104;
            puVar19 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar12 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar15 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar20 = (undefined4 *)((int)register0x00000054 + 0x30c);
            puVar25 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar29 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar35 = (uint *)((int)register0x00000054 + -0x10c);
            puVar31 = (undefined1 *)((int)register0x00000054 + -0x10c);
            if ((undefined1 *)register0x00000054 != (undefined1 *)0xfffffcf4) {
              if (((uint)puVar19 & 0xff) != 0) {
                *(undefined1 **)((int)register0x00000054 + -0x110) = puVar29;
                *(undefined1 **)((int)register0x00000054 + -0x114) = puVar25;
                *(undefined1 **)((int)register0x00000054 + -0x118) = puVar12;
                puVar35 = (uint *)((int)register0x00000054 + -0x11c);
                *puVar35 = (uint)puVar19;
FUN_2c415c38:
                puVar35[-1] = unaff_lr;
                puVar35[-2] = (uint)puVar29;
                puVar35[-3] = (uint)puVar25;
                puVar35[-4] = (uint)puVar12;
                puVar35[-5] = (uint)puVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar29 = (undefined1 *)((int)register0x00000054 + 0x208);
              if ((undefined1 *)register0x00000054 == (undefined1 *)0xfffffdf8)
              goto code_r0x2c415cf4;
              if ((undefined1 *)register0x00000054 != (undefined1 *)0xfffffdf8) {
                *(uint *)((int)register0x00000054 + -0x110) = unaff_lr;
                *(undefined1 **)((int)register0x00000054 + -0x114) =
                     (undefined1 *)((int)register0x00000054 + 0x208);
                *(undefined1 **)((int)register0x00000054 + -0x118) = puVar25;
                *(undefined1 **)((int)register0x00000054 + -0x11c) = puVar15;
                *(undefined1 **)((int)register0x00000054 + -0x120) = puVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar30 = 8;
              uVar21 = _DAT_00000104 << 2;
              bVar32 = (int)uVar21 < 0;
              bVar33 = uVar21 == 0;
              uRamfffffce8 = unaff_lr;
              uRamfffffce4 = 8;
              iRamfffffce0 = _DAT_00000110;
              uRamfffffcdc = 0x104;
              uRamfffffcd8 = _DAT_00000104;
              puVar19 = (undefined1 *)0xfffffcd4;
              uRamfffffcd4 = 0x104;
              iRamffffffec = _DAT_0000010c;
              uVar13 = _DAT_00000104;
              uVar14 = _DAT_00000108;
              if (bVar33 || bVar32 != bVar34) {
                iVar16 = _DAT_00000110;
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
                  uVar11 = (uint)*(ushort *)(uVar18 + 0x3e);
                  uRamfffffff4 = 8;
                  uVar13 = 0xfffffff4;
                  uVar14 = 0xfffffff4;
                  iVar16 = iRamffffffec;
                  goto LAB_2c415d8a;
                }
LAB_2c415dcc:
                *(short *)(uVar13 + 0xe) = (short)uVar21;
                puVar19 = (undefined1 *)0xfffffcd4;
                if (iVar16 != 0) {
                  uVar21 = uVar13 & 0xff;
                  if (uVar21 == 0) {
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
                  puVar19 = (undefined1 *)0xfffffcc0;
                  uVar26 = 0x104;
                  uRamfffffcc0 = uVar13;
                  uRamfffffcc8 = uVar14;
                  uRamfffffccc = uVar21;
                  uRamfffffcd0 = uVar30;
LAB_2c415dd6:
                  *(uint *)(puVar19 + -4) = unaff_lr;
                  *(uint *)(puVar19 + -8) = uVar30;
                  *(uint *)(puVar19 + -0xc) = uVar21;
                  *(undefined4 *)(puVar19 + -0x10) = uVar14;
                  *(undefined4 *)(puVar19 + -0x14) = uVar26;
                  *(uint *)(puVar19 + -0x18) = uVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                uVar11 = 0x104;
                iVar16 = _DAT_00000110;
LAB_2c415d8a:
                uVar30 = 0xfffffff4;
                if (uVar11 == 0) {
                  puVar19 = (undefined1 *)0xfffffcd4;
                  uVar30 = (uint)*(ushort *)(uVar13 + 0x36);
                  if (iVar16 == 0) {
                    uVar21 = (uint)*(ushort *)(uVar13 + 6);
                    iVar16 = 0;
                    goto LAB_2c415dcc;
                  }
                }
                else {
                  if (uVar11 == 0) goto LAB_2c415e06;
                  puVar19 = (undefined1 *)0xfffffce0;
                  uVar26 = 0;
                  uVar14 = uRamfffffcd4;
                  uVar21 = uRamfffffcd8;
                  uVar30 = uRamfffffcdc;
                  if (iRamfffffff8 == 0) goto LAB_2c415dd6;
                  *(short *)(uVar13 + 0x16) = (short)uVar13;
                  *(short *)(uVar11 + 6) = (short)(uVar18 << 4);
                  *(short *)(uVar13 + 0x3e) = (short)uVar13;
                  uVar13 = (uint)*(ushort *)
                                  (*(ushort *)(*(ushort *)(*(ushort *)(uVar13 + 0xe) + 0x1e) + 0x2e)
                                  + 0x3e);
                  if (uVar18 << 4 != 0) {
                    return CONCAT44(iRamfffffce0,uVar11);
                  }
                  if (uVar18 << 4 != 0) {
                    if (uVar18 << 4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    *(undefined2 *)(uVar13 + 0xe) = 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  software_bkpt(0xce);
                  uVar5 = (undefined2)uRamfffffcdc;
                  *(undefined2 *)(uVar13 + 0xe) = uVar5;
                  *(undefined2 *)(uVar13 + 0x1e) = uVar5;
                  *(undefined2 *)(uVar13 + 0x26) = uVar5;
                  *(undefined2 *)(uVar13 + 0x2e) = uVar5;
                  *(undefined2 *)(uVar13 + 0x36) = uVar5;
                  *(undefined2 *)(uVar13 + 0x3e) = uVar5;
                }
                uVar30 = (uint)*(ushort *)(uVar13 + 0x1e);
                *(ushort *)(uVar13 + 0x2e) = *(ushort *)(uVar13 + 0x1e);
              }
              uVar21 = (uint)*(ushort *)(uVar13 + 6);
LAB_2c415e06:
              *(short *)(uVar13 + 0xe) = (short)uVar21;
              *(short *)(uVar13 + 0x1e) = (short)uVar30;
              *(uint *)(puVar19 + 0x33c) = uVar30;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
code_r0x2c415b9c:
            if (!bVar34) goto code_r0x2c415bf8;
            bVar34 = SBORROW4(uVar18,0x3e);
            register0x00000054 = (BADSPACEBASE *)puVar35;
            if (!bVar34) goto code_r0x2c415c14;
            if (!SBORROW4(uVar18 - 0x3e,0x3e)) goto FUN_2c415c38;
            if (SBORROW4(uVar18 - 0x7c,0x3e)) {
              puVar20 = (undefined4 *)(uVar18 - 0xf8);
              if (SBORROW4(uVar18 - 0xba,0x3e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              uVar5 = (undefined2)(uVar18 - 0xba);
              *(undefined2 *)(puVar19 + 0xe) = uVar5;
              *(undefined2 *)(puVar19 + 0x1e) = uVar5;
              *(undefined2 *)(puVar19 + 0x2e) = uVar5;
              *(undefined2 *)(puVar19 + 0x3e) = uVar5;
              puVar20 = (undefined4 *)(uint)*(ushort *)(puVar19 + 0x3e);
            }
          }
          puVar19 = (undefined1 *)*puVar20;
          puVar29 = (undefined1 *)puVar20[1];
          puVar25 = (undefined1 *)puVar20[3];
          puVar31 = (undefined1 *)puVar35;
          if (puVar20 != (undefined4 *)0xfffffff0) {
            *(uint *)((int)puVar35 + -4) = unaff_lr;
            *(int *)((int)puVar35 + -8) = (int)puVar19 << 2;
            *(undefined1 **)((int)puVar35 + -0xc) = puVar25;
            *(undefined1 **)((int)puVar35 + -0x10) = puVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x2c415cf4:
          *(uint *)(puVar31 + -4) = unaff_lr;
          *(undefined1 **)(puVar31 + -8) = puVar31 + 0x324;
          *(undefined1 **)(puVar31 + -0xc) = puVar25;
          *(undefined1 **)(puVar31 + -0x10) = puVar29;
          *(undefined1 **)(puVar31 + -0x14) = puVar19;
          uRam2c41601a = (short)puVar15;
          uRam2c416032 = (short)puVar15;
          *(undefined1 **)(puVar31 + -0x130) = puVar31 + 0x324;
          *(undefined1 **)(puVar31 + -0x134) = puVar25;
          *(uint *)(puVar31 + -0x138) = (uint)puVar15 & 0xffff;
          *(undefined4 *)(puVar31 + -0x13c) = 0x2c416014;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  } while( true );
}


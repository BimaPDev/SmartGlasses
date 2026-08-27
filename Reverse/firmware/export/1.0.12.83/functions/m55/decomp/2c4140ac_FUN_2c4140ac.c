/* FUN_2c4140ac @ 0x2c4140ac */

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

undefined8 FUN_2c4140ac(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  short sVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined1 *puVar19;
  int unaff_r4;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  uint uVar24;
  int unaff_r5;
  int iVar25;
  int unaff_r6;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 *puVar29;
  int unaff_r7;
  undefined4 uVar30;
  int iVar31;
  undefined1 *puVar32;
  uint uVar33;
  char unaff_r8;
  undefined1 *puVar34;
  uint unaff_lr;
  byte in_CY;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  uint *puVar38;
  undefined4 in_cr3;
  undefined8 in_d3;
  undefined8 unaff_d12;
  int in_stack_000003ac;
  undefined1 auStack_14 [8];
  
  puVar38 = (uint *)auStack_14;
  uVar7 = (undefined1)param_1;
  *(undefined1 *)(unaff_r6 + 9) = uVar7;
  *(int *)(unaff_r4 + 0x34) = unaff_r5;
  uVar8 = (undefined1)unaff_r6;
  *(undefined1 *)(unaff_r5 + 0xd) = uVar8;
  uVar4 = *(ushort *)(unaff_r4 + 0x1e);
  *(undefined1 *)(unaff_r5 + 2) = uVar7;
  *(uint *)(unaff_r6 + 0x54) = (uint)uVar4;
  *(char *)(unaff_r4 + 0xd) = (char)param_4;
  uVar15 = *(undefined4 *)(unaff_r5 + 0x54);
  *(undefined1 *)(unaff_r7 + 2) = uVar8;
  uVar18 = *(undefined4 *)(unaff_r6 + 0x14);
  *(int *)(unaff_r5 + 0x54) = unaff_r5;
  *(short *)(unaff_r4 + 6) = (short)uVar18;
  *(char *)(unaff_r6 + 2) = (char)uVar18;
  *(int *)(unaff_r5 + 0x54) = unaff_r5;
  *(char *)(param_1 + 0xe) = (char)unaff_r5;
  iVar20 = *(int *)(unaff_r4 + 0x74);
  *(int *)(unaff_r6 + 0x24) = iVar20;
  uVar5 = *(undefined2 *)(iVar20 + 0x16);
  *(char *)(iVar20 + 0xe) = (char)uVar15;
  iVar20 = *(int *)(iVar20 + 0x74);
  *(int *)(unaff_r6 + 0x54) = iVar20;
  *(undefined1 *)(iVar20 + 0xe) = uVar8;
  *(char *)(unaff_r6 + 9) = (char)uVar5;
  *(undefined2 *)(iVar20 + 0x3e) = uVar5;
  *(undefined1 *)(param_4 + 0xe) = uVar7;
  *(uint *)(iVar20 + 0x14) = unaff_r5 + iVar20 + (uint)in_CY;
  *(undefined1 *)(iVar20 + 9) = uVar8;
  uVar9 = (undefined1)in_stack_000003ac;
  if (iVar20 != 0) {
    iVar20 = *(int *)(unaff_r6 + 4);
    *(undefined1 *)(iVar20 + 9) = uVar9;
    uVar4 = *(ushort *)(iVar20 + 0x6b);
    uVar7 = (undefined1)(iVar20 + 0x65);
    *(undefined1 *)(unaff_r6 + 0x12) = uVar7;
    *(int *)(in_stack_000003ac + 0x54) = param_1;
    *(uint *)(unaff_r6 + 0x54) = (uint)uVar4;
    iVar26 = *(int *)(iVar20 + 0xd9);
    *(uint *)(iVar26 + 0x54) = (uint)uVar4;
    *(undefined1 *)(iVar26 + 0x12) = uVar7;
    *(int *)(in_stack_000003ac + 0x54) = param_1;
    *(int *)(iVar26 + 0x14) = iVar20 + 0x65;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar20 = *(int *)(unaff_r6 + 4);
  *(undefined1 *)(iVar20 + 0x11) = uVar9;
  uVar10 = SUB41(&stack0x00000374,0);
  *(undefined1 *)(iVar20 + 0x19) = uVar10;
  iVar20 = *(int *)(unaff_r6 + 4);
  *(undefined1 **)(in_stack_000003ac + 0x34) = &stack0x00000374;
  *(int *)(in_stack_000003ac + 0x14) = param_4;
  *(undefined1 *)(unaff_r6 + 1) = uVar7;
  *(char *)(iVar20 + 0x1e) = (char)unaff_r7;
  *(int *)(iVar20 + 0x44) = in_stack_000003ac;
  *(int *)(iVar20 + 0x54) = unaff_r7;
  *(uint *)(unaff_r6 + 0x54) = (uint)*(ushort *)(iVar20 + 6);
  *(undefined1 *)(unaff_r6 + 0x15) = uVar10;
  *(undefined1 *)(iVar20 + 0xd) = uVar9;
  *(char *)(unaff_r6 + 0xd) = (char)iVar20;
  *(int *)(iVar20 + 0x20) = param_1;
  *(int *)(unaff_r6 + 100) = in_stack_000003ac;
  *(int *)(iVar20 + 0x54) = unaff_r6;
  iVar26 = *(int *)(unaff_r6 + 4);
  *(undefined1 *)(iVar26 + 0xc) = 0x72;
  iVar25 = *(int *)(iVar26 + 0x40);
  *(undefined4 *)(iVar26 + 0x10) = 0x3e;
  uVar15 = *(undefined4 *)(iVar26 + 0x74);
  *(char *)(unaff_r6 + 0x11) = (char)uVar15;
  uVar7 = (undefined1)*(undefined4 *)(iVar25 + 100);
  *(undefined1 *)(iVar26 + 9) = uVar7;
  iVar20 = (int)*(short *)(iVar25 * 2);
  *(char *)(unaff_r6 + 0x11) = (char)*(short *)(iVar25 * 2);
  *(undefined4 *)(unaff_r6 + 0x24) = uVar15;
  *(int *)(unaff_r6 + 100) = iVar25;
  *(int *)(iVar20 + 0x74) = iVar26 << 1;
  iVar26 = *(int *)(unaff_r6 + 4);
  *(undefined1 *)(iVar25 + 9) = uVar7;
  *(char *)(iVar26 + 1) = (char)iVar26;
  *(undefined1 *)(iVar26 + 9) = uVar7;
  bVar3 = *(byte *)(unaff_r6 + 5);
  *(char *)(iVar25 + 0xc) = (char)(unaff_r6 << 1);
  *(uint *)(unaff_r6 + 0x14) = (uint)bVar3;
  *(byte *)(iVar25 + 0x19) = bVar3;
  uVar18 = *(undefined4 *)(bVar3 + 0x44);
  *(undefined4 *)(iVar25 + 0x10) = uVar18;
  *(undefined1 *)(unaff_r6 + 1) = 0x3e;
  *(undefined4 *)(iVar25 + 0x30) = uVar18;
  *(int *)(iVar25 + 0x14) = iVar25;
  uVar15 = *(undefined4 *)(unaff_r6 + 0x34);
  *(char *)(iVar25 + 0xc) = (char)uVar18;
  *(undefined4 *)(unaff_r6 + 0x34) = uVar15;
  *(undefined4 *)(iVar25 + 0x30) = uVar18;
  *(int *)(iVar25 + 0x14) = iVar25;
  *(int *)(iVar25 + 0x30) = unaff_r6;
  *(int *)(iVar20 + 0x34) = iVar20;
  *(int *)(iVar25 + 0x14) = iVar25;
  *(undefined4 *)(unaff_r6 + 0x54) = *(undefined4 *)(unaff_r6 + 0x34);
  uVar21 = *(uint *)(iVar25 + 0x74);
  *(undefined4 *)(unaff_r6 + 0x54) = *(undefined4 *)(unaff_r6 + 0x34);
  *(char *)(unaff_r6 + 0x15) = (char)uVar21;
  *(int *)(uVar21 + 0x44) = iVar25;
  iVar25 = *(int *)(unaff_r6 + 0x44);
  *(uint *)(unaff_r6 + 0x54) = uVar21;
  *(undefined4 *)(uVar21 + 0x10) = *(undefined4 *)(unaff_r6 + 0x74);
  *(char *)(unaff_r6 + 0x11) = (char)*(undefined4 *)(uVar21 + 0x74);
  uVar15 = *(undefined4 *)(iVar25 + 100);
  *(int *)(iVar20 + 0x34) = iVar20;
  *(int *)(iVar25 + 0x14) = iVar25;
  *(int *)(uVar21 + 0x14) = iVar20;
  iVar20 = *(int *)(iVar25 + 0x44);
  *(uint *)(iVar25 + 0x34) = uVar21 >> 9;
  *(undefined1 *)(iVar20 + 8) = 0x5d;
  uVar7 = (undefined1)iVar25;
  *(undefined1 *)(iVar20 + 0x11) = uVar7;
  *(undefined1 *)(unaff_r6 + 9) = uVar7;
  *(int *)(iVar25 + 0x54) = unaff_r6;
  *(undefined1 *)(iVar25 + 0x15) = uVar8;
  puVar22 = *(undefined1 **)(iVar25 + 0x44);
  *puVar22 = 100;
  iVar26 = *(int *)(iVar25 + 0x14);
  *(undefined1 *)(iVar25 + 0x11) = uVar8;
  puVar22[9] = uVar7;
  *(undefined4 *)(puVar22 + 0x24) = uVar15;
  *(char *)(iVar25 + 9) = (char)iVar26;
  iVar20 = *(int *)(unaff_r6 + 0x14);
  *(int *)(iVar25 + 0x74) = unaff_r6;
  *(undefined4 *)(iVar26 + 0x34) = 0x2c;
  uVar15 = *(undefined4 *)(iVar20 + 0x44);
  iVar20 = *(int *)(iVar25 + 0x74);
  *(undefined1 *)(iVar26 + 9) = 0x2c;
  *(int *)(iVar20 + 0x14) = iVar25;
  *(int *)(iVar25 + 0x34) = iVar26;
  iVar20 = *(int *)(unaff_r6 + 4);
  uVar8 = (undefined1)uVar15;
  *(undefined1 *)(iVar25 + 9) = uVar8;
  *(char *)(iVar20 + 1) = (char)iVar20;
  *(undefined1 *)(iVar20 + 9) = uVar8;
  bVar3 = *(byte *)(unaff_r6 + 5);
  uVar21 = (uint)bVar3;
  *(char *)(iVar25 + 0xc) = (char)iVar26;
  *(uint *)(unaff_r6 + 0x14) = uVar21;
  iVar20 = *(int *)(uVar21 + 0x14);
  *(byte *)(iVar25 + 0x19) = bVar3;
  uVar18 = *(undefined4 *)(uVar21 + 0x44);
  *(undefined4 *)(iVar25 + 0x10) = uVar18;
  *(undefined1 *)(unaff_r6 + 1) = 0x2c;
  *(undefined4 *)(iVar25 + 0x30) = uVar18;
  *(int *)(iVar25 + 0x14) = iVar25;
  uVar15 = *(undefined4 *)(unaff_r6 + 0x34);
  *(char *)(iVar25 + 0xc) = (char)uVar18;
  *(undefined4 *)(unaff_r6 + 0x34) = uVar15;
  sVar6 = *(short *)(unaff_r6 + iVar25);
  iVar27 = (int)sVar6;
  *(undefined4 *)(iVar27 + 0x14) = 0x2c;
  uVar8 = (undefined1)uVar15;
  *(undefined1 *)(iVar27 + 0xd) = uVar8;
  *(undefined1 *)(uVar21 + 9) = uVar7;
  *(int *)(iVar25 + 0x30) = iVar27;
  *(char *)(uVar21 + 9) = (char)iVar20;
  iVar26 = (int)*(short *)(iVar25 * 2);
  *(undefined4 *)(iVar27 + 0x14) = 0x2c;
  *(undefined1 *)(iVar27 + 0xd) = uVar8;
  *(undefined1 *)(uVar21 + 9) = uVar7;
  *(undefined1 *)(uVar21 + 0x1d) = uVar7;
  uVar30 = *(undefined4 *)(iVar26 + 0x44);
  *(int *)(iVar27 + 0x74) = iVar27;
  *(char *)(iVar20 + iVar25) = (char)sVar6;
  uVar15 = s_container_parent__p_lv_node__p_c_2c415734._20_4_;
  *(undefined1 *)(s_container_parent__p_lv_node__p_c_2c415734._20_4_ + 9) = uVar7;
  *(undefined4 *)(uVar15 + 0x30) = 0x6c;
  *(int *)(iVar25 + 0x14) = iVar25;
  iVar20 = *(int *)(iVar27 + 0x34);
  *(char *)(iVar25 + 0xd) = (char)*(undefined4 *)(uVar15 + 100);
  uVar18 = s_____>_ADD_item__content__s_2c415784._0_4_;
  uVar15 = s_______thirdparty_star_air_lvgl_a_2c415680._48_4_;
  *(int *)(iVar20 + 0x54) = iVar26;
  *(undefined4 *)(uVar15 + 0x14) = 0x74;
  *(undefined1 *)(uVar15 + 0xd) = uVar12;
  *(undefined1 *)(uVar18 + 9) = uVar7;
  *(undefined4 *)(uVar18 + 0x60) = 0x74;
  *(char *)(iVar25 + 0xd) = (char)*(undefined4 *)(iVar25 + 100);
  *(undefined4 *)(iVar25 + 0x54) = 0x74;
  iVar28 = *(int *)(uVar18 + 0x44);
  *(undefined4 *)(uVar18 + 0x74) = *(undefined4 *)(iVar25 + 100);
  *(char *)(iVar25 + 0x19) = cVar11;
  *(undefined1 *)(iVar26 + 0xd) = uVar13;
  *(char *)(iVar28 + 9) = cVar11;
  *(int *)(uVar18 + 0x14) = iVar25;
  sVar6 = *(short *)(iVar25 * 2);
  iVar25 = (int)sVar6;
  *(undefined4 *)(iVar28 + 0x14) = 100;
  *(undefined1 *)(iVar28 + 0xd) = uVar12;
  *(char *)(uVar18 + 9) = (char)sVar6;
  *(undefined4 *)(iVar26 + 100) = uVar30;
  uVar7 = (undefined1)*(undefined4 *)(iVar25 + 100);
  *(undefined1 *)(iVar25 + 0xd) = uVar7;
  *(char *)(iVar25 + 0x19) = cVar11;
  *(undefined1 *)(iVar26 + 0xd) = uVar13;
  cVar11 = (char)uVar18;
  *(char *)(iVar28 + 9) = cVar11;
  *(int *)(uVar18 + 0x14) = iVar25;
  uVar5 = *(undefined2 *)(iVar25 * 2);
  *(int *)(iVar28 + 0x14) = iVar25 << 1;
  uVar12 = (undefined1)iVar20;
  *(undefined1 *)(iVar28 + 0xd) = uVar12;
  *(char *)(uVar18 + 9) = (char)uVar5;
  *(undefined4 *)(iVar26 + 0x34) = uVar30;
  *(int *)(iVar28 + 0x54) = iVar20;
  *(undefined1 *)(uVar18 + 0x11) = uVar7;
  iVar27 = uVar18 * 2;
  iVar20 = *(int *)(iVar28 + 4);
  *(undefined1 *)(iVar27 + 9) = uVar7;
  *(char *)(iVar20 + 1) = (char)iVar20;
  *(undefined1 *)(iVar20 + 9) = uVar7;
  bVar3 = *(byte *)(iVar28 + 5);
  uVar21 = (uint)bVar3;
  uVar13 = (undefined1)uVar30;
  *(undefined1 *)(iVar27 + 0xc) = uVar13;
  *(uint *)(iVar28 + 0x14) = uVar21;
  *(byte *)(iVar27 + 0x19) = bVar3;
  uVar15 = *(undefined4 *)(uVar21 + 0x44);
  *(undefined4 *)(iVar27 + 0x10) = uVar15;
  *(char *)(iVar28 + 1) = (char)(iVar25 << 1);
  *(undefined4 *)(iVar27 + 0x30) = uVar15;
  *(int *)(iVar27 + 0x14) = iVar27;
  iVar26 = *(int *)(iVar28 + 0x34);
  *(char *)(iVar27 + 0xc) = (char)uVar15;
  *(int *)(iVar28 + 0x34) = iVar26;
  iVar31 = *(int *)(iVar27 + 0x10);
  iVar28 = *(int *)(iVar27 + 0x44);
  uVar15 = *(undefined4 *)(iVar27 + 100);
  *(char *)(uVar21 + 0xd) = (char)iVar27;
  *(int *)(iVar27 + 0x30) = iVar28;
  *(uint *)(uVar21 + 0x54) = uVar21;
  iVar20 = *(int *)(iVar27 + 0x14);
  iVar25 = iVar27 + -0x3d;
  *(undefined1 *)(iVar20 + 0xc) = 0x6d;
  *(int *)(iVar28 + 0x24) = iVar25;
  iVar28 = *(int *)(iVar31 + 0x40);
  uVar7 = (undefined1)uVar15;
  *(undefined1 *)(iVar20 + 0xd) = uVar7;
  *(int *)(*(short *)(iVar28 + iVar25) + 0x54) = (int)*(short *)(iVar28 + iVar25);
  iVar20 = *(int *)(iVar27 + -0x29);
  *(undefined1 *)(iVar20 + 9) = uVar7;
  *(undefined4 *)(iVar28 + 0x54) = *(undefined4 *)(iVar20 + 0x54);
  *(char *)(iVar25 * 2 + 0x11) = (char)iVar28;
  iVar25 = *(int *)(iVar20 + 100);
  iVar20 = iVar28 * 2;
  *(undefined4 *)(iVar20 + 0x74) = *(undefined4 *)(iVar25 + 0x54);
  *(undefined4 *)(iVar20 + 0x30) = 0x44;
  *(int *)(iVar28 + 0x54) = iVar20;
  *(char *)(iVar25 + 0x11) = (char)iVar28;
  iVar20 = iRam0000006e;
  uVar7 = (undefined1)iRam0000006e;
  *(char *)(_DAT_0000004e + 0xc) = (char)*(undefined4 *)(_DAT_0000004e + 100);
  puVar22 = puRam2c415834;
  iVar25 = *(int *)(puRam2c415834 + 0x74);
  uRam000000ac = (undefined2)iVar20;
  _DAT_000000ae = (undefined2)((uint)iVar20 >> 0x10);
  *(undefined4 *)(iVar20 + 0x14) = 0x72;
  *(int *)(iVar20 + 0x54) = iVar26 + -0x74;
  uRam00000053 = SUB41(puVar22,0);
  iVar28 = *(int *)(iVar25 + 100);
  uRam00000069 = uVar7;
  _DAT_0000007e = iVar28;
  *puVar22 = 0x3a;
  *(undefined4 *)(puVar22 + 0x30) = 0x70;
  iVar27 = *(int *)(puVar22 + 0x44);
  iVar25 = (int)*(short *)(iVar27 * 2);
  *(int *)(iVar25 + 0x54) = iVar25;
  *(int *)(iVar25 + 0x40) = iVar27;
  *(undefined1 *)(iVar25 + 0xc) = 0x70;
  *(int *)(iVar20 + 0x14) = iVar25;
  *(char *)(iVar20 + 0x11) = (char)(iVar26 + -0x151);
  *(int *)(iVar25 + 0x40) = iVar27;
  *(char *)(iVar25 + 0x14) = (char)iVar27;
  uVar15 = *(undefined4 *)(iVar25 + 0x60);
  *(char *)(iVar27 + 0x11) = (char)iVar28;
  *(undefined4 *)(iVar25 + 0x10) = uVar15;
  *(undefined4 *)(iVar25 + 0x30) = uVar15;
  iVar28 = *(int *)(iVar27 + 100);
  *(int *)(iVar20 + 0x14) = iVar25;
  uVar15 = *(undefined4 *)(iVar27 + 100);
  *(char *)(iVar25 + 9) = (char)iVar27;
  *(char *)(iVar27 + 0x11) = (char)uVar15 + unaff_r8;
  uVar15 = *(undefined4 *)(iVar25 + 0x74);
  *(undefined1 *)(*(int *)(iVar25 + 0x54) + 0x11) = uVar7;
  iVar27 = *(int *)(iVar25 + 100);
  sVar6 = (short)(iVar26 + -0x151) + -0xd9;
  *(char *)(iVar25 + 0xc) = (char)iVar27;
  *(short *)(iVar25 + 6) = sVar6;
  *(short *)(iVar25 + 6) = sVar6;
  uVar7 = (undefined1)uVar15;
  *(undefined1 *)(iVar20 + 0x15) = uVar7;
  *(undefined1 *)(iVar20 + -0x18) = uVar7;
  uVar15 = *(undefined4 *)(iVar27 + 100);
  *(undefined1 *)(iVar20 + -0x45) = 0x3c;
  *(int *)(iVar27 + 0x54) = iVar25;
  *(undefined1 *)(iVar25 + 0xc) = 0x6e;
  iVar26 = *(int *)(iVar28 + 0x10);
  iRam0000004a = iVar27;
  *(char *)(iVar27 + 1) = (char)iVar26;
  *(char *)(iVar26 + 0x11) = (char)iVar27;
  *(int *)(iVar27 + 0x40) = iVar26;
  *(char *)(iVar25 + 0x11) = (char)uVar15;
  *(undefined1 *)(iVar26 + 0x15) = uVar7;
  iVar20 = *(int *)(iVar25 + 0x24);
  iVar26 = (uint)*(byte *)(iVar26 + -0x2d + iVar27) * 2;
  uVar5 = (undefined2)iVar20;
  *(undefined2 *)(iVar26 + 6) = uVar5;
  *(undefined2 *)(iVar26 + 6) = uVar5;
  iVar26 = iVar20 * 4;
  *(undefined2 *)(iVar26 + 6) = uVar5;
  iVar27 = iVar20 * 0x10;
  *(int *)(iVar27 + 0x54) = iVar20;
  *(int *)(iVar27 + 0x54) = iVar27;
  *(int *)(iVar20 * 4 + 0x44) = iVar28;
  iVar20 = *(int *)(iVar26 + 0x44);
  uVar7 = (undefined1)*(undefined4 *)(iVar20 + 0x54);
  *(undefined1 *)(iVar20 + 0x11) = uVar7;
  *(char *)(iVar26 + 9) = (char)iVar20;
  *(undefined1 *)(iVar27 + 9) = 0;
  *(int *)(iVar20 + 0x34) = iVar28;
  *(char *)(iVar26 + 0xd) = (char)iVar20;
  iVar20 = (int)*(short *)(iVar27 + iVar20);
  iVar25 = *(int *)(iVar26 + 0x54);
  uVar15 = *(undefined4 *)(iVar27 + 4);
  *(undefined1 *)(iVar26 + 0xd) = uVar7;
  *(undefined1 *)(iVar25 + 0xd) = uVar7;
  *(char *)(iVar25 + 0x19) = (char)iVar26;
  *(char *)(iVar20 + 0xd) = (char)iVar28;
  *(char *)(iVar26 + 0x11) = (char)iVar25;
  *(int *)(iVar20 + 0x34) = iVar28;
  iVar28 = *(int *)(iVar25 + 100);
  *(int *)(iVar27 + 0x54) = iVar26;
  *(char *)(iVar25 + 0x11) = (char)iVar27;
  *(undefined4 *)(iVar27 + 0x54) = uVar15;
  iVar25 = *(int *)(iVar26 + 0x34);
  *(int *)(iVar20 + 0x34) = iVar28;
  *(undefined4 *)(iVar25 + 0x14) = uVar15;
  *(char *)(iVar28 + 0x14) = (char)iVar26;
  iVar26 = *(int *)(*(int *)(iVar25 + 0x74) + 100);
  iVar20 = *(int *)(iVar26 + 4);
  *(undefined1 *)(iVar25 + 9) = uVar7;
  *(char *)(iVar20 + 1) = (char)iVar20;
  *(undefined1 *)(iVar20 + 9) = uVar7;
  bVar3 = *(byte *)(iVar26 + 5);
  uVar21 = (uint)bVar3;
  *(char *)(iVar25 + 0xc) = (char)iVar26;
  *(uint *)(iVar26 + 0x14) = uVar21;
  iVar20 = *(int *)(uVar21 + 0x14);
  *(byte *)(iVar25 + 0x19) = bVar3;
  uVar18 = *(undefined4 *)(uVar21 + 0x44);
  *(undefined4 *)(iVar25 + 0x10) = uVar18;
  *(char *)(iVar26 + 1) = (char)uVar15;
  *(undefined4 *)(iVar25 + 0x30) = uVar18;
  *(int *)(iVar25 + 0x14) = iVar25;
  puVar19 = *(undefined1 **)(iVar26 + 0x34);
  *(char *)(iVar25 + 0xc) = (char)uVar18;
  *(undefined1 **)(iVar26 + 0x34) = puVar19;
  *(undefined4 *)(iVar25 + 0x44) = *(undefined4 *)(iVar25 + 0x60);
  uVar15 = *(undefined4 *)(iVar20 + 100);
  *(int *)(iVar26 + 0x14) = iVar26;
  puVar29 = puRam0000009b;
  uVar21 = *(uint *)(iVar25 + 0x14);
  *(uint *)(uVar21 + 0x54) = uVar21;
  *(undefined1 *)(uVar21 + 0x10) = 0x6e;
  uVar7 = (undefined1)uVar15;
  DAT_00000074 = uVar7;
  *(undefined1 *)(uVar21 + 0xc) = 0x27;
  *(undefined4 *)(uVar21 + 0x10) = 0x65;
  *(undefined4 *)(uVar21 + 0x40) = 0x27;
  uVar21 = uVar21 >> 9;
  *(uint *)(uVar21 + 0x54) = uVar21;
  *(undefined4 *)(*(int *)(uVar21 + 0x74) + 0x24) = 0x73;
  iVar20 = _DAT_0000007e;
  iRam0000004a._0_2_ = CONCAT11(0x74,(undefined1)iRam0000004a);
  *(undefined4 *)(*(int *)(CONCAT22(uRam000000b0,_DAT_000000ae) + 0x34) + 0x24) = 0x73;
  iVar26 = *(int *)(*(int *)(iVar20 + 0x74) + 0x34);
  uVar8 = (undefined1)iVar26;
  *(undefined1 *)(*(int *)(iVar20 + 0x74) + 0x15) = uVar8;
  puVar29[0x11] = uVar8;
  uVar18 = *(undefined4 *)(iVar20 + 0x54);
  *(undefined4 *)(iVar26 + 0x24) = uVar18;
  iVar25 = *(int *)(iVar20 + 0x74);
  iVar26 = *(int *)(iVar25 + 0x34);
  *(undefined4 *)(puVar29 + 0x14) = 0x74;
  *(undefined1 **)(puVar29 + 0x14) = puVar19;
  *(char *)(iVar25 + 9) = (char)uVar18;
  *(undefined1 *)(iVar25 + 1) = uVar7;
  puVar22 = (undefined1 *)(iVar20 << 1);
  do {
    *(undefined1 **)(iVar20 + 0x54) = puVar22;
    *(undefined4 *)(iVar25 + 0x44) = uVar15;
    uVar15 = *(undefined4 *)(iVar20 + 100);
    iVar27 = *(int *)(puVar29 + 4);
    iVar20 = *(int *)(iVar27 + 0x54);
    *(char *)(iVar27 + 0x11) = (char)uVar15;
    *(undefined4 *)(iVar20 + 0x34) = uVar15;
    *(int *)(iVar26 + 0x24) = iVar25 << 1;
    *(undefined1 **)(puVar29 + 0x54) = puVar19;
    *(int *)(puVar29 + 0x14) = iVar27;
    puVar19 = *(undefined1 **)(iVar27 + 0x44);
code_r0x2c415b00:
    iVar20 = (int)*(short *)(iVar27 + iVar20);
    *(int *)(iVar27 + 0x54) = iVar26;
    iVar26 = *(int *)(iVar20 + 0x44);
    *(char *)(iVar26 + 0x11) = (char)puVar29;
    *(char *)(iVar26 + 9) = (char)puVar19;
    *(int *)(iVar26 + 0x14) = iVar20;
    iVar25 = *(int *)(iVar20 + 0x14);
    *(undefined1 **)(iVar20 + 0x54) = puVar29;
    *(char *)(iVar25 + 9) = (char)puVar19;
    *(int *)(iVar25 + 0x14) = iVar20;
code_r0x2c415b1c:
    iVar26 = iVar20 * 2;
    *(char *)(iVar20 + 0x11) = (char)puVar22;
    iVar20 = *(int *)(*(int *)(iVar20 + 0x44) + 0x44);
    uVar7 = (undefined1)iVar26;
    *(undefined1 *)(iVar25 + 0x15) = uVar7;
    *(undefined1 *)(iVar20 + 0x11) = uVar7;
    puVar32 = *(undefined1 **)(iVar26 + 0x14);
    puVar29 = *(undefined1 **)(iVar25 * 2 + 0x44);
    iVar20 = *(int *)(iVar25 + 0x54);
    puVar22 = *(undefined1 **)(puVar29 + 4);
code_r0x2c415b40:
    puVar29[0x11] = uVar7;
    *(undefined1 **)(iVar20 + 0x74) = puVar29;
    iVar28 = iRam2c415e88;
    puVar29 = *(undefined1 **)(iVar20 + 0x34);
    puVar19 = (undefined1 *)0xdc;
    while( true ) {
      uVar21 = (uint)(byte)puVar22[iVar20];
      iVar25 = uVar21 - 0x2b;
      uVar15 = uRam2c415c88;
      if (SBORROW4(uVar21 - 0x16,0x15)) break;
      iVar27 = uVar21 - 0x69;
      if (SBORROW4(iVar25,0x3e)) goto code_r0x2c415b00;
      bVar37 = SBORROW4(iVar27,0x3e);
      iVar27 = uVar21 - 0xa7;
      while( true ) {
        iVar25 = iVar27;
        if (bVar37) goto code_r0x2c415b1c;
        if (SBORROW4(iVar25,0x3e)) goto code_r0x2c415b40;
        if (SBORROW4(iVar25 + -0x3e,0x3e)) break;
        bVar37 = SBORROW4(iVar25 + -0x7c,0x3e);
        iVar27 = iVar25 + -0xba;
        if (!bVar37) {
          bVar37 = SBORROW4(iVar25 + -0x137,0x3e);
          uVar21 = iVar25 - 0x175;
          puVar16 = puRam2c415cf4;
          if (bVar37) {
            VectorWidenMultipyAccumulate(in_d3,unaff_d12,1);
            if (SBORROW4(uVar21,0x3e)) {
              uVar21 = iVar25 - 0x1f1;
              if (SBORROW4(iVar25 + -0x1b3,0x3e)) {
                bVar37 = SBORROW4(uVar21,0x3e);
                uVar21 = iVar25 - 0x1df;
                coprocessor_loadlong(0xc,in_cr3,uVar21);
                goto code_r0x2c415b9c;
              }
            }
            else {
              uVar7 = SUB41(puRam2c415cf4,0);
              *(undefined1 *)(iRam2c415e88 + 9) = uVar7;
              *(char *)(iVar25 + -0x1b2) = (char)(iVar25 + -0x1b3);
              *(undefined1 *)(iVar25 + -0x1aa) = uVar7;
              bVar3 = puVar29[5];
              uVar21 = (uint)bVar3;
              *(char *)(iVar28 + 0xc) = (char)puVar32;
              *(uint *)(puVar29 + 0x14) = uVar21;
              puVar16 = *(undefined1 **)(uVar21 + 0x14);
              *(byte *)(iVar28 + 0x19) = bVar3;
              puVar32 = *(undefined1 **)(uVar21 + 0x44);
              *(undefined1 **)(iVar28 + 0x10) = puVar32;
              puVar29[1] = (char)puVar22;
              *(undefined1 **)(iVar28 + 0x30) = puVar32;
            }
            *(int *)(iVar28 + 0x14) = iVar28;
            uVar15 = *(undefined4 *)(puVar29 + 0x34);
            *(char *)(iVar28 + 0xc) = (char)puVar32;
            *(undefined4 *)(puVar29 + 0x34) = uVar15;
            *(char *)(iVar28 + 0x14) = (char)puVar32;
            *(uint *)(puVar29 + 100) = uVar21;
            *(int *)(puVar29 + 0x34) = iVar28;
            puVar22 = puVar29 + -0x20;
            *(char *)(uVar21 + 9) = (char)puVar16;
            iVar26 = (int)*(short *)(iVar28 * 2);
            puVar29[-0xf] = (char)iVar28;
            puVar29 = puVar22;
code_r0x2c415bf8:
            bVar37 = SBORROW4((int)puVar22,0x66);
            puVar29[9] = (char)puVar22 + -0x66;
            *(undefined1 **)(iVar28 + 0x34) = puVar32;
            *(undefined1 **)(iVar26 + 0x54) = puVar32;
            *(undefined1 **)(iVar28 + 0x34) = puVar29;
            *(undefined1 **)(iVar28 + 0x44) = puVar32;
            *(char *)(uVar21 + 9) = (char)puVar16;
code_r0x2c415c14:
            uVar21 = _DAT_00000104;
            puVar22 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar16 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar19 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar23 = (undefined4 *)((int)register0x00000054 + 0x30c);
            puVar29 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar32 = (undefined1 *)((int)register0x00000054 + 0x30c);
            puVar38 = (uint *)((int)register0x00000054 + -0x10c);
            puVar34 = (undefined1 *)((int)register0x00000054 + -0x10c);
            if ((undefined1 *)register0x00000054 != (undefined1 *)0xfffffcf4) {
              if (((uint)puVar22 & 0xff) != 0) {
                *(undefined1 **)((int)register0x00000054 + -0x110) = puVar32;
                *(undefined1 **)((int)register0x00000054 + -0x114) = puVar29;
                *(undefined1 **)((int)register0x00000054 + -0x118) = puVar16;
                puVar38 = (uint *)((int)register0x00000054 + -0x11c);
                *puVar38 = (uint)puVar22;
FUN_2c415c38:
                puVar38[-1] = unaff_lr;
                puVar38[-2] = (uint)puVar32;
                puVar38[-3] = (uint)puVar29;
                puVar38[-4] = (uint)puVar16;
                puVar38[-5] = (uint)puVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              puVar32 = (undefined1 *)((int)register0x00000054 + 0x208);
              if ((undefined1 *)register0x00000054 == (undefined1 *)0xfffffdf8)
              goto code_r0x2c415cf4;
              if ((undefined1 *)register0x00000054 != (undefined1 *)0xfffffdf8) {
                *(uint *)((int)register0x00000054 + -0x110) = unaff_lr;
                *(undefined1 **)((int)register0x00000054 + -0x114) =
                     (undefined1 *)((int)register0x00000054 + 0x208);
                *(undefined1 **)((int)register0x00000054 + -0x118) = puVar29;
                *(undefined1 **)((int)register0x00000054 + -0x11c) = puVar19;
                *(undefined1 **)((int)register0x00000054 + -0x120) = puVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uVar33 = 8;
              uVar24 = _DAT_00000104 << 2;
              bVar35 = (int)uVar24 < 0;
              bVar36 = uVar24 == 0;
              uRamfffffce8 = unaff_lr;
              uRamfffffce4 = 8;
              iRamfffffce0 = _DAT_00000110;
              uRamfffffcdc = 0x104;
              uRamfffffcd8 = _DAT_00000104;
              puVar22 = (undefined1 *)0xfffffcd4;
              uRamfffffcd4 = 0x104;
              iRamffffffec = _DAT_0000010c;
              uVar17 = _DAT_00000104;
              uVar15 = _DAT_00000108;
              if (bVar36 || bVar35 != bVar37) {
                iVar20 = _DAT_00000110;
                if (bVar36 || bVar35 != bVar37) {
                  if (bVar36 || bVar35 != bVar37) {
                    return CONCAT44(_DAT_00000104,0x104);
                  }
                  puVar1 = (undefined2 *)(_DAT_00000104 + 0x1e);
                  puVar2 = (undefined2 *)(_DAT_00000104 + 0x3e);
                  if (bVar36 || bVar35 != bVar37) {
                    *(undefined2 *)(_DAT_00000104 + 0x2e) = 0x104;
                    *puVar2 = 0x104;
                  }
                  else {
                    *(undefined2 *)(_DAT_00000104 + 0xe) = 0x104;
                    *puVar1 = 0x104;
                  }
                  uVar14 = (uint)*(ushort *)(uVar21 + 0x3e);
                  uRamfffffff4 = 8;
                  uVar17 = 0xfffffff4;
                  uVar15 = 0xfffffff4;
                  iVar20 = iRamffffffec;
                  goto LAB_2c415d8a;
                }
LAB_2c415dcc:
                *(short *)(uVar17 + 0xe) = (short)uVar24;
                puVar22 = (undefined1 *)0xfffffcd4;
                if (iVar20 != 0) {
                  uVar24 = uVar17 & 0xff;
                  if (uVar24 == 0) {
                    _UsageFault = uVar33;
                    if (uVar33 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffed8;
                      uRamfffffb88 = uVar33;
                      uRamfffffb84 = uVar33;
                      uRamfffffb80 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if ((uVar33 & 0xff) != 0) {
                      uRamfffffb90 = uVar33;
                      uRamfffffb8c = uVar33;
                      uRamfffffb88 = uVar33;
                      uRamfffffb84 = unaff_lr;
                      uRamfffffb80 = uVar33;
                      uRamfffffb7c = uVar33;
                      uRamfffffb78 = uVar33;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar33 == 0) {
                      uRamfffffb90 = unaff_lr;
                      uRamfffffb8c = 0xfffffee0;
                      uRamfffffb88 = uVar33;
                      uRamfffffb84 = uVar33;
                      uRamfffffb80 = 0xfffffee0;
                      uRamfffffb7c = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    if (uVar33 == 0) {
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
                    uRamfffffb88 = uVar33;
                    uRamfffffb84 = uVar33;
                    uRamfffffb80 = 0xfffffedc;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  uRamfffffcc4 = 0x104;
                  puVar22 = (undefined1 *)0xfffffcc0;
                  uVar18 = 0x104;
                  uRamfffffcc0 = uVar17;
                  uRamfffffcc8 = uVar15;
                  uRamfffffccc = uVar24;
                  uRamfffffcd0 = uVar33;
LAB_2c415dd6:
                  *(uint *)(puVar22 + -4) = unaff_lr;
                  *(uint *)(puVar22 + -8) = uVar33;
                  *(uint *)(puVar22 + -0xc) = uVar24;
                  *(undefined4 *)(puVar22 + -0x10) = uVar15;
                  *(undefined4 *)(puVar22 + -0x14) = uVar18;
                  *(uint *)(puVar22 + -0x18) = uVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
              }
              else {
                uVar14 = 0x104;
                iVar20 = _DAT_00000110;
LAB_2c415d8a:
                uVar33 = 0xfffffff4;
                if (uVar14 == 0) {
                  puVar22 = (undefined1 *)0xfffffcd4;
                  uVar33 = (uint)*(ushort *)(uVar17 + 0x36);
                  if (iVar20 == 0) {
                    uVar24 = (uint)*(ushort *)(uVar17 + 6);
                    iVar20 = 0;
                    goto LAB_2c415dcc;
                  }
                }
                else {
                  if (uVar14 == 0) goto LAB_2c415e06;
                  puVar22 = (undefined1 *)0xfffffce0;
                  uVar18 = 0;
                  uVar15 = uRamfffffcd4;
                  uVar24 = uRamfffffcd8;
                  uVar33 = uRamfffffcdc;
                  if (iRamfffffff8 == 0) goto LAB_2c415dd6;
                  *(short *)(uVar17 + 0x16) = (short)uVar17;
                  *(short *)(uVar14 + 6) = (short)(uVar21 << 4);
                  *(short *)(uVar17 + 0x3e) = (short)uVar17;
                  uVar17 = (uint)*(ushort *)
                                  (*(ushort *)(*(ushort *)(*(ushort *)(uVar17 + 0xe) + 0x1e) + 0x2e)
                                  + 0x3e);
                  if (uVar21 << 4 != 0) {
                    return CONCAT44(iRamfffffce0,uVar14);
                  }
                  if (uVar21 << 4 != 0) {
                    if (uVar21 << 4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    *(undefined2 *)(uVar17 + 0xe) = 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  software_bkpt(0xce);
                  uVar5 = (undefined2)uRamfffffcdc;
                  *(undefined2 *)(uVar17 + 0xe) = uVar5;
                  *(undefined2 *)(uVar17 + 0x1e) = uVar5;
                  *(undefined2 *)(uVar17 + 0x26) = uVar5;
                  *(undefined2 *)(uVar17 + 0x2e) = uVar5;
                  *(undefined2 *)(uVar17 + 0x36) = uVar5;
                  *(undefined2 *)(uVar17 + 0x3e) = uVar5;
                }
                uVar33 = (uint)*(ushort *)(uVar17 + 0x1e);
                *(ushort *)(uVar17 + 0x2e) = *(ushort *)(uVar17 + 0x1e);
              }
              uVar24 = (uint)*(ushort *)(uVar17 + 6);
LAB_2c415e06:
              *(short *)(uVar17 + 0xe) = (short)uVar24;
              *(short *)(uVar17 + 0x1e) = (short)uVar33;
              *(uint *)(puVar22 + 0x33c) = uVar33;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          else {
code_r0x2c415b9c:
            if (!bVar37) goto code_r0x2c415bf8;
            bVar37 = SBORROW4(uVar21,0x3e);
            register0x00000054 = (BADSPACEBASE *)puVar38;
            if (!bVar37) goto code_r0x2c415c14;
            if (!SBORROW4(uVar21 - 0x3e,0x3e)) goto FUN_2c415c38;
            if (SBORROW4(uVar21 - 0x7c,0x3e)) {
              puVar23 = (undefined4 *)(uVar21 - 0xf8);
              if (SBORROW4(uVar21 - 0xba,0x3e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else {
              uVar5 = (undefined2)(uVar21 - 0xba);
              *(undefined2 *)(puVar22 + 0xe) = uVar5;
              *(undefined2 *)(puVar22 + 0x1e) = uVar5;
              *(undefined2 *)(puVar22 + 0x2e) = uVar5;
              *(undefined2 *)(puVar22 + 0x3e) = uVar5;
              puVar23 = (undefined4 *)(uint)*(ushort *)(puVar22 + 0x3e);
            }
          }
          puVar22 = (undefined1 *)*puVar23;
          puVar32 = (undefined1 *)puVar23[1];
          puVar29 = (undefined1 *)puVar23[3];
          puVar34 = (undefined1 *)puVar38;
          if (puVar23 != (undefined4 *)0xfffffff0) {
            *(uint *)((int)puVar38 + -4) = unaff_lr;
            *(int *)((int)puVar38 + -8) = (int)puVar22 << 2;
            *(undefined1 **)((int)puVar38 + -0xc) = puVar29;
            *(undefined1 **)((int)puVar38 + -0x10) = puVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x2c415cf4:
          *(uint *)(puVar34 + -4) = unaff_lr;
          *(undefined1 **)(puVar34 + -8) = puVar34 + 0x324;
          *(undefined1 **)(puVar34 + -0xc) = puVar29;
          *(undefined1 **)(puVar34 + -0x10) = puVar32;
          *(undefined1 **)(puVar34 + -0x14) = puVar22;
          uRam2c41601a = (short)puVar19;
          uRam2c416032 = (short)puVar19;
          *(undefined1 **)(puVar34 + -0x130) = puVar34 + 0x324;
          *(undefined1 **)(puVar34 + -0x134) = puVar29;
          *(uint *)(puVar34 + -0x138) = (uint)puVar19 & 0xffff;
          *(undefined4 *)(puVar34 + -0x13c) = 0x2c416014;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  } while( true );
}


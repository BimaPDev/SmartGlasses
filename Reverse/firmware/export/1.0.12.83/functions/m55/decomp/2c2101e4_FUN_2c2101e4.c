/* FUN_2c2101e4 @ 0x2c2101e4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c1135c6) */
/* WARNING: Removing unreachable block (ram,0x2c1141e0) */
/* WARNING: Removing unreachable block (ram,0x2c210560) */
/* WARNING: Removing unreachable block (ram,0x2c11420a) */
/* WARNING: Removing unreachable block (ram,0x2c114210) */
/* WARNING: Removing unreachable block (ram,0x2c11421c) */
/* WARNING: Removing unreachable block (ram,0x2c0ec664) */
/* WARNING: Removing unreachable block (ram,0x2c210ca2) */
/* WARNING: Removing unreachable block (ram,0x2c210d5a) */
/* WARNING: Removing unreachable block (ram,0x2c210cba) */
/* WARNING: Removing unreachable block (ram,0x2c211262) */
/* WARNING: Removing unreachable block (ram,0x2c211200) */
/* WARNING: Removing unreachable block (ram,0x2c21120c) */
/* WARNING: Removing unreachable block (ram,0x2c211148) */
/* WARNING: Removing unreachable block (ram,0x2c11455c) */
/* WARNING: Removing unreachable block (ram,0x2c113846) */
/* WARNING: Removing unreachable block (ram,0x2c1134e0) */
/* WARNING: Removing unreachable block (ram,0x2c113558) */
/* WARNING: Removing unreachable block (ram,0x2c113562) */
/* WARNING: Removing unreachable block (ram,0x2c113956) */
/* WARNING: Removing unreachable block (ram,0x2c1145ea) */
/* WARNING: Removing unreachable block (ram,0x2c114608) */
/* WARNING: Removing unreachable block (ram,0x2c11463c) */
/* WARNING: Removing unreachable block (ram,0x2c114050) */
/* WARNING: Removing unreachable block (ram,0x2c114070) */
/* WARNING: Removing unreachable block (ram,0x2c11409e) */
/* WARNING: Removing unreachable block (ram,0x2c1140d2) */
/* WARNING: Removing unreachable block (ram,0x2c1140d6) */
/* WARNING: Removing unreachable block (ram,0x2c1140a4) */
/* WARNING: Removing unreachable block (ram,0x2c1140aa) */
/* WARNING: Removing unreachable block (ram,0x2c1140d8) */
/* WARNING: Removing unreachable block (ram,0x2c11421e) */
/* WARNING: Removing unreachable block (ram,0x2c114220) */
/* WARNING: Removing unreachable block (ram,0x2c114232) */
/* WARNING: Removing unreachable block (ram,0x2c11423c) */
/* WARNING: Removing unreachable block (ram,0x2c11424e) */
/* WARNING: Removing unreachable block (ram,0x2c114264) */
/* WARNING: Removing unreachable block (ram,0x2c11426a) */
/* WARNING: Removing unreachable block (ram,0x2c11426c) */
/* WARNING: Removing unreachable block (ram,0x2c114272) */
/* WARNING: Removing unreachable block (ram,0x2c11429a) */
/* WARNING: Removing unreachable block (ram,0x2c11429e) */
/* WARNING: Removing unreachable block (ram,0x2c1142a0) */
/* WARNING: Removing unreachable block (ram,0x2c1142d2) */
/* WARNING: Removing unreachable block (ram,0x2c1142e4) */
/* WARNING: Removing unreachable block (ram,0x2c114312) */
/* WARNING: Removing unreachable block (ram,0x2c11410a) */
/* WARNING: Removing unreachable block (ram,0x2c11414a) */
/* WARNING: Removing unreachable block (ram,0x2c11417e) */
/* WARNING: Removing unreachable block (ram,0x2c114150) */
/* WARNING: Removing unreachable block (ram,0x2c114184) */
/* WARNING: Removing unreachable block (ram,0x2c114192) */
/* WARNING: Removing unreachable block (ram,0x2c114198) */
/* WARNING: Removing unreachable block (ram,0x2c1141a0) */
/* WARNING: Removing unreachable block (ram,0x2c1141a6) */
/* WARNING: Removing unreachable block (ram,0x2c1141ac) */
/* WARNING: Removing unreachable block (ram,0x2c1141be) */
/* WARNING: Removing unreachable block (ram,0x2c114164) */
/* WARNING: Removing unreachable block (ram,0x2c11416a) */
/* WARNING: Removing unreachable block (ram,0x2c114170) */
/* WARNING: Removing unreachable block (ram,0x2c114172) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c2101e4(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint extraout_r1;
  int extraout_r1_00;
  undefined1 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int extraout_r3;
  uint uVar12;
  int extraout_r3_00;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 *puVar16;
  undefined4 unaff_r5;
  uint uVar17;
  undefined1 *puVar18;
  int *piVar19;
  undefined2 *puVar20;
  int unaff_r9;
  int unaff_r11;
  undefined4 extraout_r12;
  undefined1 unaff_lr;
  int unaff_pc;
  bool bVar21;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 uVar22;
  undefined1 in_q8 [16];
  undefined8 in_d19;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined1 in_q12 [16];
  undefined8 in_d26;
  int in_stack_0000029c;
  
  iVar10 = iRam2c21052c;
  uVar17 = uRam2c210524;
  *(undefined4 *)(iRam2c21052c + iRam2c210528) = unaff_r5;
  coprocessor_loadlong(0,in_cr3,unaff_pc + 0x2dc);
  func_0x2d113d30(uVar17 & param_3,0x58420a60);
  bVar21 = SBORROW4(iVar10,0xec);
  iVar5 = -0x4f7beb40;
  uRamb0841500 = 0xb08414c0;
  uRam2c21055e = (undefined2)extraout_r3_00;
  uVar17 = (uint)bRamb08414da;
  iVar9 = uVar17 << 0x1f;
  iVar7 = extraout_r1_00;
  iVar14 = extraout_r3_00;
  while( true ) {
    uVar22 = in_q8._0_8_;
    if (iVar9 < 0 != bVar21) break;
    uVar13 = *(undefined4 *)(uVar17 + 8);
    piVar19 = *(int **)(uVar17 + 0x10);
    iRam2c210c28 = piVar19[1];
    iVar10 = piVar19[2];
    bVar1 = *(byte *)(*piVar19 * 0x1000000 + 0x1c);
    in_q8._8_8_ = VectorShiftRight(in_d22,1);
    *(byte *)(bVar1 + 0x14) = bVar1;
    puVar6 = *(undefined1 **)(iVar10 + 0x50);
    in_q8._0_8_ = VectorShiftRight(uVar22,1);
    if (uVar17 == 0xffffffec) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int **)(iVar5 + 0x20) = piVar19 + 3;
    iVar3 = _DAT_2c210bb4;
    if (iVar10 << 2 != 0 && iVar10 << 2 < 0 == bVar21) {
      *(undefined4 *)(iVar5 + 4) = uVar13;
      *(char *)(iVar10 * 0x4000 + 4) = (char)puVar6;
      *puVar6 = (char)((int)puVar6 << 1);
      VectorShiftRight(in_q12._8_8_,0x23);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < (iVar5 << 0x10) >> 0x20) {
      *(undefined1 *)(uVar17 + 0x28) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar21 = false;
    *(int *)(in_stack_0000029c + iVar10) = _DAT_2c210bb4;
    iVar7 = *(int *)(iVar3 + 4);
    iVar9 = *(int *)(iVar3 + 8);
    iVar14 = *(int *)(iVar3 + 0xc);
    iVar5 = *(int *)(iVar3 + 0x10);
    param_5 = *(int *)(iVar3 + 0x14);
    uVar17 = *(uint *)(iVar3 + 0x18);
    iVar10 = iVar5 << 3;
  }
  *(int *)iVar7 = iVar7;
  *(int *)(iVar7 + 4) = iVar9;
  puVar8 = (undefined2 *)(iVar10 * 2);
  *(int *)(iVar14 + 0x74) = iVar10;
  puVar20 = (undefined2 *)((int)puVar8 * uVar17 * 0x2000 + (int)puVar8);
  *(char *)((int)puVar20 + 7) = (char)uVar17;
  *puVar8 = 0x1014;
  uVar11 = (uint)bRam00000c10;
  iVar10 = (int)puVar20 * 8;
  puVar6 = (undefined1 *)(uVar17 << 2);
  if ((int)puVar6 < 1) {
    puVar15 = *(uint **)(iRam2c210c50 + 4);
    iVar10 = *(int *)(iRam2c210c50 + 8);
    software_bkpt(4);
    coprocessor_loadlong(0,in_cr0,unaff_pc + 0x5b4);
    *puVar15 = uVar17;
    puVar15[1] = iVar10 << 3;
    VectorHalvingAdd(in_q12._8_8_,uVar22,4,1);
    VectorHalvingAdd(in_d26,in_d19,4,1);
    coprocessor_moveto(0,0,3,0x3f,in_cr6,in_cr1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar17 = 0;
  if (param_5 + 0x25 < 1) {
    software_bkpt(0x8a);
    while( true ) {
      uVar11 = (int)puVar6 >> 0x18;
      iVar10 = (int)puVar6 * 4;
      puVar6 = (undefined1 *)(uVar17 >> 0x1b);
      if (puVar6 == (undefined1 *)0x0) break;
      if (puVar6 == (undefined1 *)0x0) {
        uVar12 = uVar11 - 0xb8;
        iVar10 = uVar11 - 0x25;
        uRam2c114414 = (undefined2)uVar12;
LAB_2c1143ee:
        *puVar6 = (char)(param_5 + 0x25);
        if (puVar6 != (undefined1 *)0x0) {
          iVar10 = iVar10 + 0xae;
        }
        iVar7 = *(int *)(uVar12 + 0x6c);
        *(short *)(iVar10 + 0xe) = (short)uVar12;
        *(char *)(iVar7 + 1) = (char)iVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_5 + 0x2f) = (ushort)(uVar17 >> 0x1b);
      uVar17 = iVar10 - 4;
      iVar10 = (int)puVar20 << 8;
      uVar12 = uVar11;
      if (((uint)puVar20 & 0x1000000) != 0 && iVar10 != 0) goto LAB_2c1143ee;
      coprocessor_load(6,in_cr4,unaff_r9 + -0x124);
      if ((uVar11 >> 0x12 & 1) == 0 || uVar11 >> 0x13 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar20 = (undefined2 *)((int)puVar20 >> 0x17);
    }
    puVar6 = (undefined1 *)0x0;
  }
  iVar7 = _DAT_2c114544;
  *(int *)(uVar11 * 2) = iVar10;
  iVar10 = _DAT_2c1147f8;
  puVar18 = puVar6 + iVar7;
  iVar7 = *(int *)(((int)puVar6 >> 0x18) << 0x19);
  *(int *)iVar7 = iVar7;
  *(undefined1 **)(iVar7 + 4) = puVar18;
  *(int *)(iVar10 + 0xef) = iVar7;
  coprocessor_load(0xb,in_cr1,unaff_r11 + -0x194);
  if (((uint)puVar18 & 0x3fffffff) == 0) {
    iVar10 = (*(int *)(iVar10 + 0x93) >> 0x18) + -0x37;
    *(char *)(((int)puVar18 >> 0x10) + 5) = (char)iVar10;
    iVar5 = _DAT_2c114758;
    iVar10 = iVar10 * 0x40;
    coprocessor_moveto(1,4,4,iVar10,in_cr6,in_cr1);
    bVar1 = *(byte *)(iVar10 + 10);
    uVar11 = (uint)bVar1;
    *(short *)(uVar11 + 0x10) = (short)((uint)puVar18 >> 0x10);
    *(ushort *)(uVar11 - 0x1a) = bVar1 - 0x30;
    iVar14 = iRam2c1144f4;
    uVar17 = uRam2c1144ec;
    uVar12 = *(uint *)(uVar11 - 0x28);
    iVar10 = *(int *)(uVar11 - 0x24);
    iRam2c1144f0 = CONCAT22(iRam2c1144f0._2_2_,(short)uVar12);
    iVar7 = iRam2c1144f0;
    *(undefined1 *)(uRam2c1144ec + 0x18) = unaff_lr;
    puVar4 = (ushort *)(0xb0451 - iVar10);
    iVar10 = iVar7 << 2;
    iVar9 = 0x88;
    bVar21 = SBORROW4((int)puVar4,0xd6);
    while( true ) {
      puVar4[0x18] = (ushort)puVar4;
      auVar2._8_8_ = in_d23;
      auVar2._0_8_ = in_d22;
      VectorUnsignedFixedToFloat(auVar2,5);
      *(short *)(uVar17 + 0x10) = (short)iVar10;
      uVar17 = (uint)*puVar4;
      if (!bVar21) break;
      iVar9 = *(ushort *)(iVar9 + 0x34) - uVar17;
      iVar10 = 0;
      bVar21 = SBORROW4(uVar17,iVar14);
      puVar4 = (ushort *)(uVar17 - iVar14);
      *(int *)(iVar5 + 0x70) = iVar9;
      if (puVar4 == (ushort *)0x0) {
        coprocessor_function(0,8,1,in_cr3,in_cr13,in_cr11);
        puVar16 = (undefined4 *)(uVar12 & 0xff);
        if (-1 < iVar14 + -0xb5) {
          func_0x2c5f9600(*puVar16,puVar16[1],0,puVar16[2]);
          piVar19 = (int *)((extraout_r1 & 0x7ff) >> 6);
          *piVar19 = extraout_r1 << 0x15;
          piVar19[1] = extraout_r3;
          piVar19[2] = iVar7;
          piVar19[3] = (int)piVar19;
          piVar19[4] = iVar14 + -0xb5;
          coprocessor_moveto(9,7,0,extraout_r12,in_cr15,in_cr10);
          coprocessor_function(4,6,1,in_cr15,in_cr13,in_cr15);
          coprocessor_loadlong(4,in_cr1,0x28);
                    /* WARNING: Could not recover jumptable at 0x2c0ec4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar14 + -0x79))(*(code **)(iVar14 + -0x79),0x28);
          return;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


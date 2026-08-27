/* FUN_2c114582 @ 0x2c114582 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c1141e0) */
/* WARNING: Removing unreachable block (ram,0x2c11420a) */
/* WARNING: Removing unreachable block (ram,0x2c114210) */
/* WARNING: Removing unreachable block (ram,0x2c11421c) */
/* WARNING: Removing unreachable block (ram,0x2c1135c6) */
/* WARNING: Removing unreachable block (ram,0x2c0ec664) */
/* WARNING: Removing unreachable block (ram,0x2c11429a) */
/* WARNING: Removing unreachable block (ram,0x2c11429e) */
/* WARNING: Removing unreachable block (ram,0x2c1142d2) */
/* WARNING: Removing unreachable block (ram,0x2c1142e4) */
/* WARNING: Removing unreachable block (ram,0x2c114456) */
/* WARNING: Removing unreachable block (ram,0x2c11445c) */
/* WARNING: Removing unreachable block (ram,0x2c1143b4) */
/* WARNING: Removing unreachable block (ram,0x2c1143d6) */
/* WARNING: Removing unreachable block (ram,0x2c1143b6) */
/* WARNING: Removing unreachable block (ram,0x2c1143ee) */
/* WARNING: Removing unreachable block (ram,0x2c1143f2) */
/* WARNING: Removing unreachable block (ram,0x2c1143f4) */
/* WARNING: Removing unreachable block (ram,0x2c1143c0) */
/* WARNING: Removing unreachable block (ram,0x2c1143d0) */
/* WARNING: Removing unreachable block (ram,0x2c1143fe) */
/* WARNING: Removing unreachable block (ram,0x2c114312) */
/* WARNING: Removing unreachable block (ram,0x2c11455c) */
/* WARNING: Removing unreachable block (ram,0x2c113846) */
/* WARNING: Removing unreachable block (ram,0x2c1134e0) */
/* WARNING: Removing unreachable block (ram,0x2c113558) */
/* WARNING: Removing unreachable block (ram,0x2c113562) */
/* WARNING: Removing unreachable block (ram,0x2c113956) */
/* WARNING: Removing unreachable block (ram,0x2c1145ea) */
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
/* WARNING: Removing unreachable block (ram,0x2c1142a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c114582(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ushort *puVar5;
  uint extraout_r1;
  uint uVar6;
  undefined4 extraout_r2;
  undefined4 *puVar7;
  int extraout_r3;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint unaff_r4;
  int iVar11;
  uint unaff_r5;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int unaff_r7;
  int unaff_r11;
  undefined4 extraout_r12;
  bool in_ZR;
  bool in_CY;
  bool bVar15;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined1 in_q12 [16];
  undefined8 uVar16;
  
  uVar13 = (uint)(ushort)param_4[1];
  uVar6 = *(uint *)(param_1 + 0x28);
  if (!in_CY || in_ZR) {
    *(short *)(uVar6 + 0xe) = (short)(uVar6 >> 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar10 = (int)uVar6 >> 0x18;
  if (((ushort)param_4[1] & 0x10) == 0 || uVar13 << 0x1c == 0) {
    if (uVar13 == 0) {
      *(char *)((unaff_r7 >> 0x10) + 5) = (char)(iVar10 + -0x37);
      iVar4 = _DAT_2c114758;
      iVar10 = (iVar10 + -0x37) * 0x40;
      coprocessor_moveto(1,4,4,iVar10,in_cr6,in_cr1);
      bVar1 = *(byte *)(iVar10 + 10);
      uVar13 = (uint)bVar1;
      *(short *)(uVar13 + 0x10) = (short)((uint)unaff_r7 >> 0x10);
      *(ushort *)(uVar13 - 0x1a) = bVar1 - 0x30;
      iVar12 = iRam2c1144f4;
      uVar6 = uRam2c1144ec;
      uVar8 = *(uint *)(uVar13 - 0x28);
      iVar10 = *(int *)(uVar13 - 0x24);
      iRam2c1144f0 = CONCAT22(iRam2c1144f0._2_2_,(short)uVar8);
      iVar11 = iRam2c1144f0;
      *(char *)(uRam2c1144ec + 0x18) = (char)unaff_r7;
      puVar5 = (ushort *)(0xb0451 - iVar10);
      iVar10 = iVar11 << 2;
      iVar9 = 0x88;
      bVar15 = SBORROW4((int)puVar5,0xd6);
      while( true ) {
        puVar5[0x18] = (ushort)puVar5;
        auVar3._8_8_ = in_d23;
        auVar3._0_8_ = in_d22;
        VectorUnsignedFixedToFloat(auVar3,5);
        *(short *)(uVar6 + 0x10) = (short)iVar10;
        uVar6 = (uint)*puVar5;
        if (!bVar15) break;
        iVar9 = *(ushort *)(iVar9 + 0x34) - uVar6;
        iVar10 = 0;
        bVar15 = SBORROW4(uVar6,iVar12);
        puVar5 = (ushort *)(uVar6 - iVar12);
        *(int *)(iVar4 + 0x70) = iVar9;
        if (puVar5 == (ushort *)0x0) {
          coprocessor_function(0,8,1,in_cr3,in_cr13,in_cr11);
          puVar7 = (undefined4 *)(uVar8 & 0xff);
          if (iVar12 + -0xb5 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          func_0x2c5f9600(*puVar7,puVar7[1],0,puVar7[2]);
          piVar14 = (int *)((extraout_r1 & 0x7ff) >> 6);
          *piVar14 = extraout_r1 << 0x15;
          piVar14[1] = extraout_r3;
          piVar14[2] = iVar11;
          piVar14[3] = (int)piVar14;
          piVar14[4] = iVar12 + -0xb5;
          coprocessor_moveto(9,7,0,extraout_r12,in_cr15,in_cr10);
          coprocessor_function(4,6,1,in_cr15,in_cr13,in_cr15);
          coprocessor_loadlong(4,in_cr1,0x28);
                    /* WARNING: Could not recover jumptable at 0x2c0ec4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar12 + -0x79))(*(code **)(iVar12 + -0x79),0x28);
          return;
        }
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = uVar6;
  param_4[1] = uVar13 << 0x1c;
  param_4[2] = (uint)param_4;
  param_4[3] = unaff_r4;
  param_4[4] = uVar13;
  *(short *)(param_1 + 0x30) = (short)param_1;
  piVar14 = (int *)((int)uVar13 >> (unaff_r5 & 0xff));
  iVar11 = unaff_r4 - 0x2b8;
  coprocessor_store(4,in_cr2,iVar11);
  uVar13 = *(uint *)(iVar10 + 0x38);
  if (((int)uVar6 >> 0x17 & 1U) == 0 || iVar10 == 0) {
    iVar10 = 0x2e;
    uVar13 = (uint)piVar14 >> 9;
    if (((uint)piVar14 >> 8 & 1) == 0 || uVar13 == 0) {
      uRam0000002d._1_3_ = (undefined3)param_1;
      uRam00000031 = CONCAT31(0x114970,(char)((uint)param_1 >> 0x18));
      uRam00000035 = CONCAT31((int3)param_4,0x2c);
      uRam00000039._1_3_ = (undefined3)unaff_r7;
      uRam00000039 = CONCAT31(uRam00000039._1_3_,(char)((uint)param_4 >> 0x18));
      uRam0000003d._0_1_ = (undefined1)((uint)unaff_r7 >> 0x18);
      puVar7 = (undefined4 *)((int)param_4 * 4);
      iVar12 = param_1 * 0x40000000 >> 0x18;
      *(char *)(puVar7 + param_1 * 0x10000000) = (char)param_4;
      uVar6 = (uint)(unaff_r7 >> 8) >> 0x19;
      iVar10 = (unaff_r7 >> 8) << 2;
      coprocessor_function2(7,9,1,in_cr15,in_cr11,in_cr2);
      if (iVar10 == 0 || iVar10 < 0 != SBORROW4((int)param_4,unaff_r4)) {
        *(short *)(uVar6 + 0x36) = (short)param_4;
        *puVar7 = 0;
        puVar7[1] = iVar12;
        *(undefined2 *)(puVar7 + 0x10) = 0x97;
        uVar2 = *(ushort *)((iVar11 >> 10) + 0xe);
        VectorMultiplyAccumulate(in_q12._0_8_,in_d22,4,1);
        *(char *)(iVar12 + 0x18) = (char)uVar2;
        uVar6 = (uint)*(ushort *)(iVar12 + 0x3e);
        *(short *)(unaff_r4 - 0x1f1) = (short)(puVar7 + 2);
        *(undefined4 **)((uint)uVar2 * 2) = puVar7 + 2;
      }
      *(int *)(uVar6 * 4 + 0x50) = unaff_r11 + -0x40000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_r7 = (int)*(short *)(unaff_r7 + (int)param_4);
    iVar11 = -0x48000000;
    piVar14 = (int *)&DAT_0000000a;
  }
  *piVar14 = param_1;
  piVar14[1] = iVar10;
  piVar14[2] = (int)param_4;
  piVar14[3] = iVar11;
  piVar14[4] = unaff_r5;
  piVar14[5] = (int)piVar14;
  piVar14[6] = unaff_r7;
  VectorSub(unaff_d11,unaff_d12,4,1);
  uVar16 = func_0x2b5c525e((uint)&stack0xfffffff8 & 0xf000f000,uVar13);
  iVar10 = (int)((ulonglong)uVar16 >> 0x20);
  coprocessor_moveto(1,6,0,unaff_r7,in_cr11,in_cr15);
  iVar12 = *(int *)(iVar10 + iVar11);
  *(short *)(iVar11 * 2) = (short)iVar11;
  uVar6 = iVar10 * 4;
  iVar11 = ((int)uVar16 + iVar11) * 0x4000000;
  *(int *)iVar10 = iVar10;
  *(undefined4 *)(iVar10 + 4) = extraout_r2;
  *(int *)(iVar10 + 8) = iVar11;
  *(undefined4 *)(iVar10 + 0xc) = 0x12;
  uVar13 = iVar10 << 0x14;
  if ((uVar6 & 0x4000) == 0 || uVar13 == 0) {
    *(uint *)uVar6 = uVar6;
    *(uint *)(uVar6 + 4) = uVar13;
    *(undefined4 *)(uVar6 + 8) = extraout_r2;
    *(int *)(uVar6 + 0xc) = iVar11;
    uVar2 = *(ushort *)(iVar12 + 10);
    iVar10 = iRam2c11407c >> 0xb;
    uVar13 = (uint)*(byte *)(iVar10 + 0x1a);
    *(uint *)uVar13 = uVar13;
    *(uint *)(uVar13 + 4) = (uint)uVar2;
    *(int *)(uVar13 + 8) = iVar10;
    VectorMultiplyAccumulate(in_q12._0_8_,in_d22,4,1);
    uVar13 = (uint)uRam00000050;
    *(ushort *)(iVar10 + 0x3a) = uVar2;
    *(uint *)((uVar6 + 0x10) * 0x80000) = (uint)uVar2;
    uVar6 = uVar13 << 2;
  }
  if ((uVar13 >> 0xf & 1) == 0 || uVar13 >> 0x10 == 0) {
    if ((uVar13 >> 0x19 & 1) == 0 || uVar13 >> 0x1a == 0) {
      *(int *)(uVar6 + 0x50) = iVar12 * 0x4000 + unaff_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(int *)(iVar12 + 0x3c) = iVar12 * 0x4000;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


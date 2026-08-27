/* FUN_2c45dcde @ 0x2c45dcde */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c099fe6) */
/* WARNING: Removing unreachable block (ram,0x2c099fee) */
/* WARNING: Removing unreachable block (ram,0x2c099578) */
/* WARNING: Removing unreachable block (ram,0x2c0995a0) */
/* WARNING: Removing unreachable block (ram,0x2c09969a) */
/* WARNING: Removing unreachable block (ram,0x2c0995a8) */
/* WARNING: Removing unreachable block (ram,0x2c0995c0) */
/* WARNING: Removing unreachable block (ram,0x2c0995d2) */
/* WARNING: Removing unreachable block (ram,0x2c0995d4) */
/* WARNING: Removing unreachable block (ram,0x2c0995de) */
/* WARNING: Removing unreachable block (ram,0x2c09960c) */
/* WARNING: Removing unreachable block (ram,0x2c0996c0) */
/* WARNING: Removing unreachable block (ram,0x2c45dbd6) */
/* WARNING: Removing unreachable block (ram,0x2c45df92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int * FUN_2c45dcde(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  code cVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  int extraout_r1;
  undefined2 extraout_r3;
  int extraout_r3_00;
  int unaff_r4;
  int *piVar7;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int unaff_r6;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int unaff_r9;
  int unaff_r11;
  undefined4 in_r12;
  int unaff_pc;
  int *piVar14;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 extraout_s0;
  undefined1 extraout_var [12];
  undefined8 in_d5;
  undefined8 in_d17;
  undefined8 in_d19;
  int in_stack_000000c8;
  int *piStack_10;
  undefined1 auVar15 [16];
  
  iVar6 = _LAB_2c45dd1c;
  UNRECOVERED_JUMPTABLE = (code *)(unaff_r5 + 5);
  piStack_10 = param_1;
  if (!SCARRY4(unaff_r5,5)) {
    cVar2 = UNRECOVERED_JUMPTABLE[_LAB_2c45dd1c];
    uVar9 = (uint)(byte)cVar2;
    uVar4 = *(ushort *)(_LAB_2c45dd1c + 0x10);
    uVar10 = *(undefined4 *)(uVar9 + 0x3c);
    *(char *)(*(int *)(in_stack_000000c8 + unaff_r6) + -2) = (char)uVar10;
    *(ushort *)(uVar4 + 0x1c) = (ushort)(byte)cVar2;
    *(uint *)UNRECOVERED_JUMPTABLE = uVar9;
    *(code **)(unaff_r5 + 9) = UNRECOVERED_JUMPTABLE;
    *(undefined4 *)(unaff_r5 + 0xd) = uVar10;
    *(char *)(uVar9 + 0xc) = (char)iVar6;
    func_0x2b7a3754();
    iVar8 = func_0x2bc1d33e();
    auVar15._4_12_ = extraout_var;
    auVar15._0_4_ = extraout_s0;
    uVar4 = *(ushort *)(extraout_r3_00 + iVar6);
    VectorHalvingAdd(in_d17,auVar15._0_8_,1,1);
    *(char *)(extraout_r1 + iVar8) = (char)iVar8;
    *(short *)(uVar4 + 0x20) = (short)extraout_r1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_moveto(0xc,6,5,in_r12,in_cr9,in_cr8);
  *(char *)(unaff_r6 + 3) = (char)in_stack_000000c8;
  if (!SBORROW4(param_2,0xb8)) {
    if (!SBORROW4(param_2,0xb8)) {
      param_1[5] = (int)UNRECOVERED_JUMPTABLE;
      bVar1 = *(byte *)(unaff_r4 + 0x1d);
      *(undefined4 *)(bVar1 + 0x5c) = _DAT_0000009c;
      *(int *)(param_4 + 0x34) = param_2;
      *(byte *)(param_4 + 0xe) = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Could not recover jumptable at 0x2c45dbe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar11 = (int *)(*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return piVar11;
  }
  if (0x89 < in_stack_000000c8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = in_stack_000000c8 + -0x8a;
  piVar14 = param_1 + 3;
  *(int **)(in_stack_000000c8 + -0x12) = piVar14;
  iVar6 = iRam2c45df1c;
  piVar11 = (int *)(unaff_r6 + 0xdb);
  if (piVar14 == (int *)0x0) {
    bVar1 = *(byte *)(in_stack_000000c8 + -0xc2);
    uVar9 = (uint)piVar11 >> 0xb;
    if (uVar9 != 0xfffffffa && !SCARRY4(uVar9,6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    software_interrupt(0x1e);
    bVar3 = *(byte *)(uVar9 + in_stack_000000c8 + -0x73);
    uVar13 = in_stack_000000c8 + 0x79;
    cVar5 = *(char *)(uVar9 + 0x2c45e772);
    if (piVar11 != (int *)0x0) {
      *(undefined2 *)(bVar3 + 4) = 0x98c4;
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)software_udf(0xa5,0x2c0998cc);
      (*UNRECOVERED_JUMPTABLE)();
    }
    *(undefined2 *)(unaff_r6 + 0xe3) = 0;
    iVar6 = (int)_MasterStackPointer;
    software_bkpt(0xe0);
    *(int *)(int)cVar5 = iVar6;
    ((int *)(int)cVar5)[1] = uVar13;
    *(ushort *)((uint)bVar1 + iVar6) = (ushort)bVar3;
    uRam0000000f = 0xffffffff;
    *(undefined1 *)(bVar3 + 0xff) = 0xff;
    coprocessor_moveto(0,7,4,(uVar13 >> 0x1f) << 2,in_cr0,in_cr1);
    iVar6 = *(int *)(*(int *)(-((int)uVar13 >> 0x1f) + 0x7d) + -((int)uVar13 >> 0x1f) + 0x11);
    *(int *)(_DAT_2c09a2d0 + 0x10) = _DAT_2c09a2d0;
    uVar10 = VectorGetElement(in_d5,2,2,0);
    VectorMultiplyAccumulate(in_d19,uVar10,2,1);
    coprocessor_moveto(0,7,4,(iVar6 >> 0x10) << 1,in_cr0,in_cr12);
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE = (code *)software_udf(0xe0,0x2c09955e);
    (*UNRECOVERED_JUMPTABLE)();
  }
  *(short *)(unaff_r6 + 0x117) = (short)piVar11;
  *(int *)(in_stack_000000c8 + -0xaf) = param_4;
  param_4 = param_4 + unaff_r9;
  coprocessor_moveto2(0xf,4,param_4,&piStack_10,in_cr9);
  iVar8 = *piVar11;
  iVar12 = *(int *)(unaff_r6 + 0xdf);
  *(int *)((int)param_1 + 0xabb) = iVar12;
  piVar7 = (int *)((uint)piVar14 & 0xffff);
  if (param_3 == 0) {
    *(short *)(piVar7 + 0xe) = (short)param_2 + -0xe3;
    if (iVar12 != 0) {
      *(short *)(param_4 + 0xc) = (short)iVar12 + 0x1a;
      return param_1;
    }
    if (iVar8 == 0) {
      if (-1 < (int)(param_1 + -0x3a)) {
        coprocessor_storelong(0xd,in_cr7,unaff_r11 + 0x48);
        *(undefined4 *)(param_4 + 0x70) = 0;
        if (iVar6 + (int)piVar11 == 0) {
          *(short *)(CONCAT13((undefined1)uRam0000000f,_HardFault) + 0x18) =
               (short)((uint)uRam0000000b >> 8);
        }
        coprocessor_store(2,in_cr13,unaff_pc + -0x3c8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (-1 < (int)(param_1 + -0x3a)) {
    func_0x2ca713b6();
    uRam0000002b = extraout_r3;
    func_0x2c60cccc(uRam00000003,uRam00000007,uRam0000000b);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = *(char *)((int)piVar14 + iVar8);
  *(short *)((int)piVar14 + (int)cVar5) = (short)param_3;
  iVar6 = *piVar7;
  *(int *)(piVar7[1] + 0x30) = (int)cVar5;
  *(char *)(iVar6 + 0xe) = (char)iVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


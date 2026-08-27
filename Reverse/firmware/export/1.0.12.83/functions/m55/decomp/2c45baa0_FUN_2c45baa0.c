/* FUN_2c45baa0 @ 0x2c45baa0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c45baa0(int param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int extraout_r2;
  int iVar9;
  undefined4 *puVar10;
  int extraout_r3;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  int unaff_r9;
  undefined4 unaff_r10;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool bVar14;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined1 in_q0 [16];
  undefined1 in_q12 [16];
  undefined1 in_q14 [16];
  undefined8 uVar15;
  undefined4 in_stack_000000d0;
  uint in_stack_000000d4;
  int in_stack_000000d8;
  int in_stack_000000e8;
  int iStack000001e8;
  int in_stack_000003e0;
  
  piVar11 = _LAB_2c45bc30;
  bVar1 = (&stack0x000002e0)[param_4];
  uVar12 = (uint)bVar1;
  puVar10 = &stack0x000000d0;
  *(char *)(param_2 + 7) = (char)param_1;
  *(short *)(uVar12 + param_2) = (short)param_2;
  uVar4 = _LAB_2c45bcc0;
  iStack000001e8 = param_3;
  if (in_NG != '\0') {
    *(undefined4 **)((int)piVar11 + uVar12) = puVar10;
    *piVar11 = param_1;
    piVar11[1] = param_3 + 0xbc;
    piVar11[2] = (int)&stack0x000002e0;
    piVar11[3] = uVar12;
    cVar2 = *(char *)(param_1 * 2);
    if (0xb1 < param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_2 + 0x14) = (char)param_1;
    piVar11 = (int *)((int)&stack0x000002e0 * 0x10);
    uVar8 = param_3 + 0xbc >> 0x14;
    coprocessor_function2(0xf,0xb,4,in_cr6,in_cr9,in_cr15);
    bRam2c45be95 = bVar1;
    *piVar11 = (int)puVar10;
    piVar11[1] = 0x2c45be88;
    iVar5 = _LAB_2c45bd0c;
    uVar6 = uRam2c45bd08;
    piVar13 = piVar11 + 2;
    if (cVar2 != -0x56) {
      *(char *)(_LAB_2c45bd0c + 1) = (char)piVar13;
      UNRECOVERED_JUMPTABLE = (code *)(uVar6 >> (uVar8 & 0xff));
      piVar11[0x14] = iVar5;
      *(byte *)((int)piVar11 + 0x21) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x2c45b49e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (UNRECOVERED_JUMPTABLE,&LAB_2c45bc40,uVar8,uVar12 - (int)UNRECOVERED_JUMPTABLE);
      return;
    }
    *(int **)(uVar12 + 0x40) = piVar13;
    iVar5 = func_0x2d3461a0(0x2c45bc4c,(short)piVar11[0xb116f12],uVar8,uRam2c45bc5a);
    *(short *)(&LAB_2c45bc40 + extraout_r2) = (short)piVar13;
    piVar3 = _PendSV;
    coprocessor_store(5,in_cr12,0x2c45bc50);
    iVar9 = (int)piVar13 * 0x400;
    iVar7 = piVar11[0x14];
    *_PendSV = iVar7;
    piVar3[1] = iVar9;
    piVar3[2] = uVar12;
    piVar3[3] = (int)piVar3;
    piVar3[4] = 0x2c45bc50;
    *(undefined1 *)((int)piVar3 + 0x15) = 0xd2;
    bVar1 = *(byte *)(iVar9 + 0x12);
    *(byte *)(iVar7 + 0x17) = bVar1;
    *(char *)(bVar1 + 3) = (char)iVar7;
    *(short *)(iVar5 * 2) = (short)iVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_CY || in_ZR) {
    *(uint *)(param_1 + 0x44) = param_2;
    *(char *)(in_stack_000000e8 + 5) = (char)in_stack_000000d4;
    coprocessor_moveto(5,2,5,unaff_r9,in_cr13,in_cr15);
    puVar10 = (undefined4 *)&stack0x00000320;
    uVar8 = _LAB_2c45baf4 >> 0xe;
    param_2 = in_stack_000000d4;
    uVar6 = in_stack_000000d4;
    iVar5 = in_stack_000000d8;
    if ((_LAB_2c45baf4 >> 0xd & 1) != 0 && uVar8 != 0) goto LAB_2c45b8b4;
  }
  else {
    uVar12 = (int)&stack0x000002e0 * 0x40000;
    if ((int)uVar12 < 6) {
      VectorBitwiseSelect(in_q0,in_q12,in_q14);
      halt_baddata();
    }
    if (6 < uVar12) {
      *(short *)(&stack0x0000040a + uVar12) = (short)piVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0x18 < (int)&stack0x000003d8) {
      *(undefined4 *)(in_stack_000003e0 + 0x125) = _LAB_2c45bcc0;
      *(undefined1 **)(uVar12 + 0x6a) = &stack0x000003d5;
      *(undefined4 *)(uVar12 + 0x6a) = uVar4;
      iVar5 = param_2 - 8;
      *(int *)(param_2 + 0x70) = iVar5;
      *(undefined1 **)(param_2 + 0x70) = &stack0x000003d5;
      *(int *)(param_2 + 0x70) = iVar5;
      iVar7 = param_2 - 8;
      *(int *)(param_2 + 0x70) = iVar7;
      *(int *)(param_2 + 0x6c) = iVar5;
      *(int *)(param_2 + 0x6c) = iVar7;
      *(int *)(param_2 + 0x6c) = iVar5;
      iVar5 = param_2 - 0xc;
      *(int *)(param_2 + 0x6c) = iVar7;
      *(int *)(param_2 + 0x6c) = iVar5;
      *(int *)(param_2 + 100) = iVar7;
      *(int *)(param_2 + 100) = iVar5;
      *(int *)(param_2 + 100) = iVar7;
      *(int *)(param_2 + 0x6c) = iVar5;
      iVar5 = param_2 - 0x14;
      *(int *)(param_2 + 0x6c) = iVar7;
      *(int *)(param_2 + 0x6c) = iVar5;
      *(int *)(param_2 + 0x6c) = iVar7;
      *(int *)(param_2 + 100) = iVar5;
      iVar7 = param_2 - 0x18;
      *(int *)(param_2 + 100) = iVar7;
      piVar11 = (int *)(param_2 - 0x18);
      *(int *)(param_2 + 100) = iVar5;
      *(int *)(param_2 + 100) = iVar7;
      *(int *)(param_2 + 100) = iVar5;
      iVar5 = param_2 - 0x1c;
      *(int *)(param_2 + 0x5c) = iVar7;
      *(int *)(param_2 + 0x5c) = iVar5;
      *(int *)(param_2 + 0x5c) = iVar7;
      *(int *)(param_2 + 0x5c) = iVar5;
      iVar7 = param_2 - 0x1c;
      *(int *)(param_2 + 0x5c) = iVar7;
      piVar13 = (int *)(param_2 - 0x1c);
      *(int *)(param_2 + 0x5c) = iVar5;
      *(int *)(param_2 + 0x5c) = iVar7;
      *(int *)(param_2 + 0x5c) = iVar5;
      *(int *)(param_2 + 0x5c) = iVar7;
      *(uint *)(param_2 + 0x5c) = param_2 - 0x26;
      *(int *)(param_2 + 0x5c) = iVar7;
      *(uint *)(param_2 + 0x5b) = param_2 - 0x26;
      *(short *)(param_2 + 0x13) = (short)iVar7;
      *piVar13 = param_2 - 0x21;
      *piVar11 = param_2 - 0x26;
      *(int *)(param_2 - 0x14) = iVar7;
      *(int **)(param_2 - 0x10) = piVar13;
      iVar5 = param_2 - 0x30;
      *piVar13 = iVar5;
      *piVar11 = iVar7;
      *(int **)(param_2 - 0x14) = piVar13;
      *piVar13 = param_2 - 0x21;
      *piVar11 = param_2 - 0x2b;
      *(int *)(param_2 - 0x14) = iVar5;
      *(uint *)(param_2 - 0x10) = param_2 - 0x30;
      *(int **)(param_2 - 0xc) = piVar13;
      *(int *)(param_2 + 0x56) = iVar5;
      *(uint *)(param_2 + 0x4c) = param_2 - 0x2b;
      *(int *)(param_2 + 0x4c) = iVar5;
      *(uint *)(param_2 + 0x4c) = param_2 - 0x2b;
      *(int *)(param_2 + 0x4c) = iVar5;
      *(uint *)(param_2 + 0x4c) = param_2 - 0x35;
      *(int *)(param_2 + 0x4c) = iVar5;
      *(uint *)(param_2 + 0x4c) = param_2 - 0x35;
      *(uint *)(param_2 + 0x4c) = param_2 - 0x35;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar5 = *(int *)(param_2 + 4);
    uVar12 = *(uint *)(param_2 + 8);
    *(int *)(*(int *)(param_2 + 0x10) + *(int *)(param_2 + 0xc)) = *(int *)(param_2 + 0x10);
    coprocessor_loadlong(8,in_cr5,unaff_r10);
    param_2 = param_2 - 0xf;
    if ((int)param_2 < 0) {
      if (param_2 != 0) {
        *(short *)(iVar5 + 0x28) = (short)*(undefined4 *)(param_3 + 0xbf);
        coprocessor_movefromRt(2,10,in_cr8);
        coprocessor_movefromRt2(2,10,in_cr8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar8 = (uint)bRam00000022;
  uVar6 = param_2 >> (uVar12 & 0xff);
  iVar5 = 0x76;
LAB_2c45b8b4:
  if (iVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar2 = *(char *)(uVar6 + 0x1f);
  if (cVar2 != '\0') {
    *(short *)(((int)puVar10 >> 0x17) + 0x3e) = (short)uVar8;
    bVar1 = *(byte *)((uVar12 >> 8) + 0x1e);
    uVar15 = func_0x2c5bb6ee(uVar12 >> 8,cVar2,*(undefined4 *)(unaff_r9 + 0x19c));
    iVar5 = (int)uVar15;
    bVar14 = iVar5 == 0;
    if (iVar5 < 1) {
      iVar7 = *(int *)(bVar1 + 0x38);
      uVar15 = CONCAT44(iVar7,iVar7 + -0x39);
      bVar14 = iVar7 == 0x39;
    }
    if (bVar14 || (int)uVar15 < 0 != (iVar5 < 1 && SBORROW4((int)((ulonglong)uVar15 >> 0x20),0x39)))
    {
      *(char *)(extraout_r3 + 1) = (char)((ulonglong)uVar15 >> 0x20);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


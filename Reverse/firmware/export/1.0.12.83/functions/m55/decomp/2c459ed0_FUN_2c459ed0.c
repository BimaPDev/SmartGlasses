/* FUN_2c459ed0 @ 0x2c459ed0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c459ee2) */
/* WARNING: Removing unreachable block (ram,0x2c45a0e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c459ed0(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int unaff_r4;
  uint uVar7;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int iVar8;
  int unaff_r8;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r11;
  int in_r12;
  uint unaff_lr;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int *piVar9;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr7;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 uVar10;
  int in_stack_00000034;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000184;
  undefined4 in_stack_0000018c;
  int *in_stack_000002c8;
  undefined4 *in_stack_000002f8;
  undefined2 in_stack_00000360;
  
  if (in_NG == in_OV) {
    *(undefined1 *)(unaff_r6 + 0xc) = 0x34;
    *(int *)(unaff_r7 + in_stack_00000034) = param_1;
    if (0x4f < param_1) {
      return CONCAT44(unaff_r4,param_1);
    }
    WaitForEvent();
    coprocessor_storelong(3,in_cr2,in_r12);
    *(undefined1 *)(param_1 + 0x1b) = 0x34;
    uVar1 = *(ushort *)(in_stack_00000034 + 0x36);
    coprocessor_load(5,in_cr3,unaff_r8);
    iVar8 = *(int *)(in_stack_00000034 + 0x2c);
    *(char *)(iVar8 + 0xd) = (char)unaff_r5 + 'Y';
    coprocessor_function2(2,0xf,7,in_cr11,in_cr7,in_cr11);
    *(undefined2 *)((uint)uVar1 + iVar8) = in_stack_00000360;
    *(short *)((_LAB_2c45a27c[1] + 0x79) * 8 + 0x1e) = (short)*_LAB_2c45a27c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == in_OV) {
    if (in_ZR == false) {
      software_interrupt(0x29);
                    /* WARNING: Could not recover jumptable at 0x2c459f8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (*UNRECOVERED_JUMPTABLE)();
      return uVar10;
    }
    *(short *)(param_3 + 0x2a) = (short)unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = (uint)*(byte *)(unaff_r4 + 0x15);
  uVar3 = *(uint *)(param_1 + 4);
  piVar5 = *(int **)(param_1 + 8);
  iVar8 = unaff_r7 + 0xab;
  if (unaff_r7 < -0xab) {
    *(int **)(unaff_r5 + 0x34) = piVar5;
    *(uint *)uVar7 = uVar7;
    *(undefined4 *)(uVar7 + 4) = 0x2c45a0ec;
    *(int *)(uVar7 + 8) = iVar8;
    coprocessor_storelong(10,in_cr15,in_r12 + -0x3b4);
    if ((int)(unaff_lr | ~(uVar7 << 0xf)) < 0) {
      if (unaff_r8 >> 0x11 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (-1 < (int)&stack0x000000ac) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)(*piVar5 + 0x24) = piVar5[1];
      if (unaff_r8 != 0) {
        return CONCAT44(unaff_r8,unaff_r4);
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)((int)piVar5 + (uint)*(byte *)((uVar3 >> 5) + (int)*(char *)(iVar8 + uVar3))) =
       (short)(uVar3 >> 5);
  *(int **)(uVar3 + 0x18) = piVar5;
  piVar5 = (int *)((int)piVar5 - iVar8);
  *(int *)(unaff_r7 + 0xd7) = unaff_r5 + 0xd;
  iVar8 = _LAB_2c459c50;
  if (piVar5 == (int *)0x0) {
    coprocessor_loadlong(1,in_cr3,&stack0xfffffff0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (uint)in_stack_000002c8 >> 0x19;
  *(short *)((int)piVar5 + (int)in_stack_000002c8) = (short)_LAB_2c459c50;
  puVar4 = (undefined4 *)(uint)*(ushort *)(iVar8 + 0x2a);
  iVar6 = in_stack_000002c8[0x12];
  *in_stack_000002c8 = iVar8;
  in_stack_000002c8[1] = iVar6;
  in_stack_000002c8[2] = 0x2c45985c;
  in_stack_000002c8[3] = (int)in_stack_000002f8;
  piVar9 = in_stack_000002c8 + 4;
  *puVar4 = piVar9;
  *in_stack_000002f8 = piVar9;
  in_stack_000002f8[1] = uVar3;
  in_stack_000002f8[2] = in_stack_000002f8;
  piVar2 = (int *)((int)in_stack_000002c8 + 0x33);
  *(short *)(puVar4 + 0xe) = (short)(puVar4 + 1);
  if (piVar9 < (int *)0xffffffdd) {
    *piVar2 = (int)piVar2;
    *(undefined4 *)((int)in_stack_000002c8 + 0x37) = 0x2c45985c;
    *piVar2 = iVar8;
    *(int **)((int)in_stack_000002c8 + 0x37) = piVar2;
    *(undefined4 **)((int)in_stack_000002c8 + 0x3b) = puVar4 + 1;
    *(uint *)((int)in_stack_000002c8 + 0x3f) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar8 = *(int *)((int)in_stack_000002c8 + 0x5b) + -0x93;
  *piVar5 = iVar8;
  piVar5[1] = (int)piVar2;
  piVar5[2] = iVar6;
  piVar5[3] = uVar3;
  piVar5[4] = 0x2c459919;
  piVar5[5] = (int)piVar5;
  uVar3 = _LAB_2c459b40;
  *(char *)(_LAB_2c459b40 + 7) = (char)piVar2;
  *(char *)((uVar3 >> 8) + 0x1e) = (char)iVar8;
  coprocessor_moveto(7,0,0,unaff_r11,in_cr15,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


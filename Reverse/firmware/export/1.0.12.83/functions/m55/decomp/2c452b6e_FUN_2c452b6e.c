/* FUN_2c452b6e @ 0x2c452b6e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c452b6e(int param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  undefined4 *extraout_r3;
  int *piVar3;
  int unaff_r4;
  uint uVar4;
  undefined2 unaff_r5;
  int unaff_r6;
  uint *puVar5;
  int unaff_r9;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_cr15;
  int in_stack_000002a0;
  int in_stack_000002a4;
  undefined4 in_stack_000002a8;
  
  *(int *)(unaff_r9 + 0xbcc) = param_1;
  *(char *)(param_1 + 8) = param_4 + 'r';
  *(int *)(unaff_r6 + 0x30) = unaff_r6;
  uVar2 = _LAB_2c452dd8;
  iVar1 = _LAB_2c452d14;
  uVar4 = unaff_r4 - 0xb5;
  uRam2c452dec = unaff_r5;
  *(int *)(&stack0x000002a0 + param_2 * 0x10000) = param_2 * 0x10000;
  piVar3 = (int *)(_LAB_2c452c1c + unaff_r10);
  coprocessor_storelong(4,in_cr15,in_stack_000002a8);
  if (-0x1c < (int)uVar4) {
    *(char *)(_LAB_2c452d14 + _LAB_2c452dd8) = (char)in_stack_000002a0;
    func_0x2cc39508(&stack0x000002ac,(int)_LAB_2c452bc8);
    puVar5 = (uint *)extraout_r3[1];
    *(char *)(extraout_r1 + 6) = (char)*extraout_r3;
    *puVar5 = (uint)*(ushort *)((uVar2 >> 9) + 0x16);
    puVar5[1] = (uint)(extraout_r3 + 2);
    puVar5[2] = -uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (-0x1b < (int)uVar4) {
    if (_DAT_2c4534c0 - (int)&stack0x000002ac == (uint)(uVar4 < 0xffffffe5)) {
      *piVar3 = _LAB_2c452d14;
      *(int *)(in_stack_000002a0 + 0x40) = in_stack_000002a0;
      *(int *)(in_stack_000002a4 + 0x38) = in_stack_000002a0;
      *(undefined2 *)(uVar2 + 0x24) = 0;
      *(short *)((int)piVar3 + -0x31) = (short)in_stack_000002a0;
      *(char *)(**(int **)(iVar1 + 0xc) + 0x15) = (char)**(int **)(iVar1 + 0xc);
      software_hlt(0x30);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x2c4531a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&stack0x000002ac,&stack0x00000234);
  return;
}


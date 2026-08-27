/* FUN_2c450970 @ 0x2c450970 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c450970(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int unaff_r4;
  int unaff_r5;
  undefined2 unaff_r6;
  undefined4 unaff_r9;
  undefined4 in_cr5;
  undefined4 in_cr14;
  int in_stack_00000154;
  int in_stack_000001dc;
  int *in_stack_000002a0;
  
  *(undefined2 *)(unaff_r4 + 0x28) = unaff_r6;
  piVar4 = *(int **)(unaff_r4 + 4);
  coprocessor_store(10,in_cr5,unaff_r9);
  software_bkpt(0xd7);
  bVar1 = *(byte *)(in_stack_00000154 + 0x13);
  uVar2 = (ushort)&stack0x00000264;
  if ((int)&stack0x00000210 < 0) {
    coprocessor_load(1,in_cr5,param_1 + -0x2b0);
    *(short *)(&stack0x00000264 + param_1) = (short)param_1;
    *in_stack_000002a0 = param_1;
    in_stack_000002a0[1] = (int)piVar4;
    in_stack_000002a0[2] = in_stack_000001dc;
    in_stack_000002a0[3] = (uint)bVar1;
    *(ushort *)((int)in_stack_000002a0 + 0x26) = ~uVar2;
    *(byte *)(in_stack_000001dc + 4) = bVar1;
    *(short *)(unaff_r5 + 0x12) = (short)in_stack_000001dc;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (iVar3 = _LAB_2c450ab8, (int)&stack0x00000264 < 0x54) {
    *(short *)(piVar4 + 0xb) = (short)param_1;
    *piVar4 = param_1;
    piVar4[1] = in_stack_000001dc;
    piVar4 = piVar4 + 2;
    *(ushort *)(iVar3 + 0x18) = uVar2;
  }
  coprocessor_store(0xf,in_cr14,in_stack_000002a0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


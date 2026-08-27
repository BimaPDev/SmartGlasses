/* FUN_2c4428a0 @ 0x2c4428a0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4428a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint extraout_r3;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_lr;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr13;
  int iStack000000b8;
  undefined4 in_stack_000005bc;
  
  coprocessor_moveto(3,7,3,unaff_lr,in_cr6,in_cr5);
  iStack000000b8 = *(int *)(param_4 + 0x34);
  uVar2 = (uint)*(short *)(unaff_r6 + iStack000000b8);
  *(undefined4 *)(uVar2 + param_3) = param_1;
  if (0xfffffff9 < uVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x2c7f9358();
  iVar1 = *(int *)(uVar2 - 0xf0);
  iVar3 = *(int *)(uVar2 - 0xe8);
  uVar4 = *(uint *)(uVar2 - 0xe0);
  if (-0xce < (int)(extraout_r3 & ~uVar4)) {
    *(uint *)(uVar4 + 4) = uVar4;
    iVar1 = iVar1 + 0x1cc;
    coprocessor_loadlong(3,in_cr13,iVar1);
                    /* WARNING: Could not recover jumptable at 0x2c442992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (iVar1,in_stack_000005bc,*(int *)(iVar3 + 4) + 7,(extraout_r3 & ~uVar4) + 0xc);
    return;
  }
  *(short *)(*(int *)(uVar2 - 0xec) + 0x1e) = (short)*(undefined4 *)(iVar3 + 8) + 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


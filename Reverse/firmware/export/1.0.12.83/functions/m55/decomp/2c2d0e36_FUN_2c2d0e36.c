/* FUN_2c2d0e36 @ 0x2c2d0e36 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2d0e36(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined2 unaff_r5;
  int unaff_r6;
  undefined4 unaff_pc;
  undefined4 in_cr0;
  
  if (-1 < (param_2 >> 3) << 1) {
    coprocessor_loadlong(0,in_cr0,unaff_pc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = unaff_r6 * 4;
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = param_4;
  if (iVar1 == 0) {
    *(undefined2 *)(param_4 + 0x1e) = unaff_r5;
  }
  software_interrupt(0xca);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


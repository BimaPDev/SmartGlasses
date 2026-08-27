/* FUN_2c203bfe @ 0x2c203bfe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c203bfe(int param_1)

{
  int iVar1;
  undefined4 unaff_pc;
  undefined4 in_cr5;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  iVar1 = 0;
  if (param_1 * 0x10000 != 0) {
    iVar1 = *(int *)(param_1 * 0x10000 + 0x70) << 1;
  }
  coprocessor_moveto(0,5,5,iVar1 << 0xc,in_cr13,in_cr5);
  coprocessor_loadlong(0xf,in_cr15,unaff_pc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


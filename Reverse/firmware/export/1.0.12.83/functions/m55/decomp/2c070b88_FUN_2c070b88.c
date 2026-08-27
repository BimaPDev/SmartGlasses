/* FUN_2c070b88 @ 0x2c070b88 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c070b88(uint param_1,int param_2)

{
  short unaff_r4;
  undefined4 in_cr9;
  undefined4 in_cr13;
  int in_stack_00000194;
  
  *(undefined1 *)(param_2 + 0x14) = 0x26;
  if (param_1 >> 8 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(in_stack_00000194 + 0x14) = (short)param_2 - unaff_r4;
  coprocessor_movefromRt(0xc,7,2,in_cr13,in_cr9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


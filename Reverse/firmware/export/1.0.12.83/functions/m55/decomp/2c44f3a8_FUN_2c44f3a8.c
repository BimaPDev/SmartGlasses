/* FUN_2c44f3a8 @ 0x2c44f3a8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44f3a8(int param_1)

{
  undefined4 unaff_r4;
  int unaff_r6;
  undefined4 unaff_r8;
  undefined4 in_cr2;
  undefined4 in_cr14;
  undefined1 in_q13 [16];
  undefined1 in_q14 [16];
  byte in_stack_00000207;
  int in_stack_00000258;
  
  VectorShiftRightAccumulate(in_q13,in_q14,1);
  *(undefined4 *)(unaff_r6 + 0x20) = unaff_r4;
  coprocessor_storelong(5,in_cr2,unaff_r8);
  coprocessor_store(5,in_cr14,param_1 + -0x1b8);
  *(undefined4 *)(in_stack_00000258 + (uint)in_stack_00000207) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


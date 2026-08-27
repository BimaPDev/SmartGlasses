/* FUN_2c46316c @ 0x2c46316c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c46316c(void)

{
  int unaff_r5;
  undefined4 in_cr4;
  undefined4 in_cr10;
  
  *(short *)(*(int *)(unaff_r5 + -0x14) + 2) = (short)*(undefined4 *)(unaff_r5 + -0xc);
  coprocessor_movefromRt(1,7,3,in_cr10,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


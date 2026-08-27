/* FUN_2c2a4fda @ 0x2c2a4fda */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2a4fda(void)

{
  int unaff_r6;
  int unaff_r7;
  undefined4 in_cr3;
  
  *(int *)(unaff_r6 << 1) = unaff_r7;
  coprocessor_store(0,in_cr3,unaff_r7 + -0x17c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


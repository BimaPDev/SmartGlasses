/* FUN_2c21797e @ 0x2c21797e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c21797e(void)

{
  int unaff_r8;
  undefined4 in_cr7;
  
  coprocessor_store(0xc,in_cr7,unaff_r8 + -0x218);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


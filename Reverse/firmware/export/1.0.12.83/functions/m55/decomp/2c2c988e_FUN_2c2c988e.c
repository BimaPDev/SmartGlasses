/* FUN_2c2c988e @ 0x2c2c988e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2c988e(void)

{
  int unaff_pc;
  undefined4 in_cr0;
  
  coprocessor_loadlong(1,in_cr0,unaff_pc + 0x2d8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


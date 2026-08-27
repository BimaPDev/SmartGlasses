/* FUN_2c2b7e3c @ 0x2c2b7e3c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2b7e3c(int param_1,int param_2)

{
  undefined1 unaff_r7;
  
  *(undefined1 *)(param_2 + param_1) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


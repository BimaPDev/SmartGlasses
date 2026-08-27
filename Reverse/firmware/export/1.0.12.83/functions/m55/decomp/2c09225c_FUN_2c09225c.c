/* FUN_2c09225c @ 0x2c09225c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c09225c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  
  *(int *)(unaff_r4 + 0x20) = param_3 + 0x5e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


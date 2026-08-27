/* FUN_2c155d7c @ 0x2c155d7c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c155d7c(undefined4 param_1,int param_2)

{
  int unaff_r4;
  int unaff_r7;
  
  *(char *)(unaff_r4 + param_2) = (char)unaff_r7;
  *(char *)(unaff_r7 + 0xda) = (char)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


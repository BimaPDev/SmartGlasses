/* FUN_2c04bf5c @ 0x2c04bf5c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c04bf5c(undefined4 param_1,undefined4 param_2,short param_3)

{
  int unaff_r6;
  int unaff_r7;
  
  *(short *)(unaff_r6 * 0x4001) = param_3 << 6;
  *(int *)(unaff_r7 + 0x10) = unaff_r6 << 0xe;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


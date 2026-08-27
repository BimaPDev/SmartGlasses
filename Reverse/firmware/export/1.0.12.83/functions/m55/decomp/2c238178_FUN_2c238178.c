/* FUN_2c238178 @ 0x2c238178 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c238178(void)

{
  int unaff_r7;
  
  *(int *)(unaff_r7 + 0x40) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


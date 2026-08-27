/* FUN_2c1231c8 @ 0x2c1231c8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c1231c8(void)

{
  int unaff_r5;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(int *)(unaff_r5 + 0x7c) = unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


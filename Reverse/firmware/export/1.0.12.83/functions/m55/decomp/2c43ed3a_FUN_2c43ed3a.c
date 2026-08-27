/* FUN_2c43ed3a @ 0x2c43ed3a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43ed3a(void)

{
  int unaff_r6;
  
  *(char *)(unaff_r6 + 0x1f) = (char)unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


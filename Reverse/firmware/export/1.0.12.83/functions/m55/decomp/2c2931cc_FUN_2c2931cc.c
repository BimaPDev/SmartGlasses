/* FUN_2c2931cc @ 0x2c2931cc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2931cc(void)

{
  int unaff_r7;
  
  *(char *)(unaff_r7 + 3) = (char)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


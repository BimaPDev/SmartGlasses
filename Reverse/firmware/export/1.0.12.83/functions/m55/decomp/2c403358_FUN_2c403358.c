/* FUN_2c403358 @ 0x2c403358 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c403358(void)

{
  int unaff_r4;
  int unaff_r7;
  
  if (unaff_r7 == 0) {
    *(short *)(unaff_r4 + 0x3e) = (short)&stack0xfffffff4 + 0x394;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c2b069e @ 0x2c2b069e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2b069e(void)

{
  int unaff_r4;
  undefined4 unaff_r6;
  int unaff_r7;
  
  *(undefined4 *)(unaff_r7 + 0xc) = unaff_r6;
  *(short *)(unaff_r4 + 0x10) = (short)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


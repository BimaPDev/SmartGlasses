/* FUN_2c113c5e @ 0x2c113c5e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c113c5e(void)

{
  undefined2 in_r3;
  int unaff_r6;
  
  *(undefined2 *)(unaff_r6 + 0x18) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


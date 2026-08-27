/* FUN_2c252b96 @ 0x2c252b96 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c252b96(void)

{
  int unaff_r5;
  undefined4 unaff_r7;
  
  *(undefined4 *)(unaff_r5 + 0xc) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c10ed86 @ 0x2c10ed86 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c10ed86(void)

{
  int unaff_r5;
  undefined4 unaff_r6;
  
  *(undefined4 *)(unaff_r5 + 0x30) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


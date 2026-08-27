/* FUN_2c0fd148 @ 0x2c0fd148 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0fd148(void)

{
  undefined4 unaff_r5;
  int unaff_r6;
  
  *(undefined4 *)(unaff_r6 + 0x54) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


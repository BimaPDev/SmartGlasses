/* FUN_2c4125c0 @ 0x2c4125c0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4125c0(void)

{
  undefined1 in_r3;
  int unaff_r4;
  undefined1 unaff_r5;
  
  *(undefined1 *)(unaff_r4 + 0x15) = in_r3;
  *(undefined1 *)(unaff_r4 + 1) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


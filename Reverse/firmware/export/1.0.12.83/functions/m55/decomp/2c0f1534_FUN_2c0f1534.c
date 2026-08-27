/* FUN_2c0f1534 @ 0x2c0f1534 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f1534(void)

{
  undefined2 in_r3;
  int unaff_r4;
  uint unaff_r5;
  
  if (0x95 < unaff_r5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_r4 * 0x8000 + -0xc4) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


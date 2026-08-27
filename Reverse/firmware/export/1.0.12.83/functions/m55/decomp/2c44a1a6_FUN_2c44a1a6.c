/* FUN_2c44a1a6 @ 0x2c44a1a6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44a1a6(void)

{
  undefined4 in_r3;
  int unaff_r5;
  
  *(undefined4 *)(unaff_r5 + 0x74) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


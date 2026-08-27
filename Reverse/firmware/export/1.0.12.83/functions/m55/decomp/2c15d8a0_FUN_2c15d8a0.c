/* FUN_2c15d8a0 @ 0x2c15d8a0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c15d8a0(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


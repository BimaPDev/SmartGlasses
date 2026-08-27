/* FUN_2c460970 @ 0x2c460970 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c460970(void)

{
  int in_r3;
  undefined1 unaff_r4;
  
  *(undefined1 *)(in_r3 + 1) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


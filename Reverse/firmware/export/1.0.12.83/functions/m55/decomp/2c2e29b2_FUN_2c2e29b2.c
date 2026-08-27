/* FUN_2c2e29b2 @ 0x2c2e29b2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2e29b2(void)

{
  int unaff_r7;
  
  *(int *)(unaff_r7 + 0x2c2e2d88) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


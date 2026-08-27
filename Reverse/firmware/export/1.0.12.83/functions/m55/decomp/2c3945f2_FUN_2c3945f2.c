/* FUN_2c3945f2 @ 0x2c3945f2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3945f2(void)

{
  int unaff_r4;
  
  *(short *)(*(int *)(unaff_r4 + 4) + 0x2e) = (short)unaff_r4 + 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


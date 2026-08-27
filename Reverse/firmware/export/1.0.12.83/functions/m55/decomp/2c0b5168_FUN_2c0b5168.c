/* FUN_2c0b5168 @ 0x2c0b5168 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0b5168(void)

{
  int unaff_r5;
  int unaff_r6;
  
  *(int *)(unaff_r5 + unaff_r6) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c4469ea @ 0x2c4469ea */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4469ea(void)

{
  undefined4 unaff_r4;
  int unaff_r6;
  
  *(undefined4 *)(unaff_r6 + 4) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


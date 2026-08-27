/* FUN_2c293b2c @ 0x2c293b2c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c293b2c(int param_1)

{
  int unaff_r4;
  
  *(char *)(unaff_r4 + 4) = (char)*(undefined4 *)(param_1 + 0x70);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


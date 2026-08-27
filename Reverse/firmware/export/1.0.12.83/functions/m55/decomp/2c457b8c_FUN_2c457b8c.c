/* FUN_2c457b8c @ 0x2c457b8c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c457b8c(undefined4 param_1,undefined1 param_2)

{
  uint unaff_r5;
  int unaff_r7;
  
  *(int *)(unaff_r5 + 0x38) = unaff_r7;
  *(undefined1 *)(unaff_r7 + 8) = param_2;
  *(short *)(unaff_r5 + 0x24) = (short)(unaff_r5 >> 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


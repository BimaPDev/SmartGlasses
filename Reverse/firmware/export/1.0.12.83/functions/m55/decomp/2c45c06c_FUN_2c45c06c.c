/* FUN_2c45c06c @ 0x2c45c06c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45c06c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  
  *(undefined4 *)(unaff_r4 + 0x2b) = param_3;
  *param_1 = param_2;
  param_1[1] = unaff_r4 + -0x35;
  *unaff_r6 = param_1 + 2;
  unaff_r6[1] = param_2;
  unaff_r6[2] = param_3;
  unaff_r6[3] = param_4;
  unaff_r6[4] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c45586e @ 0x2c45586e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45586e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined2 unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  *(undefined2 *)(unaff_r5 + 2) = unaff_r4;
  *param_4 = param_3;
  param_4[1] = param_4;
  param_4[2] = unaff_r5;
  param_4[3] = 0xd6;
  param_4[4] = unaff_r7;
  if (unaff_r7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c28538e @ 0x2c28538e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c28538e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  char in_NG;
  
  *unaff_r5 = param_1;
  unaff_r5[1] = param_3;
  unaff_r5[2] = param_4;
  unaff_r5[3] = unaff_r4;
  unaff_r5[4] = unaff_r6;
  if (in_NG != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


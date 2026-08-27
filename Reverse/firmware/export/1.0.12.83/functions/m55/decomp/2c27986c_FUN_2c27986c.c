/* FUN_2c27986c @ 0x2c27986c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c27986c(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 unaff_r4;
  undefined4 *unaff_r5;
  int unaff_r6;
  
  if (unaff_r6 != 0) {
    *param_2 = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_r5 = param_2;
  unaff_r5[1] = param_4;
  *param_2 = unaff_r4;
  *param_2 = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


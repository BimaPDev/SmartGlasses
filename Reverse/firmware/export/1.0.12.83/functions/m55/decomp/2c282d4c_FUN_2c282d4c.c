/* FUN_2c282d4c @ 0x2c282d4c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c282d4c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  
  *(undefined4 *)(unaff_r5 + unaff_r4) = unaff_r7;
  if (unaff_r6 >> 7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(((param_3 << 9) >> 0x20) * 2) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


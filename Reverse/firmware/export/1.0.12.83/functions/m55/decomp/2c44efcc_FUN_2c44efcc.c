/* FUN_2c44efcc @ 0x2c44efcc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c44efcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *extraout_r1;
  int extraout_r2;
  int extraout_r3;
  int unaff_r4;
  int unaff_r7;
  undefined4 in_stack_000003dc;
  
  func_0x2ca78adc(_DAT_2c44f36c,in_stack_000003dc,*(undefined4 *)(unaff_r7 + 0x48),param_4,param_3);
  *extraout_r1 = extraout_r2;
  extraout_r1[1] = extraout_r3 + -0x81;
  extraout_r1[2] = unaff_r4;
  extraout_r1[3] = extraout_r2 - unaff_r4;
  extraout_r1[4] = unaff_r7 << 0x13;
  *(int *)(extraout_r3 + -0x31) = extraout_r3 + -0x81;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


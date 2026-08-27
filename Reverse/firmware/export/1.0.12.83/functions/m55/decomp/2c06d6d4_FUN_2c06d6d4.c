/* FUN_2c06d6d4 @ 0x2c06d6d4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c06d6d4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 unaff_r5;
  int unaff_r7;
  undefined4 in_stack_000002ac;
  undefined1 auStack_14 [4];
  
  *(short *)(unaff_r7 + 0xe) = (short)unaff_r7;
  *param_2 = unaff_r5;
  param_2[1] = auStack_14;
  param_2[2] = in_stack_000002ac;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


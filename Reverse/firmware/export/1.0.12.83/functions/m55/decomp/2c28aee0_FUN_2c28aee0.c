/* FUN_2c28aee0 @ 0x2c28aee0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c28aee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r7;
  undefined1 in_q13 [16];
  
  SignedSaturate(param_3,0);
  SignedDoesSaturate(param_3,0);
  SignedSaturate(param_3,0);
  SignedDoesSaturate(param_3,0);
  VectorShiftLeft(in_q13,0x3f,0x40,1);
  if (unaff_r7 - 0xd0U < 0xe1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  SignedSaturate(param_3,0);
  SignedDoesSaturate(param_3,0);
  SignedSaturate(param_3,0);
  SignedDoesSaturate(param_3,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


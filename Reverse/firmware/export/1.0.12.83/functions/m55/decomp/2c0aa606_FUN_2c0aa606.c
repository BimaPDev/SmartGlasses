/* FUN_2c0aa606 @ 0x2c0aa606 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0aa606(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  int unaff_r7;
  
  if (unaff_r7 == 0) {
    param_3 = *(int *)(unaff_r4 + 100);
  }
  *(short *)(param_3 + 0x32) = (short)param_3;
  *(short *)(unaff_r7 + 0xe) = (short)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c27c750 @ 0x2c27c750 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c27c750(int *param_1)

{
  int extraout_r1;
  int extraout_r3;
  int unaff_r6;
  int unaff_r7;
  
  *param_1 = unaff_r6;
  func_0x2c86c768(unaff_r6 << 2);
  *(char *)(extraout_r1 + 0x10) = (char)extraout_r1;
  *(int *)(unaff_r7 + extraout_r3) = extraout_r1;
  *(short *)(unaff_r6 * 8 + 0x20) = (short)(unaff_r6 * 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c0eb974 @ 0x2c0eb974 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0eb974(int param_1,int param_2,int param_3,int param_4)

{
  int unaff_r5;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_NG == in_OV) {
    *(short *)(param_1 + 0xf5) = (short)param_2;
    *(int *)(unaff_r5 + 0xfd) = param_3 >> 0x1f;
    *(int *)(unaff_r5 + 0x101) = param_2;
    *(int *)(unaff_r5 + 0x105) = param_4 + 0x65;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_ZR && in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_2 + 0x3a) = (short)unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


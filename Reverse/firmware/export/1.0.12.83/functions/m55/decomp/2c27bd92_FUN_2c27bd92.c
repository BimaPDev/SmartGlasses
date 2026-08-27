/* FUN_2c27bd92 @ 0x2c27bd92 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c27bd92(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int unaff_r5;
  int unaff_r7;
  int unaff_r10;
  char in_OV;
  
  *(int *)(param_3 + param_2) = unaff_r5;
  if (in_OV == '\0') {
    *(short *)(param_4 + 6) = (short)unaff_r5;
    *(int *)(unaff_r7 * 2 + 0x6c) = param_4 << 2;
    *(char *)(unaff_r5 + 1) = (char)unaff_r7;
    *(int *)(unaff_r10 + 0x99b) = param_4 << 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


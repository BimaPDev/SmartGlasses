/* FUN_2c2cdac4 @ 0x2c2cdac4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2cdac4(int param_1,undefined4 param_2,int *param_3)

{
  int unaff_r7;
  
  *param_3 = param_1 << 4;
  param_3[1] = (int)param_3;
  *(short *)(unaff_r7 + 6) = (short)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c4618a0 @ 0x2c4618a0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4618a0(int param_1,int param_2,int param_3,int param_4)

{
  int *unaff_r4;
  int *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  *unaff_r5 = param_1;
  unaff_r5[1] = param_2;
  unaff_r5[2] = param_3;
  unaff_r5[3] = (int)unaff_r4;
  unaff_r5[4] = unaff_r6;
  unaff_r5[5] = unaff_r7;
  *unaff_r4 = param_1;
  unaff_r4[1] = param_2;
  unaff_r4[2] = param_3;
  unaff_r4[3] = param_4;
  unaff_r4[4] = (int)unaff_r4;
  unaff_r4[5] = (int)&stack0x00000170;
  *(short *)(param_3 + param_1) = (short)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


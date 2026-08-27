/* FUN_2c42dfbc @ 0x2c42dfbc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c42dfbc(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  *(short *)(param_2 + 0x1e) = (short)unaff_r4;
  *param_4 = param_2;
  param_4[1] = (int)param_4;
  param_4[2] = unaff_r4;
  param_4[3] = unaff_r5;
  param_4[4] = unaff_r6;
  param_4[5] = param_2;
  *(char *)((int)param_4 + unaff_r5) = (char)unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


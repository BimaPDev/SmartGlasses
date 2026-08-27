/* FUN_2c394e9e @ 0x2c394e9e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c394e9e(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  
  *unaff_r6 = param_1;
  unaff_r6[1] = param_4;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = unaff_r5;
  *(int *)(unaff_r5 + param_1) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


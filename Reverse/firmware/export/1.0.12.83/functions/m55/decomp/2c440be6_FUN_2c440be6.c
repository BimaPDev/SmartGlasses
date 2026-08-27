/* FUN_2c440be6 @ 0x2c440be6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c440be6(int param_1,undefined4 param_2,int param_3)

{
  int *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  param_1 = unaff_r6 - param_1;
  *(char *)(param_3 + 0x17) = (char)param_1;
  *(char *)(param_1 + 0x13) = (char)unaff_r5;
  *unaff_r4 = param_3;
  unaff_r4[1] = (int)unaff_r4;
  unaff_r4[2] = unaff_r5;
  unaff_r4[3] = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


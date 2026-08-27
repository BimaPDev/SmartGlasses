/* FUN_2c442a52 @ 0x2c442a52 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c442a52(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  *param_3 = param_2;
  param_3[1] = param_4;
  param_3[2] = unaff_r4;
  param_3[3] = unaff_r5;
  param_3[4] = unaff_r7;
  *(char *)(param_2 + 0xf) = (char)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


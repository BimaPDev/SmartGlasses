/* FUN_2c43301e @ 0x2c43301e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43301e(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  undefined4 unaff_r4;
  uint unaff_r5;
  int unaff_r7;
  
  *(undefined4 *)(param_4 * 2) = unaff_r4;
  if (0xfffffffd < unaff_r5) {
    *(int **)(param_3 + 0x60) = param_2;
    *param_2 = unaff_r5 + 2;
    param_2[1] = param_4;
    param_2[2] = -param_3;
    param_2[3] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c20ae04 @ 0x2c20ae04 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c20ae04(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = unaff_r4;
  *(undefined4 *)(param_1 + 0x14) = unaff_r5;
  *(int *)(unaff_r7 + param_3) = unaff_r7;
  coprocessor_movefromRt(0,2,5,in_cr12,in_cr4);
  coprocessor_store(0xf,in_cr14,unaff_r8 + -0x264);
  coprocessor_loadlong(0,in_cr0,unaff_r9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


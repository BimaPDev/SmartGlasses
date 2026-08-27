/* FUN_2c4636d0 @ 0x2c4636d0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4636d0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int unaff_r5;
  undefined4 in_cr11;
  
  *(int *)(param_4 + 0x34) = param_4;
  *(int *)(unaff_r5 + 0x5c) = param_4;
  *(short *)(param_2 + 0x28) = (short)param_2;
  coprocessor_storelong(0,in_cr11,param_3 + 0xd0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


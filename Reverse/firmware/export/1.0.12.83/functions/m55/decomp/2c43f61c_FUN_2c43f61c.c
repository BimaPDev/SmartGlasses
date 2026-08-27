/* FUN_2c43f61c @ 0x2c43f61c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43f61c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 in_cr0;
  
  *(short *)((param_4 >> 0x13) + 0x1c) = (short)param_4;
  coprocessor_loadlong(2,in_cr0,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


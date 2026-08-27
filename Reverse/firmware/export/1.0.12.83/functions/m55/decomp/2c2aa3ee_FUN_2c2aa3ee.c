/* FUN_2c2aa3ee @ 0x2c2aa3ee */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2aa3ee(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int unaff_r5;
  
  *(uint *)(param_1 + param_4) = (uint)*(byte *)(param_3 + unaff_r5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


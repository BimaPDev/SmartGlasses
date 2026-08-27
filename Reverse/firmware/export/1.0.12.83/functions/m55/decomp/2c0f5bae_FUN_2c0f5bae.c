/* FUN_2c0f5bae @ 0x2c0f5bae */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f5bae(undefined4 param_1,undefined4 param_2)

{
  int unaff_r4;
  undefined4 unaff_r10;
  undefined4 in_cr0;
  
  *(undefined4 *)((unaff_r4 >> 0x12) + 0x10) = param_2;
  coprocessor_loadlong(6,in_cr0,unaff_r10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


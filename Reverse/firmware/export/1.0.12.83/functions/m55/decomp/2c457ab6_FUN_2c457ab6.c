/* FUN_2c457ab6 @ 0x2c457ab6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c457ab6(undefined4 param_1,int param_2)

{
  int unaff_r4;
  
  *(int *)(unaff_r4 + 0x7c) = param_2 + 0x95;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


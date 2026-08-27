/* FUN_2c29d6d0 @ 0x2c29d6d0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c29d6d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  
  *(char *)(param_3 + unaff_r5) = (char)unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c060cfe @ 0x2c060cfe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c060cfe(undefined4 param_1,int param_2)

{
  int unaff_r7;
  
  *(int *)(unaff_r7 + param_2) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


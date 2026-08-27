/* FUN_2c099770 @ 0x2c099770 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c099770(int param_1)

{
  int unaff_r4;
  
  *(int *)(param_1 + unaff_r4) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


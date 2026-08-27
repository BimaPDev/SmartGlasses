/* FUN_2c22dfda @ 0x2c22dfda */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c22dfda(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  software_interrupt(0x17);
  *(int *)(param_2 + param_4) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


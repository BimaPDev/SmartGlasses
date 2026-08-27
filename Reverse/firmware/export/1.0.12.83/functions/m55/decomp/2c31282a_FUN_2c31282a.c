/* FUN_2c31282a @ 0x2c31282a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c31282a(undefined4 param_1,int param_2,int param_3)

{
  *(short *)(param_2 + param_3) = (short)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


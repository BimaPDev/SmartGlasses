/* FUN_2c0fb64a @ 0x2c0fb64a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0fb64a(int param_1)

{
  *(int *)(param_1 + 0x78) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


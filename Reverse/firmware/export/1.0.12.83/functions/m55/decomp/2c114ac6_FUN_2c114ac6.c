/* FUN_2c114ac6 @ 0x2c114ac6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c114ac6(int param_1)

{
  *(int *)(param_1 + 0x68) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c53c19c @ 0x2c53c19c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c53c19c(int param_1)

{
  FUN_2c53c110();
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


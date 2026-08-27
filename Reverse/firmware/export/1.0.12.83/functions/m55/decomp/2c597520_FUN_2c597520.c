/* FUN_2c597520 @ 0x2c597520 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c597520(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 7) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


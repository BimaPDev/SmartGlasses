/* FUN_2c443252 @ 0x2c443252 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c443252(undefined4 param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  *(undefined1 *)(param_3 + 0xe) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


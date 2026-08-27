/* FUN_2c4532a8 @ 0x2c4532a8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4532a8(undefined4 param_1,undefined2 param_2,undefined4 param_3,int param_4)

{
  *(undefined2 *)(param_4 + 4) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


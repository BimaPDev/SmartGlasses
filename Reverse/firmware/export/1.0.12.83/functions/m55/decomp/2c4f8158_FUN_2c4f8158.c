/* FUN_2c4f8158 @ 0x2c4f8158 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4f8158(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_4 + param_2) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


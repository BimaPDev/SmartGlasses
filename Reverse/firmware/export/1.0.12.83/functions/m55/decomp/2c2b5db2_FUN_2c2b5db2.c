/* FUN_2c2b5db2 @ 0x2c2b5db2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2b5db2(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(param_3 * 2 + param_2) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


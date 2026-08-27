/* FUN_2c43c8d2 @ 0x2c43c8d2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43c8d2(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_1 + 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


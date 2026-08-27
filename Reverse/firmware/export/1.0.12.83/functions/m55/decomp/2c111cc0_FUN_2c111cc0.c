/* FUN_2c111cc0 @ 0x2c111cc0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c111cc0(int param_1,undefined4 param_2,int param_3)

{
  *(char *)(param_3 + param_1) = (char)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


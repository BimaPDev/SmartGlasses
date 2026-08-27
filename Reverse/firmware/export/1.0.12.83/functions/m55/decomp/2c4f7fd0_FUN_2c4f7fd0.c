/* FUN_2c4f7fd0 @ 0x2c4f7fd0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4f7fd0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 in_r12;
  
  *(int *)(param_4 + param_2) = param_1;
  *(int *)(param_1 + -0x10c) = param_4;
  *(undefined4 *)(param_1 + -0x108) = in_r12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


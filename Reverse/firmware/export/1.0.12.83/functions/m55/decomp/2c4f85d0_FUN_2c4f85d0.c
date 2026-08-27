/* FUN_2c4f85d0 @ 0x2c4f85d0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4f85d0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 unaff_r5;
  
  *(int *)(param_4 + param_2) = param_1;
  *(undefined2 *)(param_1 + 0x20) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


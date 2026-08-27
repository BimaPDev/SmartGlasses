/* FUN_2c44cc28 @ 0x2c44cc28 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44cc28(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_stack_00000258;
  
  if (in_stack_00000258 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(param_3 + -0xb9) = param_2;
  *(int *)(param_3 + -0xb5) = in_stack_00000258;
  *(short *)(param_3 + -0x83) = (short)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


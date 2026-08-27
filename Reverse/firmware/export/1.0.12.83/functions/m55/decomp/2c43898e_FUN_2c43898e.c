/* FUN_2c43898e @ 0x2c43898e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43898e(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int unaff_r4;
  undefined4 unaff_r9;
  undefined4 in_cr1;
  int in_stack_00000318;
  
  coprocessor_store(0xf,in_cr1,unaff_r9);
  *(int *)(param_4 + 0xdbe) = param_3;
  *param_2 = param_3 + -0x96;
  param_2[1] = unaff_r4;
  param_2[2] = in_stack_00000318;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


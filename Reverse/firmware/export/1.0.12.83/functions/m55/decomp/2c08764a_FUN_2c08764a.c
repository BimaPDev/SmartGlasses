/* FUN_2c08764a @ 0x2c08764a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c08764a(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  int unaff_lr;
  undefined4 in_cr5;
  
  *(int *)param_3 = param_3;
  *(undefined4 *)(param_3 + 4) = param_4;
  *(undefined4 *)(param_3 + 8) = unaff_r4;
  coprocessor_store(5,in_cr5,unaff_lr + 700);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


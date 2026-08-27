/* FUN_2c402c5a @ 0x2c402c5a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c402c5a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined2 unaff_r4;
  
  *(undefined2 *)(param_3 + 0x3c) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


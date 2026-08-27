/* FUN_2c07e7f2 @ 0x2c07e7f2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c07e7f2(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 unaff_r6;
  
  *(undefined2 *)(param_4 + param_3) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


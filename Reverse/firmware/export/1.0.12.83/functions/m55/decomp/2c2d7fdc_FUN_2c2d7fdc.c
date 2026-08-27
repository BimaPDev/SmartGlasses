/* FUN_2c2d7fdc @ 0x2c2d7fdc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2d7fdc(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int in_r12;
  
  *param_2 = param_3;
  *(undefined4 **)(in_r12 + 0x800000) = param_2 + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


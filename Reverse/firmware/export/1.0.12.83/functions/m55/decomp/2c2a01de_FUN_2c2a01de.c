/* FUN_2c2a01de @ 0x2c2a01de */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2a01de(int param_1,undefined4 param_2,undefined1 param_3)

{
  int unaff_r4;
  
  *(undefined1 *)(param_1 + unaff_r4) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


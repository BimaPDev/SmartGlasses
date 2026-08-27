/* FUN_2c45f1de @ 0x2c45f1de */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45f1de(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_r7;
  
  *(undefined4 *)(unaff_r7 + 0x30) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


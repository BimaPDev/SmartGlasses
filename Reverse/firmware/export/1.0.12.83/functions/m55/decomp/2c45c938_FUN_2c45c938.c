/* FUN_2c45c938 @ 0x2c45c938 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45c938(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  
  *(char *)(unaff_r5 + 8) = (char)*(undefined4 *)(param_3 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


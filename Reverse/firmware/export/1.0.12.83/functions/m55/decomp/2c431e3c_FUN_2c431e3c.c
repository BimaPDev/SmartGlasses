/* FUN_2c431e3c @ 0x2c431e3c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c431e3c(undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 unaff_r4;
  
  *(undefined1 *)(param_4 + 10) = param_1;
  uRam00000065 = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


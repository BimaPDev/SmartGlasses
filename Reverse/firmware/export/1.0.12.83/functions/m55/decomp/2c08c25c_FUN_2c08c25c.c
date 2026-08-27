/* FUN_2c08c25c @ 0x2c08c25c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c08c25c(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  int unaff_r4;
  undefined2 unaff_r5;
  int unaff_r6;
  
  *(undefined2 *)(unaff_r6 + 4) = param_3;
  *(undefined2 *)(unaff_r4 + 0x14) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


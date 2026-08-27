/* FUN_2c219310 @ 0x2c219310 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c219310(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  *(char *)(unaff_r4 + unaff_r6) = (char)*(undefined2 *)(param_3 + unaff_r5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


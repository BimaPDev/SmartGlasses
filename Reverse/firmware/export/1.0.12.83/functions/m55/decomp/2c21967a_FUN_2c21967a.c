/* FUN_2c21967a @ 0x2c21967a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c21967a(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  *(char *)(unaff_r6 + unaff_r7) = (char)*(undefined2 *)(param_3 + unaff_r5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


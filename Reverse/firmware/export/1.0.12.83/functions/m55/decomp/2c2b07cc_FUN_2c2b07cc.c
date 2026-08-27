/* FUN_2c2b07cc @ 0x2c2b07cc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2b07cc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int unaff_r4;
  undefined4 unaff_r6;
  undefined2 unaff_r7;
  
  *(int *)(param_1 + 0x50) = param_1;
  *(char *)(param_1 + unaff_r4) = (char)param_4;
  *(undefined2 *)(param_4 + 0x2a) = unaff_r7;
  *(int *)(param_3 + 0x60) = param_3;
  *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


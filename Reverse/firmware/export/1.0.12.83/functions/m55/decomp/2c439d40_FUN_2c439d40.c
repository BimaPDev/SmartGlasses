/* FUN_2c439d40 @ 0x2c439d40 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c439d40(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 unaff_r4;
  undefined2 unaff_r5;
  int unaff_r7;
  
  *(undefined2 *)(param_1 + 0x30) = unaff_r5;
  *(int *)(unaff_r7 + 4) = param_4;
  *(undefined2 *)(param_4 + 0x12) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


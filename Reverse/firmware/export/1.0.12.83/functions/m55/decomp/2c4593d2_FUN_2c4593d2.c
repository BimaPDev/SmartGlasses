/* FUN_2c4593d2 @ 0x2c4593d2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4593d2(int param_1,undefined4 param_2,int param_3)

{
  undefined2 unaff_r4;
  undefined1 unaff_r7;
  
  *(undefined1 *)(param_3 + 0x1b) = unaff_r7;
  *(undefined2 *)(param_1 + 0x1c) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


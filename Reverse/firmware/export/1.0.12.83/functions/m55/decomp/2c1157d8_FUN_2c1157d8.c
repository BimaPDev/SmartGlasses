/* FUN_2c1157d8 @ 0x2c1157d8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c1157d8(int param_1)

{
  int unaff_r4;
  undefined1 unaff_r7;
  
  *(undefined1 *)(param_1 + unaff_r4) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


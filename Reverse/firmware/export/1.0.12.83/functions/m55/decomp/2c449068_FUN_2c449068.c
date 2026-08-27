/* FUN_2c449068 @ 0x2c449068 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c449068(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  undefined1 unaff_r6;
  int unaff_r7;
  
  *(undefined1 *)(param_3 + unaff_r7) = unaff_r6;
  *(undefined4 *)(unaff_r4 + 4) = 0x2c448fac;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


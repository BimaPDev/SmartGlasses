/* FUN_2c2707f8 @ 0x2c2707f8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2707f8(int param_1,undefined4 param_2,int param_3)

{
  int unaff_r4;
  int unaff_r7;
  
  if (-1 < param_1 << 4) {
    *(short *)(unaff_r7 + 0xe) = (short)(param_3 << 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_r4 * 9) = unaff_r4 * 8;
  software_bkpt(0);
  *(int *)(unaff_r7 * 4 + 100) = param_3 << 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c434c2e @ 0x2c434c2e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c434c2e(undefined4 param_1,int param_2,int param_3)

{
  int unaff_r6;
  
  if (2 < param_3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_3 + unaff_r6) = (short)param_2;
  *(undefined1 *)(unaff_r6 + 0xc) = *(undefined1 *)(unaff_r6 + param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


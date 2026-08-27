/* FUN_2c4514ba @ 0x2c4514ba */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4514ba(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char in_NG;
  char in_CY;
  
  *(short *)(unaff_r6 + 0x2e) = (short)&stack0xfffffff4 + 0xbc;
  if (in_NG == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY != '\0') {
    *(undefined1 *)(param_4 + 0x1a) = unaff_r4;
    software_bkpt(0xd2);
    *(int *)(unaff_r7 + 0x6c) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_3 + unaff_r5) = (short)unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


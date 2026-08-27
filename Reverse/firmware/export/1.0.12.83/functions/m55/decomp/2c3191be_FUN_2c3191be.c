/* FUN_2c3191be @ 0x2c3191be */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3191be(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  char in_NG;
  
  if (in_NG == '\0') {
    *(int *)param_1 = param_1;
    *(undefined4 *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 8) = param_3;
    *(int *)(param_1 + 0xc) = unaff_r4 >> 0x20;
    *(int *)(param_1 + 0x10) = unaff_r4;
    *(undefined4 *)(param_1 + 0x14) = unaff_r5;
    *(undefined4 *)(param_1 + 0x18) = unaff_r6;
    *(undefined4 *)(param_1 + 0x1c) = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)param_4 = param_4;
  *(undefined4 *)(param_4 + 4) = unaff_r5;
  software_interrupt(0x5c);
  *(short *)(unaff_r4 + 0x26) = (short)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


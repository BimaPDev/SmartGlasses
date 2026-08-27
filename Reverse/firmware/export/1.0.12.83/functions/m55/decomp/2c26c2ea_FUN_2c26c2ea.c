/* FUN_2c26c2ea @ 0x2c26c2ea */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c26c2ea(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  undefined4 in_cr0;
  undefined1 in_q14 [16];
  
  coprocessor_movefromRt(0xf,10,in_cr0);
  coprocessor_movefromRt2(0xf,10,in_cr0);
  puVar1 = (undefined4 *)(unaff_r6 >> 0xe);
  *puVar1 = param_2;
  puVar1[1] = param_4;
  puVar1[2] = unaff_r5 << 1;
  puVar1[3] = unaff_r5;
  puVar1[4] = unaff_r6;
  puVar1[5] = unaff_r7 + -0xef;
  VectorShiftRight(in_q14,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


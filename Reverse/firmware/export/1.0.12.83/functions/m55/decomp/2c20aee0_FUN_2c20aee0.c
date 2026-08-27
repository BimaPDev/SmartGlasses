/* FUN_2c20aee0 @ 0x2c20aee0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c20aee0(void)

{
  int unaff_r6;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr12;
  undefined4 in_cr14;
  
  if (unaff_r6 != 0) {
    coprocessor_movefromRt(0,2,5,in_cr12,in_cr4);
    coprocessor_store(0xf,in_cr14,unaff_r8 + -0x264);
    coprocessor_loadlong(0,in_cr0,unaff_r9);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x2b214fb0(0x24);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


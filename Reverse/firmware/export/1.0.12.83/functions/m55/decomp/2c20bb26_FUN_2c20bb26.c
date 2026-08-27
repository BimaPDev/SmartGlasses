/* FUN_2c20bb26 @ 0x2c20bb26 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c20bb26(void)

{
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined8 in_d0;
  undefined8 uVar1;
  undefined8 in_d2;
  
  uVar1 = VectorAdd(in_d2,in_d0,1,1);
  SatQ(uVar1,1,1);
  coprocessor_movefromRt(0,2,5,in_cr12,in_cr4);
  coprocessor_store(0xf,in_cr14,unaff_r8 + -0x264);
  coprocessor_loadlong(0,in_cr0,unaff_r9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


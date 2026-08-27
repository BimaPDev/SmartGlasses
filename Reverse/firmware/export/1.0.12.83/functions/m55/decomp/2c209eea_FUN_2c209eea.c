/* FUN_2c209eea @ 0x2c209eea */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c209eea(void)

{
  undefined1 *unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr12;
  undefined4 in_cr14;
  undefined8 in_d16;
  undefined8 in_d21;
  undefined8 in_d27;
  
  if (((uint)unaff_r7 & 0x1fffffff) == 0) {
    VectorAdd(in_d27,in_d16,4,1);
  }
  else {
    unaff_r7 = &stack0x000003a0;
  }
  VectorShiftRight(in_d21,0x13);
  *unaff_r7 = (char)unaff_r7;
  coprocessor_store(0,in_cr0,unaff_r10 + -0x40);
  coprocessor_movefromRt(0,2,5,in_cr12,in_cr4);
  coprocessor_store(0xf,in_cr14,unaff_r8 + -0x264);
  coprocessor_loadlong(0,in_cr0,unaff_r9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


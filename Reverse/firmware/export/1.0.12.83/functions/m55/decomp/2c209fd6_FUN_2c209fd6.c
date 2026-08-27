/* FUN_2c209fd6 @ 0x2c209fd6 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c209fd6(void)

{
  undefined1 *unaff_r7;
  int unaff_r10;
  undefined4 in_cr0;
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c27a74c @ 0x2c27a74c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c27a74c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint unaff_r6;
  undefined1 in_q11 [16];
  
  if (param_3 >> 0xd == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((unaff_r6 >> 0x1b) + 1) = (char)_DAT_2c27aa14;
  VectorShiftRight(in_q11,0x31);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


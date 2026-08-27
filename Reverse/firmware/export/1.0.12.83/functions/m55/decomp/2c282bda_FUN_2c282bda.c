/* FUN_2c282bda @ 0x2c282bda */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c282bda(void)

{
  int extraout_r1;
  undefined4 extraout_r2;
  int unaff_r4;
  int unaff_r5;
  undefined1 in_q8 [16];
  undefined1 in_q10 [16];
  
  func_0x2bec3a48();
  VectorShiftRightInsert(in_q8,in_q10,1);
  *(undefined4 *)(unaff_r5 + 0x6c) = extraout_r2;
  *(char *)(extraout_r1 + 0x11) = (char)unaff_r4;
  func_0x2c486a0c(unaff_r4 << 1,extraout_r1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


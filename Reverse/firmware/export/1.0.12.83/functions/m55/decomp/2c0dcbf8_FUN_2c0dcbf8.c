/* FUN_2c0dcbf8 @ 0x2c0dcbf8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0dcbf8(void)

{
  int in_r3;
  int unaff_r6;
  undefined4 unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 extraout_d4;
  undefined8 extraout_d5;
  undefined8 in_d29;
  undefined8 in_d30;
  
  if (unaff_r6 == 0) {
    func_0x2bfb1e24();
    coprocessor_loadlong(0xc,in_cr15,4);
    VectorHalvingSubtract(extraout_d5,extraout_d4,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  VectorShiftLeft(in_d30,in_d29,8,1);
  coprocessor_function2(0xb,0,0,in_cr15,in_cr10,in_cr8);
  coprocessor_store(0xe,in_cr0,in_r3 + -0x24);
  coprocessor_moveto(5,0,7,unaff_pc,in_cr6,in_cr14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


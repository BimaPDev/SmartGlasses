/* FUN_2c15cfe0 @ 0x2c15cfe0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c15cfe0(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined4 unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr15;
  
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
  if (unaff_r7 == 0) {
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  }
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


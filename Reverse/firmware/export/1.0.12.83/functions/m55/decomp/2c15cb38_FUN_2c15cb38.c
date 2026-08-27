/* FUN_2c15cb38 @ 0x2c15cb38 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c15cb38(undefined4 param_1,int param_2)

{
  uint unaff_r4;
  int unaff_r5;
  undefined4 unaff_pc;
  undefined4 in_cr8;
  undefined4 in_cr15;
  
  if (unaff_r5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == 0) {
    if (unaff_r5 == 0) goto LAB_2c15cbe8;
  }
  else if (unaff_r4 >> 2 != 0) {
    halt_baddata();
  }
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
LAB_2c15cbe8:
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
  coprocessor_moveto(0xf,3,7,unaff_pc,in_cr8,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


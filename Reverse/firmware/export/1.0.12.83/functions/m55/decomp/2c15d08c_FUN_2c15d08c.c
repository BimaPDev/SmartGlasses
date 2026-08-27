/* FUN_2c15d08c @ 0x2c15d08c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c15d052) overlaps instruction at (ram,0x2c15d050)
    */

void FUN_2c15d08c(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  int unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined4 unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr8;
  undefined4 in_cr15;
  
  if (param_2 == 0) {
    *(undefined4 *)(unaff_r4 + 0x74) = unaff_r5;
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
    coprocessor_movefromRt(0xf,4,7,in_cr0,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r4 != 0x4e) {
    if (unaff_r4 != 0x4f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xd5,0x2c15d0ac);
      (*pcVar1)();
    }
    iRam000000c3 = unaff_r4 - unaff_r7;
    if ((param_2 & 3) == 0) {
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


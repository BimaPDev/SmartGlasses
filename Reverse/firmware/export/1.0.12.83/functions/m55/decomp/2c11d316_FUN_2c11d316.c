/* FUN_2c11d316 @ 0x2c11d316 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c11d316(uint param_1)

{
  int unaff_r6;
  int unaff_r11;
  int in_r12;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr13;
  undefined8 in_d6;
  undefined8 unaff_d14;
  undefined1 auStack_2a0 [668];
  
  VectorPairwiseMax(unaff_d14,in_d6,4,1);
  coprocessor_load(2,in_cr2,unaff_r11 + -0x78);
  coprocessor_load(4,in_cr13,in_r12 + -0xb8);
  coprocessor_load(3,in_cr7,auStack_2a0);
  coprocessor_store(3,in_cr9,unaff_r6 + -0x338);
  coprocessor_store(0xf,in_cr4,unaff_r6 + -0x3cc);
  software_bkpt(0xfd);
  iRam000000fd = param_1 << 0x1a;
  iRam00000101 = (param_1 & 0x7ff) * 2;
  uRam00000105 = 0xfd;
  puRam00000109 = &stack0x000003c4;
  uRam0000010d = param_1 >> 0xc;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


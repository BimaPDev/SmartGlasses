/* FUN_2c4550de @ 0x2c4550de */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4550de(void)

{
  int unaff_pc;
  undefined4 in_cr6;
  undefined8 in_d31;
  
  software_interrupt(0xfe);
  VectorShiftLeft(in_d31,0x1c,0x40,1);
  coprocessor_load(0xf,in_cr6,unaff_pc + -0x3fc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


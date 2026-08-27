/* FUN_2c202262 @ 0x2c202262 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c202262(void)

{
  undefined4 uVar1;
  undefined4 unaff_pc;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 in_d0;
  undefined1 in_q14 [16];
  
  uVar1 = VectorGetElement(in_d0,0,4,0);
  VectorMultiplyAccumulate(in_q14,uVar1,4);
  coprocessor_moveto(3,5,5,unaff_pc,in_cr13,in_cr12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


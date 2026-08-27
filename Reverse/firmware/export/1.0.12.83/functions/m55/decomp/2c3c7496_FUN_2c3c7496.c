/* FUN_2c3c7496 @ 0x2c3c7496 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3c7496(void)

{
  undefined4 in_cr0;
  undefined4 in_cr15;
  undefined8 in_d16;
  
  coprocessor_movefromRt(0,7,1,in_cr15,in_cr0);
  VectorShiftRight(in_d16,0x11);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


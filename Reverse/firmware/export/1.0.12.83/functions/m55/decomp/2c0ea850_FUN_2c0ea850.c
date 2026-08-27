/* FUN_2c0ea850 @ 0x2c0ea850 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0ea850(void)

{
  undefined4 in_cr0;
  undefined4 in_cr3;
  
  func_0x2b9d90b2();
  coprocessor_movefromRt(0xb,0,7,in_cr0,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


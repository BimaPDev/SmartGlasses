/* FUN_2c46098c @ 0x2c46098c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c46098c(void)

{
  undefined4 in_cr4;
  
  coprocessor_movefromRt(0xc,7,in_cr4);
  coprocessor_movefromRt2(0xc,7,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


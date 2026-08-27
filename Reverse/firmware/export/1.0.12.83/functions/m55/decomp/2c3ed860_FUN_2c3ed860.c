/* FUN_2c3ed860 @ 0x2c3ed860 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3ed860(void)

{
  undefined4 in_cr3;
  
  coprocessor_store(3,in_cr3,&stack0x00000168);
  software_interrupt(0x33);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


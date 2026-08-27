/* FUN_2c44a2ea @ 0x2c44a2ea */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44a2ea(void)

{
  undefined4 unaff_r6;
  undefined4 in_cr6;
  
  coprocessor_storelong(2,in_cr6,unaff_r6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


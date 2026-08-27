/* FUN_2c453282 @ 0x2c453282 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c453282(void)

{
  undefined4 in_cr4;
  undefined4 in_cr9;
  
  coprocessor_movefromRt(3,5,4,in_cr4,in_cr9);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


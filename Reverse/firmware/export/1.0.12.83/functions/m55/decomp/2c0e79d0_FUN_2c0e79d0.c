/* FUN_2c0e79d0 @ 0x2c0e79d0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0e79d0(void)

{
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr14;
  
  coprocessor_function(0xf,0xf,7,in_cr14,in_cr2,in_cr5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c216284 @ 0x2c216284 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c216284(void)

{
  int unaff_r9;
  undefined4 in_cr8;
  
  coprocessor_store(0xd,in_cr8,unaff_r9 + -0x218);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


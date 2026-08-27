/* FUN_2c43a8ec @ 0x2c43a8ec */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c43a8ec(void)

{
  undefined4 in_cr3;
  undefined4 in_cr8;
  undefined4 in_cr11;
  
  coprocessor_function2(0xe,0xe,4,in_cr3,in_cr11,in_cr8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


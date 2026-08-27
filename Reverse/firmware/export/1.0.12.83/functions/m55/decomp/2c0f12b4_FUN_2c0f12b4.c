/* FUN_2c0f12b4 @ 0x2c0f12b4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f12b4(int param_1)

{
  undefined4 in_cr15;
  
  coprocessor_storelong(0xe,in_cr15,param_1 + 0x1d8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c05b902 @ 0x2c05b902 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c05b902(undefined4 param_1,undefined1 param_2)

{
  int unaff_r6;
  undefined4 in_cr0;
  
  coprocessor_store(2,in_cr0,unaff_r6 + -0xb8);
  *(undefined1 *)(unaff_r6 + -0xac) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


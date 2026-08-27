/* FUN_2c05bce8 @ 0x2c05bce8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c05bce8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint unaff_r5;
  int unaff_r7;
  undefined4 in_cr0;
  
  coprocessor_store(6,in_cr0,param_3 + 0xc0U);
  *(uint *)(unaff_r7 + param_4) = param_3 + 0xc0U & unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


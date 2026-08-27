/* FUN_2c098da0 @ 0x2c098da0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c098da0(void)

{
  int unaff_r6;
  undefined4 in_cr0;
  undefined4 in_cr2;
  
  *(int *)(unaff_r6 + 0x10) = unaff_r6;
  coprocessor_function2(2,0,0,in_cr0,in_cr0,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


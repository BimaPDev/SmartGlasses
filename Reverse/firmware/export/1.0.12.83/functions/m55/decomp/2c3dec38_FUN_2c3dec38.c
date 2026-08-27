/* FUN_2c3dec38 @ 0x2c3dec38 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3dec38(void)

{
  int unaff_r11;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr11;
  
  coprocessor_storelong(0,in_cr1,unaff_r11 + -0x290);
  coprocessor_function2(0,8,4,in_cr0,in_cr11,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


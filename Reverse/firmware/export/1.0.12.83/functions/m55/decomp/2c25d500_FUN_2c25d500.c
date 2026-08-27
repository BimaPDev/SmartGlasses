/* FUN_2c25d500 @ 0x2c25d500 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c25d500(int param_1,int param_2)

{
  char cVar1;
  int unaff_r7;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  
  if (param_1 == 0 || param_1 < 0 != (bool)in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = (char)unaff_r7 + -0x10;
  *(char *)(unaff_r7 + 0x1d) = cVar1;
  *(char *)(param_2 + 0x1f) = (char)unaff_r7;
  *(char *)(unaff_r7 + 1) = cVar1;
  coprocessor_function2(0xf,0,4,in_cr6,in_cr9,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


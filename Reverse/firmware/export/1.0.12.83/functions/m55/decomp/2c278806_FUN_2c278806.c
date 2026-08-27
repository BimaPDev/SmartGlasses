/* FUN_2c278806 @ 0x2c278806 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c278806(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  int unaff_r7;
  char in_NG;
  char in_OV;
  undefined4 in_cr15;
  
  *(char *)(param_3 + unaff_r5) = (char)unaff_r5;
  if (in_NG == in_OV) {
    coprocessor_store(0xd,in_cr15,unaff_r7 + -0x374);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_3 + unaff_r5) = (char)unaff_r5;
  if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


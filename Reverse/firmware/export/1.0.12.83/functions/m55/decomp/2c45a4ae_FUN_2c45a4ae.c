/* FUN_2c45a4ae @ 0x2c45a4ae */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45a4ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int unaff_r6;
  int unaff_r7;
  undefined4 in_cr10;
  undefined4 in_cr13;
  
  if (unaff_r6 != 0) {
    param_4 = 0x2c45a518;
    *(undefined4 *)(unaff_r7 + 0xc) = param_1;
  }
  *(undefined4 *)(*(int *)(param_4 + 8) + 0x68) = *(undefined4 *)(param_4 + 0x14);
  coprocessor_function2(3,1,6,in_cr13,in_cr10,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


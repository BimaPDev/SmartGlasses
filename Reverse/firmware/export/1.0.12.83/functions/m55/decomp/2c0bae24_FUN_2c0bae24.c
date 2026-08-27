/* FUN_2c0bae24 @ 0x2c0bae24 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0bae24(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  int unaff_r7;
  
  *(undefined4 *)(param_4 + -0xa1) = param_1;
  *(undefined4 *)(param_4 + -0x9d) = param_2;
  *(undefined4 **)(param_4 + -0x99) = (undefined4 *)(param_4 + -0xa1);
  *(undefined4 *)(param_4 + -0x95) = unaff_r5;
  *unaff_r6 = param_1;
  unaff_r6[1] = unaff_r7 + -0x97;
  unaff_r6[2] = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


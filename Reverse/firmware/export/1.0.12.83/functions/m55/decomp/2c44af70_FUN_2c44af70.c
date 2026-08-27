/* FUN_2c44af70 @ 0x2c44af70 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44af70(undefined4 param_1,int param_2)

{
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  char in_NG;
  bool in_ZR;
  char in_OV;
  
  if (!in_ZR && in_NG == in_OV) {
    *(int *)(param_2 + 0x50) = param_2;
    *(undefined4 *)(unaff_r6 + 0x18) = unaff_r7;
    *(int *)unaff_r5 = unaff_r5;
    *(undefined4 *)(unaff_r5 + 4) = unaff_r7;
    software_interrupt(0x73);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


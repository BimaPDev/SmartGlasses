/* FUN_2c45279c @ 0x2c45279c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45279c(int param_1,undefined2 param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  undefined8 in_d16;
  
  param_4 = param_4 >> 0x17;
  uVar1 = *(undefined2 *)(unaff_r4 * 2);
  if (param_3 == 0) {
    *(undefined2 *)(param_4 + 0x14) = param_2;
    *(char *)(unaff_r7 + param_4) = (char)uVar1;
    *(char *)(unaff_r7 + 0xc) = (char)param_4;
    VectorRoundShiftRight(in_d16,7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(unaff_r5 + 0x38) = param_2;
  *(undefined2 *)(param_1 + 10) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


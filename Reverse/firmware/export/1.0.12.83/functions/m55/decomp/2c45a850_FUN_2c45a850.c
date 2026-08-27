/* FUN_2c45a850 @ 0x2c45a850 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45a850(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  int unaff_r6;
  undefined4 uVar1;
  undefined4 *unaff_r7;
  
  *(short *)(unaff_r6 + 0x32) = (short)param_4;
  param_2 = param_2 >> 0xb;
  *(short *)(unaff_r4 + 0x34) = (short)param_4;
  *unaff_r7 = param_1;
  unaff_r7[1] = param_2;
  unaff_r7[2] = param_4;
  unaff_r7[3] = unaff_r6;
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  unaff_r7[4] = param_1;
  unaff_r7[5] = param_2;
  unaff_r7[6] = param_3;
  unaff_r7[7] = unaff_r4;
  unaff_r7[8] = uVar1;
  unaff_r7[9] = unaff_r7 + 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


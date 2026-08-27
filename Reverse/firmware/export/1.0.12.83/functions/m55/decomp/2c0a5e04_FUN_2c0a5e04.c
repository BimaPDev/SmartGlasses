/* FUN_2c0a5e04 @ 0x2c0a5e04 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0a5e04(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int unaff_r4;
  undefined4 unaff_r5;
  uint unaff_r7;
  
  *param_3 = param_2;
  param_3[1] = unaff_r5;
  *(undefined4 **)(unaff_r4 + 0x38) = param_3 + 2;
  *(short *)((param_4 >> 0x1a) + 8) = (short)param_4;
  software_bkpt(0xbb);
  *param_2 = 0;
  param_2[1] = unaff_r7 >> 0x1f;
  param_2[2] = 0;
  param_2[3] = 0xb0;
  param_2[4] = 0x2c;
  param_2[5] = 0;
  param_2[6] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


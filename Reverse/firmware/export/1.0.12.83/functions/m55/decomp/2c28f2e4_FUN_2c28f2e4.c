/* FUN_2c28f2e4 @ 0x2c28f2e4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c28f2e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  
  *unaff_r5 = param_3;
  unaff_r5[1] = param_4;
  unaff_r5[2] = unaff_r4;
  unaff_r5[3] = unaff_r6;
  unaff_r5[4] = param_1;
  unaff_r5[5] = param_2;
  unaff_r5[6] = param_4;
  unaff_r5[7] = unaff_r4;
  unaff_r5[8] = unaff_r6;
  func_0x2bfeb18e();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


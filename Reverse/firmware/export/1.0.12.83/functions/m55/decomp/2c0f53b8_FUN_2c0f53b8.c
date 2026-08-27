/* FUN_2c0f53b8 @ 0x2c0f53b8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f53b8(undefined4 param_1,int *param_2)

{
  int unaff_r5;
  uint unaff_r6;
  int unaff_r9;
  undefined4 in_cr12;
  undefined8 unaff_d11;
  undefined8 unaff_d13;
  undefined8 in_d16;
  undefined8 in_d30;
  undefined8 uVar1;
  
  *param_2 = unaff_r5 >> 0x1b;
  param_2[1] = unaff_r6;
  param_2[2] = unaff_r6 >> 0x1f;
  VectorShiftRightAccumulate(in_d16,in_d30,0x1d);
  coprocessor_load(7,in_cr12,unaff_r9 + -0x94);
  software_bkpt(0xff);
  uVar1 = VectorAdd(unaff_d11,unaff_d13,4,1);
  SatQ(uVar1,4,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


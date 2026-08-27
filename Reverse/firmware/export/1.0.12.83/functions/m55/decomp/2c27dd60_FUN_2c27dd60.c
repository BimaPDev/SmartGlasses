/* FUN_2c27dd60 @ 0x2c27dd60 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c27dd60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r6;
  int unaff_r7;
  undefined8 in_d1;
  undefined8 in_d23;
  
  *unaff_r6 = param_1;
  unaff_r6[1] = param_2;
  unaff_r6[2] = param_4;
  FloatVectorAbsoluteDifference(in_d23,in_d1,2);
  *(undefined4 *)(unaff_r7 + 0x1c) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


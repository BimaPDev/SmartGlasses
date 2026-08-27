/* FUN_2c0bda84 @ 0x2c0bda84 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0bda84(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *unaff_r6;
  undefined8 in_d4;
  undefined8 in_d16;
  
  FloatVectorPairwiseAdd(in_d4,in_d16,4);
  *unaff_r6 = param_1;
  unaff_r6[1] = param_2;
  unaff_r6[2] = param_3;
  *(short *)(param_3 + 8) = (short)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


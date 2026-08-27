/* FUN_2c25eace @ 0x2c25eace */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c25eace(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int unaff_r5;
  undefined8 in_d3;
  undefined8 in_d28;
  
  *(char *)(param_3 + unaff_r5) = (char)unaff_r5;
  VectorHalvingAdd(in_d28,in_d3,1,0);
  SignedSaturate(param_4,0);
  SignedDoesSaturate(param_4,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


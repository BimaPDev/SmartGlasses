/* FUN_2c088084 @ 0x2c088084 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c088084(undefined2 param_1)

{
  int unaff_r4;
  undefined8 unaff_d14;
  undefined8 in_d18;
  
  *(undefined2 *)(unaff_r4 + 0x30) = param_1;
  VectorAbsoluteDifference(unaff_d14,in_d18,2,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


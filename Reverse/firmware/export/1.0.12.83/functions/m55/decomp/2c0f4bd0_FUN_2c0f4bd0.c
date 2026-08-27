/* FUN_2c0f4bd0 @ 0x2c0f4bd0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f4bd0(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 unaff_d13;
  undefined8 in_d16;
  undefined8 in_d25;
  
  *(undefined2 *)(param_1 + 0x30) = param_3;
  VectorShiftRight(unaff_d13,5);
  VectorShiftRightInsert(in_d16,in_d25,5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


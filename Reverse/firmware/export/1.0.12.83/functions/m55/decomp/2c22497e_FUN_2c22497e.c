/* FUN_2c22497e @ 0x2c22497e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c22497e(void)

{
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr14;
  undefined8 in_d1;
  undefined8 uVar1;
  undefined8 in_d28;
  
  uVar1 = VectorAdd(in_d28,in_d1,8,1);
  SatQ(uVar1,8,1);
  coprocessor_function2(1,7,5,in_cr3,in_cr14,in_cr6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c45a55e @ 0x2c45a55e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c45a55e(int param_1)

{
  undefined4 in_cr10;
  undefined4 in_cr13;
  
  if (param_1 + 5 < 0) {
    func_0x2bf2322c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_function2(3,1,6,in_cr13,in_cr10,in_cr13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


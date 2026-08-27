/* FUN_2c20308e @ 0x2c20308e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c20308e(void)

{
  undefined1 auVar1 [16];
  undefined1 in_q12 [16];
  undefined1 in_q13 [16];
  
  auVar1 = VectorAdd(in_q12,in_q13,1,1);
  SatQ(auVar1,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


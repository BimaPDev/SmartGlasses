/* FUN_2c24c0b6 @ 0x2c24c0b6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c24c0b6(void)

{
  undefined1 in_q0 [16];
  undefined1 auVar1 [16];
  undefined1 in_q12 [16];
  
  auVar1 = VectorAdd(in_q12,in_q0,4,0);
  SatQ(auVar1,4,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


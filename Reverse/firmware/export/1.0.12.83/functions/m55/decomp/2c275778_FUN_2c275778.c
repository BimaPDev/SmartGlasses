/* FUN_2c275778 @ 0x2c275778 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c275778(void)

{
  undefined2 unaff_r7;
  undefined1 in_q0 [16];
  undefined1 in_q6 [16];
  undefined1 auVar1 [16];
  
  _Reserved2 = unaff_r7;
  auVar1 = VectorAdd(in_q6,in_q0,1,1);
  SatQ(auVar1,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c2a39b2 @ 0x2c2a39b2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2a39b2(void)

{
  undefined1 in_q8 [16];
  undefined1 in_q12 [16];
  
  VectorHalvingAdd(in_q12,in_q8,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


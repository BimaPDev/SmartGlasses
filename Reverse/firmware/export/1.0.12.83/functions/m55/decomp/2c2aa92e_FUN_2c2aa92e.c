/* FUN_2c2aa92e @ 0x2c2aa92e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2aa92e(void)

{
  undefined1 in_q7 [16];
  undefined1 in_q8 [16];
  
  FloatVectorCompareEqual(in_q7,in_q8,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c27e5ca @ 0x2c27e5ca */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c27e5ca(void)

{
  int in_r3;
  
  SignedSaturate(in_r3 << 0x14,0x1f);
  SignedDoesSaturate(in_r3 << 0x14,0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


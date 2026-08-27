/* FUN_2c2cb59c @ 0x2c2cb59c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2cb59c(void)

{
  int in_r3;
  int unaff_r7;
  
  if (unaff_r7 << 8 < 0 != SBORROW4(unaff_r7,0x10)) {
    *(int *)(in_r3 * 0x10000 + 0x68) = unaff_r7 << 8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


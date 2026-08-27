/* FUN_2c462c1e @ 0x2c462c1e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c462c1e(void)

{
  int in_r3;
  undefined2 unaff_r5;
  
  *(undefined2 *)(in_r3 + 0x3c) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


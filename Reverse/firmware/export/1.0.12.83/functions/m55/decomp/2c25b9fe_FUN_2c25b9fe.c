/* FUN_2c25b9fe @ 0x2c25b9fe */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c25b9fe(void)

{
  int unaff_r4;
  undefined4 unaff_r6;
  
  *(undefined4 *)(unaff_r4 + 100) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


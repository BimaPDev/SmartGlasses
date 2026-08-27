/* FUN_2c4355ba @ 0x2c4355ba */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4355ba(void)

{
  int in_r3;
  undefined1 unaff_r5;
  int unaff_r6;
  
  *(undefined1 *)(in_r3 + unaff_r6) = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


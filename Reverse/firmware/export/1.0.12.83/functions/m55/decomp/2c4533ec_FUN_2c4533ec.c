/* FUN_2c4533ec @ 0x2c4533ec */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c4533ec(void)

{
  undefined1 unaff_r6;
  int unaff_r7;
  
  software_bkpt(0xc9);
  *(undefined1 *)(unaff_r7 + 0x16) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


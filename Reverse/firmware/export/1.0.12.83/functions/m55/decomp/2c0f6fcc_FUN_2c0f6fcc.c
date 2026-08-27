/* FUN_2c0f6fcc @ 0x2c0f6fcc */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c0f6fcc(void)

{
  int unaff_r7;
  
  software_bkpt(0xe0);
  do {
  } while (unaff_r7 < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


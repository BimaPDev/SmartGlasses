/* FUN_2c20668a @ 0x2c20668a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c20668a(void)

{
  uint unaff_r4;
  int unaff_r5;
  
  if ((unaff_r4 & 0x1fffffff) != 0) {
    *(char *)(unaff_r5 + 3) = (char)uRam2c20669c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


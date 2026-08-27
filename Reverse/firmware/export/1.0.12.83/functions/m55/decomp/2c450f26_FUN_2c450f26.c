/* FUN_2c450f26 @ 0x2c450f26 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c450f26(void)

{
  undefined1 in_r3;
  int unaff_r7;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_OV != '\0') {
    *(undefined1 *)(unaff_r7 + 0x18) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


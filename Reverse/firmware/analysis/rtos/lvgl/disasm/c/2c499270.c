/* FUN_2c499270 @ 2c499270 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c499270(void)

{
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  bool in_NG;
  char in_OV;
  undefined4 in_cr5;
  
  if (in_NG) {
    software_interrupt(0xf0e92d);
  }
  if (in_NG != (bool)in_OV) {
    unaff_r4 = unaff_r7 + (unaff_r5 >> 0x16);
  }
  if (in_NG) {
    coprocessor_moveto2(0xe,4,unaff_r4,unaff_r6,in_cr5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


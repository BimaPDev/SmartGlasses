/* FUN_2c289fc6 @ 0x2c289fc6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c289fc6(void)

{
  undefined4 in_r3;
  int unaff_r5;
  undefined1 in_q11 [16];
  
  VectorShiftLeft(in_q11,0x3f,0x40,1);
  *(undefined4 *)(unaff_r5 + 100) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


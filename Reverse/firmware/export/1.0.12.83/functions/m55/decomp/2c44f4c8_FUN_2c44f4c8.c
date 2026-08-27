/* FUN_2c44f4c8 @ 0x2c44f4c8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44f4c8(void)

{
  int unaff_r6;
  char in_NG;
  char in_OV;
  undefined8 unaff_d11;
  undefined8 unaff_d14;
  
  *(int *)(unaff_r6 * 2) = unaff_r6;
  VectorTest(unaff_d11,unaff_d14);
  if (in_NG == in_OV) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


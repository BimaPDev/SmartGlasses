/* FUN_2c05bd82 @ 0x2c05bd82 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c05bd82(undefined4 param_1)

{
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  
  *(undefined4 *)(unaff_r4 + 0x20) = param_1;
  *unaff_r6 = unaff_r5;
  unaff_r6[1] = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


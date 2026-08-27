/* FUN_2c42dbd6 @ 0x2c42dbd6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c42dbd6(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  
  *unaff_r6 = param_2;
  unaff_r6[1] = unaff_r5;
  unaff_r6[2] = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


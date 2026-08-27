/* FUN_2c3940d6 @ 0x2c3940d6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c3940d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *unaff_r6;
  
  *unaff_r6 = param_2;
  unaff_r6[1] = param_4;
  unaff_r6[2] = unaff_r4;
  unaff_r6[3] = unaff_r5;
  *unaff_r5 = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


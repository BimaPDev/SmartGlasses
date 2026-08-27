/* FUN_2c245062 @ 0x2c245062 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c245062(undefined4 param_1,undefined2 *param_2,uint param_3)

{
  uint unaff_r5;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  
  *(undefined4 *)((unaff_r5 ^ param_3) + (int)param_2) = unaff_r7;
  *param_2 = (short)unaff_r7;
  SignedSaturate(unaff_r11,0);
  SignedDoesSaturate(unaff_r11,0);
  *param_2 = (short)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* FUN_2c04f1b2 @ 0x2c04f1b2 */

void FUN_2c04f1b2(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_cr12;
  
  coprocessor_store(4,in_cr12,(code *)(unaff_r6 + -0x194));
  *(undefined4 *)(param_3 + 0x54) = unaff_r7;
                    /* WARNING: Could not recover jumptable at 0x2c04f1c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r6 + -0x194))();
  return;
}


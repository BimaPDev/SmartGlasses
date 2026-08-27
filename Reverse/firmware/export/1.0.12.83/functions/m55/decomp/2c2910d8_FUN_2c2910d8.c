/* FUN_2c2910d8 @ 0x2c2910d8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2910d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *extraout_r1;
  int unaff_r4;
  undefined1 unaff_r7;
  
  MasterStackPointer = unaff_r7;
  func_0x2c09b3cc(*(int *)(unaff_r4 * 0x2000000 + 0x70) << 1,0,param_3,param_4,param_1,param_2,
                  param_3,param_4);
  *extraout_r1 = unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


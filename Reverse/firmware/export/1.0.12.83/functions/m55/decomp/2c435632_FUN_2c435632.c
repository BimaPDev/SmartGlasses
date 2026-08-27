/* FUN_2c435632 @ 0x2c435632 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c435632(int param_1,undefined1 param_2,undefined4 param_3)

{
  int extraout_r2;
  int unaff_r6;
  int unaff_r7;
  undefined8 in_d2;
  undefined8 unaff_d9;
  
  *(undefined1 *)(param_1 + unaff_r7) = param_2;
  VectorAdd(unaff_d9,in_d2,2,1);
  func_0x2b638980(param_1,param_1,param_3,param_1,param_1,param_3);
  *(int *)(unaff_r6 + -0x9f) = unaff_r7;
  *(short *)((extraout_r2 + 0xb) * 8 + 0x10) = (short)(extraout_r2 + 0xb);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


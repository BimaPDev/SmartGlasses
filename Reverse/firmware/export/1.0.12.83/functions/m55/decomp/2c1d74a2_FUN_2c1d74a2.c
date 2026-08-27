/* FUN_2c1d74a2 @ 0x2c1d74a2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c1d74a2(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int extraout_r3;
  int unaff_r4;
  undefined2 unaff_r5;
  
  uVar1 = *(undefined4 *)(unaff_r4 + 0x44);
  *(undefined2 *)(param_2 + 8) = unaff_r5;
  func_0x2b5965cc(uVar1,param_2,param_4 + param_1,param_4 << 0xc,param_1,param_2,param_3);
  *(int *)(extraout_r3 + param_1 * -0x80000) = extraout_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


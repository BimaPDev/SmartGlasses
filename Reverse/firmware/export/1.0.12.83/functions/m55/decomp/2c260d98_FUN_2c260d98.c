/* FUN_2c260d98 @ 0x2c260d98 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c260d98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *extraout_r1;
  int *extraout_r1_00;
  uint uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint uVar3;
  undefined8 uVar4;
  int in_stack_00000260;
  
  uVar4 = func_0x2c004c1c(param_1,param_2,*(undefined2 *)(unaff_r6 + 0x3e),param_4,param_1,param_2,
                          param_3,param_4);
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  uVar3 = in_stack_00000260 - 0x70;
  *(uint *)(uVar3 + uVar2) = uVar3;
  *(short *)(unaff_r5 + 6) = (short)uVar3;
  uVar4 = func_0x2c665e44((uint)uVar4,uVar2 & (uint)uVar4,extraout_r2);
  piVar1 = (int *)((ulonglong)uVar4 >> 0x20);
  *piVar1 = unaff_r6;
  func_0x2c665c50((int)uVar4,piVar1,extraout_r3);
  *extraout_r1 = unaff_r6;
  func_0x2ce65c60(extraout_r3_00);
  *extraout_r1_00 = unaff_r6;
  func_0x2ca65c96(extraout_r3_01);
  do {
  } while (0 < (unaff_r4 << (uVar3 & 0xff)) << 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


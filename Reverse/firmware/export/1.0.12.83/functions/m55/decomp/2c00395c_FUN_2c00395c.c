/* FUN_2c00395c @ 0x2c00395c */

undefined4 FUN_2c00395c(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 extraout_r3;
  uint uVar2;
  undefined4 in_cr1;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((param_3 < param_2) && (param_2 - param_3 < param_4)) {
    uVar2 = param_2 + param_4 & 3;
    if (param_4 < 4) {
      uVar2 = param_4;
    }
                    /* WARNING: Could not recover jumptable at 0x2c003980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&DAT_2c003984 + (uint)(byte)(&DAT_2c003984)[uVar2] * 2))
                      (param_2,param_3 - param_2,param_4 - uVar2,(param_2 + param_4) - 1);
    return uVar3;
  }
  uVar4 = func_0x2cc05a74();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  coprocessor_load(0xe,in_cr1,iVar1);
  coprocessor_store(0xe,in_cr1,extraout_r3);
  func_0x2cc22a80((int)uVar4,iVar1 + 0x40);
  return param_1;
}


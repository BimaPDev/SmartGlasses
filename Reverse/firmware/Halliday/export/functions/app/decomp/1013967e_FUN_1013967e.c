/* FUN_1013967e @ 0x1013967e */

void FUN_1013967e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_100f114c();
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      uVar2 = FUN_100f1174(param_1);
                    /* WARNING: Could not recover jumptable at 0x101396a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,param_3,param_2);
      return;
    }
    if (*(code **)(iVar1 + 4) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x101396b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 4))(param_1,param_3,param_2);
      return;
    }
  }
  return;
}


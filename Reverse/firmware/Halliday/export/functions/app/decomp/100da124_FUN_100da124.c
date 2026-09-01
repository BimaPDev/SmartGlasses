/* FUN_100da124 @ 0x100da124 */

void FUN_100da124(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = thunk_FUN_1013650a();
  if (param_1 == iVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)*DAT_100da14c;
    uVar2 = FUN_10131c1c();
                    /* WARNING: Could not recover jumptable at 0x100da146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2,5,param_2);
    return;
  }
  return;
}


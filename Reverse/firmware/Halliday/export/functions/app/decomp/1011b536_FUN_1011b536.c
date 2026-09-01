/* FUN_1011b536 @ 0x1011b536 */

undefined4 FUN_1011b536(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_1005b8b8();
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 0x18) + 0x10),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1011b554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar1,param_2,param_3);
    return uVar2;
  }
  return 0xffffffea;
}


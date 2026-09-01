/* FUN_1011b4be @ 0x1011b4be */

undefined4 FUN_1011b4be(void)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_1005b8b8();
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 0x18) + 4),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1011b4d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return 0xffffffea;
}


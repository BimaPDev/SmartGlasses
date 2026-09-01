/* FUN_1001368c @ 0x1001368c */

void FUN_1001368c(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_r3;
  
  iVar2 = *DAT_100136d8;
  iVar3 = *DAT_100136dc;
  uVar1 = param_1;
  if (iVar3 == 0) {
LAB_100136c8:
    if (*DAT_100136d8 == iVar2) {
      return;
    }
  }
  else {
    uVar1 = (uint)*(byte *)(iVar3 + 2);
    *(char *)(iVar3 + 2) = (char)param_1;
    if ((*DAT_100136e0 == 0) ||
       (UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100136e0 + 4), UNRECOVERED_JUMPTABLE == (code *)0x0)
       ) goto LAB_100136c8;
    if (iVar2 == *DAT_100136d8) goto LAB_100136c0;
  }
  FUN_1013cdc0(uVar1);
  UNRECOVERED_JUMPTABLE = extraout_r3;
LAB_100136c0:
                    /* WARNING: Could not recover jumptable at 0x100136c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


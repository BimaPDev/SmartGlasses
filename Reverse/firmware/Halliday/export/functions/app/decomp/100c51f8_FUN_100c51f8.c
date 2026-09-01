/* FUN_100c51f8 @ 0x100c51f8 */

void FUN_100c51f8(undefined4 param_1,char *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  iVar1 = FUN_100ca324();
  iVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 2) == '\x01') {
      iVar2 = *(int *)(iVar1 + 0xbc);
      *(undefined4 *)(iVar1 + 0xbc) = 0;
    }
    else {
      iVar2 = 0;
    }
    FUN_10133c22(iVar1,0x13);
    FUN_100ca13c(iVar1);
  }
  if (*param_2 == '\0') {
    FUN_100e130c(param_2 + 1);
  }
  if ((iVar2 != 0) || (iVar2 = FUN_100e0b10(param_1,param_2), iVar2 != 0)) {
    FUN_100e0b60(iVar2);
  }
  FUN_100cf028(param_1,param_2);
  if ((*DAT_100c5268 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*DAT_100c5268 + 0x24), UNRECOVERED_JUMPTABLE != (code *)0x0
     )) {
                    /* WARNING: Could not recover jumptable at 0x100c5262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return;
  }
  return;
}


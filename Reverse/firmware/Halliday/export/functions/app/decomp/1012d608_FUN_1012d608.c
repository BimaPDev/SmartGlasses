/* FUN_1012d608 @ 0x1012d608 */

int FUN_1012d608(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_100a0310(param_1,2);
  if (iVar1 == 0) {
    iVar1 = -0x58;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0x50) + 0x14);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1012d620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return iVar1;
    }
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  }
  return iVar1;
}


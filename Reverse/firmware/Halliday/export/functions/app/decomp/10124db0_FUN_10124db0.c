/* FUN_10124db0 @ 0x10124db0 */

void FUN_10124db0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    *param_1 = *piVar1;
    FUN_10124db0();
  }
  UNRECOVERED_JUMPTABLE = (code *)piVar1[1];
  *param_1 = (int)piVar1;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10124dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(piVar1,param_1);
    return;
  }
  return;
}


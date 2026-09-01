/* FUN_10133f9e @ 0x10133f9e */

void FUN_10133f9e(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = param_1[1];
  if (*param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 4);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)();
    }
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((int)param_1 + 0x46) = 0;
  if ((code *)param_1[3] != (code *)0x0) {
    (*(code *)param_1[3])(param_1);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x1c);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10133fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}


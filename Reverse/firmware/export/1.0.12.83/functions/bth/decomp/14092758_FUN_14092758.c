/* FUN_14092758 @ 0x14092758 */

void FUN_14092758(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    iVar1 = FUN_140953f8(param_3 + 0x14);
    if (iVar1 == 0) {
      if ((code *)*DAT_140927b0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x140927ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*DAT_140927b0)(param_1,0,param_3);
        return;
      }
    }
    else if ((code *)*DAT_140927b4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x14092798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*DAT_140927b4)(param_1,0,param_3);
      return;
    }
  }
  else {
    if (*(char *)(param_2 + 6) == '\0') {
      UNRECOVERED_JUMPTABLE = (code *)*DAT_140927b0;
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)*DAT_140927b4;
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1409276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}


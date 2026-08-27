/* FUN_2c63a640 @ 0x2c63a640 */

void FUN_2c63a640(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  int unaff_r4;
  int iVar2;
  int unaff_r7;
  int unaff_r8;
  
  while (param_1 != 0) {
    unaff_r4 = unaff_r4 + 1;
    if (unaff_r4 == 0x20) goto LAB_2c63a65e;
    param_1 = FUN_2c66b624();
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(DAT_2c63a6a4 + unaff_r4 * 8 + 4);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c63a652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_2c63a65e:
  if (unaff_r8 != 2) {
    iVar2 = 0;
    do {
      iVar1 = FUN_2c66b624();
      if (iVar1 == 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(DAT_2c63a6b0 + iVar2 * 8 + 4);
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x2c63a69a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(unaff_r7 + 8));
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
  }
  return;
}


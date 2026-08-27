/* FUN_2c602e40 @ 0x2c602e40 */

void FUN_2c602e40(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((int)((uint)*(byte *)(param_1 + 0x1c) << 0x1f) < 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x14);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) goto LAB_2c602e60;
  }
  else {
    iVar1 = FUN_2c602c38(param_1,DAT_2c602e70,DAT_2c602e6c);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x14);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (iVar1 == 0)) {
LAB_2c602e60:
                    /* WARNING: Could not recover jumptable at 0x2c602e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,1);
      return;
    }
  }
  return;
}


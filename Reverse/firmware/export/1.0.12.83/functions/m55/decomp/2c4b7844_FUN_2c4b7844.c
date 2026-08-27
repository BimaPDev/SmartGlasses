/* FUN_2c4b7844 @ 0x2c4b7844 */

void FUN_2c4b7844(int param_1)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint in_fpscr;
  undefined4 uVar2;
  
  cVar1 = *DAT_2c4b7898;
  *DAT_2c4b789c = (char)param_1;
  if (cVar1 == '\0') {
    if (param_1 == 0) {
      UNRECOVERED_JUMPTABLE = (code *)*DAT_2c4b78a0;
      uVar2 = 0x3f800000;
      goto joined_r0x2c4b788a;
    }
    if (-99 < param_1) {
      uVar2 = DAT_2c4b78a8;
      if (param_1 < 0x33) {
        uVar2 = VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      }
      FUN_2c49ab84(uVar2);
      if ((code *)*DAT_2c4b78a0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2c4b787e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*DAT_2c4b78a0)();
        return;
      }
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)*DAT_2c4b78a0;
  uVar2 = DAT_2c4b78a4;
joined_r0x2c4b788a:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x2c4b7858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


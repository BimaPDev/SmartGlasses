/* FUN_2c4778e8 @ 0x2c4778e8 */

void FUN_2c4778e8(void)

{
  int iVar1;
  
  if (*DAT_2c477924 != '\x04') {
    FUN_2c4835c4(0);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1aa,DAT_2c4778c4,DAT_2c4778c0,DAT_2c4778b8,DAT_2c4778bc);
  }
  iVar1 = FUN_2c482fc8();
  if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_2c46db38();
                    /* WARNING: Could not recover jumptable at 0x2c48414e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x20))(0,2);
  return;
}


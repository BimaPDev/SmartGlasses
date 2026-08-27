/* FUN_2c4874b0 @ 0x2c4874b0 */

void FUN_2c4874b0(void)

{
  int iVar1;
  
  if (*DAT_2c48759c == '0') {
    if (*DAT_2c4875a0 != '0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x162,DAT_2c4875b8,DAT_2c4875b4,DAT_2c4875c4,DAT_2c4875a4);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x15e,DAT_2c4875b8,DAT_2c4875b4,DAT_2c4875cc);
  }
  if (*DAT_2c4875a0 != '0') {
    if (*DAT_2c4875ac < 0) {
      iVar1 = 0x1000;
    }
    else {
      iVar1 = *DAT_2c4875ac * 0x5000 + 0x1000;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x16d,DAT_2c4875b8,DAT_2c4875b4,DAT_2c4875b0,DAT_2c4875a4,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x166,DAT_2c4875b8,DAT_2c4875b4,DAT_2c4875c8,DAT_2c4875a4);
}


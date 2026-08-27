/* FUN_2c4dd908 @ 0x2c4dd908 */

void FUN_2c4dd908(void)

{
  int iVar1;
  
  iVar1 = *DAT_2c4dd94c;
  FUN_2c4dd7f0();
  if (*DAT_2c4dd94c != iVar1) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


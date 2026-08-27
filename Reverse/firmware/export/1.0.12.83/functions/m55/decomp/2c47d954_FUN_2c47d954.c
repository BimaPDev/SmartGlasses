/* FUN_2c47d954 @ 0x2c47d954 */

void FUN_2c47d954(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_2c47dbd0;
  iVar1 = FUN_2c473f34();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x42,DAT_2c47dbe0,DAT_2c47dbdc,DAT_2c47dbd8,DAT_2c47dbd4,*(undefined4 *)(iVar1 + 0xc));
  }
  FUN_2c6741e8(0x711,DAT_2c47e1f4,DAT_2c47e1f0);
  if (*DAT_2c47dbd0 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


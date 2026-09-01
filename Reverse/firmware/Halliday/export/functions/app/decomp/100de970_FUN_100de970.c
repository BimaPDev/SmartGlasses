/* FUN_100de970 @ 0x100de970 */

int FUN_100de970(void)

{
  int iVar1;
  
  iVar1 = FUN_100e1f7c(DAT_100de998);
  if (iVar1 < 0) {
    FUN_100a5b78(DAT_100de9a4 | (DAT_100de9a0 - DAT_100de99c) * 0x20 & 0xff00U,DAT_100de9a8,iVar1);
  }
  return iVar1;
}


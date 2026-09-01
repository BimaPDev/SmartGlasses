/* FUN_100e49a0 @ 0x100e49a0 */

int FUN_100e49a0(void)

{
  int iVar1;
  
  iVar1 = FUN_100e1f7c(DAT_100e49c8);
  if (iVar1 < 0) {
    FUN_100a5b78(DAT_100e49d4 | (DAT_100e49d0 - DAT_100e49cc) * 0x20 & 0xff00U,DAT_100e49d8,iVar1);
  }
  return iVar1;
}


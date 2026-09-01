/* FUN_100de9ac @ 0x100de9ac */

int FUN_100de9ac(void)

{
  int iVar1;
  
  iVar1 = FUN_100e1fe8(DAT_100de9d4);
  if (iVar1 < 0) {
    FUN_100a5b78(DAT_100de9e0 | (DAT_100de9dc - DAT_100de9d8) * 0x20 & 0xff00U,DAT_100de9e4,iVar1);
  }
  return iVar1;
}


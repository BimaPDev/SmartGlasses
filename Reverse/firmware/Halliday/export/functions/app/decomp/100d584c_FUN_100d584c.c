/* FUN_100d584c @ 0x100d584c */

int FUN_100d584c(void)

{
  int iVar1;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d5880 | (DAT_100d587c - DAT_100d5878) * 0x20 & 0xff00U,DAT_100d5888,
                 DAT_100d5884);
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x18;
  }
  return iVar1;
}


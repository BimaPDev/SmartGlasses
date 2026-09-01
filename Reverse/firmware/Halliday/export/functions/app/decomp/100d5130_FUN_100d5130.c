/* FUN_100d5130 @ 0x100d5130 */

int FUN_100d5130(void)

{
  int iVar1;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d5164 | (DAT_100d5160 - DAT_100d515c) * 0x20 & 0xff00U,DAT_100d516c,
                 DAT_100d5168);
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x9c;
  }
  return iVar1;
}


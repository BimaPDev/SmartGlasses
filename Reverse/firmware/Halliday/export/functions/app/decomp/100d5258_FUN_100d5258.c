/* FUN_100d5258 @ 0x100d5258 */

byte FUN_100d5258(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_100d456c();
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100d5290 | (DAT_100d528c - DAT_100d5288) * 0x20 & 0xff00U,DAT_100d5298,
                 DAT_100d5294);
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x3b) >> 7;
  }
  return bVar1;
}


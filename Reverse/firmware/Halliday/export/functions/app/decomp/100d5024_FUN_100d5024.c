/* FUN_100d5024 @ 0x100d5024 */

uint FUN_100d5024(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_100d456c();
  iVar4 = (int)((ulonglong)uVar6 >> 0x20);
  iVar2 = (int)uVar6;
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100d50a4 | (DAT_100d50a0 - DAT_100d509c) * 0x20 & 0xff00U,DAT_100d50ac,
                 DAT_100d50a8);
    uVar3 = 0xffffffed;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x39);
    if (iVar4 == 0) {
      if ((bVar1 & 4) != 0) {
        *(byte *)(iVar2 + 0x39) = bVar1 & 0xfb;
        return 0;
      }
    }
    else if ((bVar1 & 4) == 0) {
      *(byte *)(iVar2 + 0x39) = bVar1 | 4;
      return bVar1 & 4;
    }
    uVar5 = DAT_100d50b8;
    if (iVar4 != 0) {
      uVar5 = DAT_100d50b0;
    }
    FUN_100a5b78(DAT_100d50b4 | (DAT_100d50a0 - DAT_100d509c) * 0x20 & 0xff00U,DAT_100d50ac,
                 DAT_100d50bc,uVar5);
    uVar3 = 0xffffff88;
  }
  return uVar3;
}


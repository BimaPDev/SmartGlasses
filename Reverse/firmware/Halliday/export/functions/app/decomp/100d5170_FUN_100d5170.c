/* FUN_100d5170 @ 0x100d5170 */

uint FUN_100d5170(void)

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
    FUN_100a5b78(DAT_100d51f0 | (DAT_100d51ec - DAT_100d51e8) * 0x20 & 0xff00U,DAT_100d51f8,
                 DAT_100d51f4);
    uVar3 = 0xffffffed;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x39);
    if (iVar4 == 0) {
      if ((bVar1 & 8) != 0) {
        *(byte *)(iVar2 + 0x39) = bVar1 & 0xf7;
        return 0;
      }
    }
    else if ((bVar1 & 8) == 0) {
      *(byte *)(iVar2 + 0x39) = bVar1 | 8;
      return bVar1 & 8;
    }
    uVar5 = DAT_100d5204;
    if (iVar4 != 0) {
      uVar5 = DAT_100d51fc;
    }
    FUN_100a5b78(DAT_100d5200 | (DAT_100d51ec - DAT_100d51e8) * 0x20 & 0xff00U,DAT_100d51f8,
                 DAT_100d5208,uVar5);
    uVar3 = 0xffffff88;
  }
  return uVar3;
}


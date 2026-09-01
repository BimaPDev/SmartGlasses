/* FUN_100d4ae8 @ 0x100d4ae8 */

uint FUN_100d4ae8(void)

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
    FUN_100a5b78(DAT_100d4b68 | (DAT_100d4b64 - DAT_100d4b60) * 0x20 & 0xff00U,DAT_100d4b70,
                 DAT_100d4b6c);
    uVar3 = 0xffffffed;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x39);
    if (iVar4 == 0) {
      if ((bVar1 & 1) != 0) {
        *(byte *)(iVar2 + 0x39) = bVar1 & 0xfe;
        return 0;
      }
    }
    else if ((bVar1 & 1) == 0) {
      *(byte *)(iVar2 + 0x39) = bVar1 | 1;
      return bVar1 & 1;
    }
    uVar5 = DAT_100d4b7c;
    if (iVar4 != 0) {
      uVar5 = DAT_100d4b74;
    }
    FUN_100a5b78(DAT_100d4b78 | (DAT_100d4b64 - DAT_100d4b60) * 0x20 & 0xff00U,DAT_100d4b70,
                 DAT_100d4b80,uVar5);
    uVar3 = 0xffffff88;
  }
  return uVar3;
}


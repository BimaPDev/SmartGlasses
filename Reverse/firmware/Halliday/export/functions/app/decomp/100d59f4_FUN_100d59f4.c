/* FUN_100d59f4 @ 0x100d59f4 */

undefined4 FUN_100d59f4(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_100d456c();
  iVar2 = (int)uVar5;
  if (iVar2 == 0) {
    uVar4 = (DAT_100d5a70 - DAT_100d5a6c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d5a74 | uVar4,DAT_100d5a7c,DAT_100d5a78,uVar4,in_r3);
    uVar3 = 0xffffffed;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x3a);
    if ((int)((ulonglong)uVar5 >> 0x20) == 0) {
      if ((bVar1 & 0x1c) == 0) {
        FUN_100a5b78((DAT_100d5a70 - DAT_100d5a6c) * 0x20 & 0xff00U | 0x6180021,DAT_100d5a7c,
                     DAT_100d5a80,DAT_100d5a6c,in_r3);
        uVar3 = 0xffffff88;
      }
      else {
        *(byte *)(iVar2 + 0x3a) = bVar1 & 0xe3 | (byte)((((bVar1 & 0x1f) >> 2) + 7 & 7) << 2);
        uVar3 = 0;
      }
    }
    else {
      *(byte *)(iVar2 + 0x3a) = bVar1 & 0xe3 | (byte)((((bVar1 & 0x1f) >> 2) + 1 & 7) << 2);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* FUN_100d5974 @ 0x100d5974 */

undefined4 FUN_100d5974(void)

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
    uVar4 = (DAT_100d59dc - DAT_100d59d8) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d59e0 | uVar4,DAT_100d59e8,DAT_100d59e4,uVar4,in_r3);
    uVar3 = 0xffffffed;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x39);
    if ((int)((ulonglong)uVar5 >> 0x20) == 0) {
      if ((bVar1 & 0xe0) == 0) {
        uVar4 = (DAT_100d59dc - DAT_100d59d8) * 0x20 & 0xff00;
        FUN_100a5b78(DAT_100d59ec | uVar4,DAT_100d59e8,DAT_100d59f0,uVar4,in_r3);
        uVar3 = 0xffffff88;
      }
      else {
        *(byte *)(iVar2 + 0x39) = bVar1 - 0x20;
        uVar3 = 0;
      }
    }
    else {
      *(byte *)(iVar2 + 0x39) = bVar1 + 0x20;
      uVar3 = 0;
    }
  }
  return uVar3;
}


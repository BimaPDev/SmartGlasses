/* FUN_100d5a84 @ 0x100d5a84 */

undefined4 FUN_100d5a84(void)

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
    uVar4 = (DAT_100d5aec - DAT_100d5ae8) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d5af0 | uVar4,DAT_100d5af8,DAT_100d5af4,uVar4,in_r3);
    uVar3 = 0xffffffed;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 0x3a);
    if ((int)((ulonglong)uVar5 >> 0x20) == 0) {
      if ((bVar1 & 0xe0) == 0) {
        uVar4 = (DAT_100d5aec - DAT_100d5ae8) * 0x20 & 0xff00;
        FUN_100a5b78(DAT_100d5afc | uVar4,DAT_100d5af8,DAT_100d5b00,uVar4,in_r3);
        uVar3 = 0xffffff88;
      }
      else {
        *(byte *)(iVar2 + 0x3a) = bVar1 - 0x20;
        uVar3 = 0;
      }
    }
    else {
      *(byte *)(iVar2 + 0x3a) = bVar1 + 0x20;
      uVar3 = 0;
    }
  }
  return uVar3;
}


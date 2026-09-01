/* FUN_100d4b84 @ 0x100d4b84 */

undefined4 FUN_100d4b84(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_100d456c();
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
    uVar3 = (DAT_100d4bcc - DAT_100d4bc8) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d4bd0 | uVar3,DAT_100d4bd8,DAT_100d4bd4,uVar3,in_r3);
    uVar2 = 0xffffffed;
  }
  else if ((int)((ulonglong)uVar4 >> 0x20) == 0) {
    *(byte *)(iVar1 + 0x45) = *(byte *)(iVar1 + 0x45) & 0xfe;
    uVar2 = 0;
  }
  else {
    *(byte *)(iVar1 + 0x45) = *(byte *)(iVar1 + 0x45) | 1;
    uVar2 = 0;
  }
  return uVar2;
}


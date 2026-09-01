/* FUN_1007d09c @ 0x1007d09c */

void FUN_1007d09c(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  
  iVar3 = DAT_1007d0d4;
  if ((int)((uint)*(byte *)(DAT_1007d0d4 + 0x13c) << 0x1d) < 0) {
    uVar4 = FUN_1007c61c();
    bVar1 = *(byte *)(iVar3 + 0x1b3);
    uVar6 = bVar1 + 1;
    uVar5 = (undefined1)uVar6;
    if (9 < (uVar6 & 0xff)) {
      uVar5 = 0;
    }
    *(undefined1 *)(iVar3 + 0x1b3) = uVar5;
    bVar2 = *(byte *)(iVar3 + 0x1b2);
    *(undefined1 *)(iVar3 + (uint)bVar1 + 0x1a8) = uVar4;
    if (bVar2 < 10) {
      *(byte *)(iVar3 + 0x1b2) = bVar2 + 1;
    }
  }
  return;
}


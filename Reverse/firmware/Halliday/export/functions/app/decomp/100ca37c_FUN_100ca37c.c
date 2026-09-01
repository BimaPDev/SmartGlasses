/* FUN_100ca37c @ 0x100ca37c */

undefined4 FUN_100ca37c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100ca324();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = DAT_100ca3cc;
    if (*(byte *)(iVar1 + 0xd) < 9) {
      uVar2 = *(undefined4 *)(DAT_100ca3c8 + (uint)*(byte *)(iVar1 + 0xd) * 4);
    }
    FUN_100a5b78(DAT_100ca3c0 | (DAT_100ca3bc - DAT_100ca3b8) * 0x20 & 0xff00U,DAT_100ca3c4,
                 DAT_100ca3d0,uVar2);
    FUN_100ca13c(iVar1);
    uVar2 = 1;
  }
  return uVar2;
}


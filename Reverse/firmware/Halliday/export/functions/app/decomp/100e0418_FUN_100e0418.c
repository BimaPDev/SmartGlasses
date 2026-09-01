/* FUN_100e0418 @ 0x100e0418 */

void FUN_100e0418(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  
  FUN_100e022c(0xffffffff,0xffffffff);
  iVar2 = FUN_100dffcc(param_1);
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100e04b0 | (DAT_100e04a8 - DAT_100e04ac) * 0x20 & 0xff00U,DAT_100e04b4);
  }
  else {
    FUN_1013cb84(iVar2 + 0x70);
    uVar1 = DAT_100e04b8;
    *(undefined1 *)(iVar2 + 0x5d) = 2;
    iVar3 = FUN_10137c44(uVar1);
    puVar4 = (undefined1 *)FUN_100c1fe4(iVar3 + 8,7);
    *puVar4 = 0x80;
    puVar4[3] = 0x10;
    puVar4[4] = 0;
    uVar6 = *(ushort *)(DAT_100e04bc + 4) - 10;
    *(ushort *)(puVar4 + 5) = (ushort)((uVar6 & 0xff) << 8) | (ushort)(uVar6 >> 8) & 0xff;
    iVar5 = FUN_10137e54(iVar3,6,*(undefined4 *)(iVar2 + 0x58),*(undefined1 *)(iVar2 + 0x5c));
    *(ushort *)(puVar4 + 1) = (ushort)((iVar5 + 7U & 0xff) << 8) | (ushort)(iVar5 + 7U >> 8) & 0xff;
    FUN_100e0080(iVar2,iVar3,3);
  }
  FUN_100e0220();
  return;
}


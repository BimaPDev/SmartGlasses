/* FUN_100d520c @ 0x100d520c */

undefined4 FUN_100d520c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_100d456c();
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
    uVar3 = (DAT_100d5248 - DAT_100d5244) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d524c | uVar3,DAT_100d5254,DAT_100d5250,uVar3,in_r3);
    uVar2 = 0xffffffed;
  }
  else {
    *(byte *)(iVar1 + 0x3b) =
         *(byte *)(iVar1 + 0x3b) & 0x7f | (byte)(((uint)((ulonglong)uVar4 >> 0x20) & 1) << 7);
    uVar2 = 0;
  }
  return uVar2;
}


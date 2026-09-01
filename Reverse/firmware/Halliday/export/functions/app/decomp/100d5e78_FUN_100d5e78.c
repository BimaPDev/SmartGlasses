/* FUN_100d5e78 @ 0x100d5e78 */

undefined4 FUN_100d5e78(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_100d456c();
  if ((int)uVar3 == 0) {
    uVar2 = (DAT_100d5eb0 - DAT_100d5eac) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d5eb4 | uVar2,DAT_100d5ebc,DAT_100d5eb8,uVar2,in_r3);
    uVar1 = 0xffffffed;
  }
  else {
    uVar1 = 0;
    *(byte *)((ulonglong)uVar3 >> 0x20) =
         (byte)(((uint)*(byte *)((int)uVar3 + 0x38) << 0x1c) >> 0x1f);
  }
  return uVar1;
}


/* FUN_100d5e28 @ 0x100d5e28 */

undefined4 FUN_100d5e28(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_100d456c();
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
    uVar3 = (DAT_100d5e68 - DAT_100d5e64) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d5e6c | uVar3,DAT_100d5e74,DAT_100d5e70,uVar3,in_r3);
    uVar2 = 0xffffffed;
  }
  else {
    *(byte *)(iVar1 + 0x38) =
         *(byte *)(iVar1 + 0x38) & 0xf7 | ((int)((ulonglong)uVar4 >> 0x20) != 0) << 3;
    uVar2 = 0;
  }
  return uVar2;
}


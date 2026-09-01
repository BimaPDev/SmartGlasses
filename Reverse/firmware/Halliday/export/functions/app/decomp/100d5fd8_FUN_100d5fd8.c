/* FUN_100d5fd8 @ 0x100d5fd8 */

void FUN_100d5fd8(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined8 uVar2;
  
  uVar2 = FUN_100d456c();
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100d6014 | (DAT_100d6010 - DAT_100d600c) * 0x20 & 0xff00U,DAT_100d601c,
                 DAT_100d6018,in_r3);
    return;
  }
  *(byte *)(iVar1 + 0x38) =
       *(byte *)(iVar1 + 0x38) & 0xfd | (byte)(((uint)((ulonglong)uVar2 >> 0x20) & 1) << 1);
  return;
}


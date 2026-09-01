/* FUN_100d4f90 @ 0x100d4f90 */

undefined4 FUN_100d4f90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_100d456c();
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
    uVar3 = (DAT_100d4fd0 - DAT_100d4fcc) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d4fd4 | uVar3,DAT_100d4fdc,DAT_100d4fd8,uVar3,in_r3);
    uVar2 = 0xffffffed;
  }
  else {
    *(byte *)(iVar1 + 0x3b) =
         *(byte *)(iVar1 + 0x3b) & 0xf7 | ((int)((ulonglong)uVar4 >> 0x20) != 0) << 3;
    uVar2 = 0;
  }
  return uVar2;
}


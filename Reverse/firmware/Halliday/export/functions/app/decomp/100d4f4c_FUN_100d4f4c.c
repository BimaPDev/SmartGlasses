/* FUN_100d4f4c @ 0x100d4f4c */

undefined4 FUN_100d4f4c(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_100d456c();
  if ((int)uVar3 == 0) {
    uVar2 = (DAT_100d4f80 - DAT_100d4f7c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d4f84 | uVar2,DAT_100d4f8c,DAT_100d4f88,uVar2,in_r3);
    uVar1 = 0xffffffed;
  }
  else {
    uVar1 = 0;
    *(undefined4 *)((ulonglong)uVar3 >> 0x20) = *(undefined4 *)((int)uVar3 + 0x4c);
  }
  return uVar1;
}


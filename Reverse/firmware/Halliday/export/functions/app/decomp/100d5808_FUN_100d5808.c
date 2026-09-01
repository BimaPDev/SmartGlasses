/* FUN_100d5808 @ 0x100d5808 */

undefined4 FUN_100d5808(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_100d456c();
  if ((int)uVar3 == 0) {
    uVar2 = (DAT_100d583c - DAT_100d5838) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d5840 | uVar2,DAT_100d5848,DAT_100d5844,uVar2,in_r3);
    uVar1 = 0xffffffed;
  }
  else {
    uVar1 = 0;
    *(undefined4 *)((ulonglong)uVar3 >> 0x20) = *(undefined4 *)((int)uVar3 + 0x34);
  }
  return uVar1;
}


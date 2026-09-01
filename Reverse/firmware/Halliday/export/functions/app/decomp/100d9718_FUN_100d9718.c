/* FUN_100d9718 @ 0x100d9718 */

undefined4 FUN_100d9718(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (DAT_100d9754 - DAT_100d9750) * 0x20 & 0xff00;
  if (param_1 == 0) {
    FUN_100a5b78(DAT_100d9758 | uVar2,DAT_100d9760,DAT_100d975c);
    uVar1 = 0xffffffea;
  }
  else {
    FUN_10131f3a();
    FUN_100a5b78(DAT_100d9764 | uVar2,DAT_100d9760,DAT_100d9768);
    uVar1 = 0;
  }
  return uVar1;
}


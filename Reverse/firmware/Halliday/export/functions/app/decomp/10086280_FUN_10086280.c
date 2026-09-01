/* FUN_10086280 @ 0x10086280 */

undefined1 FUN_10086280(uint param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 < 5) {
    uVar2 = FUN_1011b4be(*(undefined4 *)(DAT_100862a4 + param_1 * 4));
    if (uVar2 < 0x17) {
      uVar1 = *(undefined1 *)(DAT_100862a8 + uVar2);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


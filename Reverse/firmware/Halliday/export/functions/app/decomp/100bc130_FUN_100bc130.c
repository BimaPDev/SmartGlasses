/* FUN_100bc130 @ 0x100bc130 */

undefined1 FUN_100bc130(int param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 1) {
    uVar1 = *(undefined1 *)(DAT_100bc168 + 2);
  }
  else if (param_1 == 3) {
    uVar1 = *(undefined1 *)(DAT_100bc168 + 5);
  }
  else {
    uVar1 = 0x30;
  }
  FUN_100a5b78((DAT_100bc170 - DAT_100bc16c) * 0x20 & 0xff00U | 0x1140031,DAT_100bc178,DAT_100bc174,
               uVar1);
  return uVar1;
}


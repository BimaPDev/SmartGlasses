/* FUN_100a61b0 @ 0x100a61b0 */

undefined4 FUN_100a61b0(void)

{
  undefined4 uVar1;
  
  if (-1 < (int)((uint)*(byte *)(DAT_100a61cc + 2) << 0x1d)) {
    if ((*(byte *)(DAT_100a61cc + 2) & 8) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xfffffffb;
    }
    return uVar1;
  }
  FUN_100a623c();
  uVar1 = thunk_FUN_1012dd88();
  return uVar1;
}


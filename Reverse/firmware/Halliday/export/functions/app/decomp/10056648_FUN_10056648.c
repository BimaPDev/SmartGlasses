/* FUN_10056648 @ 0x10056648 */

void FUN_10056648(int param_1)

{
  uint uVar1;
  
  if (param_1 - 0x226U < 0x2ef) {
    uVar1 = (param_1 - 0x226U) / 0x32;
    *DAT_10056674 = *DAT_10056674 & 0xffffff00 | uVar1 | uVar1 << 4;
    thunk_FUN_1011598c(0x21);
    return;
  }
  return;
}


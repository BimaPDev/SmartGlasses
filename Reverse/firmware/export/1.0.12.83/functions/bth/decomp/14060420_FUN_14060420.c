/* FUN_14060420 @ 0x14060420 */

uint FUN_14060420(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = 1;
    if ((int)((uint)*(byte *)(DAT_14060448 + 0x5e) << 0x1d) < 0) {
      uVar1 = 3;
    }
    return uVar1;
  }
  uVar1 = *(byte *)(DAT_14060448 + 0x5e) & 1;
  if ((int)((uint)*(byte *)(DAT_14060448 + 0x5e) << 0x1d) < 0) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}


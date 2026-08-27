/* FUN_2c62b1c8 @ 0x2c62b1c8 */

undefined1 FUN_2c62b1c8(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0xffff) {
    return 0x1f;
  }
  if (param_1 != 0) {
    if (param_1 < 0x70) {
      return *(undefined1 *)(DAT_2c62b204 + param_1);
    }
    if ((*DAT_2c62b1fc != 0) && (uVar1 = param_1 - 0x70 & 0xffff, uVar1 < *DAT_2c62b200)) {
      return *(undefined1 *)(*DAT_2c62b1fc + uVar1);
    }
  }
  return 0;
}


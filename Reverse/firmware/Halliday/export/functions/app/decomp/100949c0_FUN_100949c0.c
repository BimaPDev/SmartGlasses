/* FUN_100949c0 @ 0x100949c0 */

undefined1 FUN_100949c0(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0xffff) {
    return 0x1f;
  }
  if (param_1 != 0) {
    if (param_1 < 0x71) {
      return *(undefined1 *)(DAT_100949f4 + param_1);
    }
    if ((*DAT_100949f8 != 0) && (uVar1 = param_1 - 0x71 & 0xffff, uVar1 < *DAT_100949fc)) {
      return *(undefined1 *)(*DAT_100949f8 + uVar1);
    }
  }
  return 0;
}


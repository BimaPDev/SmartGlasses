/* FUN_140289c4 @ 0x140289c4 */

undefined4 FUN_140289c4(uint param_1)

{
  if (param_1 >> 4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14028a08);
  }
  if ((param_1 & 8) == 0) {
    if ((1 << (param_1 & 0xf) & *DAT_14028a00 & 0xff) == 0) {
      return 1;
    }
    FUN_14028194(param_1 & 0xf);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_14028a04);
}


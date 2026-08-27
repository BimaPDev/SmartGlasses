/* FUN_14053dc8 @ 0x14053dc8 */

undefined4 FUN_14053dc8(uint param_1)

{
  if ((param_1 < 4) && (*(byte *)(DAT_14053de4 + param_1) != 0xff)) {
    return *(undefined4 *)(DAT_14053de8 + (uint)*(byte *)(DAT_14053de4 + param_1) * 0x14);
  }
  return 0;
}


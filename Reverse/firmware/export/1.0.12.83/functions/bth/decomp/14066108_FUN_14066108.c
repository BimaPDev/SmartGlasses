/* FUN_14066108 @ 0x14066108 */

int FUN_14066108(uint param_1)

{
  if ((param_1 < 0xb) && (*(char *)(DAT_1406612c + param_1 * 0xc + 9) != -1)) {
    return DAT_1406612c + param_1 * 0xc;
  }
  return 0;
}


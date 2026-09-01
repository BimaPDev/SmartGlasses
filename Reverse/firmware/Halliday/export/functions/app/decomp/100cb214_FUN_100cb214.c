/* FUN_100cb214 @ 0x100cb214 */

bool FUN_100cb214(int param_1)

{
  if ((*(char *)(param_1 + 0xd) == '\a') && (*DAT_100cb240 != 0)) {
    return (*(byte *)(DAT_100cb244 + 1) & 0x3f) >> 3 < *(uint *)(DAT_100cb248 + 0x10c);
  }
  return false;
}


/* FUN_1008c0c0 @ 0x1008c0c0 */

bool FUN_1008c0c0(uint param_1)

{
  if (param_1 < 0x1d) {
    return (DAT_1008c0dc & 1 << (param_1 & 0xff)) != 0;
  }
  return false;
}


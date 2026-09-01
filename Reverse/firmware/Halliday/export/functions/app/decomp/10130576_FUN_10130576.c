/* FUN_10130576 @ 0x10130576 */

byte FUN_10130576(int param_1)

{
  if (param_1 != 0) {
    return *(byte *)(param_1 + 99) & 1;
  }
  return 1;
}


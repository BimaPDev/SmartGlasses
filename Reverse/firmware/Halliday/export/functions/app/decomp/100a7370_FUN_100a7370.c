/* FUN_100a7370 @ 0x100a7370 */

byte FUN_100a7370(void)

{
  if (*DAT_100a7384 != 0) {
    return *(byte *)(*DAT_100a7384 + 1) & 1;
  }
  return 1;
}


/* FUN_100a7388 @ 0x100a7388 */

uint FUN_100a7388(void)

{
  if (*DAT_100a739c != 0) {
    return (*(byte *)(*DAT_100a739c + 1) & 3) >> 1;
  }
  return 1;
}


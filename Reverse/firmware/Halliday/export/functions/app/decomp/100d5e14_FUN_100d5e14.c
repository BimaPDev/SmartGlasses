/* FUN_100d5e14 @ 0x100d5e14 */

byte FUN_100d5e14(void)

{
  byte bVar1;
  
  bVar1 = 0;
  if (*DAT_100d5e24 != 0) {
    bVar1 = *(byte *)(*DAT_100d5e24 + 8) & 7;
  }
  return bVar1;
}


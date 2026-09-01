/* FUN_100bdaa4 @ 0x100bdaa4 */

byte * FUN_100bdaa4(uint param_1)

{
  int iVar1;
  
  if (*DAT_100bdac4 == param_1) {
    iVar1 = 0;
  }
  else {
    if (DAT_100bdac4[8] != param_1) {
      return (byte *)0x0;
    }
    iVar1 = 1;
  }
  return DAT_100bdac4 + iVar1 * 8;
}


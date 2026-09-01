/* FUN_100bdaec @ 0x100bdaec */

byte * FUN_100bdaec(uint param_1)

{
  int iVar1;
  
  if (*DAT_100bdb0c == param_1) {
    iVar1 = 0;
  }
  else {
    if (DAT_100bdb0c[8] != param_1) {
      return (byte *)0x0;
    }
    iVar1 = 1;
  }
  return DAT_100bdb0c + iVar1 * 8;
}


/* FUN_2c007a78 @ 0x2c007a78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c007a78(uint param_1)

{
  byte bVar1;
  
  bVar1 = (byte)(1 << (param_1 & 0xff));
  if (*DAT_2c007ac8 == 0) {
    *DAT_2c007ac8 = bVar1;
    _DAT_5000013c = _DAT_5000013c & 0xfffffff4 | 2;
    FUN_2c00796c(0,5);
    _DAT_50000110 = _DAT_50000110 & 0xfffffff | 0x50000000;
    _DAT_50000100 = 0x900;
    _DAT_50000104 = 0x1000;
    return;
  }
  *DAT_2c007ac8 = bVar1 | *DAT_2c007ac8;
  return;
}


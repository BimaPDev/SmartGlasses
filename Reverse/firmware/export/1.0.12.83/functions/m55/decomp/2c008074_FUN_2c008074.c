/* FUN_2c008074 @ 0x2c008074 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c008074(int param_1)

{
  FUN_2c00b820(4,0x381,DAT_2c0080d4,DAT_2c0080d8,DAT_2c0080d0,param_1);
  _DAT_5000013c = _DAT_5000013c & 0xfffffff4 | 2;
  FUN_2c00796c(0,5);
  _DAT_50000110 = _DAT_50000110 & 0xfffffff | param_1 << 0x1c;
  _DAT_50000100 = 0x900;
  _DAT_50000104 = 0x1000;
  return;
}


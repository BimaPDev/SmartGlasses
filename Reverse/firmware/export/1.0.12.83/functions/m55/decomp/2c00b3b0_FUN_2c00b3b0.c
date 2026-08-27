/* FUN_2c00b3b0 @ 0x2c00b3b0 */

int FUN_2c00b3b0(uint param_1)

{
  int iVar1;
  
  if (((param_1 & 1) != 0) &&
     (((DAT_2c00b414 + param_1 <= DAT_2c00b418 ||
       (DAT_2c00b41c + param_1 <= DAT_2c00b418 + 0x1a2c000)) ||
      (DAT_2c00b420 + param_1 <= DAT_2c00b424)))) {
    param_1 = param_1 & 0xfffffffe;
    if ((*(ushort *)(param_1 - 2) & 0xff80) == 0x4780) {
      return param_1 - 2;
    }
    if ((*(ushort *)(param_1 - 2) & 0xd000) == 0xd000) {
      iVar1 = param_1 - 4;
      if ((*(ushort *)(param_1 - 4) & 0xf800) != 0xf000) {
        iVar1 = 0;
      }
      return iVar1;
    }
  }
  return 0;
}


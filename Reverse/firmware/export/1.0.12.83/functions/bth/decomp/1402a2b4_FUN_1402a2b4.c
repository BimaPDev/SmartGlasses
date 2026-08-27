/* FUN_1402a2b4 @ 0x1402a2b4 */

int FUN_1402a2b4(uint param_1)

{
  int iVar1;
  
  if (((param_1 & 1) != 0) &&
     ((param_1 - 0x500011 <= DAT_1402a30c || (param_1 + 0xebffffef <= DAT_1402a310)))) {
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


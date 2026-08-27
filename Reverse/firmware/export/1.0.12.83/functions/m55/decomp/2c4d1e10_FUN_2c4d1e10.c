/* FUN_2c4d1e10 @ 0x2c4d1e10 */

int FUN_2c4d1e10(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = (*(ushort *)(param_1 + 0xc) - 7) * 8;
    if (*(char *)(param_1 + 2) == '\0') {
      iVar1 = iVar1 + -0x10;
    }
    if ((param_2 == 0) && (0 < iVar1)) {
      iVar1 = iVar1 - (uint)*(byte *)(param_1 + 0x11);
    }
    return iVar1;
  }
  if ((*(char *)(param_1 + 2) == '\0') && (param_2 < 4)) {
    iVar1 = (uint)*(ushort *)(param_1 + param_2 * 2 + 0x5e) * 8 + -0x10;
    if ((param_2 == 0) && (0 < iVar1)) {
      iVar1 = iVar1 - (uint)*(byte *)(param_1 + 0x11);
    }
    return iVar1;
  }
  return -1;
}


/* FUN_1011fac4 @ 0x1011fac4 */

int FUN_1011fac4(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0xc000) {
    iVar1 = param_1 + 0x17f98000;
  }
  else if (param_1 + 0xc0000000 < 0x3c000) {
    iVar1 = param_1 + 0xd7ff0000;
  }
  else if (param_1 + 0xbff00000 < 0x4000) {
    iVar1 = param_1 + 0xd7e8c000;
  }
  else {
    if (0x3bfff < (param_1 & 0x4003ffff) - 0x35000) {
      return -1;
    }
    iVar1 = (param_1 & 0x4003ffff) + 0x17ff0000;
  }
  return iVar1 << 1;
}


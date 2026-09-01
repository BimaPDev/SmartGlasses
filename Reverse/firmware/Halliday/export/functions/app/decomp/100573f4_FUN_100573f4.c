/* FUN_100573f4 @ 0x100573f4 */

int FUN_100573f4(uint param_1)

{
  int iVar1;
  
  if (param_1 == *(byte *)(DAT_10057418 + 4)) {
    iVar1 = 0;
  }
  else {
    if (param_1 != *(byte *)(DAT_10057418 + 0x1c)) {
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1 * 0x18 + DAT_10057418 + 4;
}


/* FUN_100a9298 @ 0x100a9298 */

int FUN_100a9298(uint param_1)

{
  int iVar1;
  
  if (param_1 - 0xe < 2) {
    param_1 = 6;
  }
  else if (param_1 - 0x15 < 2) {
    param_1 = 6;
  }
  iVar1 = 0;
  do {
    if (*(byte *)(iVar1 * 0x124 + DAT_100a92d0) == param_1) {
      return DAT_100a92d0 + iVar1 * 0x124;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 5);
  return 0;
}


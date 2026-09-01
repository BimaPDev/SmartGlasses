/* FUN_100dd5f4 @ 0x100dd5f4 */

int FUN_100dd5f4(uint param_1)

{
  int iVar1;
  
  if (*(byte *)(DAT_100dd618 + 4) == param_1) {
    iVar1 = 0;
  }
  else {
    if (*(byte *)(DAT_100dd618 + 0x20) != param_1) {
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1 * 0x1c + DAT_100dd618;
}


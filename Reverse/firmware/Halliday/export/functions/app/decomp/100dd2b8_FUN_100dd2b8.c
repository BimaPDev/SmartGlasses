/* FUN_100dd2b8 @ 0x100dd2b8 */

int FUN_100dd2b8(uint param_1)

{
  int iVar1;
  
  if (*(byte *)(DAT_100dd2d8 + 4) == param_1) {
    iVar1 = 0;
  }
  else {
    if (*(byte *)(DAT_100dd2d8 + 0x18) != param_1) {
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1 * 0x14 + DAT_100dd2d8;
}


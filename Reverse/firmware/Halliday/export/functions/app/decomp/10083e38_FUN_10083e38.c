/* FUN_10083e38 @ 0x10083e38 */

int FUN_10083e38(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(DAT_10083e60 + 0x1a) <= iVar1) {
      return -1;
    }
    if (*(byte *)(*(int *)(DAT_10083e60 + 0x20) + iVar1 * 0xe) == param_1) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


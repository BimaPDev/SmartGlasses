/* FUN_10063330 @ 0x10063330 */

undefined1 FUN_10063330(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(byte *)(DAT_10063350 + iVar1 * 2 + 1) == param_1) {
      return *(undefined1 *)(DAT_10063350 + iVar1 * 2);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x27);
  return 0;
}


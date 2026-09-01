/* FUN_100e6b90 @ 0x100e6b90 */

int FUN_100e6b90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 0x70;
    if (*(char *)(iVar2 + DAT_100e6bc0) == '\0') {
      iVar1 = DAT_100e6bc0 + iVar2;
      *(byte *)(DAT_100e6bc0 + iVar2) = (byte)iVar3 | 0x80;
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) & 0xef;
      return iVar1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return 0;
}


/* FUN_1409edf8 @ 0x1409edf8 */

int FUN_1409edf8(void)

{
  int iVar1;
  
  iVar1 = *DAT_1409ee14;
  if (iVar1 != 0) {
    if (*DAT_1409ee18 == '\x01') {
      return iVar1 + 0x10c;
    }
    iVar1 = iVar1 + 0x238;
  }
  return iVar1;
}


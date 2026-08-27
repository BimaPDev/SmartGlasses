/* FUN_1409ee1c @ 0x1409ee1c */

int FUN_1409ee1c(void)

{
  int iVar1;
  
  iVar1 = *DAT_1409ee38;
  if (iVar1 != 0) {
    if (*DAT_1409ee3c == '\x01') {
      return iVar1 + 0x11c;
    }
    iVar1 = iVar1 + 0x248;
  }
  return iVar1;
}


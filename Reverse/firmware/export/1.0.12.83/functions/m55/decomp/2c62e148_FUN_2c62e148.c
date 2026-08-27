/* FUN_2c62e148 @ 0x2c62e148 */

int FUN_2c62e148(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_2c66c4ec();
  if (iVar2 != 0) {
    pcVar3 = (char *)(iVar2 + 1 + param_1);
    do {
      pcVar3 = pcVar3 + -1;
      cVar1 = *pcVar3;
      if (cVar1 == '.') {
        return param_1 + iVar2 + 1;
      }
    } while (((cVar1 != '/') && (cVar1 != '\\')) && (iVar2 = iVar2 + -1, iVar2 != 0));
  }
  return DAT_2c62e178;
}


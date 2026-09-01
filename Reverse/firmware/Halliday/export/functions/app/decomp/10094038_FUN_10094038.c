/* FUN_10094038 @ 0x10094038 */

int FUN_10094038(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1011ea10();
  while( true ) {
    if (iVar2 == 0) {
      return DAT_10094060;
    }
    cVar1 = *(char *)(param_1 + iVar2);
    if (cVar1 == '.') {
      return iVar2 + 1 + param_1;
    }
    if (cVar1 == '/') {
      return DAT_10094060;
    }
    if (cVar1 == '\\') break;
    iVar2 = iVar2 + -1;
  }
  return DAT_10094060;
}


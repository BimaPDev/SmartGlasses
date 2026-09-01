/* FUN_10025e18 @ 0x10025e18 */

void FUN_10025e18(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = DAT_10025e68;
  iVar3 = *DAT_10025e6c;
  cVar4 = '\0';
  if (*DAT_10025e68 != 0) {
    iVar5 = 0;
    cVar4 = '\0';
    do {
      iVar6 = *piVar1;
      iVar2 = FUN_10025db8(iVar6 + iVar5);
      if (iVar2 == 0) break;
      if (*(char *)(iVar6 + iVar5 + 0x17b) == '\0') {
        cVar4 = cVar4 + '\x01';
      }
      iVar5 = iVar5 + 0x19e;
    } while (iVar5 != 0x102c);
  }
  if (*DAT_10025e6c != iVar3) {
    FUN_1013cdc0(cVar4);
  }
  return;
}


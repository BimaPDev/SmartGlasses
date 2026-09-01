/* FUN_10042c20 @ 0x10042c20 */

void FUN_10042c20(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *DAT_10042cc8;
  uVar3 = (DAT_10042ccc - DAT_10042cd0) * 0x20 & 0xff00;
  FUN_100a5b78(uVar3 | 0x730031,DAT_10042cd8,DAT_10042cd4);
  if ((param_1 == 0) && (*DAT_10042cdc == -1)) {
    if (*DAT_10042cc8 == iVar2) goto LAB_10042c64;
  }
  else {
    if (*DAT_10042ce4 != '\0') {
      *DAT_10042ce4 = '\0';
      cVar1 = FUN_10057648(1);
      if (cVar1 != '\0') {
        FUN_1011aabe(1);
        if (*DAT_10042cc8 == iVar2) {
          FUN_100a5b78(uVar3 | 0x7e0031,DAT_10042cd8,DAT_10042ce8,cVar1);
          return;
        }
        goto LAB_10042c60;
      }
    }
    if (*DAT_10042cc8 == iVar2) {
      return;
    }
  }
LAB_10042c60:
  FUN_1013cdc0();
LAB_10042c64:
  FUN_100a5b78(uVar3 | 0x760031,DAT_10042cd8,DAT_10042ce0);
  return;
}


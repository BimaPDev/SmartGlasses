/* FUN_10014f10 @ 0x10014f10 */

void FUN_10014f10(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_10014f5c;
  iVar1 = FUN_10013660();
  if (iVar1 == 0) {
    if (*DAT_10014f5c == iVar2) {
      return;
    }
  }
  else {
    FUN_10084080(0x3c,DAT_10014f60);
    FUN_100146a4(iVar1);
    if (*DAT_10014f5c == iVar2) goto LAB_10014f40;
  }
  FUN_1013cdc0();
LAB_10014f40:
  FUN_100840a8(0x3c,DAT_10014f60);
  return;
}


/* FUN_100e0cd8 @ 0x100e0cd8 */

void FUN_100e0cd8(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_100e0b10();
  if (iVar2 != 0) {
    FUN_100e1298(DAT_100e0d10,0,iVar2 + 2,iVar2 + 0x1a);
    piVar1 = DAT_100e0d18;
    if (*DAT_100e0d14 != iVar2) {
      iVar3 = *DAT_100e0d18;
      *DAT_100e0d14 = iVar2;
      *(int *)(iVar2 + 0x5c) = iVar3 + 1;
      *piVar1 = iVar3 + 1;
      FUN_100e0bb4(iVar2);
      return;
    }
  }
  return;
}


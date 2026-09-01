/* FUN_1003ebd4 @ 0x1003ebd4 */

void FUN_1003ebd4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_1003ec00;
  iVar1 = FUN_100bf62c();
  if (*DAT_1003ec00 != iVar2) {
    FUN_1013cdc0(iVar1 != 0);
  }
  return;
}


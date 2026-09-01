/* FUN_101149a0 @ 0x101149a0 */

void FUN_101149a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_101149c4;
  if (*DAT_101149c4 != 0) {
    iVar2 = FUN_10061900();
    iVar3 = *piVar1;
    *(int *)(DAT_101149c8 + 0x10) = iVar2 + iVar3;
    FUN_1013ce18(iVar3,0);
    return;
  }
  return;
}


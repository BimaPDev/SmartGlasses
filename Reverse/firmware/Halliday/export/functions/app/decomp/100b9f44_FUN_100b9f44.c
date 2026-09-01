/* FUN_100b9f44 @ 0x100b9f44 */

int FUN_100b9f44(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_100b9f74;
  iVar4 = *DAT_100b9f74;
  if (iVar4 == 0) {
    iVar4 = 10;
    do {
      iVar2 = *piVar1;
      iVar3 = FUN_10061948();
      iVar4 = iVar4 + -1;
      *piVar1 = iVar3 + iVar2 * 0x83;
    } while (iVar4 != 0);
  }
  else {
    iVar2 = FUN_10061948();
    *piVar1 = iVar4 * 0x83 + iVar2;
  }
  return *piVar1;
}


/* FUN_14034918 @ 0x14034918 */

void FUN_14034918(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_1403494c;
  iVar3 = *DAT_1403494c;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
  }
  iVar2 = DAT_14034950;
  *piVar1 = iVar3 + 1;
  *(undefined4 *)(iVar2 + 0xc00) = 0;
  FUN_140e5398(0xa0);
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}


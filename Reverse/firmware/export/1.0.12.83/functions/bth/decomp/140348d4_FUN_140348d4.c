/* FUN_140348d4 @ 0x140348d4 */

void FUN_140348d4(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_14034910;
  iVar3 = *DAT_14034910;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
  }
  iVar2 = DAT_14034914;
  *piVar1 = iVar3 + 1;
  *(uint *)(iVar2 + 0xc00) = param_1 & 0x7f | 0xa0000;
  FUN_140e5398(0xa0);
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}


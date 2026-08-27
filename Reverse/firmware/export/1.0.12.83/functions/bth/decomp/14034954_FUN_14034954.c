/* FUN_14034954 @ 0x14034954 */

uint FUN_14034954(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_1403499c;
  piVar1 = DAT_14034998;
  iVar4 = *DAT_14034998;
  if (iVar4 == 0) {
    FUN_1402e55c();
    iVar2 = DAT_1403499c;
    iVar4 = *piVar1;
    *piVar1 = iVar4 + 1;
    uVar3 = *(uint *)(iVar2 + 0xe04);
    *piVar1 = iVar4;
    uVar3 = uVar3 & 0xfffffff;
    if (iVar4 == 0) {
      FUN_1402e5f8();
      return uVar3;
    }
  }
  else {
    *DAT_14034998 = iVar4 + 1;
    uVar3 = *(uint *)(iVar2 + 0xe04);
    *piVar1 = iVar4;
    uVar3 = uVar3 & 0xfffffff;
  }
  return uVar3;
}


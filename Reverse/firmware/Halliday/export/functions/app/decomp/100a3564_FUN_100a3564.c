/* FUN_100a3564 @ 0x100a3564 */

int FUN_100a3564(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  iVar2 = *DAT_100a3594;
  do {
    if ((*(byte *)(iVar2 + 4) == param_1) && ((*(byte *)(*DAT_100a3594 + iVar3 * 0x58) & 1) != 0)) {
      iVar1 = iVar2;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x58;
  } while (iVar3 != 4);
  return iVar1;
}


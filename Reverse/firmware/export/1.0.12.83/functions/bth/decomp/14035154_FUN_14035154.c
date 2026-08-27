/* FUN_14035154 @ 0x14035154 */

void FUN_14035154(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_140351e4;
  iVar3 = *DAT_140351e4;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
  }
  iVar2 = DAT_140351e8;
  *piVar1 = iVar3 + 1;
  *(uint *)(iVar2 + 0x614) = *(uint *)(iVar2 + 0x614) | 0x5555;
  *(uint *)(iVar2 + 0x634) = *(uint *)(iVar2 + 0x634) | 0x5555;
  *(uint *)(iVar2 + 0x614) = *(uint *)(iVar2 + 0x614) & 0xff7fffff;
  *(uint *)(iVar2 + 0x634) = *(uint *)(iVar2 + 0x634) & 0xff7fffff;
  *(uint *)(iVar2 + 0x670) = *(uint *)(iVar2 + 0x670) & 0xffffff7f;
  *(uint *)(iVar2 + 0x674) = *(uint *)(iVar2 + 0x674) & 0xffffff7f;
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}


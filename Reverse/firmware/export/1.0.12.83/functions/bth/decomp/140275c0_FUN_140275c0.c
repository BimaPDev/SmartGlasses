/* FUN_140275c0 @ 0x140275c0 */

void FUN_140275c0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  FUN_14027578();
  pcVar3 = DAT_14027600;
  iVar2 = DAT_140275fc;
  *(uint *)(DAT_140275fc + 4) = (uint)*(ushort *)(param_1 + 8);
  *(uint *)(iVar2 + 0x10) = (uint)*(byte *)(param_1 + 10);
  *(uint *)(iVar2 + 0x24) = (uint)*(byte *)(param_1 + 0xb);
  cVar1 = *(char *)(param_1 + 0x10);
  if ((*pcVar3 != cVar1) && (*pcVar3 = cVar1, cVar1 != '\x03')) {
    FUN_1402e0a4(cVar1 == '\x02');
    return;
  }
  return;
}


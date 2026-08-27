/* FUN_140351fc @ 0x140351fc */

void FUN_140351fc(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = DAT_14035254;
  iVar3 = *DAT_14035254;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
  }
  puVar2 = DAT_14035258;
  *piVar1 = iVar3 + 1;
  iVar3 = FUN_14038c00(*puVar2,0x1e,DAT_1403525c);
  if (iVar3 != 0) {
    FUN_1402a6e8(4,0xdb4,DAT_14035268,DAT_1403526c,DAT_14035264,DAT_14035260,0xdb4,iVar3);
  }
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}


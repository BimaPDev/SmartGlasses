/* FUN_14035358 @ 0x14035358 */

void FUN_14035358(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = DAT_140353b0;
  iVar3 = *DAT_140353b0;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
  }
  puVar2 = DAT_140353b4;
  *piVar1 = iVar3 + 1;
  iVar3 = FUN_14038c00(*puVar2,8,DAT_140353b8);
  if (iVar3 != 0) {
    FUN_1402a6e8(4,0xde4,DAT_140353c4,DAT_140353c8,DAT_140353c0,DAT_140353bc,0xde4,iVar3);
  }
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}


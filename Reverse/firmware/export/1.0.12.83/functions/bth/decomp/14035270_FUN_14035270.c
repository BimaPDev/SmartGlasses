/* FUN_14035270 @ 0x14035270 */

void FUN_14035270(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = DAT_140352c8;
  iVar3 = *DAT_140352c8;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
  }
  puVar2 = DAT_140352cc;
  *piVar1 = iVar3 + 1;
  iVar3 = FUN_14038c00(*puVar2,0x1e,DAT_140352d0);
  if (iVar3 != 0) {
    FUN_1402a6e8(4,0xdc4,DAT_140352dc,DAT_140352e0,DAT_140352d8,DAT_140352d4,0xdc4,iVar3);
  }
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}


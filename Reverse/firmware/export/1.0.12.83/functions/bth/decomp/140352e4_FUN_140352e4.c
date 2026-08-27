/* FUN_140352e4 @ 0x140352e4 */

void FUN_140352e4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = DAT_1403533c;
  iVar3 = *DAT_1403533c;
  if (iVar3 == 0) {
    FUN_1402e55c();
    iVar3 = *piVar1;
  }
  puVar2 = DAT_14035340;
  *piVar1 = iVar3 + 1;
  iVar3 = FUN_14038c00(*puVar2,0x1e,DAT_14035344);
  if (iVar3 != 0) {
    FUN_1402a6e8(4,0xdd4,DAT_14035350,DAT_14035354,DAT_1403534c,DAT_14035348,0xdd4,iVar3);
  }
  iVar3 = *piVar1;
  *piVar1 = iVar3 + -1;
  if (iVar3 + -1 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}


/* FUN_140357e8 @ 0x140357e8 */

void FUN_140357e8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_14034664();
  FUN_1403443c(1);
  if (*DAT_14035828 != 0) {
    FUN_140332f0(DAT_1403582c);
  }
  FUN_140351fc();
  FUN_14035270();
  FUN_140352e4();
  FUN_14035358();
  FUN_140345d0();
  FUN_14034300();
  FUN_140356d8();
  piVar1 = DAT_140350c8;
  iVar4 = *DAT_140350c8;
  if (iVar4 == 0) {
    FUN_1402e55c();
    iVar4 = *piVar1;
  }
  iVar2 = DAT_140350cc;
  *piVar1 = iVar4 + 1;
  uVar3 = DAT_140350d0;
  *(uint *)(iVar2 + 0xc7c) = *(uint *)(iVar2 + 0xc7c) & 0xffff9fff | 0x2000;
  FUN_1402a6e8(4,0xd67,DAT_140350d8,DAT_140350d4,uVar3,1);
  iVar4 = *piVar1;
  *piVar1 = iVar4 + -1;
  if (iVar4 + -1 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}


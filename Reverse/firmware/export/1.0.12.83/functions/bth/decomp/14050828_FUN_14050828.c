/* FUN_14050828 @ 0x14050828 */

void FUN_14050828(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_14050860;
  if (*DAT_14050860 != 0) {
    FUN_140e57a8();
    *piVar1 = 0;
  }
  iVar2 = DAT_14050864;
  FUN_140e5468(*(undefined4 *)(DAT_14050864 + 8));
  FUN_140e57a8(*(undefined4 *)(iVar2 + 4));
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  FUN_140e5468(*(undefined4 *)(iVar2 + 0x1c));
  FUN_140e57a8(*(undefined4 *)(iVar2 + 0x18));
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  return;
}


/* FUN_1003fcb0 @ 0x1003fcb0 */

void FUN_1003fcb0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_1003fd0c;
  iVar1 = (**(code **)(PTR_DAT_1003fd10 + 4))();
  if ((iVar1 == 0) && (iVar1 = FUN_100bed9c(), iVar1 != 1)) {
    FUN_100bed9c();
    if (*(int *)PTR_DAT_1003fd0c == iVar2) goto LAB_1003fce0;
  }
  else if (*(int *)PTR_DAT_1003fd0c == iVar2) {
    return;
  }
  FUN_1013cdc0();
LAB_1003fce0:
  FUN_100a5b78(DAT_1003fd1c | ((int)PTR_DAT_1003fd18 - (int)PTR_DAT_1003fd14) * 0x20 & 0xff00U,
               DAT_1003fd24,DAT_1003fd20);
  return;
}


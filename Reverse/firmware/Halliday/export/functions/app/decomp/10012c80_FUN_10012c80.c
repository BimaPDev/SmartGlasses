/* FUN_10012c80 @ 0x10012c80 */

void FUN_10012c80(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *DAT_10012cc4;
  iVar2 = *DAT_10012cc8;
  if (iVar2 == 0) {
LAB_10012cb2:
    if (*DAT_10012cc4 == iVar1) {
      return;
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0x4c) = param_1;
    if (*(int *)(iVar2 + 0x28) == 0) goto LAB_10012cb2;
    if (*DAT_10012cc4 == iVar1) goto LAB_10012ca8;
  }
  FUN_1013cdc0();
LAB_10012ca8:
  FUN_1012b33a();
  return;
}


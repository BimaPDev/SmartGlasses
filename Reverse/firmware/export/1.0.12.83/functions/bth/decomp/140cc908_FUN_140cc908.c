/* FUN_140cc908 @ 0x140cc908 */

void FUN_140cc908(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_140c03c0(DAT_140cc938);
  if ((*(uint *)(*param_1 + 8) <= uVar1) ||
     (iVar2 = *(int *)(*(int *)(*param_1 + 4) + uVar1 * 4), iVar2 == 0)) {
    iVar2 = FUN_140cb7fa();
  }
  iVar2 = FUN_140d7e50(iVar2,DAT_140cc940,DAT_140cc93c,0);
  if (iVar2 == 0) {
    FUN_140d7f02();
  }
  return;
}


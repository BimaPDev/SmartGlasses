/* FUN_140a5904 @ 0x140a5904 */

void FUN_140a5904(uint param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_1402a6e8(4,0x11a,DAT_140a5958,DAT_140a5954,DAT_140a5950,param_1);
  piVar1 = DAT_140a595c;
  if (param_1 < 2000) {
    return;
  }
  iVar2 = *DAT_140a595c;
  *DAT_140a5960 = param_2;
  if (iVar2 == 0) {
    iVar2 = FUN_140e52f8(DAT_140a5964,0);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_140e5378(iVar2,param_1);
  return;
}


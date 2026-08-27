/* FUN_1409e610 @ 0x1409e610 */

bool FUN_1409e610(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_1409e7c0(*DAT_1409e640);
  bVar1 = false;
  if (iVar2 != 0) {
    if ((*(int *)(iVar2 + 8) != param_1) || (*(byte *)(iVar2 + 6) != param_2)) {
      return false;
    }
    bVar1 = *(byte *)(iVar2 + 0x10) == param_3;
  }
  return bVar1;
}


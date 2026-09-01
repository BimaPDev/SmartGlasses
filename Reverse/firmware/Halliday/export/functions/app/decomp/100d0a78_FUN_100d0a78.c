/* FUN_100d0a78 @ 0x100d0a78 */

bool FUN_100d0a78(uint param_1)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 == 3) {
    iVar2 = FUN_100d0724();
    if (iVar2 != 3) {
      return true;
    }
    if (*DAT_100d0ad0 == 0) {
      return false;
    }
    return *(int *)(*DAT_100d0ad0 + 0xc) != 0;
  }
  if (param_1 < 4) {
    if (param_1 - 1 < 2) {
      return true;
    }
    return false;
  }
  if (param_1 != 4) {
    return false;
  }
  iVar2 = FUN_100d0724();
  if (iVar2 == 3) {
    bVar1 = 0;
    if ((*DAT_100d0ad0 == 0) || (bVar1 = 0, *(int *)(*DAT_100d0ad0 + 0xc) == 0)) goto LAB_100d0ac8;
  }
  bVar1 = *DAT_100d0ad4;
LAB_100d0ac8:
  return (bool)(bVar1 & 1);
}


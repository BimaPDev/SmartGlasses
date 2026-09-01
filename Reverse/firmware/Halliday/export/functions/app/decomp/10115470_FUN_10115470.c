/* FUN_10115470 @ 0x10115470 */

bool FUN_10115470(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if (uVar2 != 0) {
    return false;
  }
  return *(ushort *)(*(int *)(DAT_1011548c + 8) + 0xe) < 0x80;
}


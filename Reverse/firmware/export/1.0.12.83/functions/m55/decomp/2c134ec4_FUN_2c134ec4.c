/* FUN_2c134ec4 @ 0x2c134ec4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c134ec4(void)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_2c135988(4,0x887,_DAT_2c134ef8,_DAT_2c134ef4,_DAT_2c134ef0,_DAT_2c134eec);
  iVar6 = _DAT_2c134efc;
  uVar3 = func_0x2c1447f0();
  iVar5 = 0;
  do {
    if (((0x52 < *(byte *)(iVar6 + iVar5 * 4)) || (0x7c < *(byte *)(iVar6 + 1 + iVar5 * 4))) ||
       (iVar4 = func_0x2c134b4c(), iVar4 != 0)) {
      iVar6 = iVar5 * 0x100 + 1;
      goto LAB_2c134e56;
    }
    bVar1 = *(byte *)(iVar6 + iVar5 * 4);
    if (0x52 < bVar1) {
      iVar6 = iVar5 * 0x100 + 2;
      goto LAB_2c134e56;
    }
    if ((bVar1 < 0x50) &&
       (iVar4 = func_0x2c134ca0(bVar1,*(undefined1 *)(iVar6 + 3 + iVar5 * 4)), iVar4 != 0)) {
      iVar6 = iVar5 * 0x100 + 3;
      goto LAB_2c134e56;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 2);
  iVar6 = 0;
LAB_2c134e56:
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 & 0x7fffffff;
    *_DAT_2c134e9c = 0;
    func_0x2c1448fc();
  }
  if (uVar3 == 0) {
    *_DAT_2c134e98 = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar3);
  }
  return iVar6;
}


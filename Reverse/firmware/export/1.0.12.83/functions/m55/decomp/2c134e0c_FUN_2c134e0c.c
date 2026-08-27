/* FUN_2c134e0c @ 0x2c134e0c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c134e0c(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = func_0x2c1447f0();
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      if (((0x52 < *(byte *)(param_1 + iVar5 * 4)) || (0x7c < *(byte *)(param_1 + 1 + iVar5 * 4)))
         || (iVar4 = func_0x2c134b4c(), iVar4 != 0)) {
        iVar5 = iVar5 * 0x100 + 1;
        goto LAB_2c134e56;
      }
      bVar1 = *(byte *)(param_1 + iVar5 * 4);
      if (0x52 < bVar1) {
        iVar5 = iVar5 * 0x100 + 2;
        goto LAB_2c134e56;
      }
      if ((bVar1 < 0x50) &&
         (iVar4 = func_0x2c134ca0(bVar1,*(undefined1 *)(param_1 + 3 + iVar5 * 4)), iVar4 != 0)) {
        iVar5 = iVar5 * 0x100 + 3;
        goto LAB_2c134e56;
      }
      iVar5 = iVar5 + 1;
    } while (param_2 != iVar5);
  }
  iVar5 = 0;
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
  return iVar5;
}


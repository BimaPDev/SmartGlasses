/* FUN_2c646890 @ 0x2c646890 */

undefined4 FUN_2c646890(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c6468d0;
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  if (uVar4 == 0) {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = getBasePriority();
    }
    if (iVar5 != 0x40) {
      *DAT_2c6468d0 = 0x2c6468a4;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    uVar3 = 0;
    if (*(int *)(DAT_2c6468d4 + 0x14) != 0) {
      uVar3 = *(undefined4 *)(*(int *)(DAT_2c6468d4 + 0x14) + 0x54);
    }
    if (iVar5 == 0) {
      *DAT_2c6468d0 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar5);
    }
    return uVar3;
  }
  return 0;
}


/* FUN_2c4be7f8 @ 0x2c4be7f8 */

undefined4 FUN_2c4be7f8(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c4be83c;
  if (param_1 < 0x20) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      *DAT_2c4be83c = 0x2c4be80a;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *DAT_2c4be840 = *DAT_2c4be840 & ~(1 << (param_1 & 0xff));
    if (iVar3 == 0) {
      *DAT_2c4be83c = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
    return 0;
  }
  return 1;
}


/* FUN_2c002454 @ 0x2c002454 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c002454(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c0024ac;
  uVar3 = 0;
  if (param_1 != 0) {
    if (param_1 == 2) {
      uVar3 = 0x1000;
    }
    else {
      if (param_1 != 1) {
        return 1;
      }
      uVar3 = 0x3000;
    }
  }
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_2c0024ac = 0x2c002470;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  _DAT_50000070 = uVar3 | _DAT_50000070 & 0xffffcfff;
  if (iVar4 == 0) {
    *DAT_2c0024ac = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return 0;
}


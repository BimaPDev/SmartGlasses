/* FUN_10055b98 @ 0x10055b98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10055b98(uint param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((int)param_1 < 0x40) {
    uVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar3 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    if ((int)param_1 < 0x20) {
      _DAT_40000000 = 1 << (param_1 & 0xff) | _DAT_40000000;
    }
    else {
      *DAT_10055bdc = 1 << (param_1 - 0x20 & 0xff) | *DAT_10055bdc;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


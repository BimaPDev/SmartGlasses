/* FUN_10055be0 @ 0x10055be0 */

void FUN_10055be0(uint param_1)

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
      *DAT_10055c24 = 1 << (param_1 & 0xff) | *DAT_10055c24;
    }
    else {
      *DAT_10055c28 = 1 << (param_1 - 0x20 & 0xff) | *DAT_10055c28;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


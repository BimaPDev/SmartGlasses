/* FUN_10055b54 @ 0x10055b54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10055b54(uint param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((int)param_1 < 0x40) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    if ((int)param_1 < 0x20) {
      uVar3 = _DAT_40000000;
      puVar2 = (uint *)&DAT_40000000;
    }
    else {
      uVar3 = *DAT_10055b94;
      param_1 = param_1 - 0x20;
      puVar2 = DAT_10055b94;
    }
    *puVar2 = uVar3 & ~(1 << (param_1 & 0xff));
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


/* FUN_1011a6dc @ 0x1011a6dc */

undefined4 FUN_1011a6dc(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 < 0x60) {
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
    *(uint *)((int)(FUN_1001a000 + param_1) * 4) =
         param_2 | *(uint *)((int)(FUN_1001a000 + param_1) * 4) & 0xffff80c0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffea;
  }
  return uVar3;
}


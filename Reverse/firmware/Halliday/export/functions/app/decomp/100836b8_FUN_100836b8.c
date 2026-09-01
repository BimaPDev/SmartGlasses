/* FUN_100836b8 @ 0x100836b8 */

undefined4 FUN_100836b8(uint param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  if (param_1 < 0x60) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    puVar3 = (uint *)((int)(FUN_1001a000 + param_1) * 4);
    if (param_3 == 0) {
      param_2 = *puVar3 & DAT_100836fc;
    }
    else {
      param_2 = param_2 | *puVar3 & DAT_100836fc;
    }
    *puVar3 = param_2;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffea;
  }
  return uVar4;
}


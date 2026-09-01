/* FUN_1013344a @ 0x1013344a */

undefined8 FUN_1013344a(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((uint *)*param_1 == (uint *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    for (uVar4 = *(uint *)*param_1;
        (uint *)(uVar4 & 0xfffffffc) != (uint *)(*(uint *)param_1[1] & 3);
        uVar4 = *(uint *)(uVar4 & 0xfffffffc)) {
      iVar2 = iVar2 + 1;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return CONCAT44(uVar3,iVar2);
}


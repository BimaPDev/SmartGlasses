/* FUN_101159bc @ 0x101159bc */

void FUN_101159bc(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  
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
  if (*(int *)(param_1 + 0x2c) + (uint)(0xfffffffe < *(uint *)(param_1 + 0x28)) != 0 ||
      1 < *(uint *)(param_1 + 0x28) + 1) {
    FUN_10115740(param_1,DAT_10115a34);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(param_1);
  }
  piVar3 = *(int **)(param_1 + 0x18);
  if ((piVar3 != (int *)(param_1 + 0x18)) && (piVar3 != (int *)0x0)) {
    FUN_1013cbe8(piVar3);
    piVar3[0x33] = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_1013cc6c(piVar3);
    return;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


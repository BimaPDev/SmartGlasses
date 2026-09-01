/* FUN_1011b96c @ 0x1011b96c */

void FUN_1011b96c(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
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
  if (param_1[9] != 0) {
    if (((uint)param_1[5] <= (uint)param_1[8]) &&
       ((uint)param_1[8] <= (uint)(param_1[5] + param_1[4]))) {
      FUN_1011b89e(param_1 + 1);
    }
    param_1[9] = 0;
  }
  FUN_1011efd2(*param_1);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


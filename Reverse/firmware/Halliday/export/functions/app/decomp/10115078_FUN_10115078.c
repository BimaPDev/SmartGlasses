/* FUN_10115078 @ 0x10115078 */

void FUN_10115078(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  FUN_1013cdcc(param_1 + 0x18);
  uVar2 = DAT_101150d8;
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(param_1 + 0xd) < '\0') {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x7f;
    FUN_10114ac0(uVar2,param_1);
  }
  iVar4 = DAT_101150dc;
  iVar3 = *(int *)(DAT_101150dc + 8);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 0x10;
  FUN_10114b50(iVar3 == param_1);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(int *)(iVar4 + 8) != param_1) {
    return;
  }
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (iVar4 == 0) {
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getCurrentExceptionNumber();
      uVar5 = uVar5 & 0x1ff;
    }
    if (uVar5 == 0) {
      FUN_1013cbc2();
      return;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


/* FUN_10113528 @ 0x10113528 */

void FUN_10113528(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
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
  iVar4 = *(int *)(DAT_10113560 + 0x2c);
  if (iVar4 == param_1) {
    *(undefined4 *)(DAT_10113560 + 0x2c) = *(undefined4 *)(iVar4 + 0x74);
  }
  else {
    do {
      iVar5 = iVar4;
      if (iVar5 == 0) goto LAB_10113544;
      iVar4 = *(int *)(iVar5 + 0x74);
    } while (*(int *)(iVar5 + 0x74) != param_1);
    *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(param_1 + 0x74);
  }
LAB_10113544:
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


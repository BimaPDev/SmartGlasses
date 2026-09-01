/* FUN_1009eaf4 @ 0x1009eaf4 */

void FUN_1009eaf4(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
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
  puVar3 = (undefined4 *)*DAT_1009eb28;
  if (puVar3 != (undefined4 *)0x0) {
    for (puVar5 = (undefined4 *)*puVar3; (puVar3[2] != param_1 && (puVar5 != (undefined4 *)0x0));
        puVar5 = (undefined4 *)*puVar5) {
      puVar3 = puVar5;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


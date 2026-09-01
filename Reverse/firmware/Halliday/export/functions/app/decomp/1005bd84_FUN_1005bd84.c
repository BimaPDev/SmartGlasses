/* FUN_1005bd84 @ 0x1005bd84 */

void FUN_1005bd84(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  
  puVar4 = DAT_1005bdc4;
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  for (piVar5 = (int *)*DAT_1005bdc0; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    puVar3 = piVar5 + 1;
    if (param_1 == 0) {
      puVar3 = piVar5 + 2;
    }
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(*puVar4);
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


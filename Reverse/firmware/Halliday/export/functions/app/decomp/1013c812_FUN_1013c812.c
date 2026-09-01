/* FUN_1013c812 @ 0x1013c812 */

int FUN_1013c812(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
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
  piVar5 = (int *)*param_1;
  if (param_1 == piVar5) {
    iVar3 = 0;
  }
  else if (piVar5 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      if (*(int *)(piVar5[5] + 0x20) == param_2) {
        iVar3 = iVar3 + 1;
      }
    } while ((piVar5 != (int *)param_1[1]) && (piVar5 = (int *)*piVar5, piVar5 != (int *)0x0));
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return iVar3;
}


/* FUN_1000257c @ 0x1000257c */

void FUN_1000257c(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
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
  *(undefined4 *)(param_2 + 0x9c) = 0;
  param_2 = param_2 + 0x9c;
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_2;
  }
  else {
    **(int **)(param_1 + 0x2c) = param_2;
    *(int *)(param_1 + 0x2c) = param_2;
  }
  iVar3 = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x1c) = iVar3;
  if (iVar3 == 1) {
    FUN_10002490(param_1,0);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


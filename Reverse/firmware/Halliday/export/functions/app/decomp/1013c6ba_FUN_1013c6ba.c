/* FUN_1013c6ba @ 0x1013c6ba */

void FUN_1013c6ba(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((*(int *)(param_1 + 0x18) == 0) && (iVar3 = FUN_1013cd00(), iVar3 != 0)) {
    uVar4 = *param_2;
    *(undefined4 *)(iVar3 + 0xcc) = 0;
    *(undefined4 *)(iVar3 + 0x14) = uVar4;
    FUN_1013cc6c();
    FUN_10114a14(param_1 + 8,uVar5);
    return;
  }
  *(undefined4 *)*param_2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


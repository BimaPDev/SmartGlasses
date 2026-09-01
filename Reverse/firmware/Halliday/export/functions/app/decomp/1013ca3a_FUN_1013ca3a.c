/* FUN_1013ca3a @ 0x1013ca3a */

undefined4 FUN_1013ca3a(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
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
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
    uVar4 = 0xfffffff4;
  }
  else {
    iVar3 = FUN_1013cd00();
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x14) = param_2;
      *(undefined4 *)(iVar3 + 0xcc) = 0;
      FUN_1013cc6c();
      FUN_10114a14(param_1 + 8,uVar6);
      return 0;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x10);
    *puVar5 = param_2;
    *(undefined4 **)(param_1 + 0x10) = puVar5 + 1;
    uVar4 = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar4;
}


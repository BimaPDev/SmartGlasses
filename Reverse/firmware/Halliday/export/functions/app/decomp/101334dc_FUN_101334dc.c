/* FUN_101334dc @ 0x101334dc */

void FUN_101334dc(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  while( true ) {
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
    puVar3 = *(undefined4 **)(param_1 + 0x20);
    if (puVar3 == (undefined4 *)0x0) break;
    uVar4 = *puVar3;
    if (puVar3 == *(undefined4 **)(param_1 + 0x24)) {
      *(undefined4 *)(param_1 + 0x24) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    InstructionSynchronizationBarrier(0xf);
    pcVar6 = (code *)puVar3[1];
    uVar5 = puVar3[2];
    FUN_100c9c00();
    (*pcVar6)(param_1,uVar5);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


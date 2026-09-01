/* FUN_10133baa @ 0x10133baa */

void FUN_10133baa(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  do {
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
    if (*(int *)(param_1 + 0x1c) == 0) {
      puVar3 = *(undefined4 **)(param_1 + 0x14);
      if (puVar3 != (undefined4 *)0x0) {
        uVar5 = *puVar3;
        *(undefined4 *)(param_1 + 0x14) = uVar5;
        if (puVar3 == *(undefined4 **)(param_1 + 0x18)) {
          *(undefined4 *)(param_1 + 0x18) = uVar5;
        }
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
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
      *(undefined4 *)(param_1 + 0x1c) = puVar3[3];
      puVar3[3] = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_100c9c00();
    }
    else {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
    }
    FUN_100c9c68(param_1);
    FUN_10113fd0();
    FUN_100ca9b4(param_1);
  } while( true );
}


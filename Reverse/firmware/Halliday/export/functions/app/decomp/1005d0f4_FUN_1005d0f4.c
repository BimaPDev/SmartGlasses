/* FUN_1005d0f4 @ 0x1005d0f4 */

void FUN_1005d0f4(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar3 = DAT_1005d138;
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
  do {
    do {
      iVar4 = FUN_1006cfc8(*puVar3);
    } while (iVar4 == 0);
    FUN_1011b96c(puVar3);
    if (puVar3[7] != 0) {
      FUN_1011ba00(puVar3);
    }
    iVar4 = FUN_1011b9ae(puVar3);
  } while (iVar4 != 0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


/* FUN_100555cc @ 0x100555cc */

void FUN_100555cc(void)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  puVar2 = DAT_10055614;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar4 = *DAT_10055614;
  iVar3 = FUN_1011a86a();
  if (iVar3 == 0) {
    uVar4 = uVar4 & 0xffffe000 | 0x114;
  }
  else {
    uVar4 = uVar4 & 0xffffe000 | 0x110;
  }
  *puVar2 = uVar4 | 1;
  thunk_FUN_1011598c(500);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


/* FUN_1011517c @ 0x1011517c */

/* WARNING: Removing unreachable block (ram,0x101149fe) */
/* WARNING: Removing unreachable block (ram,0x10114a02) */
/* WARNING: Removing unreachable block (ram,0x10114a04) */

void FUN_1011517c(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_10115190;
  iVar4 = DAT_10115190 + 0x20;
  *(int *)(DAT_10115190 + 0x20) = iVar4;
  *(int *)(iVar3 + 0x24) = iVar4;
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
  *(undefined4 *)(DAT_10114a08 + 0x10) = 0;
  *DAT_10114a0c = 0;
  *DAT_10114a10 = 0;
  FUN_101149a0();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


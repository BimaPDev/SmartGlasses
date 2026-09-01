/* FUN_1013cd82 @ 0x1013cd82 */

bool FUN_1013cd82(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  undefined8 uVar5;
  
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
  uVar5 = FUN_1013cc60();
  iVar3 = (int)uVar5;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0xcc) = (int)((ulonglong)uVar5 >> 0x20);
    *(undefined4 *)(iVar3 + 0x14) = extraout_r2;
    FUN_10114b08();
    FUN_1013cdcc(iVar3 + 0x18);
    FUN_10114cf4(iVar3);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return iVar3 != 0;
}


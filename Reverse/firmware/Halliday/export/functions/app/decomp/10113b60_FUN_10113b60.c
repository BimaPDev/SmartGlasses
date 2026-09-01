/* FUN_10113b60 @ 0x10113b60 */

void FUN_10113b60(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar4 = *(int *)(iVar3 + 0x14);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 4);
    bVar1 = *(byte *)(iVar3 + 0xd);
    if ((bVar1 & 1) == 0) {
      *(uint *)(iVar3 + 0xcc) = bVar1 & 1;
      *(byte *)(iVar3 + 0xd) = bVar1 & 0xfd;
      FUN_1013cc6c(iVar3);
      iVar3 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        iVar3 = getBasePriority();
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if ((bVar2) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      if (iVar3 == 0) {
        uVar5 = 0;
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          uVar5 = getCurrentExceptionNumber();
          uVar5 = uVar5 & 0x1ff;
        }
        if (uVar5 == 0) {
          FUN_1013cbc2();
          return;
        }
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(iVar3);
      }
      InstructionSynchronizationBarrier(0xf);
      return;
    }
    iVar3 = *(int *)(iVar4 + 0x28);
    FUN_1013ca3a(DAT_10113bbc);
    if (iVar3 != 0) {
      FUN_10113fd0(iVar3);
      return;
    }
  }
  return;
}


/* FUN_10115194 @ 0x10115194 */

void FUN_10115194(undefined4 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_r2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (0x1e < param_2 + 0x10U) {
    FUN_10119dc2(DAT_10115208,DAT_10115204,DAT_10115200,0x46a,param_1,param_2);
    FUN_10119dc2(DAT_1011520c,param_2,0xe,0xfffffff0);
    uVar4 = FUN_1011a1f0(DAT_10115200,0x46a,param_3,param_2 + 0x10U);
    param_3 = extraout_r2;
  }
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  if (uVar3 != 0) {
    FUN_10119dc2(DAT_10115208,DAT_10115210,DAT_10115200,0x46b,uVar4);
    FUN_10119dc2(DAT_10115214);
    FUN_1011a1f0(DAT_10115200,0x46b,param_3,uVar3);
  }
  iVar2 = FUN_10114f90(param_1,param_2);
  if ((iVar2 == 0) || (*(char *)(*(int *)(DAT_10115074 + 8) + 0xf) != '\0')) {
    return;
  }
  iVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar2 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (iVar2 == 0) {
    uVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar3 = getCurrentExceptionNumber();
      uVar3 = uVar3 & 0x1ff;
    }
    if (uVar3 == 0) {
      FUN_1013cbc2();
      return;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar2);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


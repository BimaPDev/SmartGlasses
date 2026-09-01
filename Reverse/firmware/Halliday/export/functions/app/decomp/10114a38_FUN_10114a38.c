/* FUN_10114a38 @ 0x10114a38 */

void FUN_10114a38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    FUN_10119dc2(DAT_10114ab0,DAT_10114aac,DAT_10114aa8,0xfd,param_1,param_2,param_3,uVar3,param_4);
    FUN_10119dc2(DAT_10114ab4);
    uVar6 = FUN_1011a1f0(DAT_10114aa8,0xfd,param_3,uVar3);
    uVar4 = extraout_r3;
  }
  iVar2 = DAT_10114ab8;
  uVar3 = (uint)*(byte *)(*(int *)(DAT_10114ab8 + 8) + 0xf);
  if (uVar3 == 1) {
    FUN_10119dc2(DAT_10114ab0,DAT_10114abc,DAT_10114aa8,0xfe,uVar6,1,uVar4,param_4);
    FUN_10119dc2(DAT_10114ab4);
    FUN_1011a1f0(DAT_10114aa8,0xfe,uVar3,uVar4);
  }
  *(char *)(*(int *)(iVar2 + 8) + 0xf) = *(char *)(*(int *)(iVar2 + 8) + 0xf) + -1;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


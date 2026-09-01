/* FUN_101150e0 @ 0x101150e0 */

void FUN_101150e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  iVar2 = DAT_10115164;
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
  uVar3 = (uint)*(byte *)(*(int *)(DAT_10115164 + 8) + 0xf);
  if (uVar3 == 0) {
    uVar7 = 0x20;
    FUN_10119dc2(DAT_10115170,DAT_1011516c,DAT_10115168,0x355,param_1,param_2,0,0x20,param_4);
    FUN_10119dc2(DAT_10115174);
    uVar6 = FUN_1011a1f0(DAT_10115168,0x355,uVar3,uVar7);
    uVar3 = extraout_r2;
  }
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  if (uVar4 != 0) {
    FUN_10119dc2(DAT_10115170,DAT_10115178,DAT_10115168,0x356,uVar6,uVar3,uVar4,param_4);
    FUN_10119dc2(DAT_10115174);
    FUN_1011a1f0(DAT_10115168,0x356,uVar3,uVar4);
  }
  *(char *)(*(int *)(iVar2 + 8) + 0xf) = *(char *)(*(int *)(iVar2 + 8) + 0xf) + '\x01';
  FUN_10114b50(0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
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


/* FUN_101152fc @ 0x101152fc */

int FUN_101152fc(uint param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r2;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  if (uVar4 != 0) {
    FUN_10119dc2(DAT_101153e4,DAT_101153e0,DAT_101153dc,0x4be,param_1,param_2);
    FUN_10119dc2(DAT_101153e8);
    FUN_1011a1f0(DAT_101153dc,0x4be,param_3,uVar4);
  }
  if (param_1 == 0 && param_2 == 0) {
    FUN_10115218();
    iVar2 = 0;
  }
  else {
    if ((int)((-1 - param_2) - (uint)(0xfffffffe < param_1)) < (int)(uint)(param_1 == 0xfffffffe)) {
      iVar2 = FUN_1013ce4e();
      uVar4 = iVar2 + param_1;
    }
    else {
      uVar4 = -param_1 - 2;
    }
    iVar2 = DAT_101153ec;
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
    *DAT_101153f0 = *(undefined4 *)(DAT_101153ec + 8);
    FUN_10114e08();
    FUN_10115740(*(int *)(iVar2 + 8) + 0x18,DAT_101153f4,param_1,param_2);
    *(byte *)(*(int *)(iVar2 + 8) + 0xd) = *(byte *)(*(int *)(iVar2 + 8) + 0xd) | 0x10;
    uVar6 = FUN_1013cbc2(uVar5);
    iVar2 = (uint)*(byte *)(*(int *)(iVar2 + 8) + 0xd) << 0x1b;
    if (iVar2 < 0) {
      FUN_10119dc2(DAT_101153e4,DAT_101153f8,DAT_101153dc,0x4df,uVar6);
      FUN_10119dc2(DAT_101153e8);
      FUN_1011a1f0(DAT_101153dc,0x4df,extraout_r2,iVar2);
    }
    uVar3 = FUN_1013ce4e();
    iVar2 = uVar4 - uVar3;
    if ((int)-(uint)(uVar4 < uVar3) < (int)(uint)(iVar2 == 0)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


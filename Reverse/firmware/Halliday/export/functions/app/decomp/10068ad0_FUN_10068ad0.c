/* FUN_10068ad0 @ 0x10068ad0 */

void FUN_10068ad0(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 extraout_r2;
  uint uVar3;
  undefined4 extraout_r3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(DAT_10068aec + 8) == param_1) {
    uVar3 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar3 = getCurrentExceptionNumber();
      uVar3 = uVar3 & 0x1ff;
    }
    if (uVar3 != 0) {
      *(uint *)(DAT_10068af0 + 4) = *(uint *)(DAT_10068af0 + 4) | 0x10000000;
    }
  }
  uVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar5 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (-1 < (int)((uint)bVar1 << 0x1c)) {
    if ((char)bVar1 < '\0') {
      *(byte *)(param_1 + 0xd) = bVar1 & 0x5f | 8;
      FUN_10114ac0(DAT_10115570,param_1);
    }
    else {
      *(byte *)(param_1 + 0xd) = bVar1 & 0xdf | 8;
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_10114b08(param_1);
    }
    FUN_1013cdcc(param_1 + 0x18);
    while ((iVar4 = *(int *)(param_1 + 0x58), iVar4 != param_1 + 0x58 && (iVar4 != 0))) {
      FUN_10114b08(iVar4);
      FUN_1013cdcc(iVar4 + 0x18);
      *(undefined4 *)(iVar4 + 0xcc) = 0;
      FUN_10114cf4(iVar4);
    }
    FUN_10114b50(1);
    FUN_10113528(param_1);
    if (*(int *)(DAT_1011555c + 8) == param_1) {
      uVar3 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar3 = getCurrentExceptionNumber();
        uVar3 = uVar3 & 0x1ff;
      }
      if (uVar3 == 0) {
        uVar6 = FUN_1013cbc2(uVar5);
        FUN_10119dc2(DAT_10115568,DAT_10115564,DAT_10115560,0x609,uVar6);
        FUN_10119dc2(DAT_1011556c);
        FUN_1011a1f0(DAT_10115560,0x609,extraout_r2,extraout_r3);
      }
    }
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


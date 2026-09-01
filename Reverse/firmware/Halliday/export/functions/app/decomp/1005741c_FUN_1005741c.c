/* FUN_1005741c @ 0x1005741c */

undefined4 FUN_1005741c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar7 = FUN_100573f4();
  iVar3 = (int)uVar7;
  if (iVar3 == 0) {
    FUN_10119dc2(DAT_10057478,param_1);
    uVar4 = 0xffffffef;
  }
  else {
    if (*(short *)(iVar3 + 2) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_10117c88(DAT_10057484,0x42,DAT_10057480,DAT_1005747c,param_4);
    }
    *(short *)(iVar3 + 2) = *(short *)(iVar3 + 2) + 1;
    iVar5 = iVar3 + (int)((ulonglong)uVar7 >> 0x20) * 2;
    *(short *)(iVar5 + 4) = *(short *)(iVar5 + 4) + 1;
    uVar4 = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar4;
}


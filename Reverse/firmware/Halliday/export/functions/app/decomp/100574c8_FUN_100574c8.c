/* FUN_100574c8 @ 0x100574c8 */

undefined4 FUN_100574c8(int param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar7 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar8 = FUN_100573f4();
  iVar4 = (int)uVar8;
  if (iVar4 == 0) {
    FUN_10119dc2(DAT_10057548,param_1);
    uVar5 = 0xfffffffd;
  }
  else {
    sVar1 = *(short *)(iVar4 + 2);
    if (sVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10117c88(DAT_10057554,0x5f,DAT_10057550,DAT_1005754c);
    }
    iVar6 = iVar4 + (int)((ulonglong)uVar8 >> 0x20) * 2;
    *(short *)(iVar6 + 4) = *(short *)(iVar6 + 4) + -1;
    *(short *)(iVar4 + 2) = sVar1 + -1;
    if (param_1 == 1) {
      uVar5 = FUN_1011aab0();
      iVar6 = DAT_10057558;
      *(undefined4 *)(DAT_10057558 + 0x18) = uVar5;
      uVar5 = FUN_1011aab0();
      *(undefined4 *)(iVar6 + 0x30) = uVar5;
      FUN_100a2324();
    }
    else {
      uVar5 = FUN_1011aab0();
      *(undefined4 *)(iVar4 + 0x14) = uVar5;
    }
    if (*(short *)(iVar4 + 2) == 0) {
      FUN_10113fd0(DAT_1005755c);
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
    }
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar5;
}


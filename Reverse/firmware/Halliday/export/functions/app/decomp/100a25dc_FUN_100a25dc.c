/* FUN_100a25dc @ 0x100a25dc */

int FUN_100a25dc(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar4 = FUN_10115464();
  uVar3 = DAT_100a25f4;
  if (param_1 == 0) {
    iVar5 = -0x16;
  }
  else {
    uVar8 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar8 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar5 = 0;
    do {
      iVar7 = iVar5 * 0x18;
      if (*(int *)(iVar7 + DAT_1005c344) == 0) {
        iVar6 = DAT_1005c344 + iVar7;
        *(int *)(DAT_1005c344 + iVar7) = param_1;
        *(undefined4 *)(iVar6 + 0x10) = uVar4;
        *(undefined4 *)(iVar6 + 8) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0xc) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x14) = uVar3;
        FUN_1005c2a4(iVar5);
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar8);
        }
        InstructionSynchronizationBarrier(0xf);
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 5);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar5 = -0xc;
  }
  return iVar5;
}


/* FUN_10113a74 @ 0x10113a74 */

undefined4 FUN_10113a74(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(DAT_10113b5c + 8);
  *(int *)(iVar6 + 0x14) = param_2;
  iVar7 = param_1 + 0x10;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_1013cf7e(param_1 + 0x14,0x20,*(undefined4 *)(param_2 + 0x20));
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)(param_1 + 8)) {
    for (; piVar3 != (undefined4 *)0x0; piVar3 = (int *)*piVar3) {
      iVar4 = FUN_1013c78e(param_2,piVar3[5]);
      if (iVar4 == 0) {
        FUN_1013cc34(piVar3);
        piVar3[0x33] = 0;
        FUN_1013cc6c(piVar3);
        if ((int)((uint)*(byte *)(iVar6 + 0xd) << 0x1f) < 0) {
          FUN_10114a14(iVar7,uVar5);
          return 0;
        }
        iVar4 = -1;
        param_3 = -1;
        param_4 = -1;
        param_1 = 0;
        goto LAB_10113ada;
      }
      if (piVar3 == *(undefined4 **)(param_1 + 0xc)) break;
    }
  }
  if (param_3 == 0 && param_4 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar5 = 0xffffffdd;
  }
  else {
    iVar4 = (uint)*(byte *)(iVar6 + 0xd) << 0x1f;
    if (iVar4 < 0) {
      FUN_10114f10(iVar6,param_1,0xffffffff,0xffffffff);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar5);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar5 = 0;
    }
    else {
LAB_10113ada:
      uVar5 = FUN_10114f68(iVar7,uVar5,param_1,iVar4,param_3,param_4);
    }
  }
  return uVar5;
}


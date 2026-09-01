/* FUN_1011606c @ 0x1011606c */

undefined4 FUN_1011606c(int param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  
  uVar8 = CONCAT44(param_2,param_1);
  iVar6 = *(int *)(DAT_10116194 + 8);
  *(undefined1 *)(iVar6 + 0x60) = 1;
  *(undefined1 *)(iVar6 + 0x61) = 1;
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  uVar2 = 0;
  uVar3 = param_3;
  iVar9 = param_1;
  iVar10 = param_2;
  if (uVar4 != 0) {
    FUN_10119dc2(DAT_101161a0,DAT_1011619c,DAT_10116198,0x128,param_1,param_2,param_3,uVar4,param_1,
                 param_2);
    FUN_10119dc2(DAT_101161a4);
    uVar8 = FUN_1011a1f0(DAT_10116198,0x128,uVar3,uVar4);
    uVar3 = extraout_r2;
    uVar2 = extraout_r3;
  }
  if (param_1 == 0) {
    FUN_10119dc2(DAT_101161a0,DAT_101161a8,DAT_10116198,0x129,uVar8,uVar3,uVar2,iVar9,iVar10);
    FUN_10119dc2(DAT_101161ac);
    uVar8 = FUN_1011a1f0(DAT_10116198,0x129,uVar3,uVar2);
    uVar3 = extraout_r2_00;
    uVar2 = extraout_r3_00;
  }
  if (param_2 < 0) {
    FUN_10119dc2(DAT_101161a0,DAT_101161b0,DAT_10116198,0x12a,uVar8,uVar3,uVar2,iVar9,iVar10);
    FUN_10119dc2(DAT_101161b4);
    FUN_1011a1f0(DAT_10116198,0x12a,uVar3,uVar2);
  }
  uVar2 = FUN_10115c84(param_1,param_2,iVar6 + 0x60,param_3 == 0 && param_4 == 0);
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar6 + 0x60) == '\0') {
    FUN_10115b08(param_1,uVar2,uVar7);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar7);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar7 = 0;
  }
  else {
    *(undefined1 *)(iVar6 + 0x60) = 0;
    if ((param_3 | param_4) == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar7 = 0xfffffff5;
    }
    else {
      uVar7 = FUN_10114f68(DAT_101161bc,uVar7,DAT_101161b8,param_3 | param_4,param_3,param_4);
      uVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar5 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_10115b08(param_1,uVar2,uVar5);
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar5);
      }
      InstructionSynchronizationBarrier(0xf);
    }
  }
  return uVar7;
}


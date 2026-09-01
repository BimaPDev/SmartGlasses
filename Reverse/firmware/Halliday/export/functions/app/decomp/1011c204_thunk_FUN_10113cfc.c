/* thunk_FUN_10113cfc @ 0x1011c204 */

undefined4 thunk_FUN_10113cfc(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r3;
  int *piVar5;
  undefined4 uVar6;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  if (uVar3 != 0) {
    iVar2 = param_3;
    FUN_10119dc2(DAT_10113e1c,DAT_10113e18,DAT_10113e14,0x65,param_1,param_2,param_3,uVar3,param_1,
                 param_2);
    FUN_10119dc2(DAT_10113e20);
    FUN_1011a1f0(DAT_10113e14,0x65,iVar2,uVar3);
  }
  iVar2 = DAT_10113e24;
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_1[3] == 0) {
    iVar4 = (int)*(char *)(*(int *)(DAT_10113e24 + 8) + 0xe);
  }
  else {
    if (param_1[2] != *(int *)(DAT_10113e24 + 8)) {
      if (param_3 == 0 && param_4 == 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar6);
        }
        InstructionSynchronizationBarrier(0xf);
        return 0xfffffff0;
      }
      iVar2 = (int)*(char *)(*(int *)(DAT_10113e24 + 8) + 0xe);
      iVar4 = (int)*(char *)(param_1[2] + 0xe);
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      if (iVar2 < -0x7f) {
        iVar2 = -0x7f;
      }
      if (iVar2 < iVar4) {
        iVar2 = FUN_10114f90();
        iVar4 = extraout_r3;
      }
      else {
        iVar2 = 0;
      }
      iVar4 = FUN_10114f68(DAT_10113e28,uVar6,param_1,iVar4,param_3,param_4);
      if (iVar4 == 0) {
        return 0;
      }
      uVar6 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar6 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      piVar5 = (int *)*param_1;
      iVar4 = param_1[4];
      if ((piVar5 != param_1) && (piVar5 != (int *)0x0)) {
        if (*(char *)((int)piVar5 + 0xe) <= iVar4) {
          iVar4 = (int)*(char *)((int)piVar5 + 0xe);
        }
        if (iVar4 < -0x7f) {
          iVar4 = -0x7f;
        }
      }
      if (((iVar4 == *(char *)(param_1[2] + 0xe)) || (iVar4 = FUN_10114f90(), iVar4 == 0)) &&
         (iVar2 == 0)) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar6);
        }
        InstructionSynchronizationBarrier(0xf);
      }
      else {
        FUN_10114a14(DAT_10113e28,uVar6);
      }
      return 0xfffffff5;
    }
    iVar4 = param_1[4];
  }
  param_1[3] = param_1[3] + 1;
  iVar2 = *(int *)(iVar2 + 8);
  param_1[4] = iVar4;
  param_1[2] = iVar2;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return 0;
}


/* thunk_FUN_10113e2c @ 0x10130954 */

undefined4 thunk_FUN_10113e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  int extraout_r2_00;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = CONCAT44(param_2,param_1);
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getCurrentExceptionNumber();
    uVar5 = uVar5 & 0x1ff;
  }
  if (uVar5 != 0) {
    FUN_10119dc2(DAT_10113f48,DAT_10113f44,DAT_10113f40,199,param_1,param_2,param_3,uVar5,param_4);
    FUN_10119dc2(DAT_10113f4c);
    uVar7 = FUN_1011a1f0(DAT_10113f40,199,param_3,uVar5);
  }
  iVar4 = DAT_10113f50;
  if (*(int *)(param_1 + 8) == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar3 = *(int *)(DAT_10113f50 + 8);
    if (*(int *)(param_1 + 8) == iVar3) {
      iVar6 = *(int *)(param_1 + 0xc);
      if (iVar6 == 0) {
        FUN_10119dc2(DAT_10113f48,DAT_10113f54,DAT_10113f40,0xdf,uVar7,iVar3,0,param_4);
        uVar7 = FUN_1011a1f0(DAT_10113f40,0xdf,iVar3,iVar6);
        iVar3 = extraout_r2;
      }
      uVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar5 = getCurrentExceptionNumber();
        uVar5 = uVar5 & 0x1ff;
      }
      if (uVar5 != 0) {
        FUN_10119dc2(DAT_10113f48,DAT_10113f44,DAT_10113f58,0xfd,uVar7,iVar3,uVar5,param_4);
        FUN_10119dc2(DAT_10113f5c);
        uVar7 = FUN_1011a1f0(DAT_10113f58,0xfd,iVar3,uVar5);
        iVar3 = extraout_r2_00;
      }
      uVar5 = (uint)*(byte *)(*(int *)(iVar4 + 8) + 0xf);
      if (uVar5 == 1) {
        FUN_10119dc2(DAT_10113f48,DAT_10113f60,DAT_10113f58,0xfe,uVar7,iVar3,1,param_4);
        FUN_10119dc2(DAT_10113f5c);
        FUN_1011a1f0(DAT_10113f58,0xfe,iVar3,uVar5);
      }
      iVar4 = *(int *)(iVar4 + 8);
      *(char *)(iVar4 + 0xf) = *(char *)(iVar4 + 0xf) + -1;
      if (*(uint *)(param_1 + 0xc) < 2) {
        uVar2 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          uVar2 = getBasePriority();
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
          setBasePriority(0x20);
        }
        InstructionSynchronizationBarrier(0xf);
        if (*(int *)(param_1 + 0x10) != (int)*(char *)(*(int *)(param_1 + 8) + 0xe)) {
          FUN_10114f90();
        }
        iVar4 = FUN_1013cd00(param_1);
        *(int *)(param_1 + 8) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0xc) = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            setBasePriority(uVar2);
          }
          InstructionSynchronizationBarrier(0xf);
        }
        else {
          *(int *)(param_1 + 0x10) = (int)*(char *)(iVar4 + 0xe);
          *(undefined4 *)(iVar4 + 0xcc) = 0;
          FUN_1013cc6c();
          FUN_10114a14(DAT_10113f64,uVar2);
        }
      }
      else {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) - 1;
      }
      FUN_101150e0();
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


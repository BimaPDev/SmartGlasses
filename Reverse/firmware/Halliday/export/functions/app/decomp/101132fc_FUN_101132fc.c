/* FUN_101132fc @ 0x101132fc */

int FUN_101132fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                uint param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 extraout_r2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = FUN_1013ce5a(param_5,param_6);
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
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  if ((uVar3 != 0) && ((param_5 | param_6) != 0)) {
    FUN_10119dc2(DAT_101133dc,DAT_101133d8,DAT_101133d4,0x49,lVar6);
    FUN_10119dc2(DAT_101133e0);
    FUN_1011a1f0(DAT_101133d4,0x49,extraout_r2,param_5 | param_6);
  }
  while( true ) {
    iVar2 = FUN_10053f54(param_1,param_2,param_3);
    lVar7 = FUN_10115958();
    if (iVar2 != 0) break;
    lVar7 = lVar6 - lVar7;
    iVar4 = (int)((ulonglong)lVar7 >> 0x20);
    if (iVar4 < (int)(uint)((int)lVar7 == 0)) break;
    FUN_10114f68(param_1 + 0x14,uVar5,param_1 + 0xc,iVar4,lVar7);
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
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if (iVar2 == 0) {
    FUN_10119dc2(DAT_101133e4,param_3,*(undefined4 *)(param_1 + 8));
    FUN_1011a060(param_1);
  }
  return iVar2;
}


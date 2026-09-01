/* FUN_1011401c @ 0x1011401c */

undefined4 FUN_1011401c(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  if ((uVar3 != 0) && (uVar3 = param_3 | param_4, uVar3 != 0)) {
    uVar4 = param_3;
    FUN_10119dc2(DAT_101140a0,DAT_1011409c,DAT_10114098,0x79,param_1,param_2,param_3,uVar3,param_1,
                 param_2);
    FUN_10119dc2(DAT_101140a4);
    FUN_1011a1f0(DAT_10114098,0x79,uVar4,uVar3);
  }
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(int *)(param_1 + 8) == 0) {
    if ((param_3 | param_4) == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar2);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar2 = 0xfffffff0;
    }
    else {
      uVar2 = FUN_10114f68(DAT_101140a8,uVar2,param_1,param_3 | param_4,param_3,param_4);
    }
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar2);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar2 = 0;
  }
  return uVar2;
}


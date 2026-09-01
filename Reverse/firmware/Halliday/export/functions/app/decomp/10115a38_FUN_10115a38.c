/* FUN_10115a38 @ 0x10115a38 */

void FUN_10115a38(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = 0;
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    uVar3 = getBasePriority();
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if ((bVar5) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_4 != -1 || param_3 != 0xffffffff) {
    if (((param_6 != -1 || param_5 != 0xffffffff) && (param_5 != 0 || param_6 != 0)) &&
       ((int)((-1 - param_6) - (uint)(0xfffffffe < param_5)) < 0)) {
      bVar5 = param_5 != 0;
      param_5 = param_5 - 1;
      param_6 = param_6 + -1 + (uint)bVar5;
      if (param_6 < (int)(uint)(param_5 == 0)) {
        param_5 = 1;
        param_6 = 0;
      }
    }
    iVar1 = -2 - param_3;
    iVar2 = (-1 - param_4) - (uint)(0xfffffffe < param_3);
    uVar4 = param_3;
    if (iVar2 < 0) {
      uVar4 = param_3 - 1;
      param_4 = param_4 + -1 + (uint)(param_3 != 0);
      if (param_4 < 0) {
        uVar4 = 0;
        param_4 = 0;
      }
    }
    FUN_1013cdcc(param_1);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(uint *)(param_1 + 0x28) = param_5;
    *(int *)(param_1 + 0x2c) = param_6;
    FUN_10115740(param_1,DAT_10115b04,uVar4,param_4,iVar1,iVar2,param_3);
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


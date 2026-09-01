/* FUN_10115574 @ 0x10115574 */

undefined4 FUN_10115574(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = DAT_10115618;
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x20 < uVar5)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((int)((uint)*(byte *)(param_1 + 0xd) << 0x1c) < 0) {
    uVar3 = 0;
  }
  else if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0xfffffff0;
  }
  else {
    if ((*(int *)(DAT_10115618 + 8) != param_1) &&
       (iVar4 = *(int *)(param_1 + 8), iVar4 != *(int *)(DAT_10115618 + 8) + 0x58)) {
      uVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar5 = getCurrentExceptionNumber();
        uVar5 = uVar5 & 0x1ff;
      }
      if (uVar5 != 0) {
        FUN_10119dc2(DAT_10115624,DAT_10115620,DAT_1011561c,0x628,param_1,param_2);
        FUN_10119dc2(DAT_10115628);
        FUN_1011a1f0(DAT_1011561c,0x628,iVar4,uVar5);
      }
      FUN_10114e40(*(undefined4 *)(iVar2 + 8),param_1 + 0x58);
      if (param_4 != -1 || param_3 != -1) {
        FUN_10115740(*(int *)(iVar2 + 8) + 0x18,DAT_1011562c,param_3,param_4);
      }
      uVar6 = FUN_1013cbc2(uVar6);
      return uVar6;
    }
    uVar3 = 0xffffffd3;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}


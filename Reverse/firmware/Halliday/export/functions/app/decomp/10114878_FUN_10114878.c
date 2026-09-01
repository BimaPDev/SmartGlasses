/* FUN_10114878 @ 0x10114878 */

void FUN_10114878(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    FUN_10119dc2(DAT_101148c8,DAT_101148c4,DAT_101148c0,0x3f8,0,param_2,param_3,param_4,param_4);
    FUN_1011a1f0(DAT_101148c0,0x3f8,param_3,param_4);
  }
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_1013caa0(param_1);
  FUN_1013cabc(param_1);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


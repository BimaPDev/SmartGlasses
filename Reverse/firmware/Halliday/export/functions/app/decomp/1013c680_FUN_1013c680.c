/* FUN_1013c680 @ 0x1013c680 */

void FUN_1013c680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_10053ea0();
  iVar3 = FUN_1013cd32(param_1 + 0xc);
  if (iVar3 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
    return;
  }
  FUN_10114a14(param_1 + 0x14,uVar4,extraout_r2,param_4);
  return;
}


/* FUN_1013cec4 @ 0x1013cec4 */

void FUN_1013cec4(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_1013cdcc();
  if (iVar2 == 0) {
    if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(param_1);
    }
    iVar2 = FUN_1013ccd6(param_1 + 0x18);
    if (iVar2 != 0) {
      FUN_1013cc6c();
      iVar2 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar2 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      if (iVar2 == 0) {
        uVar3 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          uVar3 = getCurrentExceptionNumber();
          uVar3 = uVar3 & 0x1ff;
        }
        if (uVar3 == 0) {
          FUN_1013cbc2();
          return;
        }
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar2);
      }
      InstructionSynchronizationBarrier(0xf);
      return;
    }
  }
  return;
}


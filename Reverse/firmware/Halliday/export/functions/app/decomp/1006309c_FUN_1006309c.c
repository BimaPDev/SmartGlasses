/* FUN_1006309c @ 0x1006309c */

void FUN_1006309c(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*DAT_100630d4 != 0) {
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
    FUN_10053ea0(*DAT_100630d4,param_1);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_100630e0,0x103,DAT_100630dc,DAT_100630d8);
}


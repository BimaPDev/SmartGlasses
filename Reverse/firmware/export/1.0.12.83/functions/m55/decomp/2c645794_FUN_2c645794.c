/* FUN_2c645794 @ 0x2c645794 */

undefined4 FUN_2c645794(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1ff;
  }
  if (uVar3 == 0) {
    iVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar4 = isIRQinterruptsEnabled();
    }
    if (iVar4 == 0) {
      iVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar4 = getBasePriority();
      }
      if (iVar4 == 0) {
        software_interrupt(0);
        return param_1;
      }
    }
  }
  uVar2 = *(undefined4 *)(DAT_2c6457c8 + 4);
  FUN_2c643a10();
  return uVar2;
}


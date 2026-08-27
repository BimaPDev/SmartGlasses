/* FUN_2c6448f0 @ 0x2c6448f0 */

undefined4 FUN_2c6448f0(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  FUN_2c643af0();
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if (uVar2 == 0) {
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = isIRQinterruptsEnabled();
    }
    if (iVar3 == 0) {
      iVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar3 = getBasePriority();
      }
      if (iVar3 == 0) {
        software_interrupt(0);
        return param_1;
      }
    }
  }
  FUN_2c643ad8(param_1,0xfffffffa);
  return 0xfffffffa;
}


/* FUN_2c6444fc @ 0x2c6444fc */

undefined4 FUN_2c6444fc(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  FUN_2c643acc();
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
  FUN_2c643ac8(0xfffffffa);
  return 0xfffffffa;
}


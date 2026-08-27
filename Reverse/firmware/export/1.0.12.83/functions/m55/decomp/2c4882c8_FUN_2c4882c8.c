/* FUN_2c4882c8 @ 0x2c4882c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4882c8(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = _LAB_2c4882f0;
  iVar3 = FUN_2c64418c(_LAB_2c4882f4,1,0);
  *piVar2 = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  func_0x2c648680(_LAB_2c4882f8);
  iVar3 = *piVar2;
  FUN_2c643ae8();
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  if (uVar4 == 0) {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = isIRQinterruptsEnabled();
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar5 = getBasePriority();
      }
      if (iVar5 == 0) {
        software_interrupt(0);
        return iVar3;
      }
    }
  }
  FUN_2c643ad8(iVar3,0xfffffffa);
  return -6;
}


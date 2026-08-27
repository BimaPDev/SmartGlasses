/* FUN_2c13ae14 @ 0x2c13ae14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13ae14(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = _DAT_2c13ae58;
  iVar3 = *_DAT_2c13ae58;
  *_DAT_2c13ae54 = *_DAT_2c13ae54 + 1;
  if (iVar3 == 0) {
    iVar3 = func_0x2c13f38c(_DAT_2c13ae5c,1,0);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  func_0x2c13f9c8();
  iVar3 = *piVar2;
  func_0x2c13ee80();
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
  func_0x2c13ee70(iVar3,0xfffffffa);
  return -6;
}


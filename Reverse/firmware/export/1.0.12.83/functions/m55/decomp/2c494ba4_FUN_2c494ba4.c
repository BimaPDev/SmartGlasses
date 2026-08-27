/* FUN_2c494ba4 @ 0x2c494ba4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c494ba4(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = FUN_2c64418c(_LAB_2c494bdc,1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,500,_LAB_2c494bec,_LAB_2c494be8,_LAB_2c494be4,_LAB_2c494be0);
  }
  FUN_2c643ae8();
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
        return iVar2;
      }
    }
  }
  FUN_2c643ad8(iVar2,0xfffffffa);
  return -6;
}


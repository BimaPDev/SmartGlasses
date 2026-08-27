/* FUN_2c489a70 @ 0x2c489a70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c489a70(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
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
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xe5,_LAB_2c489ab8,_LAB_2c489ab4,_LAB_2c489ab0);
}


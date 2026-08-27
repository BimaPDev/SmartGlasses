/* FUN_2c498f54 @ 0x2c498f54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c498f54(void)

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
  TRACE(4,0x350,_LAB_2c498fcc,_LAB_2c498fd0,_LAB_2c498fc8);
}


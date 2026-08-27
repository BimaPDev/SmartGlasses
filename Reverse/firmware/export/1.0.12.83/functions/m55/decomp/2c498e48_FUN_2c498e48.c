/* FUN_2c498e48 @ 0x2c498e48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_2c498e48(int param_1)

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
        return param_1 == 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x2be,_LAB_2c498ea8,_LAB_2c498ea4,_LAB_2c498ea0,param_1);
}


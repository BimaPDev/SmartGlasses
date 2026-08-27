/* FUN_2c4e9504 @ 0x2c4e9504 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4e9504(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = _LAB_2c4e955c;
  iVar3 = *_LAB_2c4e955c;
  if (iVar3 == 0) {
    iVar3 = FUN_2c643fdc(_LAB_2c4e9560);
    *piVar2 = iVar3;
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2d,_LAB_2c4e956c,_LAB_2c4e9568,_LAB_2c4e9564);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(1,0x2f,_LAB_2c4e956c,_LAB_2c4e9568,_LAB_2c4e9570);
  }
  FUN_2c643b18();
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
  FUN_2c643b08(iVar3,0xfffffffa);
  return -6;
}


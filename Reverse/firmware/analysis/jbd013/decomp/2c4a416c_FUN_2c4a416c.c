/* FUN_2c4a416c @ 0x2c4a416c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4a416c(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  piVar2 = _LAB_2c4a4198;
  if (*_LAB_2c4a4198 == 0) {
    iVar3 = FUN_2c64418c(_LAB_2c4a419c,1,0);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
  FUN_2c6448f0();
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


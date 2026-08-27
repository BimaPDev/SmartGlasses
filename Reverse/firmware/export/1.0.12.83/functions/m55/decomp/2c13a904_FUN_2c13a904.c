/* FUN_2c13a904 @ 0x2c13a904 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13a904(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  
  piVar2 = _DAT_2c13a940;
  uVar6 = (uint)*(byte *)(param_1 + 1);
  if (4 < uVar6) {
    return param_1;
  }
  FUN_2c13f29c(*_DAT_2c13a940,0xffffffff);
  if ((*(char *)(_DAT_2c13a944 + uVar6 * 0xc + 4) != '\0') &&
     (pcVar4 = *(code **)(*(int *)(_DAT_2c13a944 + uVar6 * 0xc) + 0x14), pcVar4 != (code *)0x0)) {
    (*pcVar4)(param_1);
  }
  iVar3 = *piVar2;
  FUN_2c13eeb8();
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getCurrentExceptionNumber();
    uVar6 = uVar6 & 0x1ff;
  }
  if (uVar6 == 0) {
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
  FUN_2c13ee98(iVar3,0xfffffffa);
  return -6;
}


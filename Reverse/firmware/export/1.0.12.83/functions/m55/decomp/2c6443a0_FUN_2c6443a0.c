/* FUN_2c6443a0 @ 0x2c6443a0 */

char * FUN_2c6443a0(int param_1)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  pcVar2 = *(char **)(param_1 + 4);
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
        return pcVar2;
      }
    }
  }
  if ((pcVar2 != (char *)0x0) && (*pcVar2 == -6)) {
    FUN_2c643be0(pcVar2,*(undefined4 *)(pcVar2 + 0x28));
    return *(char **)(pcVar2 + 0x28);
  }
  FUN_2c643be0(pcVar2,0);
  return (char *)0x0;
}


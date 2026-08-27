/* FUN_2c647898 @ 0x2c647898 */

char * FUN_2c647898(char *param_1)

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
        return param_1;
      }
    }
  }
  if ((param_1 != (char *)0x0) && (*param_1 == -9)) {
    FUN_2c643b9c(param_1,*(undefined4 *)(param_1 + 0x14));
    return *(char **)(param_1 + 0x14);
  }
  FUN_2c643b9c(param_1,0);
  return (char *)0x0;
}


/* FUN_2c6472c8 @ 0x2c6472c8 */

char * FUN_2c6472c8(char *param_1)

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
  if ((param_1 != (char *)0x0) && (*param_1 == -10)) {
    FUN_2c643b64(param_1,*(undefined2 *)(param_1 + 0xc));
    return (char *)(uint)*(ushort *)(param_1 + 0xc);
  }
  FUN_2c643b64(param_1,0);
  return (char *)0x0;
}


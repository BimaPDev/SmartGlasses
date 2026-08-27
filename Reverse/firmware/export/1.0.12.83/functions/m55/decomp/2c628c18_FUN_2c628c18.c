/* FUN_2c628c18 @ 0x2c628c18 */

uint FUN_2c628c18(int param_1)

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
        if (param_1 == 0) {
          return 0xfffffffe;
        }
        iVar3 = FUN_2c6468d8();
        if (iVar3 != 0) {
          iVar3 = FUN_2c66b624(iVar3,param_1);
          return (uint)(iVar3 == 0);
        }
        return 0xfffffffd;
      }
    }
  }
  return 0xffffffff;
}


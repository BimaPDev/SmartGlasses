/* FUN_2c6440f0 @ 0x2c6440f0 */

undefined4 FUN_2c6440f0(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  FUN_2c643a4c(uVar2,param_2,param_1 + 1);
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
        return uVar2;
      }
    }
  }
  FUN_2c643a14(0,0xfffffffa);
  return 0;
}


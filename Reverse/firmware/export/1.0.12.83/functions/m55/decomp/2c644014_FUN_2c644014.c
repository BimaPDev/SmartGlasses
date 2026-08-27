/* FUN_2c644014 @ 0x2c644014 */

undefined4 FUN_2c644014(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if (uVar2 == 0) {
    uVar2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar2 = isIRQinterruptsEnabled();
    }
    if (uVar2 == 0) {
      uVar2 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar2 = getBasePriority();
      }
      if (uVar2 == 0) {
        software_interrupt(0);
        return param_1;
      }
    }
  }
  func_0x2c643b14(param_1,0,uVar2,param_1,param_4);
  return 0;
}


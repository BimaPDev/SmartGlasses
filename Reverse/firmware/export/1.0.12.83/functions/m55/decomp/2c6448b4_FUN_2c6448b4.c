/* FUN_2c6448b4 @ 0x2c6448b4 */

undefined4 FUN_2c6448b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 extraout_r2;
  uint uVar2;
  
  FUN_2c643ae8();
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
  FUN_2c643ad8(param_1,0xfffffffa,extraout_r2,uVar2,param_4);
  return 0xfffffffa;
}


/* FUN_2c63d7d0 @ 0x2c63d7d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c63d7d0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = _LAB_2c63d818;
  FUN_2c644044(*_LAB_2c63d818,0xffffffff);
  if (param_1 == 0) {
    FUN_2c5e317c(0x30,1,0,0,1);
    uVar3 = *puVar2;
  }
  else {
    FUN_2c5e317c(0x30,1,1,0,1);
    uVar3 = *puVar2;
  }
  FUN_2c643b2c();
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
        return uVar3;
      }
    }
  }
  FUN_2c643b08(uVar3,0xfffffffa);
  return 0xfffffffa;
}


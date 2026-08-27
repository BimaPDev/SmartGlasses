/* FUN_2c5ee9fc @ 0x2c5ee9fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5ee9fc(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  puVar2 = _LAB_2c5eea18;
  FUN_2c644044(*_LAB_2c5eea18,0xffffffff);
  func_0x2c5f0284();
  uVar3 = *puVar2;
  FUN_2c643b2c();
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getCurrentExceptionNumber();
    uVar4 = uVar4 & 0x1ff;
  }
  if (uVar4 == 0) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = isIRQinterruptsEnabled();
    }
    if (uVar4 == 0) {
      uVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar4 = getBasePriority();
      }
      if (uVar4 == 0) {
        software_interrupt(0);
        return uVar3;
      }
    }
  }
  FUN_2c643b08(uVar3,0xfffffffa,extraout_r2,uVar4,unaff_r4,unaff_lr);
  return 0xfffffffa;
}


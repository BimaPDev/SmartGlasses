/* FUN_2c496a78 @ 0x2c496a78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c496a78(void)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*_LAB_2c496ab8 != 0) {
    FUN_2c646ab8(*_LAB_2c496ab8,2);
  }
  if (*_LAB_2c496abc == 1) {
    uVar2 = *_LAB_2c496ac8;
  }
  else {
    uVar2 = *_LAB_2c496ac8;
    uVar3 = *_LAB_2c496ac0 << 1;
    if (_LAB_2c496ac4 <= *_LAB_2c496ac0 << 1) {
      uVar3 = _LAB_2c496ac4;
    }
    *_LAB_2c496ac0 = uVar3;
  }
  FUN_2c643ae8();
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
  FUN_2c643ad8(uVar2,0xfffffffa);
  return 0xfffffffa;
}


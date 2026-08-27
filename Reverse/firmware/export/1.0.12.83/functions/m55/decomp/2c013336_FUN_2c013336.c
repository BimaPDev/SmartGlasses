/* FUN_2c013336 @ 0x2c013336 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c013336(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_CY;
  
  puVar2 = _DAT_2c01346c;
  if (in_CY && !in_ZR) {
    if (param_1 < 0xc) {
      if (-1 < (int)(uRam50000014 << 0x1e)) {
        _DAT_50000064 = 0x1b;
        _DAT_50000060 = 4;
        goto LAB_2c0133a0;
      }
      DataSynchronizationBarrier(0xf);
      _DAT_50000064 = 0x1b;
      _DAT_50000060 = 4;
      goto LAB_2c013358;
    }
    if (param_1 < 0x10) {
      if (-1 < (int)(uRam50000014 << 0x1e)) {
        _DAT_50000064 = 0x19;
        _DAT_50000060 = 2;
        goto LAB_2c0133a0;
      }
      _DAT_50000060 = 2;
      DataSynchronizationBarrier(0xf);
      _DAT_50000064 = 0x19;
      goto LAB_2c013358;
    }
    if (0x13 < param_1) {
      if (-1 < (int)(uRam50000014 << 0x1e)) {
        _DAT_50000064 = 1;
        _DAT_50000060 = 0x18;
        goto LAB_2c0133a0;
      }
      DataSynchronizationBarrier(0xf);
      _DAT_50000064 = 1;
      _DAT_50000060 = 0x18;
      goto LAB_2c013358;
    }
    uVar4 = uRam50000014 & 2;
    if (uVar4 != 0) {
      uRam50000014 = 2;
      _DAT_50000004 = 0x40;
      DataSynchronizationBarrier(0xf);
    }
    iVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar3 = getBasePriority();
    }
    if (iVar3 != 0x40) {
      *_DAT_2c01346c = 0x2c013428;
      puVar2[1] = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    _DAT_500000a8 = _DAT_500000a8 & 0xffffff9f | (uint)(param_1 < 0x12) << 5;
    if (iVar3 == 0) {
      *_DAT_2c01346c = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar3);
    }
    _DAT_50000060 = 9;
    _DAT_50000064 = 0x10;
    if (uVar4 == 0) goto LAB_2c0133a0;
  }
  else {
    if ((uRam50000014 & 2) == 0) {
      _DAT_50000064 = 0x1f;
      _DAT_50000060 = 0;
      goto LAB_2c0133a0;
    }
    DataSynchronizationBarrier(0xf);
    _DAT_50000064 = 0x1f;
    _DAT_50000060 = 0;
LAB_2c013358:
    uRam50000014 = 2;
    _DAT_50000004 = 0x40;
  }
  _DAT_50000000 = 0x40;
  uRam50000010 = 2;
LAB_2c0133a0:
  DataSynchronizationBarrier(0xf);
  return 0;
}


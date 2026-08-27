/* FUN_2c007098 @ 0x2c007098 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c007098(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c007174;
  if (0x17 < param_1) {
    return 1;
  }
  if (param_1 < 0x14) {
    _DAT_50000060 = *(uint *)(DAT_2c007164 + param_1 * 4);
    _DAT_50000064 = *(uint *)(DAT_2c007168 + param_1 * 4);
    uVar5 = *(uint *)(DAT_2c00716c + param_1 * 4);
  }
  else {
    uVar5 = 0xffffffff;
    _DAT_50000064 = 0x20;
    _DAT_50000060 = 0x1b00;
  }
  uVar4 = (uint)*DAT_2c007170;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      _DAT_50000060 = _DAT_50000060 & 0xffffefdf | 0x1000;
      _DAT_50000064 = _DAT_50000064 & 0xffffefdf | 0x20;
    }
    else {
      uVar5 = uVar4 - 2;
      _DAT_50000060 = _DAT_50000060 & 0xffffefdf | 0x20;
      _DAT_50000064 = _DAT_50000064 & 0xffffefdf | 0x1000;
    }
  }
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    *DAT_2c007174 = 0x2c0070dc;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (uVar5 != 0xffffffff) {
    _DAT_500000a8 = uVar5 & 3 | _DAT_500000a8 & 0xfffffffc;
  }
  if (iVar3 == 0) {
    *DAT_2c007174 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  if ((_DAT_50000060 & 0x800) == 0) {
    _DAT_50000064 = 0x20;
    return 0;
  }
  return 0;
}


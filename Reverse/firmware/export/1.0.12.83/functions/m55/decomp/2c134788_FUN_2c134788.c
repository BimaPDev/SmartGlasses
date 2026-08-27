/* FUN_2c134788 @ 0x2c134788 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c134788(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  puVar2 = _DAT_2c1347d8;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *_DAT_2c1347d8 = 0x2c134796;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (param_1 == 0) {
    uRam58000074 = uRam58000074 & 0xfffffffd;
    uVar3 = 0;
  }
  else if (param_1 == 1) {
    uVar3 = 0;
    uRam58000074 = uRam58000074 | 2;
  }
  else {
    uVar3 = 1;
  }
  if (iVar4 == 0) {
    *_DAT_2c1347d8 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return uVar3;
}


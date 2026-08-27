/* FUN_2c007b6c @ 0x2c007b6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c007b6c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar2 = DAT_2c007bd0;
  iVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *DAT_2c007bd0 = 0x2c007b7a;
    puVar2[1] = unaff_lr;
  }
  piVar3 = DAT_2c007bd4;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  iVar5 = *DAT_2c007bd4;
  if (param_1 == 0) {
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    iVar5 = iVar5 + -1;
    *DAT_2c007bd4 = iVar5;
  }
  else {
    iVar5 = iVar5 + 1;
    *DAT_2c007bd4 = iVar5;
    if (iVar5 == 1) {
      _DAT_50000000 = 0x4000;
      DataSynchronizationBarrier(0xf);
      iVar5 = *piVar3;
    }
  }
  if (iVar5 == 0) {
    _DAT_50000004 = 0x4000;
  }
  if (iVar4 == 0) {
    *DAT_2c007bd0 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar4);
  }
  return;
}


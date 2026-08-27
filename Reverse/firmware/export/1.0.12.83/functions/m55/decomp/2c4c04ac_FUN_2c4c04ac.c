/* FUN_2c4c04ac @ 0x2c4c04ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c04ac(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_lr;
  
  puVar2 = _LAB_2c4c04e4;
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    *_LAB_2c4c04e4 = 0x2c4c04ba;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *(uint *)(_LAB_2c4c04e8 + 0x38) = (param_1 | *(uint *)(_LAB_2c4c04e8 + 0x38)) & 0xfffffff0;
  if (iVar3 == 0) {
    *_LAB_2c4c04e4 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  return;
}


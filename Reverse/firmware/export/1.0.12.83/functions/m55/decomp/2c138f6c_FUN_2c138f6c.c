/* FUN_2c138f6c @ 0x2c138f6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_2c138f6c(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_lr;
  
  puVar3 = _DAT_2c138fdc;
  iVar5 = param_2 * 0x2c + *(int *)(param_1 + 0x38);
  if (param_3 < *(uint *)(iVar5 + 0xc)) {
    return (bool)*(undefined1 *)(*(int *)(iVar5 + 8) + param_3 * 0x10 + 0xc);
  }
  if (param_3 != 0xffffffff) {
    return false;
  }
  iVar4 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar4 = getBasePriority();
  }
  if (iVar4 != 0x40) {
    *_DAT_2c138fdc = 0x2c138f9e;
    puVar3[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uVar8 = *(uint *)(iVar5 + 0xc);
  uVar9 = uVar8;
  if (uVar8 != 0) {
    uVar6 = 0;
    iVar7 = *(int *)(iVar5 + 8);
    do {
      pcVar1 = (char *)(iVar7 + 0xc);
      iVar7 = iVar7 + 0x10;
      uVar9 = uVar6;
      if (*pcVar1 != '\0') break;
      uVar6 = uVar6 + 1;
      uVar9 = uVar8;
    } while (uVar6 != uVar8);
  }
  if (iVar4 == 0) {
    *_DAT_2c138fdc = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar4);
  }
  return uVar9 < *(uint *)(iVar5 + 0xc);
}


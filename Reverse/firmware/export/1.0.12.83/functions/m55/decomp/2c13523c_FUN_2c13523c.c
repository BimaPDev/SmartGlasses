/* FUN_2c13523c @ 0x2c13523c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13523c(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar2 = _DAT_2c13528c;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *_DAT_2c13528c = 0x2c13524a;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  *(undefined4 *)(_DAT_2c135290 + param_1 * 4) = param_2;
  piVar3 = _DAT_2c135294;
  _DAT_2c135294[param_1] = param_3;
  if ((*piVar3 == 0) && (piVar3[1] == 0)) {
    uVar4 = 0;
    if (piVar3[2] != 0) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  *_DAT_2c135298 = uVar4;
  if (iVar5 == 0) {
    *_DAT_2c13528c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  return 0;
}


/* FUN_2c1384b0 @ 0x2c1384b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1384b0(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_lr;
  
  puVar2 = _DAT_2c138524;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *_DAT_2c138524 = 0x2c1384c2;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (param_1 == 0) {
    *_DAT_2c138528 = 0;
  }
  else {
    *_DAT_2c138538 = param_1 << 4;
    uVar4 = FUN_2c14486c();
    puVar2 = _DAT_2c13853c;
    *_DAT_2c13852c = uVar4;
    puVar3 = _DAT_2c138540;
    *puVar2 = 0;
    *puVar3 = 0;
    *_DAT_2c138544 = 0;
    *_DAT_2c138548 = 0;
    *_DAT_2c138528 = 1;
  }
  if (iVar5 == 0) {
    *_DAT_2c138524 = 0xffffffff;
  }
  puVar2 = _DAT_2c138534;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar4 = *_DAT_2c13852c;
    *_DAT_2c138530 = param_2 << 4;
    *puVar2 = uVar4;
    return;
  }
  *_DAT_2c138530 = 0;
  return;
}


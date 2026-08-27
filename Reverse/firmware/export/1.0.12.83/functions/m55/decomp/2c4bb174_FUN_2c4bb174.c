/* FUN_2c4bb174 @ 0x2c4bb174 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bb174(uint param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  undefined4 unaff_lr;
  
  puVar2 = _LAB_2c4bb1f4;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *_LAB_2c4bb1f4 = 0x2c4bb186;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*_LAB_2c4bb1f8 == param_1) {
    iVar6 = 0;
  }
  else {
    if (_LAB_2c4bb1f8[1] != param_1) {
      iVar6 = 2;
      goto LAB_2c4bb1a0;
    }
    iVar6 = 1;
  }
  _LAB_2c4bb1f8[iVar6] = 0xff;
LAB_2c4bb1a0:
  if (iVar5 == 0) {
    *_LAB_2c4bb1f4 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  if (iVar6 != 2) {
    uVar3 = FUN_2c4bf200(param_1);
    FUN_2c4beffc(param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(_LAB_2c4bb1fc + iVar6 * 4);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      uVar4 = *(uint *)(_LAB_2c4bb200 + iVar6 * 4);
      if (uVar3 < uVar4) {
        iVar5 = uVar4 - uVar3;
      }
      else {
        iVar5 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x2c4bb1de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar5,param_3);
      return;
    }
  }
  return;
}


/* FUN_2c4bb0a0 @ 0x2c4bb0a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bb0a0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_lr;
  
  puVar2 = _LAB_2c4bb160;
  iVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar6 = getBasePriority();
  }
  if (iVar6 != 0x40) {
    *_LAB_2c4bb160 = 0x2c4bb0b4;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*_LAB_2c4bb164 == param_1) {
    iVar8 = 0;
LAB_2c4bb14c:
    if (*(char *)(_LAB_2c4bb170 + iVar8) == '\0') {
      _LAB_2c4bb164[iVar8] = 0xff;
    }
  }
  else {
    if (_LAB_2c4bb164[1] == param_1) {
      iVar8 = 1;
      goto LAB_2c4bb14c;
    }
    iVar8 = 2;
  }
  if (iVar6 == 0) {
    *_LAB_2c4bb160 = 0xffffffff;
  }
  iVar3 = _LAB_2c4bb170;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar6);
  }
  if (iVar8 == 2) {
    return;
  }
  cVar5 = *(char *)(_LAB_2c4bb170 + iVar8);
  if (cVar5 == '\0') {
    uVar7 = FUN_2c4bf200(param_1);
    FUN_2c4beffc(param_1);
    UNRECOVERED_JUMPTABLE = *(code **)(_LAB_2c4bb168 + iVar8 * 4);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    cVar5 = *(char *)(iVar3 + iVar8);
    if (cVar5 == '\0') {
      uVar4 = *(uint *)(_LAB_2c4bb16c + iVar8 * 4);
      if (uVar7 < uVar4) {
        uVar7 = uVar4 - uVar7;
      }
      else {
        uVar7 = 0;
      }
      goto LAB_2c4bb0f8;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(_LAB_2c4bb168 + iVar8 * 4);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    uVar7 = 0;
  }
  if (cVar5 == '\x01') {
    uVar7 = *(uint *)(_LAB_2c4bb16c + iVar8 * 4) >> 1;
  }
LAB_2c4bb0f8:
                    /* WARNING: Could not recover jumptable at 0x2c4bb104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar7,param_3,0);
  return;
}


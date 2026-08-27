/* FUN_2c13aaf4 @ 0x2c13aaf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13aaf4(uint param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = _DAT_2c13ab8c;
  if ((2 < param_2) || (4 < param_1)) {
    uVar3 = FUN_2c135988(4,0xc4,_DAT_2c13ab84,_DAT_2c13ab80,_DAT_2c13ab7c,param_2);
    return uVar3;
  }
  FUN_2c135988(4,199,_DAT_2c13ab84,_DAT_2c13ab80,_DAT_2c13ab88,param_1,param_2);
  FUN_2c13f29c(*puVar2,0xffffffff);
  if (param_2 == 1) {
    _DAT_2c13ab90[1] = 0;
  }
  else if (param_2 == 2) {
    _DAT_2c13ab90[2] = 0;
  }
  else {
    *_DAT_2c13ab90 = 0;
  }
  if ((*(char *)(_DAT_2c13ab94 + param_1 * 0xc + 4) != '\0') &&
     (pcVar4 = *(code **)(*(int *)(_DAT_2c13ab94 + param_1 * 0xc) + 0x18), pcVar4 != (code *)0x0)) {
    (*pcVar4)(param_2,0);
  }
  uVar3 = *puVar2;
  FUN_2c13eeb8();
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getCurrentExceptionNumber();
    uVar5 = uVar5 & 0x1ff;
  }
  if (uVar5 == 0) {
    iVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar6 = isIRQinterruptsEnabled();
    }
    if (iVar6 == 0) {
      iVar6 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar6 = getBasePriority();
      }
      if (iVar6 == 0) {
        software_interrupt(0);
        return uVar3;
      }
    }
  }
  FUN_2c13ee98(uVar3,0xfffffffa);
  return 0xfffffffa;
}


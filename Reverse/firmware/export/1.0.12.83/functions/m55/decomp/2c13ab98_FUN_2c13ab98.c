/* FUN_2c13ab98 @ 0x2c13ab98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13ab98(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = _DAT_2c13ac64;
  iVar6 = _DAT_2c13ac60;
  if ((2 < param_2) || (4 < param_1)) {
    uVar3 = FUN_2c135988(4,0xe6,_DAT_2c13ac54,_DAT_2c13ac50,_DAT_2c13ac4c,param_2);
    return uVar3;
  }
  FUN_2c135988(4,0xea,_DAT_2c13ac54,_DAT_2c13ac50,_DAT_2c13ac58,param_1,param_2,param_3,
               *(undefined1 *)(_DAT_2c13ac60 + param_1 * 0xc + 4),param_4);
  FUN_2c13f29c(*puVar2,0xffffffff);
  if (param_2 == 1) {
    if (param_4 == 0) goto LAB_2c13ac2a;
    _DAT_2c13ac5c[1] = param_4;
  }
  else if (param_2 == 2) {
    if (param_4 == 0) goto LAB_2c13ac2a;
    _DAT_2c13ac5c[2] = param_4;
  }
  else {
    if (param_4 == 0) goto LAB_2c13ac2a;
    *_DAT_2c13ac5c = param_4;
  }
  if ((*(char *)(iVar6 + param_1 * 0xc + 4) != '\0') &&
     (pcVar4 = *(code **)(*(int *)(iVar6 + param_1 * 0xc) + 0x18), pcVar4 != (code *)0x0)) {
    (*pcVar4)(param_2,param_3);
  }
LAB_2c13ac2a:
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


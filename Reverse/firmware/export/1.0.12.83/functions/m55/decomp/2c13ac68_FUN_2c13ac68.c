/* FUN_2c13ac68 @ 0x2c13ac68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c13ac68(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  
  puVar2 = _DAT_2c13acf0;
  if (2 < *param_1) {
    uVar3 = FUN_2c135988(4,0x108,_DAT_2c13acfc,_DAT_2c13acf8,_DAT_2c13acf4,*param_1);
    return uVar3;
  }
  FUN_2c13f29c(*_DAT_2c13acf0,0xffffffff);
  iVar4 = *param_1;
  if (iVar4 == 1) {
    pcVar5 = (code *)_DAT_2c13ad00[1];
joined_r0x2c13ace2:
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(param_1);
      uVar3 = *puVar2;
      goto FUN_2c13f2d8;
    }
  }
  else {
    if (iVar4 == 2) {
      pcVar5 = (code *)_DAT_2c13ad00[2];
      goto joined_r0x2c13ace2;
    }
    if (iVar4 == 0) {
      pcVar5 = (code *)*_DAT_2c13ad00;
      goto joined_r0x2c13ace2;
    }
    FUN_2c135988(4,0x131,_DAT_2c13acfc,_DAT_2c13acf8,_DAT_2c13acf4,iVar4);
  }
  uVar3 = *puVar2;
FUN_2c13f2d8:
  FUN_2c13eeb8();
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getCurrentExceptionNumber();
    uVar6 = uVar6 & 0x1ff;
  }
  if (uVar6 == 0) {
    iVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar4 = isIRQinterruptsEnabled();
    }
    if (iVar4 == 0) {
      iVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar4 = getBasePriority();
      }
      if (iVar4 == 0) {
        software_interrupt(0);
        return uVar3;
      }
    }
  }
  FUN_2c13ee98(uVar3,0xfffffffa);
  return 0xfffffffa;
}


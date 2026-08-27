/* FUN_2c139008 @ 0x2c139008 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c139008(uint param_1,undefined1 param_2,undefined4 param_3,undefined2 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  
  puVar3 = _DAT_2c1390d8;
  puVar2 = _DAT_2c1390c0;
  if (0xfd < (param_1 - 1 & 0xff)) {
    uVar6 = FUN_2c135988(4,0xc4,_DAT_2c1390d0,_DAT_2c1390cc,_DAT_2c1390d4,param_1,_DAT_2c1390d0,0xc4
                        );
    return uVar6;
  }
  if (*_DAT_2c1390bc != '\0') {
    FUN_2c13f29c(*_DAT_2c1390d8,0xffffffff);
    for (iVar4 = func_0x2c13e200(*puVar2); iVar5 = func_0x2c13e218(*puVar2), iVar4 != iVar5;
        iVar4 = func_0x2c13e230(iVar4)) {
      if ((**(byte **)(iVar4 + 4) == param_1) &&
         (pcVar7 = *(code **)(*(byte **)(iVar4 + 4) + 4), pcVar7 != (code *)0x0)) {
        (*pcVar7)(param_2,param_3,param_4);
      }
    }
    uVar6 = *puVar3;
    FUN_2c13eeb8();
    uVar8 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar8 = getCurrentExceptionNumber();
      uVar8 = uVar8 & 0x1ff;
    }
    if (uVar8 == 0) {
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
          return uVar6;
        }
      }
    }
    FUN_2c13ee98(uVar6,0xfffffffa);
    return 0xfffffffa;
  }
  uVar6 = FUN_2c135988(4,0xcd,_DAT_2c1390d0,_DAT_2c1390cc,_DAT_2c1390c8,_DAT_2c1390c4);
  return uVar6;
}


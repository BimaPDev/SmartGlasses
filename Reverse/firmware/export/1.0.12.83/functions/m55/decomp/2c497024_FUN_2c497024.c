/* FUN_2c497024 @ 0x2c497024 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c497024(uint param_1,undefined1 param_2,undefined4 param_3,undefined2 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  
  puVar3 = _LAB_2c4970f4;
  puVar2 = _LAB_2c4970dc;
  if (0xfd < (param_1 - 1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xc4,_LAB_2c4970ec,_LAB_2c4970e8,_LAB_2c4970f0,param_1,_LAB_2c4970ec,0xc4);
  }
  if (*_LAB_2c4970d8 != '\0') {
    FUN_2c644044(*_LAB_2c4970f4,0xffffffff);
    for (iVar4 = FUN_2c485890(*puVar2); iVar5 = FUN_2c4858a8(*puVar2), iVar4 != iVar5;
        iVar4 = FUN_2c4858c0(iVar4)) {
      if ((**(byte **)(iVar4 + 4) == param_1) &&
         (pcVar7 = *(code **)(*(byte **)(iVar4 + 4) + 4), pcVar7 != (code *)0x0)) {
        (*pcVar7)(param_2,param_3,param_4);
      }
    }
    uVar6 = *puVar3;
    FUN_2c643b2c();
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
    FUN_2c643b08(uVar6,0xfffffffa);
    return 0xfffffffa;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xcd,_LAB_2c4970ec,_LAB_2c4970e8,_LAB_2c4970e4,_LAB_2c4970e0);
}


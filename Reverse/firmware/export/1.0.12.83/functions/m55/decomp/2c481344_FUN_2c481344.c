/* FUN_2c481344 @ 0x2c481344 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c481344(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  
  piVar3 = _LAB_2c4813cc;
  puVar2 = _LAB_2c4813c8;
  FUN_2c644044(*_LAB_2c4813c8,0xffffffff);
  uVar4 = _LAB_2c4813e0;
  uVar6 = _LAB_2c4813d0;
  uVar5 = (uint)*(byte *)(piVar3 + 10);
  if (uVar5 < 10) {
    if (uVar5 != 0) {
      uVar8 = 0;
      piVar7 = piVar3;
      do {
        uVar8 = uVar8 + 1;
        if (*piVar7 == param_1) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x282,_LAB_2c4813dc,_LAB_2c4813d8,_LAB_2c4813d4,_LAB_2c4813d0);
        }
        piVar7 = piVar7 + 1;
      } while (uVar8 != uVar5);
    }
    piVar3[uVar5] = param_1;
    *(char *)(piVar3 + 10) = (char)(uVar5 + 1);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x28a,_LAB_2c4813dc,_LAB_2c4813d8,uVar4,uVar6,uVar5 + 1 & 0xff);
  }
  uVar6 = *puVar2;
  FUN_2c643b2c();
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getCurrentExceptionNumber();
    uVar5 = uVar5 & 0x1ff;
  }
  if (uVar5 == 0) {
    iVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar9 = isIRQinterruptsEnabled();
    }
    if (iVar9 == 0) {
      iVar9 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar9 = getBasePriority();
      }
      if (iVar9 == 0) {
        software_interrupt(0);
        return uVar6;
      }
    }
  }
  FUN_2c643b08(uVar6,0xfffffffa);
  return 0xfffffffa;
}


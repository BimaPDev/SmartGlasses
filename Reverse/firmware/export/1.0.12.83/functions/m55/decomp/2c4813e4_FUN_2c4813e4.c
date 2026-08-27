/* FUN_2c4813e4 @ 0x2c4813e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4813e4(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  
  puVar6 = _LAB_2c4814a0;
  piVar2 = _LAB_2c48148c;
  FUN_2c644044(*_LAB_2c4814a0,0xffffffff);
  uVar7 = _LAB_2c4814a4;
  uVar5 = _LAB_2c48149c;
  uVar4 = _LAB_2c481498;
  uVar3 = _LAB_2c481494;
  uVar8 = _LAB_2c481490;
  uVar9 = (uint)*(byte *)(piVar2 + 10);
  if (uVar9 != 0) {
    uVar12 = 0;
    piVar10 = piVar2;
    do {
      if (*piVar10 == param_1) {
        uVar9 = uVar9 - 1;
        if ((int)uVar12 < (int)uVar9) {
          piVar2[uVar12] = (piVar2 + uVar12)[1];
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x296,uVar5,uVar4,uVar7,uVar8,uVar12 + 1,uVar12);
        }
        *(char *)(piVar2 + 10) = (char)uVar9;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x299,_LAB_2c48149c,_LAB_2c481498,uVar3,uVar8,uVar9 & 0xff);
      }
      uVar12 = uVar12 + 1;
      piVar10 = piVar10 + 1;
    } while (uVar12 != uVar9);
  }
  uVar8 = *puVar6;
  FUN_2c643b2c();
  uVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar9 = getCurrentExceptionNumber();
    uVar9 = uVar9 & 0x1ff;
  }
  if (uVar9 == 0) {
    iVar11 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar11 = isIRQinterruptsEnabled();
    }
    if (iVar11 == 0) {
      iVar11 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar11 = getBasePriority();
      }
      if (iVar11 == 0) {
        software_interrupt(0);
        return uVar8;
      }
    }
  }
  FUN_2c643b08(uVar8,0xfffffffa);
  return 0xfffffffa;
}


/* FUN_2c4e8240 @ 0x2c4e8240 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e8240(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  
  piVar5 = _LAB_2c4e83f0;
  iVar9 = *_LAB_2c4e83f0;
  if (iVar9 == 0) {
    func_0x2c4e804c();
    iVar9 = *piVar5;
  }
  iVar9 = FUN_2c644044(iVar9,0);
  uVar3 = _LAB_2c4e83d0;
  uVar2 = _LAB_2c4e83c8;
  uVar8 = _LAB_2c4e83c4;
  piVar6 = _LAB_2c4e83c0;
  if (iVar9 != 0) {
    iVar9 = FUN_2c4e9354();
                    /* WARNING: Could not recover jumptable at 0x2c4e839e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(iVar9 + 0x58))(_LAB_2c4e83d8,_LAB_2c4e83e8);
    return uVar8;
  }
  if (((*_LAB_2c4e83c0 == 0) || (iVar9 = func_0x2c646914(), iVar9 < 1)) ||
     (iVar9 = func_0x2c646914(*piVar6), 3 < iVar9)) {
                    /* WARNING: Subroutine does not return */
    TRACE(1,0x15f,uVar2,uVar3,uVar8);
  }
  piVar6 = (int *)func_0x2c4f00f0(0x44);
  FUN_2c674268(piVar6 + 1,0,0x40);
  *piVar6 = param_1;
  if (param_1 < 0x11) {
    if (param_1 < 1) goto LAB_2c4e8354;
  }
  else {
    *piVar6 = 0x10;
  }
  uVar8 = _LAB_2c4e83f4;
  puVar4 = _LAB_2c4e83dc;
  puVar11 = (undefined4 *)(param_2 + -4);
  iVar9 = 0;
  piVar12 = piVar6;
  do {
    iVar7 = FUN_2c6477b8(*puVar4,0);
    iVar9 = iVar9 + 1;
    piVar12 = piVar12 + 1;
    *piVar12 = iVar7;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(1,0x16c,_LAB_2c4e83c8,_LAB_2c4e83d0,_LAB_2c4e83cc);
    }
    puVar11 = puVar11 + 1;
    FUN_2c66b450(iVar7,0x20,uVar8,*puVar11);
  } while (iVar9 < *piVar6);
LAB_2c4e8354:
  FUN_2c646b44(2);
  uVar8 = FUN_2c646854();
  *_LAB_2c4e83e0 = uVar8;
  iVar9 = FUN_2c644230(*_LAB_2c4e83e4,piVar6,0);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(1,0x177,_LAB_2c4e83c8,_LAB_2c4e83d0,_LAB_2c4e83ec,iVar9);
  }
  FUN_2c644080(*piVar5);
  FUN_2c643ab4(2,0,0xffffffff);
  uVar10 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar10 = getCurrentExceptionNumber();
    uVar10 = uVar10 & 0x1ff;
  }
  if (uVar10 == 0) {
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
        return 2;
      }
    }
  }
  FUN_2c643a9c(0,0xfffffffa);
  return 0xfffffffa;
}


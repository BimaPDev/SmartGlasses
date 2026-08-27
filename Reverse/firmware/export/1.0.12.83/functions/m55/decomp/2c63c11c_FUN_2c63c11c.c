/* FUN_2c63c11c @ 0x2c63c11c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c63c11c(void)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  piVar2 = _LAB_2c63c194;
  if ((*_LAB_2c63c194 == 0) || (iVar4 = FUN_2c485770(), puVar3 = _LAB_2c63c1ac, iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x2ac,_LAB_2c63c1a0,_LAB_2c63c19c,_LAB_2c63c198);
  }
  FUN_2c644044(*_LAB_2c63c1ac,0xffffffff);
  for (iVar4 = FUN_2c485890(*piVar2); iVar5 = FUN_2c4858a8(*piVar2), iVar4 != iVar5;
      iVar4 = FUN_2c4858c0(iVar4)) {
    if ((code *)**(undefined4 **)(iVar4 + 4) != (code *)0x0) {
      (*(code *)**(undefined4 **)(iVar4 + 4))();
    }
  }
  uVar6 = *puVar3;
  FUN_2c643b2c();
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getCurrentExceptionNumber();
    uVar7 = uVar7 & 0x1ff;
  }
  if (uVar7 == 0) {
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


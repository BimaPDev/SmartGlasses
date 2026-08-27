/* FUN_2c489584 @ 0x2c489584 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c489584(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  puVar2 = _LAB_2c489644;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9f,_LAB_2c489658,_LAB_2c489654,_LAB_2c489668);
  }
  if (*_LAB_2c489640 == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xa3,_LAB_2c489658,_LAB_2c489654,_LAB_2c48965c);
  }
  FUN_2c644044(*_LAB_2c489644,0xffffffff);
  piVar4 = (int *)FUN_2c4728e8(5,4);
  puVar3 = _LAB_2c489648;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xa9,_LAB_2c489658,_LAB_2c489654,_LAB_2c489664,_LAB_2c489660);
  }
  *piVar4 = param_1;
  iVar5 = FUN_2c4858f0(*puVar3,_LAB_2c48964c,piVar4);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xb0,_LAB_2c489658,_LAB_2c489654,_LAB_2c489650);
  }
  FUN_2c4857c8(*puVar3,piVar4);
  uVar6 = *puVar2;
  FUN_2c643b2c();
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getCurrentExceptionNumber();
    uVar7 = uVar7 & 0x1ff;
  }
  if (uVar7 == 0) {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = isIRQinterruptsEnabled();
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar5 = getBasePriority();
      }
      if (iVar5 == 0) {
        software_interrupt(0);
        return uVar6;
      }
    }
  }
  FUN_2c643b08(uVar6,0xfffffffa);
  return 0xfffffffa;
}


/* FUN_2c63cbe0 @ 0x2c63cbe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c63cbe0(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  puVar3 = _LAB_2c63cc8c;
  piVar2 = _LAB_2c63cc88;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x3ee,_LAB_2c63cc9c,_LAB_2c63cca0,_LAB_2c63cca8);
  }
  if (*_LAB_2c63cc84 != '\0') {
    if (*_LAB_2c63cc88 != 0) {
      piVar4 = (int *)FUN_2c4728e8(4);
      *piVar4 = param_1;
      FUN_2c644044(*puVar3,0xffffffff);
      iVar5 = FUN_2c4858f0(*piVar2,_LAB_2c63cc90,piVar4);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x3fd,_LAB_2c63cc9c,_LAB_2c63cca0,_LAB_2c63cc98,_LAB_2c63cc94,param_1);
      }
      FUN_2c4857c8(*piVar2,piVar4);
      uVar6 = *puVar3;
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
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x3f3,_LAB_2c63cc9c,_LAB_2c63cca0,_LAB_2c63cca4);
}


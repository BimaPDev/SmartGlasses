/* FUN_2c48a2d0 @ 0x2c48a2d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48a2d0(code *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  puVar2 = _LAB_2c48a3d0;
  if (param_1 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1e2,_LAB_2c48a3e4,_LAB_2c48a3e0,_LAB_2c48a400);
  }
  if (*_LAB_2c48a3cc == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1e6,_LAB_2c48a3e4,_LAB_2c48a3e0,_LAB_2c48a3f0);
  }
  FUN_2c644044(*_LAB_2c48a3d0,0xffffffff);
  puVar4 = (undefined4 *)FUN_2c4728e8(5,4);
  puVar3 = _LAB_2c48a3d4;
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1ec,_LAB_2c48a3e4,_LAB_2c48a3e0,_LAB_2c48a3fc,_LAB_2c48a3f8);
  }
  *puVar4 = param_1;
  iVar5 = FUN_2c4858f0(*puVar3,_LAB_2c48a3d8,puVar4);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,499,_LAB_2c48a3e4,_LAB_2c48a3e0,_LAB_2c48a3dc);
  }
  FUN_2c4857c8(*puVar3,puVar4);
  if (*_LAB_2c48a3e8 == '\0') {
    uVar6 = *puVar2;
  }
  else {
    (*param_1)(*_LAB_2c48a3ec);
    uVar6 = *puVar2;
  }
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


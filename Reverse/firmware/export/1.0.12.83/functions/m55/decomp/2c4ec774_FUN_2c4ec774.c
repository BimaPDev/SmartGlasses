/* FUN_2c4ec774 @ 0x2c4ec774 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ec774(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  *_LAB_2c4ec7ac = (char)param_1;
  if (param_1 != 0) {
    iVar3 = func_0x2c4911fc();
    *_LAB_2c4ec7b0 = (char)iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    if (*_LAB_2c4911dc == '\0') {
      return 0xffffffff;
    }
    if (*_LAB_2c4911e0 != '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x12f,_LAB_2c4911f0,_LAB_2c4911ec);
    }
    *_LAB_2c4911dc = '\0';
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x135,_LAB_2c4911f0,_LAB_2c4911ec);
  }
  if (*_LAB_2c4ec7b0 != '\0') {
    FUN_2c4910d8();
  }
  uVar2 = _LAB_2c4ec7b4;
  piVar1 = _LAB_2c4ec160;
  iVar3 = *_LAB_2c4ec160;
  iStack_1c = *_LAB_2c4ec164;
  if (iVar3 == 0) {
    func_0x2c4ebff8(_LAB_2c4ec7b4,1000,0);
    iVar3 = *piVar1;
    if (iVar3 == 0) goto LAB_2c4ec10c;
  }
  FUN_2c644044(iVar3,0xffffffff);
LAB_2c4ec10c:
  uStack_28 = 1000;
  uStack_20 = 0;
  uStack_24 = uVar2;
  iVar3 = FUN_2c6450ec(*_LAB_2c4ec168,&uStack_28,0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x83,_LAB_2c4ec174,_LAB_2c4ec170,_LAB_2c4ec16c,iVar3);
  }
  uVar2 = 0;
  if (*piVar1 != 0) {
    uVar2 = FUN_2c644080();
  }
  if (*_LAB_2c4ec164 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar2;
}


/* FUN_2c4ece30 @ 0x2c4ece30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ece30(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  uVar3 = FUN_2c4ee058(param_1,_LAB_2c4ece50);
  uVar2 = _LAB_2c4ece58;
  *_LAB_2c4ece54 = uVar3;
  piVar1 = _LAB_2c4ec160;
  iVar4 = *_LAB_2c4ec160;
  iStack_1c = *_LAB_2c4ec164;
  if (iVar4 == 0) {
    func_0x2c4ebff8(uVar2,1000,0);
    iVar4 = *piVar1;
    if (iVar4 == 0) goto LAB_2c4ec10c;
  }
  FUN_2c644044(iVar4,0xffffffff);
LAB_2c4ec10c:
  uStack_28 = 1000;
  uStack_20 = 0;
  uStack_24 = uVar2;
  iVar4 = FUN_2c6450ec(*_LAB_2c4ec168,&uStack_28,0);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x83,_LAB_2c4ec174,_LAB_2c4ec170,_LAB_2c4ec16c,iVar4);
  }
  if (*piVar1 != 0) {
    FUN_2c644080();
  }
  if (*_LAB_2c4ec164 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


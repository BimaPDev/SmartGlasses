/* FUN_2c4ecdb0 @ 0x2c4ecdb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ecdb0(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  uVar3 = _LAB_2c4ecde8;
  *_LAB_2c4ecde4 = param_1;
  uVar3 = FUN_2c4ee058(param_1,uVar3);
  *_LAB_2c4ecdec = uVar3;
  iVar4 = func_0x2c4e9434();
  iVar4 = (**(code **)(iVar4 + 0x18))();
  if (iVar4 == 0) {
    uVar3 = FUN_2c62bdd8(_LAB_2c4ecdf0,1000,0);
    *_LAB_2c4ecdf4 = uVar3;
    return;
  }
  *_LAB_2c4ecc84 = 1;
  puVar2 = (undefined4 *)func_0x2c4e9434();
  (*(code *)*puVar2)(_LAB_2c4ecc88);
  iVar4 = func_0x2c4e9434();
  (**(code **)(iVar4 + 0x10))();
  FUN_2c638730(*_LAB_2c4ecc8c,_LAB_2c4ecc90);
  uVar3 = _LAB_2c4ecc94;
  piVar1 = _LAB_2c4ec160;
  iVar4 = *_LAB_2c4ec160;
  iStack_1c = *_LAB_2c4ec164;
  if (iVar4 == 0) {
    func_0x2c4ebff8(_LAB_2c4ecc94,10000,0);
    iVar4 = *piVar1;
    if (iVar4 == 0) goto LAB_2c4ec10c;
  }
  FUN_2c644044(iVar4,0xffffffff);
LAB_2c4ec10c:
  uStack_28 = 10000;
  uStack_20 = 0;
  uStack_24 = uVar3;
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


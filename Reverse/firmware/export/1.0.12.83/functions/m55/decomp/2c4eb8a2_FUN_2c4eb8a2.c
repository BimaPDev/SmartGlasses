/* FUN_2c4eb8a2 @ 0x2c4eb8a2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4eb8a2(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    (**(code **)(*(int *)(param_1 + 0x10) + 8))();
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  piVar2 = _LAB_2c4ec160;
  uVar1 = _LAB_2c4eb8d0;
  iVar3 = *_LAB_2c4ec160;
  iStack_1c = *_LAB_2c4ec164;
  if (iVar3 == 0) {
    func_0x2c4ebff8(_LAB_2c4eb8d0,100,0);
    iVar3 = *piVar2;
    if (iVar3 == 0) goto LAB_2c4ec10c;
  }
  FUN_2c644044(iVar3,0xffffffff);
LAB_2c4ec10c:
  uStack_28 = 100;
  uStack_20 = 0;
  uStack_24 = uVar1;
  iVar3 = FUN_2c6450ec(*_LAB_2c4ec168,&uStack_28,0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x83,_LAB_2c4ec174,_LAB_2c4ec170,_LAB_2c4ec16c,iVar3);
  }
  if (*piVar2 != 0) {
    FUN_2c644080();
  }
  if (*_LAB_2c4ec164 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


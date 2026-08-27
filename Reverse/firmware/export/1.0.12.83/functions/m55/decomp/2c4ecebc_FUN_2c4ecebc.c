/* FUN_2c4ecebc @ 0x2c4ecebc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ecebc(void)

{
  byte bVar1;
  int *piVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = _LAB_2c4ecf1c;
  if (*_LAB_2c4ecf1c != '\0') {
    iVar6 = FUN_2c4e9354();
    (**(code **)(iVar6 + 0x44))();
    *pcVar3 = '\0';
  }
  pbVar4 = _LAB_2c4ecf20;
  if (2 < *_LAB_2c4ecf20) {
                    /* WARNING: Could not recover jumptable at 0x2c4eced8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*_LAB_2c4ecf24 + 0x10) + 0x14))();
    return;
  }
  FUN_2c638730(*_LAB_2c4ecf28,*(undefined4 *)(_LAB_2c4ecf2c + (uint)*_LAB_2c4ecf20 * 4));
  bVar1 = *pbVar4;
  *pbVar4 = bVar1 + 1;
  iVar6 = FUN_2c4e9354();
  (**(code **)(iVar6 + 0x40))(bVar1);
  *pcVar3 = '\x01';
  uVar5 = _LAB_2c4ecf30;
  piVar2 = _LAB_2c4ec160;
  iVar6 = *_LAB_2c4ec160;
  iStack_1c = *_LAB_2c4ec164;
  if (iVar6 == 0) {
    func_0x2c4ebff8(_LAB_2c4ecf30,3000,0);
    iVar6 = *piVar2;
    if (iVar6 == 0) goto LAB_2c4ec10c;
  }
  FUN_2c644044(iVar6,0xffffffff);
LAB_2c4ec10c:
  uStack_28 = 3000;
  uStack_20 = 0;
  uStack_24 = uVar5;
  iVar6 = FUN_2c6450ec(*_LAB_2c4ec168,&uStack_28,0);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x83,_LAB_2c4ec174,_LAB_2c4ec170,_LAB_2c4ec16c,iVar6);
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


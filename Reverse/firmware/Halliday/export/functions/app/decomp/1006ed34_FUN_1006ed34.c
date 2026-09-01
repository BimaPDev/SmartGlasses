/* FUN_1006ed34 @ 0x1006ed34 */

undefined4 FUN_1006ed34(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar4 = DAT_1006eda4;
  piVar3 = DAT_1006ed9c;
  do {
    iVar6 = 0x1f5;
    do {
      uVar7 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar7 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
        setBasePriority(0x20);
      }
      InstructionSynchronizationBarrier(0xf);
      if (*piVar3 == 0) {
        return uVar7;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar5 = FUN_1013c70e();
      if (iVar5 != 0) {
        FUN_10119dc2(DAT_1006eda0);
        FUN_1013d9c0(5000);
        return uVar7;
      }
      FUN_101153fc(2,0);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_10119dc2(uVar4,param_1);
    iVar6 = FUN_1013c70e();
    if (iVar6 != 0) {
      *piVar3 = 0;
    }
  } while( true );
}


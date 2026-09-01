/* FUN_10113c54 @ 0x10113c54 */

int FUN_10113c54(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  
  puVar3 = DAT_10113cf8;
  *(undefined4 *)(param_2 + 0x20) = DAT_10113cf8[2];
  uVar6 = 0x20;
  uVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar9 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar8 = (int *)*param_1;
  puVar7 = puVar3;
  piVar10 = param_1;
  iVar4 = param_2;
  iVar11 = param_3;
  if (param_1 != piVar8) {
    for (; piVar8 != (undefined4 *)0x0; piVar8 = (int *)*piVar8) {
      iVar5 = FUN_1013c78e(piVar8[5],param_2,uVar6,puVar7,piVar10,iVar4,iVar11);
      if (iVar5 == 0) {
        FUN_1013cc34(piVar8);
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar9);
        }
        InstructionSynchronizationBarrier(0xf);
        goto LAB_10113cc6;
      }
      puVar7 = (undefined4 *)param_1[1];
      if (piVar8 == puVar7) break;
      uVar6 = extraout_r2;
    }
  }
  if (param_5 == 0 && param_6 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar9);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar4 = -0x23;
  }
  else {
    iVar4 = puVar3[2];
    *(int *)(iVar4 + 0x14) = param_2;
    iVar4 = FUN_10114f68(param_1 + 4,uVar9,param_1 + 2,iVar4,param_5,param_6);
    if (iVar4 == 0) {
LAB_10113cc6:
      if (param_3 == 0) {
        if (*(int *)(param_2 + 4) == 0) {
          FUN_10113b60(param_2);
        }
      }
      else {
        FUN_1013c7ee(param_2,param_3);
      }
      iVar4 = 0;
    }
  }
  return iVar4;
}


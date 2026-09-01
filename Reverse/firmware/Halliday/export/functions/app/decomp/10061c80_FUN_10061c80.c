/* FUN_10061c80 @ 0x10061c80 */

void FUN_10061c80(int *param_1,uint param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int *extraout_r2;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  
  uVar8 = param_4;
  if ((param_1 == (int *)0x0) || (uVar8 = 0, param_1[6] == 0)) {
    iVar11 = param_3;
    FUN_10119dc2(DAT_10061d58,DAT_10061d54,DAT_10061d50,0xea,param_1,param_2,param_3,uVar8,param_4);
    FUN_10119dc2(DAT_10061d5c);
    FUN_1011a1f0(DAT_10061d50,0xea,iVar11,uVar8);
  }
  uVar8 = 0;
  bVar10 = (bool)isCurrentModePrivileged();
  if (bVar10) {
    uVar8 = getBasePriority();
  }
  bVar10 = (bool)isCurrentModePrivileged();
  if ((bVar10) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x20 < uVar6)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_1006195c(param_1);
  lVar2 = FUN_100619bc();
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(ulonglong *)(param_1 + 4) = (ulonglong)param_2 * 0x20 + lVar2;
  iVar11 = DAT_10061d60;
  uVar9 = 0;
  bVar10 = (bool)isCurrentModePrivileged();
  if (bVar10) {
    uVar9 = getBasePriority();
  }
  bVar10 = (bool)isCurrentModePrivileged();
  if ((bVar10) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x20 < uVar6)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar1 = (int *)(DAT_10061d60 + 4);
  iVar3 = *piVar1;
  piVar4 = piVar1;
  if (((int *)iVar3 != piVar1) && (iVar3 != 0)) {
    uVar6 = param_1[4];
    uVar7 = param_1[5];
    do {
      bVar10 = *(uint *)(iVar3 + 0x14) <= uVar7;
      if (uVar7 == *(uint *)(iVar3 + 0x14)) {
        bVar10 = *(uint *)(iVar3 + 0x10) <= uVar6;
      }
      if (!bVar10) {
        puVar5 = *(undefined4 **)(iVar3 + 4);
        *param_1 = iVar3;
        param_1[1] = (int)puVar5;
        *puVar5 = param_1;
        *(int **)(iVar3 + 4) = param_1;
        goto LAB_10061d10;
      }
      iVar3 = FUN_1011c1aa(piVar1);
      piVar4 = extraout_r2;
    } while (iVar3 != 0);
  }
  puVar5 = *(undefined4 **)(iVar11 + 8);
  *param_1 = (int)piVar4;
  param_1[1] = (int)puVar5;
  *puVar5 = param_1;
  *(int **)(iVar11 + 8) = param_1;
LAB_10061d10:
  if ((*(int **)(iVar11 + 4) != piVar4) && (param_1 == *(int **)(iVar11 + 4))) {
    FUN_10061ba4(param_1[4],param_1[5]);
  }
  bVar10 = (bool)isCurrentModePrivileged();
  if (bVar10) {
    setBasePriority(uVar9);
  }
  InstructionSynchronizationBarrier(0xf);
  bVar10 = (bool)isCurrentModePrivileged();
  if (bVar10) {
    setBasePriority(uVar8);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


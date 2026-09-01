/* FUN_1006195c @ 0x1006195c */

void FUN_1006195c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  undefined4 extraout_r2_00;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar8 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar3 = (int *)(DAT_100619b8 + 4);
  piVar7 = (int *)*piVar3;
  if ((piVar7 != piVar3) && (piVar7 != (int *)0x0)) {
    piVar3 = (int *)FUN_1011c1aa(piVar3,piVar7,piVar3,0x20,param_4);
    uVar5 = extraout_r2;
    while (piVar4 = piVar3, param_1 != piVar7) {
      if (piVar4 == (int *)0x0) goto LAB_1006197a;
      piVar3 = (int *)FUN_1011c1aa(uVar5,piVar4);
      uVar5 = extraout_r2_00;
      piVar7 = piVar4;
    }
    iVar6 = *param_1;
    piVar3 = (int *)param_1[1];
    *piVar3 = iVar6;
    *(int **)(iVar6 + 4) = piVar3;
    *param_1 = 0;
    param_1[1] = 0;
  }
LAB_1006197a:
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar8);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


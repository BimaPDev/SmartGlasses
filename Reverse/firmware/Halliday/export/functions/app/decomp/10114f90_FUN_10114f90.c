/* FUN_10114f90 @ 0x10114f90 */

undefined4
FUN_10114f90(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  byte bVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
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
  if (((*(byte *)((int)param_1 + 0xd) & 0x1f) == 0) && (param_1[6] == 0)) {
    bVar5 = *(byte *)((int)param_1 + 0xd) & 0x7f;
    *(byte *)((int)param_1 + 0xd) = bVar5;
    uVar9 = FUN_10114ac0(DAT_10115040,param_1,0,bVar5,param_4);
    *(undefined1 *)((int)param_1 + 0xe) = param_2;
    *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 0x80;
    iVar3 = DAT_10115044;
    if (param_1 == (undefined4 *)DAT_10115044) {
      FUN_10119dc2(DAT_10115050,DAT_1011504c,DAT_10115048,0xb1,uVar9);
      FUN_1011a1f0(DAT_10115048,0xb1,extraout_r2,iVar3);
    }
    iVar3 = DAT_10115054;
    piVar6 = *(int **)(DAT_10115054 + 0x20);
    piVar7 = *(int **)(DAT_10115054 + 0x24);
    if ((piVar6 != (int *)(DAT_10115054 + 0x20)) && (piVar6 != (int *)0x0)) {
      do {
        if (((int)*(char *)((int)param_1 + 0xe) != (int)*(char *)((int)piVar6 + 0xe)) &&
           (0 < (int)*(char *)((int)piVar6 + 0xe) - (int)*(char *)((int)param_1 + 0xe))) {
          piVar7 = (int *)piVar6[1];
          *param_1 = piVar6;
          param_1[1] = piVar7;
          *piVar7 = (int)param_1;
          piVar6[1] = (int)param_1;
          goto LAB_10115014;
        }
      } while ((piVar6 != piVar7) && (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0));
    }
    *param_1 = (int *)(DAT_10115054 + 0x20);
    param_1[1] = piVar7;
    *piVar7 = (int)param_1;
    *(undefined4 **)(iVar3 + 0x24) = param_1;
LAB_10115014:
    FUN_10114b50(1);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    *(undefined1 *)((int)param_1 + 0xe) = param_2;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar8);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar4;
}


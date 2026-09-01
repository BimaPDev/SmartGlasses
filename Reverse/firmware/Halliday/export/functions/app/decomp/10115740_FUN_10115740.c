/* FUN_10115740 @ 0x10115740 */

void FUN_10115740(int *param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  if (param_4 != -1 || param_3 != 0xffffffff) {
    iVar3 = *param_1;
    if (iVar3 != 0) {
      uVar4 = param_3;
      FUN_10119dc2(DAT_10115870,DAT_1011586c,DAT_10115868,0x5d,param_1,param_2,param_3,iVar3,param_1
                   ,param_2,param_3);
      FUN_10119dc2(DAT_10115874);
      FUN_1011a1f0(DAT_10115868,0x5d,uVar4,iVar3);
    }
    param_1[2] = param_2;
    uVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar9 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
      setBasePriority(0x20);
    }
    InstructionSynchronizationBarrier(0xf);
    if ((int)((-1 - param_4) - (uint)(0xfffffffe < param_3)) < 0) {
      uVar4 = FUN_101156a0();
      param_1[4] = param_3 + 1 + uVar4;
      param_1[5] = param_4 + (uint)(0xfffffffe < param_3) +
                   ((int)uVar4 >> 0x1f) + (uint)CARRY4(param_3 + 1,uVar4);
    }
    else {
      uVar4 = -*DAT_10115878 - 2;
      iVar3 = uVar4 - param_3;
      iVar7 = (((-1 - DAT_10115878[1]) - (uint)(0xfffffffe < *DAT_10115878)) - param_4) -
              (uint)(uVar4 < param_3);
      if (iVar7 < (int)(uint)(iVar3 == 0)) {
        iVar3 = 1;
        iVar7 = 0;
      }
      param_1[4] = iVar3;
      param_1[5] = iVar7;
    }
    piVar2 = DAT_1011587c;
    puVar5 = (undefined4 *)*DAT_1011587c;
    puVar6 = (undefined4 *)DAT_1011587c[1];
    if (puVar5 != DAT_1011587c) {
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        uVar8 = puVar5[4];
        iVar7 = puVar5[5];
        uVar4 = param_1[4];
        iVar3 = param_1[5];
        if ((int)((iVar3 - iVar7) - (uint)(uVar4 < uVar8)) < 0 !=
            (SBORROW4(iVar3,iVar7) != SBORROW4(iVar3 - iVar7,(uint)(uVar4 < uVar8)))) {
          puVar5[4] = uVar8 - uVar4;
          puVar5[5] = (iVar7 - iVar3) - (uint)(uVar8 < uVar4);
          puVar6 = (undefined4 *)puVar5[1];
          *param_1 = (int)puVar5;
          param_1[1] = (int)puVar6;
          *puVar6 = param_1;
          puVar5[1] = param_1;
          goto LAB_1011583c;
        }
        param_1[4] = uVar4 - uVar8;
        param_1[5] = (iVar3 - iVar7) - (uint)(uVar4 < uVar8);
        if (puVar5 == puVar6) break;
      }
    }
    *param_1 = (int)piVar2;
    param_1[1] = (int)puVar6;
    *puVar6 = param_1;
    piVar2[1] = (int)param_1;
LAB_1011583c:
    if ((((int *)*piVar2 != piVar2) && (param_1 == (int *)*piVar2)) &&
       ((iVar3 = FUN_101156e8(), iVar3 == 0 || (*(int *)(DAT_10115880 + 0x10) != iVar3)))) {
      FUN_10061800(iVar3,0);
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar9);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


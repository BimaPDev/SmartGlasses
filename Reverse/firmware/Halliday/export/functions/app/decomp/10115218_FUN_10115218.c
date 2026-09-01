/* FUN_10115218 @ 0x10115218 */

void FUN_10115218(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_r2;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getCurrentExceptionNumber();
    uVar6 = uVar6 & 0x1ff;
  }
  if (uVar6 != 0) {
    FUN_10119dc2(DAT_101152e4,DAT_101152e0,DAT_101152dc,0x4a1,param_1,param_2);
    FUN_10119dc2(DAT_101152e8);
    FUN_1011a1f0(DAT_101152dc,0x4a1,param_3,uVar6);
  }
  iVar2 = DAT_101152ec;
  uVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar9 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x20 < uVar6)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar4 = DAT_101152ec + 0x20;
  *(byte *)(*(int *)(DAT_101152ec + 8) + 0xd) = *(byte *)(*(int *)(DAT_101152ec + 8) + 0xd) & 0x7f;
  uVar10 = FUN_10114ac0(iVar4);
  piVar8 = *(int **)(iVar2 + 8);
  *(byte *)((int)piVar8 + 0xd) = *(byte *)((int)piVar8 + 0xd) | 0x80;
  piVar3 = DAT_101152f0;
  if (piVar8 == DAT_101152f0) {
    FUN_10119dc2(DAT_101152e4,DAT_101152f4,DAT_101152dc,0xb1,uVar10);
    FUN_1011a1f0(DAT_101152dc,0xb1,extraout_r2,piVar3);
  }
  puVar7 = *(undefined4 **)(iVar2 + 0x20);
  puVar5 = *(undefined4 **)(iVar2 + 0x24);
  if ((puVar7 != DAT_101152f8) && (puVar7 != (undefined4 *)0x0)) {
    do {
      if (((int)*(char *)((int)piVar8 + 0xe) != (int)*(char *)((int)puVar7 + 0xe)) &&
         (0 < (int)*(char *)((int)puVar7 + 0xe) - (int)*(char *)((int)piVar8 + 0xe))) {
        puVar5 = (undefined4 *)puVar7[1];
        *piVar8 = (int)puVar7;
        piVar8[1] = (int)puVar5;
        *puVar5 = piVar8;
        puVar7[1] = piVar8;
        goto LAB_101152b6;
      }
    } while ((puVar7 != puVar5) && (puVar7 = (undefined4 *)*puVar7, puVar7 != (undefined4 *)0x0));
  }
  *piVar8 = (int)DAT_101152f8;
  piVar8[1] = (int)puVar5;
  *puVar5 = piVar8;
  *(int **)(iVar2 + 0x24) = piVar8;
LAB_101152b6:
  FUN_10114b50(1);
  FUN_1013cbc2(uVar9);
  return;
}


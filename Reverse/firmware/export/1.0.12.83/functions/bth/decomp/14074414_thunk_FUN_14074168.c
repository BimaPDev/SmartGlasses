/* thunk_FUN_14074168 @ 0x14074414 */

void thunk_FUN_14074168(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  short sVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined4 unaff_lr;
  
  puVar5 = DAT_140742f4;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_140742fc,0x21c,DAT_140742f8,0,0);
  }
  iVar12 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    *DAT_140742f4 = 0x14074186;
    puVar5[1] = unaff_lr;
  }
  iVar7 = DAT_14074300;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(0x40);
  }
  piVar10 = param_1 + -1;
  if ((short)param_1[-1] != -0x7cc8) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_140742fc,0x235,DAT_140742f8,(short)param_1[-1],param_1);
  }
  uVar6 = 0;
  *(short *)(param_1 + -1) = -0xff1;
  uVar2 = *(ushort *)((int)param_1 + -2);
  uVar1 = *(ushort *)(iVar7 + 0x28);
  piVar8 = *(int **)(iVar7 + 0x18);
  while (param_1 < piVar8) {
LAB_14074246:
    uVar6 = uVar6 + 1 & 0xff;
    if (uVar6 == 4) {
LAB_14074262:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14074304,0x256,DAT_140742f8);
    }
    uVar1 = *(ushort *)(iVar7 + (uVar6 + 0x14) * 2);
    piVar8 = *(int **)(iVar7 + (uVar6 + 6) * 4);
  }
LAB_140741c8:
  if (param_1 <= (int *)((uint)uVar1 + (int)piVar8)) {
    if (uVar6 < 4) goto code_r0x140741d2;
    if (piVar8 != (int *)0x0) goto LAB_140741d6;
    goto LAB_14074262;
  }
  goto LAB_14074246;
code_r0x140741d2:
  if (piVar8 != (int *)0x0) {
LAB_140741d6:
    if (piVar8 == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14074304,599,DAT_140742f8);
    }
    piVar11 = (int *)0x0;
    goto LAB_14074204;
  }
  goto LAB_140741c8;
LAB_14074204:
  piVar9 = piVar8;
  if ((short)*piVar9 != -0x5aa6) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14074304,0x25f,DAT_140742f8);
  }
  if ((int *)((uint)*(ushort *)((int)piVar9 + 2) + (int)piVar9) == piVar10) {
    uVar6 = (uint)*(ushort *)((int)piVar9 + 2) + (uint)uVar2;
    iVar7 = piVar9[1];
    sVar4 = (short)uVar6;
    *(short *)((int)piVar9 + 2) = sVar4;
    if (iVar7 == (uVar6 & 0xffff) + (int)piVar9) {
      *(short *)((int)piVar9 + 2) = sVar4 + *(short *)(iVar7 + 2);
      piVar9[1] = *(int *)(iVar7 + 4);
      if (*(int *)(iVar7 + 4) != 0) {
        *(int **)(*(int *)(iVar7 + 4) + 8) = piVar9;
      }
    }
    goto LAB_1407422e;
  }
  if (piVar10 < piVar9) {
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14074304,0x27b,DAT_140742f8);
    }
    piVar11[1] = (int)piVar10;
    *(short *)(param_1 + -1) = -0x5aa6;
    param_1[1] = (int)piVar11;
    if (piVar9 == (int *)((int)piVar10 + (uint)uVar2)) {
      iVar7 = piVar9[1];
      *param_1 = iVar7;
      if (iVar7 != 0) {
        *(int **)(iVar7 + 8) = piVar10;
      }
      *(ushort *)((int)param_1 + -2) = uVar2 + *(short *)((int)piVar9 + 2);
    }
    else {
      *param_1 = (int)piVar9;
      piVar9[2] = (int)piVar10;
      *(ushort *)((int)param_1 + -2) = uVar2;
    }
    goto LAB_1407422e;
  }
  piVar8 = (int *)piVar9[1];
  piVar11 = piVar9;
  if ((int *)piVar9[1] == (int *)0x0) {
    piVar9[1] = (int)piVar10;
    param_1[1] = (int)piVar9;
    *(ushort *)((int)param_1 + -2) = uVar2;
    *param_1 = 0;
    *(short *)(param_1 + -1) = -0x5aa6;
LAB_1407422e:
    if (iVar12 == 0) {
      *DAT_140742f4 = 0xffffffff;
    }
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(iVar12);
    }
    return;
  }
  goto LAB_14074204;
}


/* FUN_2c4c2118 @ 0x2c4c2118 */

void FUN_2c4c2118(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 unaff_lr;
  
  puVar9 = DAT_2c4c2288;
  if (*(byte *)(param_1 + 0x35) <= param_2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1de,LAB_2c4c229c,DAT_2c4c2298,DAT_2c4c22a0,DAT_2c4c2290);
  }
  iVar11 = *(int *)(param_1 + 0x38);
  iVar12 = param_2 * 0x2c;
  iVar6 = iVar11 + iVar12;
  if (*(char *)(iVar6 + 0x2a) == '\0') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1e4,LAB_2c4c229c,DAT_2c4c2298,DAT_2c4c22b0,DAT_2c4c2290);
  }
  puVar10 = *(undefined4 **)(iVar6 + 8);
  iVar13 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar13 = getBasePriority();
  }
  if (iVar13 != 0x40) {
    *DAT_2c4c2288 = 0x2c4c214c;
    puVar9[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*(int *)(iVar6 + 0xc) != 0) {
    iVar14 = 0;
    do {
      if (*(char *)(puVar10 + 3) == '\0') {
        puVar10[2] = param_3;
        *puVar10 = 0;
        puVar10[1] = param_4;
        *(undefined1 *)(puVar10 + 3) = 1;
        if (*(int *)(iVar11 + iVar12) == 0) {
          *(undefined4 **)(iVar11 + iVar12) = puVar10;
          DataSynchronizationBarrier(0xf);
          piVar7 = *(int **)(iVar11 + iVar12);
          *DAT_2c4c22a8 = *DAT_2c4c22a8 + 1;
          piVar5 = DAT_2c4c22ac;
          while (piVar7 != (int *)0x0) {
            piVar7 = (int *)*piVar7;
            *piVar5 = *piVar5 + 1;
          }
          (**(code **)(param_1 + 0x10))(param_2);
        }
        else {
          puVar9 = *(undefined4 **)(iVar6 + 4);
          if (*(undefined4 **)(iVar6 + 4) == (undefined4 *)0x0) {
            *(undefined4 **)(iVar6 + 4) = puVar10;
          }
          else {
            do {
              puVar8 = puVar9;
              puVar9 = (undefined4 *)*puVar8;
            } while (puVar9 != (undefined4 *)0x0);
            *puVar8 = puVar10;
          }
        }
        if (param_5 != (int *)0x0) {
          *param_5 = iVar14;
        }
        iVar12 = iVar12 + *(int *)(param_1 + 0x38);
        if ((*(char *)(iVar12 + 0x29) == '\0') &&
           (*(undefined1 *)(iVar12 + 0x29) = 1, **(char **)(param_1 + 0x48) == '\0')) {
          FUN_2c4be700(*(undefined1 *)(param_1 + 0x34));
          **(undefined1 **)(param_1 + 0x48) = 1;
          iVar6 = 0;
        }
        else {
          iVar6 = 0;
        }
        goto LAB_2c4c21be;
      }
      iVar14 = iVar14 + 1;
      puVar10 = puVar10 + 4;
    } while (*(int *)(iVar6 + 0xc) != iVar14);
  }
  iVar6 = -1;
LAB_2c4c21be:
  if (iVar13 == 0) {
    *DAT_2c4c2288 = 0xffffffff;
  }
  uVar4 = DAT_2c4c2298;
  uVar3 = DAT_2c4c2294;
  uVar2 = DAT_2c4c2290;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar13);
  }
  if (iVar6 == 0) {
    return;
  }
  *DAT_2c4c228c = *DAT_2c4c228c + 1;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x214,LAB_2c4c229c,uVar4,uVar3,uVar2);
}


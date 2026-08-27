/* FUN_14074424 @ 0x14074424 */

void FUN_14074424(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  short sVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  undefined4 unaff_lr;
  
  puVar7 = DAT_14074620;
  iVar8 = 0;
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    iVar8 = getBasePriority();
  }
  if (iVar8 != 0x40) {
    param_3 = 0x14074438;
    *DAT_14074620 = 0x14074438;
    puVar7[1] = unaff_lr;
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    setBasePriority(0x40);
  }
  puVar7 = (undefined4 *)FUN_14073a58(DAT_14074624,param_2,param_3,0x40);
  if (iVar8 == 0) {
    *DAT_14074620 = 0xffffffff;
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    setBasePriority(iVar8);
  }
  if (puVar7 == (undefined4 *)0x0) {
LAB_14074488:
    puVar7 = DAT_14074620;
    iVar8 = 0;
    bVar5 = (bool)isCurrentModePrivileged();
    if (bVar5) {
      iVar8 = getBasePriority();
    }
    if (iVar8 != 0x40) {
      *DAT_14074620 = 0x14074494;
      puVar7[1] = unaff_lr;
    }
    bVar5 = (bool)isCurrentModePrivileged();
    if (bVar5) {
      setBasePriority(0x40);
    }
    if (*DAT_14074624 == 0) {
      FUN_14073cd4(3);
    }
    if (iVar8 == 0) {
      *DAT_14074620 = 0xffffffff;
    }
    bVar5 = (bool)isCurrentModePrivileged();
    if (bVar5) {
      setBasePriority(iVar8);
    }
    return;
  }
  uVar1 = *(undefined2 *)(puVar7 + 2);
  uVar2 = *(ushort *)((int)puVar7 + 6);
  uVar9 = (uint)uVar2;
  *puVar7 = 0xffffffff;
  uVar3 = *(ushort *)(puVar7 + 1);
  iVar8 = FUN_14074308(puVar7);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_1407462c,0x118,DAT_14074628,uVar3,uVar9);
  }
  uVar10 = uVar9 & 0xff;
  if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_1407462c,0xd7,DAT_1407463c,uVar3,uVar10);
  }
  piVar11 = *(int **)(DAT_14074630 + uVar10 * 4);
  if (*(ushort *)(piVar11 + 2) != 0) {
    if (*(ushort *)(piVar11 + 2) <= uVar2 >> 8) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x44,DAT_1407462c,0xdf,DAT_1407463c,uVar9,uVar3);
    }
    iVar8 = *piVar11;
    if (iVar8 != 0) {
      uVar2 = *(ushort *)((int)piVar11 + 10);
      iVar15 = (int)(short)(uVar2 - 1);
      if (-1 < iVar15) {
        iVar16 = 0;
        do {
          iVar12 = iVar16 + iVar15;
          uVar10 = iVar12 - (iVar12 >> 0x1f);
          if ((uint)uVar2 <= (uVar10 & 0x1ffff) >> 1) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,DAT_14074638,0x9f,DAT_14074634);
          }
          uVar13 = iVar12 / 2 & 0xffff;
          uVar4 = *(ushort *)(iVar8 + uVar13 * 8);
          sVar6 = (short)(uVar10 * 0x8000 >> 0x10);
          if (uVar4 < uVar3) {
            iVar16 = (int)(short)(sVar6 + 1);
          }
          else {
            if (uVar4 <= uVar3) {
              pcVar14 = *(code **)(iVar8 + uVar13 * 8 + 4);
              if (pcVar14 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_1402a64c(0x42,DAT_14074638,0xae,DAT_14074634);
              }
              goto LAB_14074586;
            }
            iVar15 = (int)(short)(sVar6 + -1);
          }
        } while (iVar16 <= iVar15);
      }
      iVar15 = uVar2 + 0x1fffffff;
      if (*(short *)(iVar8 + iVar15 * 8) == -1) {
        pcVar14 = *(code **)(iVar8 + iVar15 * 8 + 4);
        if (pcVar14 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_14074638,0xbb,DAT_14074634);
        }
LAB_14074586:
        iVar8 = (*pcVar14)(uVar3,puVar7 + 3,uVar9,uVar1);
        if (iVar8 != 1) {
          if (iVar8 == 2) {
            FUN_140739f0(DAT_14074640,puVar7);
          }
          else {
            if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x42,DAT_14074638,0x142,DAT_14074628);
            }
            thunk_FUN_14074168(puVar7);
          }
        }
        goto LAB_14074488;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_1407462c,0x120,DAT_14074628,uVar3,uVar9);
}


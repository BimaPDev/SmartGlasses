/* FUN_2c5f7280 @ 0x2c5f7280 */

void FUN_2c5f7280(undefined4 *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char cVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int *local_7c;
  int local_78;
  int local_68 [4];
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int local_2c;
  
  iVar4 = DAT_2c5f74e4;
  iVar3 = DAT_2c5f74e0;
  piVar6 = (int *)param_1[9];
  local_2c = *DAT_2c5f74d8;
  local_68[0] = param_2;
  local_68[1] = param_2;
  local_68[2] = param_2;
  local_68[3] = param_2;
  local_58 = param_2;
  iStack_54 = param_2;
  local_50 = param_2;
  iStack_4c = param_2;
  local_48 = param_2;
  iStack_44 = param_2;
  local_40 = param_2;
  iStack_3c = param_2;
  local_38 = param_2;
  iStack_34 = param_2;
  if (piVar6 != (int *)0x0) {
    piVar10 = (int *)0x0;
    piVar17 = piVar6;
    do {
      if (piVar17[3] < param_2) {
        if (piVar10 == (int *)0x0) goto LAB_2c5f7470;
        break;
      }
      piVar15 = (int *)*piVar17;
      piVar10 = piVar17;
      piVar17 = piVar15;
    } while (piVar15 != (int *)0x0);
LAB_2c5f72e0:
    cVar9 = *(char *)((int)piVar10 + 0x16);
joined_r0x2c5f72e2:
    if (cVar9 == '\0') {
      piVar10 = (int *)piVar10[1];
joined_r0x2c5f72e8:
      if (piVar10 != (int *)0x0) goto LAB_2c5f72ec;
      goto LAB_2c5f746c;
    }
    bVar1 = *(byte *)(piVar10 + 5);
    if (bVar1 != 0x2a) {
      if (0x2a < bVar1) {
        if (bVar1 != 0x5f) {
LAB_2c5f74e8:
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5f762c,0x2bf,DAT_2c5f7634,DAT_2c5f7630,DAT_2c5f7628);
        }
        iVar11 = piVar10[4];
        cVar9 = *(char *)((int)piVar10 + 0x15);
        if (cVar9 == '\0') {
          iVar18 = 2;
        }
        else {
          iVar18 = 5;
        }
        iVar18 = iVar18 + iVar11 + ((int)((ulonglong)((longlong)DAT_2c5f74dc * (longlong)iVar11) >>
                                         0x20) - (iVar11 >> 0x1f)) * -3;
        local_7c = (int *)*piVar10;
        goto joined_r0x2c5f757c;
      }
      if (bVar1 != 0x22) {
        if (bVar1 != 0x27) goto LAB_2c5f74e8;
        local_7c = (int *)*piVar10;
        iVar18 = 1;
        if (local_7c != (int *)0x0) goto LAB_2c5f7316;
        bVar2 = false;
        goto LAB_2c5f75e2;
      }
      local_7c = (int *)*piVar10;
      if (local_7c != (int *)0x0) {
        iVar18 = 0;
        goto LAB_2c5f7316;
      }
      bVar2 = false;
      iVar18 = 0;
LAB_2c5f7596:
      FUN_2c5f9dd8(piVar10[2],DAT_2c5f763c);
LAB_2c5f75a2:
      piVar6 = (int *)piVar10[1];
      if (bVar2) {
        uVar8 = DAT_2c5f7640;
        if ((char)piVar10[5] != '\'') {
          uVar8 = DAT_2c5f7644;
        }
        FUN_2c5f9dd8(local_7c[2],uVar8);
        FUN_2c5f6ef4(param_1,local_7c);
        FUN_2c5f6ef4(param_1,piVar10);
      }
      else {
        cVar9 = *(char *)((int)piVar10 + 0x15);
LAB_2c5f74be:
        local_68[iVar18] = piVar10[3];
        if (cVar9 == '\0') goto LAB_2c5f7534;
      }
      goto joined_r0x2c5f7460;
    }
    iVar11 = piVar10[4];
    cVar9 = *(char *)((int)piVar10 + 0x15);
    if (cVar9 == '\0') {
      iVar18 = 8;
    }
    else {
      iVar18 = 0xb;
    }
    iVar18 = iVar18 + iVar11 + ((int)((ulonglong)((longlong)DAT_2c5f7638 * (longlong)iVar11) >> 0x20
                                     ) - (iVar11 >> 0x1f)) * -3;
    local_7c = (int *)*piVar10;
joined_r0x2c5f757c:
    if (local_7c == (int *)0x0) {
LAB_2c5f74ba:
      piVar6 = (int *)piVar10[1];
      goto LAB_2c5f74be;
    }
LAB_2c5f7316:
    do {
      if (local_7c[3] < local_68[iVar18]) break;
      if (((*(char *)((int)local_7c + 0x15) != '\0') && (*(byte *)(local_7c + 5) == bVar1)) &&
         (((*(char *)((int)piVar10 + 0x15) == '\0' && (*(char *)((int)local_7c + 0x16) == '\0')) ||
          (((uint)(iVar3 * piVar10[4] + iVar4) < 0x55555555 ||
           (0x55555554 < (uint)(iVar3 * (piVar10[4] + local_7c[4]) + iVar4))))))) {
        if ((bVar1 != 0x2a) && (bVar1 != 0x5f)) {
          if (bVar1 != 0x27 && bVar1 != 0x22) goto LAB_2c5f72e0;
          bVar2 = true;
          goto LAB_2c5f7592;
        }
        iVar11 = piVar10[2];
        iVar18 = local_7c[2];
        if ((*(int *)(iVar11 + 0x20) < 2) || (*(int *)(iVar18 + 0x20) < 2)) {
          local_78 = 1;
        }
        else {
          local_78 = 2;
        }
        iVar7 = *(int *)(iVar18 + 0x20) - local_78;
        iVar16 = *(int *)(iVar11 + 0x20) - local_78;
        *(int *)(iVar18 + 0x20) = iVar7;
        *(undefined1 *)(*(int *)(iVar18 + 0x1c) + iVar7) = 0;
        *(int *)(iVar11 + 0x20) = iVar16;
        *(undefined1 *)(*(int *)(iVar11 + 0x1c) + iVar16) = 0;
        piVar6 = (int *)*piVar10;
        if ((piVar6 == local_7c) || (piVar6 == (int *)0x0)) goto LAB_2c5f73d0;
        goto LAB_2c5f73bc;
      }
      local_7c = (int *)*local_7c;
    } while (local_7c != (int *)0x0);
    if (bVar1 == 0x5f || bVar1 == 0x2a) {
      cVar9 = *(char *)((int)piVar10 + 0x15);
      goto LAB_2c5f74ba;
    }
    bVar2 = false;
    if (bVar1 == 0x22) {
LAB_2c5f7592:
      if (bVar1 != 0x27) goto LAB_2c5f7596;
LAB_2c5f75e2:
      FUN_2c5f9dd8(piVar10[2],DAT_2c5f7648);
      goto LAB_2c5f75a2;
    }
    if (bVar1 == 0x27) goto LAB_2c5f75e2;
    local_68[iVar18] = piVar10[3];
    piVar6 = piVar10;
    if (*(char *)((int)piVar10 + 0x15) == '\0') {
LAB_2c5f7534:
      FUN_2c5f6ef4(param_1,piVar10);
      piVar10 = piVar6;
      goto joined_r0x2c5f72e8;
    }
    goto LAB_2c5f72e0;
  }
  goto LAB_2c5f7476;
  while (piVar6 = piVar17, piVar17 != local_7c) {
LAB_2c5f73bc:
    piVar17 = (int *)*piVar6;
    FUN_2c5f6ef4(param_1,piVar6);
    if (piVar17 == (int *)0x0) break;
  }
LAB_2c5f73d0:
  if (local_78 == 1) {
    puVar12 = (undefined4 *)*param_1;
    puVar5 = (undefined4 *)(*(code *)*puVar12)(1,0x4c);
    *puVar5 = puVar12;
    *(undefined2 *)(puVar5 + 0xd) = 0x14;
  }
  else {
    puVar12 = (undefined4 *)*param_1;
    puVar5 = (undefined4 *)(*(code *)*puVar12)(1,0x4c);
    *puVar5 = puVar12;
    *(undefined2 *)(puVar5 + 0xd) = 0x15;
  }
  iVar13 = *(int *)(iVar18 + 4);
  if ((iVar13 != 0) && (iVar11 != iVar13)) {
    puVar5[4] = iVar13;
    *(undefined4 *)(iVar13 + 8) = 0;
    do {
      iVar14 = *(int *)(iVar13 + 4);
      *(undefined4 **)(iVar13 + 0xc) = puVar5;
      if (iVar11 == iVar14) {
        puVar5[5] = iVar13;
        *(undefined4 *)(iVar13 + 4) = 0;
        break;
      }
      iVar13 = iVar14;
    } while (iVar14 != 0);
  }
  *(undefined4 **)(iVar18 + 4) = puVar5;
  *(undefined4 **)(iVar11 + 8) = puVar5;
  puVar5[1] = iVar11;
  puVar5[2] = iVar18;
  puVar5[3] = *(undefined4 *)(iVar18 + 0xc);
  puVar5[9] = *(undefined4 *)(iVar18 + 0x24);
  puVar5[0xb] = *(undefined4 *)(iVar11 + 0x2c);
  puVar5[10] = *(undefined4 *)(iVar18 + 0x28);
  puVar5[0xc] = *(undefined4 *)(iVar11 + 0x30);
  if (iVar7 == 0) {
    FUN_2c5f9d24(iVar18);
    FUN_2c5f6ef4(param_1,local_7c);
  }
  if (iVar16 != 0) goto LAB_2c5f72e0;
  FUN_2c5f9d24(iVar11);
  piVar6 = (int *)piVar10[1];
  FUN_2c5f6ef4(param_1,piVar10);
joined_r0x2c5f7460:
  piVar10 = piVar6;
  if (piVar10 == (int *)0x0) goto LAB_2c5f746c;
LAB_2c5f72ec:
  cVar9 = *(char *)((int)piVar10 + 0x16);
  goto joined_r0x2c5f72e2;
LAB_2c5f746c:
  piVar6 = (int *)param_1[9];
  if (piVar6 == (int *)0x0) {
LAB_2c5f7476:
    if (*DAT_2c5f74d8 != local_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
LAB_2c5f7470:
  if (piVar6[3] < param_2) goto LAB_2c5f7476;
  FUN_2c5f6ef4(param_1);
  goto LAB_2c5f746c;
}


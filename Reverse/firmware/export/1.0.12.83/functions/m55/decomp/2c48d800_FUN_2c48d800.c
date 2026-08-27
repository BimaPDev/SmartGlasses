/* FUN_2c48d800 @ 0x2c48d800 */

uint FUN_2c48d800(int param_1,int *param_2)

{
  undefined2 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint in_fpscr;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  int local_34;
  
  uVar15 = (uint)*(byte *)(param_1 + 0xc);
  local_34 = *DAT_2c48da30;
  if (0x20 < uVar15) {
    if (uVar15 == 0x40) {
      if (param_2 != (int *)0x0) {
        piVar16 = *(int **)(param_1 + 8);
        if (param_2[5] == 0) {
          uVar12 = 2;
          iVar4 = 1;
        }
        else {
          uVar12 = 3;
          iVar4 = 2;
        }
        puVar7 = (undefined1 *)FUN_2c48d594(param_2,uVar12);
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 0x7b;
          param_2[3] = param_2[3] + 1;
          if (param_2[5] != 0) {
            puVar7[1] = 10;
            iVar5 = param_2[5];
            param_2[2] = param_2[2] + iVar4;
            puVar11 = DAT_2c48dca8;
            goto joined_r0x2c48dbd0;
          }
          param_2[2] = param_2[2] + iVar4;
          iVar5 = 0;
          puVar11 = DAT_2c48dca8;
          if (piVar16 == (int *)0x0) {
LAB_2c48dc96:
            iVar4 = 2;
          }
          else {
            do {
              if (iVar5 == 0) {
                iVar4 = piVar16[8];
                if (iVar4 == 0) goto LAB_2c48dc04;
LAB_2c48da96:
                iVar4 = FUN_2c48d6a4(iVar4,param_2);
                if (iVar4 == 0) goto switchD_2c48d828_caseD_3;
              }
              else {
                puVar7 = (undefined1 *)FUN_2c48d594(param_2,param_2[3]);
                if (puVar7 == (undefined1 *)0x0) goto switchD_2c48d828_caseD_3;
                uVar15 = 0;
                if (param_2[3] != 0) {
                  uVar14 = 0;
                  do {
                    uVar14 = uVar14 + 1;
                    *puVar7 = 9;
                    uVar15 = param_2[3];
                    puVar7 = puVar7 + 1;
                  } while (uVar14 < uVar15);
                }
                param_2[2] = param_2[2] + uVar15;
                iVar4 = piVar16[8];
                if (iVar4 != 0) goto LAB_2c48da96;
LAB_2c48dc04:
                puVar10 = (undefined2 *)FUN_2c48d594(param_2,3);
                if (puVar10 == (undefined2 *)0x0) goto switchD_2c48d828_caseD_3;
                *puVar10 = *puVar11;
                *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar11 + 1);
              }
              if (*param_2 != 0) {
                iVar5 = param_2[2];
                iVar4 = FUN_2c66c4ec(*param_2 + iVar5);
                param_2[2] = iVar4 + iVar5;
              }
              if (param_2[5] == 0) {
                iVar4 = 1;
              }
              else {
                iVar4 = 2;
              }
              puVar7 = (undefined1 *)FUN_2c48d594(param_2,iVar4);
              if (puVar7 == (undefined1 *)0x0) goto switchD_2c48d828_caseD_3;
              *puVar7 = 0x3a;
              if (param_2[5] != 0) {
                puVar7[1] = 9;
              }
              param_2[2] = param_2[2] + iVar4;
              iVar4 = FUN_2c48d800(piVar16,param_2);
              if (iVar4 == 0) goto switchD_2c48d828_caseD_3;
              if (*param_2 != 0) {
                iVar5 = param_2[2];
                iVar4 = FUN_2c66c4ec(*param_2 + iVar5);
                param_2[2] = iVar4 + iVar5;
              }
              uVar15 = (uint)(param_2[5] != 0);
              if (*piVar16 != 0) {
                uVar15 = uVar15 + 1;
              }
              puVar7 = (undefined1 *)FUN_2c48d594(param_2,uVar15 + 1);
              if (puVar7 == (undefined1 *)0x0) goto switchD_2c48d828_caseD_3;
              puVar8 = puVar7;
              if (*piVar16 != 0) {
                puVar8 = puVar7 + 1;
                *puVar7 = 0x2c;
              }
              puVar7 = puVar8;
              if (param_2[5] != 0) {
                puVar7 = puVar8 + 1;
                *puVar8 = 10;
              }
              *puVar7 = 0;
              param_2[2] = param_2[2] + uVar15;
              piVar16 = (int *)*piVar16;
              iVar5 = param_2[5];
joined_r0x2c48dbd0:
            } while (piVar16 != (int *)0x0);
            if (iVar5 == 0) goto LAB_2c48dc96;
            iVar4 = param_2[3] + 1;
          }
          puVar7 = (undefined1 *)FUN_2c48d594(param_2,iVar4);
          if (puVar7 != (undefined1 *)0x0) {
            if ((param_2[5] != 0) && (param_2[3] != 1)) {
              uVar15 = 0;
              puVar8 = puVar7;
              do {
                puVar7 = puVar8 + 1;
                *puVar8 = 9;
                uVar15 = uVar15 + 1;
                puVar8 = puVar7;
              } while (uVar15 < param_2[3] - 1U);
            }
            uVar13 = 0x7d;
LAB_2c48da14:
            *puVar7 = uVar13;
            uVar15 = 1;
            puVar7[1] = 0;
            param_2[3] = param_2[3] + -1;
            goto LAB_2c48d8b4;
          }
        }
      }
    }
    else if ((uVar15 == 0x80) && (*(int *)(param_1 + 0x10) != 0)) {
      iVar4 = FUN_2c66c4ec();
      iVar5 = FUN_2c48d594(param_2,iVar4 + 1);
      if (iVar5 != 0) {
        uVar15 = 1;
        FUN_2c674668(iVar5,*(undefined4 *)(param_1 + 0x10),iVar4 + 1);
        goto LAB_2c48d8b4;
      }
    }
    goto switchD_2c48d828_caseD_3;
  }
  if (uVar15 == 0) goto LAB_2c48d8b4;
  switch(uVar15) {
  case 1:
    puVar6 = (undefined4 *)FUN_2c48d594(param_2,6);
    if (puVar6 != (undefined4 *)0x0) {
      uVar1 = *(undefined2 *)(DAT_2c48da38 + 1);
      *puVar6 = *DAT_2c48da38;
      *(undefined2 *)(puVar6 + 1) = uVar1;
      goto LAB_2c48d8b4;
    }
    break;
  case 2:
    puVar6 = (undefined4 *)FUN_2c48d594(param_2,5);
    puVar3 = DAT_2c48da3c;
    goto joined_r0x2c48d944;
  case 4:
    puVar6 = (undefined4 *)FUN_2c48d594(param_2,5);
    puVar3 = DAT_2c48da40;
joined_r0x2c48d944:
    if (puVar6 == (undefined4 *)0x0) break;
    uVar15 = 1;
    uVar13 = *(undefined1 *)(puVar3 + 1);
    *puVar6 = *puVar3;
    *(undefined1 *)(puVar6 + 1) = uVar13;
    goto LAB_2c48d8b4;
  case 8:
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    uStack_44 = 0;
    local_40 = 0;
    uStack_3c = 0;
    local_38 = 0;
    dVar18 = *(double *)(param_1 + 0x18);
    local_58 = 0;
    uStack_54 = 0;
    if (param_2 != (int *)0x0) {
      if (NAN(dVar18)) {
LAB_2c48db82:
        uVar14 = 4;
        local_50 = *DAT_2c48dcac;
        local_4c = DAT_2c48dcac[1] & 0xff;
      }
      else {
        dVar19 = ABS(dVar18);
        uVar15 = in_fpscr & 0xfffffff | (uint)(dVar19 < DAT_2c48da28) << 0x1f |
                 (uint)(dVar19 == DAT_2c48da28) << 0x1e;
        bVar2 = (byte)(uVar15 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(dVar19) || NAN(DAT_2c48da28)))
        goto LAB_2c48db82;
        dVar17 = (double)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x14),
                                             (byte)(uVar15 >> 0x16) & 3);
        if (dVar18 == dVar17) {
          uVar14 = FUN_2c66b4b8(&local_50,DAT_2c48da34);
        }
        else {
          uVar12 = (undefined4)((ulonglong)dVar18 >> 0x20);
          uVar14 = FUN_2c66b4b8(&local_50,DAT_2c48dcb0,SUB84(dVar18,0),uVar12);
          iVar4 = FUN_2c66b4f8(&local_50,DAT_2c48dcb4,&local_58);
          if (iVar4 == 1) {
            dVar17 = ABS((double)CONCAT44(uStack_54,local_58));
            if (-1 < (int)((uint)(dVar19 < dVar17) << 0x1f)) {
              dVar17 = dVar19;
            }
            if (ABS((double)CONCAT44(uStack_54,local_58) - dVar18) <= dVar17 * DAT_2c48dca0)
            goto LAB_2c48d8ac;
          }
          uVar14 = FUN_2c66b4b8(&local_50,DAT_2c48dcb8,SUB84(dVar18,0),uVar12);
        }
LAB_2c48d8ac:
        if (0x19 < uVar14) break;
      }
      puVar7 = (undefined1 *)FUN_2c48d594(param_2,uVar14 + 1);
      if (puVar7 != (undefined1 *)0x0) {
        puVar8 = puVar7;
        if (uVar14 != 0) {
          puVar8 = puVar7 + uVar14;
          puVar6 = &local_50;
          do {
            puVar9 = puVar7 + 1;
            *puVar7 = *(undefined1 *)puVar6;
            puVar7 = puVar9;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          } while (puVar8 != puVar9);
        }
        uVar15 = 1;
        *puVar8 = 0;
        param_2[2] = param_2[2] + uVar14;
        goto LAB_2c48d8b4;
      }
    }
    break;
  case 0x10:
    if (param_2 != (int *)0x0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        if (*DAT_2c48da30 == local_34) {
          uVar15 = FUN_2c48d6a4();
          return uVar15;
        }
        goto LAB_2c48dc9a;
      }
      puVar11 = (undefined2 *)FUN_2c48d594(param_2,3);
      if (puVar11 != (undefined2 *)0x0) {
        uVar15 = 1;
        uVar13 = *(undefined1 *)(DAT_2c48dca8 + 1);
        *puVar11 = *DAT_2c48dca8;
        *(undefined1 *)(puVar11 + 1) = uVar13;
        goto LAB_2c48d8b4;
      }
    }
    break;
  case 0x20:
    if (param_2 != (int *)0x0) {
      piVar16 = *(int **)(param_1 + 8);
      puVar7 = (undefined1 *)FUN_2c48d594(param_2,1);
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = 0x5b;
        param_2[2] = param_2[2] + 1;
        param_2[3] = param_2[3] + 1;
        for (; piVar16 != (int *)0x0; piVar16 = (int *)*piVar16) {
          iVar4 = FUN_2c48d800(piVar16,param_2);
          if (iVar4 == 0) goto switchD_2c48d828_caseD_3;
          if (*param_2 != 0) {
            iVar5 = param_2[2];
            iVar4 = FUN_2c66c4ec(*param_2 + iVar5);
            param_2[2] = iVar4 + iVar5;
          }
          if (*piVar16 == 0) break;
          if (param_2[5] == 0) {
            uVar12 = 2;
            iVar4 = 1;
          }
          else {
            uVar12 = 3;
            iVar4 = 2;
          }
          puVar7 = (undefined1 *)FUN_2c48d594(param_2,uVar12);
          if (puVar7 == (undefined1 *)0x0) goto switchD_2c48d828_caseD_3;
          *puVar7 = 0x2c;
          if (param_2[5] == 0) {
            puVar7 = puVar7 + 1;
          }
          else {
            puVar7[1] = 0x20;
            puVar7 = puVar7 + 2;
          }
          *puVar7 = 0;
          param_2[2] = param_2[2] + iVar4;
        }
        puVar7 = (undefined1 *)FUN_2c48d594(param_2,2);
        if (puVar7 != (undefined1 *)0x0) {
          uVar13 = 0x5d;
          goto LAB_2c48da14;
        }
      }
    }
  }
switchD_2c48d828_caseD_3:
  uVar15 = 0;
LAB_2c48d8b4:
  if (*DAT_2c48da30 == local_34) {
    return uVar15;
  }
LAB_2c48dc9a:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


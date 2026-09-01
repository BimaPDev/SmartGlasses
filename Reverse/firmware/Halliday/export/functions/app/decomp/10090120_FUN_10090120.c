/* FUN_10090120 @ 0x10090120 */

void FUN_10090120(int param_1,undefined2 *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  int local_178;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int *local_148 [2];
  undefined2 local_140;
  int local_13c;
  undefined1 local_138;
  int *local_134;
  undefined1 local_130;
  undefined1 auStack_12c [56];
  undefined1 auStack_f4 [56];
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int *local_84;
  undefined1 local_7f;
  undefined2 local_7e;
  undefined2 local_7c;
  int local_78;
  undefined1 local_74;
  int *local_70;
  undefined1 local_6c;
  
  if (*(int *)(param_2 + 2) == 0) {
    return;
  }
  if (*(byte *)(param_2 + 8) < 3) {
    return;
  }
  local_160 = *param_3;
  iVar13 = param_4[1];
  iVar16 = *param_4;
  local_15c = param_3[1];
  if ((local_160 == iVar16) && (local_15c == iVar13)) {
    return;
  }
  iVar2 = *(int *)(param_2 + 2) / 2;
  local_168 = local_160;
  if (iVar16 < local_160) {
    local_168 = iVar16;
  }
  local_168 = -iVar2 + local_168;
  if (local_160 < iVar16) {
    local_160 = iVar16;
  }
  local_164 = local_15c;
  if (iVar13 < local_15c) {
    local_164 = iVar13;
  }
  local_164 = -iVar2 + local_164;
  if (local_15c < iVar13) {
    local_15c = iVar13;
  }
  local_15c = local_15c + iVar2;
  local_160 = local_160 + iVar2;
  iVar13 = FUN_1012a896(&local_168,&local_168,*(undefined4 *)(param_1 + 8));
  if (iVar13 == 0) {
    return;
  }
  uVar10 = *(undefined4 *)(param_1 + 8);
  *(int **)(param_1 + 8) = &local_168;
  iVar17 = param_3[1];
  iVar2 = param_4[1];
  iVar16 = *param_3;
  iVar13 = *param_4;
  iVar11 = *(int *)(param_2 + 2);
  if (iVar17 == iVar2) {
    local_bc = iVar13;
    if (iVar16 < iVar13) {
      local_bc = iVar16;
    }
    if (iVar13 < iVar16) {
      iVar13 = iVar16;
    }
    local_b0 = (int)(iVar11 - 1U) >> 1;
    local_b8 = iVar17 - ((iVar11 - 1U & 1) + local_b0);
    local_b4 = iVar13 + -1;
    local_b0 = iVar17 + local_b0;
    iVar13 = FUN_1012a896(&local_bc,&local_bc,&local_168);
    if (iVar13 == 0) goto LAB_10090258;
    bVar1 = false;
    if ((*(int *)(param_2 + 6) != 0) && (bVar1 = false, *(int *)(param_2 + 4) != 0)) {
      bVar1 = true;
    }
    iVar13 = FUN_1008cb9c(&local_bc);
    if (iVar13 == 0) {
      bVar15 = (bool)(bVar1 ^ 1);
    }
    else {
      bVar15 = false;
    }
    FUN_101289fa(&local_84,0x1c);
    iVar13 = local_b0;
    local_84 = &local_bc;
    local_7c = *param_2;
    local_6c = *(undefined1 *)(param_2 + 8);
    if (!bVar15) {
      iVar16 = (local_b4 + 1) - local_bc;
      local_b0 = local_b8;
      if (bVar1) {
        iVar11 = local_bc -
                 (*(int *)(param_2 + 6) + *(int *)(param_2 + 4)) *
                 (local_bc / (*(int *)(param_2 + 6) + *(int *)(param_2 + 4)));
      }
      else {
        iVar11 = 0;
      }
      iVar2 = FUN_100942d8(iVar16);
      local_70 = &local_bc;
      local_78 = iVar2;
      for (iVar17 = local_b8; iVar17 <= iVar13; iVar17 = iVar17 + 1) {
        FUN_10128a02(iVar2,iVar16);
        iVar3 = FUN_1008ca98(iVar2,local_bc,iVar17,iVar16);
        local_74 = (undefined1)iVar3;
        if ((bVar1) && (iVar3 != 0)) {
          iVar3 = iVar11;
          for (iVar4 = 0; iVar4 < iVar16; iVar4 = iVar4 + 1) {
            iVar12 = *(int *)(param_2 + 4);
            if (iVar12 < iVar3) {
              if (iVar3 < iVar12 + *(int *)(param_2 + 6)) {
                *(undefined1 *)(iVar2 + iVar4) = 0;
              }
              else {
                iVar3 = 0;
              }
            }
            else {
              iVar12 = (int)(short)((short)iVar12 - (short)iVar3);
              iVar4 = iVar4 + iVar12;
              iVar3 = iVar3 + iVar12;
            }
            iVar3 = iVar3 + 1;
          }
          local_74 = 2;
        }
        FUN_10128436(param_1,&local_84);
        local_b8 = local_b8 + 1;
        local_b0 = local_b0 + 1;
      }
LAB_10090342:
      FUN_10094444(iVar2);
      goto LAB_10090258;
    }
  }
  else {
    iVar4 = iVar17;
    iVar3 = iVar2;
    if (iVar17 < iVar2) {
      iVar4 = iVar2;
      iVar3 = iVar17;
    }
    if (iVar13 != iVar16) {
      iVar12 = iVar13;
      iVar18 = iVar17;
      if (iVar2 <= iVar17) {
        iVar12 = iVar16;
        iVar16 = iVar13;
        iVar18 = iVar2;
        iVar2 = iVar17;
      }
      iVar8 = iVar12 - iVar16;
      iVar17 = iVar2 - iVar18;
      iVar13 = iVar8;
      if (iVar8 < 0) {
        iVar13 = -iVar8;
      }
      if (iVar17 < 0) {
        iVar17 = -iVar17;
      }
      if (iVar17 < iVar13) {
        iVar9 = (iVar17 << 5) / iVar13;
      }
      else {
        iVar9 = (iVar13 << 5) / iVar17;
      }
      local_158 = iVar12;
      if (iVar16 <= iVar12) {
        local_158 = iVar16;
      }
      iVar11 = iVar11 * (uint)*(byte *)(DAT_100907ac + iVar9) + 0x3f;
      uVar14 = iVar11 >> 7;
      local_158 = local_158 - uVar14;
      local_150 = iVar12;
      if (iVar12 < iVar16) {
        local_150 = iVar16;
      }
      local_150 = local_150 + uVar14;
      local_154 = iVar3 - uVar14;
      local_14c = iVar4 + uVar14;
      iVar3 = FUN_1012a896(&local_158,&local_158,&local_168);
      if (iVar3 != 0) {
        iVar11 = iVar11 >> 8;
        iVar3 = (uVar14 & 1) + iVar11;
        if (iVar17 < iVar13) {
          iVar17 = iVar18 - iVar11;
          iVar11 = iVar2 - iVar11;
          iVar13 = iVar16;
          iVar4 = iVar12;
          if (iVar12 - iVar16 < 1) {
            FUN_1008cbec(auStack_12c,iVar16,iVar18 + iVar3,iVar12,iVar3 + iVar2,0);
          }
          else {
            FUN_1008cbec(auStack_12c,iVar16,iVar17,iVar12,iVar11,0);
            iVar17 = iVar18 + iVar3;
            iVar11 = iVar3 + iVar2;
          }
        }
        else {
          FUN_1008cbec(auStack_12c,iVar16 + iVar3,iVar18,iVar12 + iVar3,iVar2,0);
          iVar13 = iVar16 - iVar11;
          iVar17 = iVar18;
          iVar4 = iVar12 - iVar11;
          iVar11 = iVar2;
        }
        FUN_1008cbec(auStack_f4,iVar13,iVar17,iVar4,iVar11,1);
        uVar5 = FUN_1008ca4c(auStack_12c,0);
        uVar6 = FUN_1008ca4c(auStack_f4,0);
        bVar19 = *(byte *)((int)param_2 + 0x11) & 0x10;
        if ((*(byte *)((int)param_2 + 0x11) & 0x10) == 0) {
          FUN_1008cbec(&local_bc,iVar16,iVar18,iVar16 + (iVar18 - iVar2),(iVar12 - iVar16) + iVar18,
                       3);
          FUN_1008cbec(&local_84,iVar12,iVar2,iVar12 + (iVar18 - iVar2),iVar8 + iVar2,2);
          local_178 = FUN_1008ca4c(&local_bc,bVar19);
          iVar13 = FUN_1008ca4c(&local_84,bVar19);
        }
        else {
          iVar13 = -1;
          local_178 = -1;
        }
        iVar16 = (local_150 + 1) - local_158;
        FUN_1008bbb4();
        uVar14 = FUN_10092f10();
        uVar7 = FUN_1012a84e(&local_158);
        if (uVar7 < uVar14) {
          uVar14 = FUN_1012a84e(&local_158);
        }
        iVar3 = FUN_100942d8(uVar14);
        iVar11 = local_14c;
        iVar2 = 0;
        local_14c = local_154;
        FUN_10128a02(iVar3,uVar14);
        FUN_101289fa(local_148,0x1c);
        local_148[0] = &local_158;
        local_140 = *param_2;
        local_130 = *(undefined1 *)(param_2 + 8);
        local_134 = &local_158;
        local_13c = iVar3;
        for (iVar17 = local_154; iVar17 <= iVar11; iVar17 = iVar17 + 1) {
          iVar4 = FUN_1008ca98(iVar3 + iVar2,local_158,iVar17,iVar16);
          local_138 = (undefined1)iVar4;
          if (iVar4 == 0) {
            FUN_101289fa(iVar3 + iVar2,iVar16);
          }
          iVar2 = iVar2 + iVar16;
          if ((uint)(iVar2 + iVar16) < uVar14) {
            local_14c = local_14c + 1;
          }
          else {
            local_138 = 2;
            FUN_10128436(param_1,local_148);
            local_154 = local_14c + 1;
            iVar2 = 0;
            local_14c = local_154;
            FUN_10128a02(iVar3,uVar14);
          }
        }
        if (local_154 != local_14c) {
          local_14c = local_14c + -1;
          local_138 = 2;
          FUN_10128436(param_1,local_148);
        }
        FUN_10094444(iVar3);
        FUN_1008cb2c(auStack_12c);
        FUN_1008cb2c(auStack_f4);
        if (local_178 != -1) {
          FUN_1008cb2c(&local_bc);
        }
        if (iVar13 != -1) {
          FUN_1008cb2c(&local_84);
        }
        FUN_1008cadc(uVar5);
        FUN_1008cadc(uVar6);
        FUN_1008cadc(local_178);
        FUN_1008cadc(iVar13);
      }
      goto LAB_10090258;
    }
    local_b4 = (int)(iVar11 - 1U) >> 1;
    local_bc = iVar13 - ((iVar11 - 1U & 1) + local_b4);
    local_b0 = iVar4 + -1;
    local_b4 = iVar13 + local_b4;
    local_b8 = iVar3;
    iVar13 = FUN_1012a896(&local_bc,&local_bc,&local_168);
    if (iVar13 == 0) goto LAB_10090258;
    bVar1 = false;
    if ((*(int *)(param_2 + 6) != 0) && (bVar1 = false, *(int *)(param_2 + 4) != 0)) {
      bVar1 = true;
    }
    iVar13 = FUN_1008cb9c(&local_bc);
    if (iVar13 == 0) {
      bVar15 = (bool)(bVar1 ^ 1);
    }
    else {
      bVar15 = false;
    }
    FUN_101289fa(&local_84,0x1c);
    iVar13 = local_b0;
    local_84 = &local_bc;
    local_7c = *param_2;
    local_6c = *(undefined1 *)(param_2 + 8);
    if (!bVar15) {
      iVar11 = (local_b4 + 1) - local_bc;
      local_b0 = local_b8;
      iVar2 = FUN_100942d8(iVar11);
      local_70 = &local_bc;
      iVar16 = local_b8;
      local_78 = iVar2;
      if (bVar1) {
        iVar17 = local_b8 -
                 (*(int *)(param_2 + 4) + *(int *)(param_2 + 6)) *
                 (local_b8 / (*(int *)(param_2 + 4) + *(int *)(param_2 + 6)));
      }
      else {
        iVar17 = 0;
      }
      for (; iVar16 <= iVar13; iVar16 = iVar16 + 1) {
        FUN_10128a02(iVar2,iVar11);
        iVar3 = FUN_1008ca98(iVar2,local_bc,iVar16,iVar11);
        local_74 = (undefined1)iVar3;
        if (bVar1) {
          if (iVar3 != 0) {
            if (*(int *)(param_2 + 4) < iVar17) {
              local_74 = 0;
            }
            if (*(int *)(param_2 + 4) + *(int *)(param_2 + 6) <= iVar17) {
              iVar17 = 0;
            }
          }
          iVar17 = iVar17 + 1;
        }
        FUN_10128436(param_1,&local_84);
        local_b8 = local_b8 + 1;
        local_b0 = local_b0 + 1;
      }
      goto LAB_10090342;
    }
  }
  local_84 = &local_bc;
  FUN_10128436(param_1,&local_84);
LAB_10090258:
  if ((*(byte *)((int)param_2 + 0x11) & 0xc) != 0) {
    FUN_1008d20c(&local_84);
    local_7e = *param_2;
    iVar13 = (int)*(uint *)(param_2 + 2) >> 1;
    local_84 = (int *)0x7fff;
    local_7f = *(undefined1 *)(param_2 + 8);
    uVar14 = ~*(uint *)(param_2 + 2) & 1;
    if ((int)((uint)*(byte *)((int)param_2 + 0x11) << 0x1d) < 0) {
      local_bc = *param_3 - iVar13;
      local_b4 = (*param_3 + iVar13) - uVar14;
      local_b8 = param_3[1] - iVar13;
      local_b0 = (param_3[1] + iVar13) - uVar14;
      FUN_10128076(param_1,&local_84,&local_bc);
    }
    if ((int)((uint)*(byte *)((int)param_2 + 0x11) << 0x1c) < 0) {
      local_bc = *param_4 - iVar13;
      local_b4 = (*param_4 + iVar13) - uVar14;
      local_b8 = param_4[1] - iVar13;
      local_b0 = (iVar13 + param_4[1]) - uVar14;
      FUN_10128076(param_1,&local_84,&local_bc);
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar10;
  return;
}


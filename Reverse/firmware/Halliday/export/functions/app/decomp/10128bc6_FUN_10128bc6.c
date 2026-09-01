/* FUN_10128bc6 @ 0x10128bc6 */

void FUN_10128bc6(int param_1,int *param_2,int *param_3,int param_4,int param_5,undefined2 param_6,
                 undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint local_e0;
  int local_c4;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int *local_94 [2];
  undefined2 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  int *local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int *local_54 [2];
  undefined2 local_4c;
  undefined1 local_3c;
  
  iVar1 = FUN_1008cb9c(param_2);
  if ((iVar1 == 0) && (param_4 == 0 && param_5 == 0)) {
    FUN_10128a0a(local_54,0x1c);
    local_54[0] = &local_78;
    iVar11 = param_2[1];
    local_4c = param_6;
    iVar1 = *param_3;
    iVar15 = param_3[1];
    iVar3 = param_2[2];
    iVar12 = *param_2;
    iVar4 = param_3[2];
    local_6c = iVar15 + -1;
    local_3c = param_7;
    iVar14 = param_2[3];
    iVar13 = param_3[3];
    local_78 = iVar12;
    local_70 = iVar3;
    if (iVar11 <= iVar15) {
      local_74 = iVar11;
      FUN_10128436(param_1,local_54);
    }
    local_74 = param_3[3] + 1;
    local_6c = param_2[3];
    if (iVar13 <= iVar14) {
      FUN_10128436(param_1,local_54);
    }
    if (iVar15 < iVar11) {
      local_74 = param_2[1];
    }
    else {
      local_74 = param_3[1];
    }
    local_78 = *param_2;
    if (iVar14 < iVar13) {
      local_6c = param_2[3];
    }
    else {
      local_6c = param_3[3];
    }
    local_70 = *param_3 + -1;
    if (iVar12 <= iVar1) {
      FUN_10128436(param_1,local_54);
    }
    local_78 = param_3[2] + 1;
    local_70 = param_2[2];
    if (iVar3 < iVar4) {
      return;
    }
    FUN_10128436(param_1,local_54);
    return;
  }
  local_e0 = FUN_1012a896(&local_b4,param_2,*(undefined4 *)(param_1 + 8));
  if (local_e0 == 0) {
    return;
  }
  iVar3 = (local_ac + 1) - local_b4;
  FUN_10128a0a(local_94,0x1c);
  local_88 = FUN_100942d8(iVar3);
  if (param_4 < 1) {
    local_c4 = -1;
  }
  else {
    FUN_1008cd8c(&local_78,param_2,param_4,0);
    local_c4 = FUN_1008ca4c(&local_78,0);
  }
  FUN_1008cd8c(local_54,param_3,param_5,1);
  uVar2 = FUN_1008ca4c(local_54,0);
  local_94[0] = &local_a4;
  local_7c = param_7;
  local_8c = param_6;
  iVar12 = param_3[1];
  local_7b = param_8;
  iVar11 = param_2[1];
  iVar13 = param_2[3];
  iVar4 = iVar11 + param_4;
  if (iVar11 + param_4 < iVar12) {
    iVar4 = iVar12;
  }
  iVar15 = param_3[3];
  iVar14 = iVar13 - param_4;
  if (iVar15 <= iVar13 - param_4) {
    iVar14 = iVar15;
  }
  local_80 = local_94[0];
  if (iVar1 == 0) {
    iVar5 = *param_3;
    iVar6 = *param_2;
    iVar1 = iVar6 + param_4;
    if (iVar6 + param_4 < iVar5) {
      iVar1 = iVar5;
    }
    iVar7 = param_3[2];
    iVar8 = param_2[2];
    iVar9 = iVar8 - param_4;
    if (iVar7 <= iVar8 - param_4) {
      iVar9 = iVar7;
    }
    if ((((iVar6 <= iVar5) && (iVar7 <= iVar8)) && (iVar11 <= iVar12)) && (iVar15 <= iVar13)) {
      local_e0 = (uint)(0x31 < (iVar9 + 1) - iVar1);
    }
    local_84 = 1;
    if (iVar12 < iVar11) {
      if ((iVar15 <= iVar13) && (local_e0 != 0)) {
LAB_10128e62:
        local_a0 = param_3[3] + 1;
        local_98 = param_2[3];
        local_a4 = iVar1;
        local_9c = iVar9;
        FUN_10128436(param_1,local_94);
      }
    }
    else if (local_e0 != 0) {
      local_98 = iVar12 + -1;
      local_a4 = iVar1;
      local_a0 = iVar11;
      local_9c = iVar9;
      FUN_10128436(param_1,local_94);
      if (iVar15 <= iVar13) goto LAB_10128e62;
    }
    if (iVar6 <= iVar5) {
      local_a4 = *param_2;
      local_9c = *param_3 + -1;
      local_a0 = iVar4;
      local_98 = iVar14;
      FUN_10128436(param_1,local_94);
    }
    if (iVar7 <= iVar8) {
      local_a4 = param_3[2] + 1;
      local_9c = param_2[2];
      local_a0 = iVar4;
      local_98 = iVar14;
      FUN_10128436(param_1,local_94);
    }
    local_a4 = local_b4;
    if (local_e0 == 0) {
      local_9c = local_ac;
      iVar1 = 0;
      if (param_4 < param_3[1] - param_2[1]) {
        param_4 = param_3[1] - param_2[1];
      }
      for (; iVar1 < param_4; iVar1 = iVar1 + 1) {
        iVar11 = iVar1 + param_2[1];
        iVar4 = param_2[3] - iVar1;
        if ((local_b0 <= iVar11) || (iVar4 <= local_a8)) {
          FUN_10128a16(local_88,iVar3);
          local_84 = FUN_1008ca98(local_88,local_a4,iVar11,iVar3);
          if (local_b0 <= iVar11) {
            local_a0 = iVar11;
            local_98 = iVar11;
            FUN_10128436(param_1,local_94);
          }
          if (iVar4 <= local_a8) {
            local_a0 = iVar4;
            local_98 = iVar4;
            FUN_10128436(param_1,local_94);
          }
        }
      }
    }
    else {
      local_9c = iVar1 + -1;
      if (local_ac <= iVar1 + -1) {
        local_9c = local_ac;
      }
      iVar1 = local_9c + (1 - local_b4);
      if (0 < iVar1) {
        iVar10 = local_b0;
        iVar3 = iVar14;
        if ((iVar5 < iVar6) && (iVar12 < iVar11)) {
LAB_10128fde:
          if (iVar13 < iVar15) goto LAB_10128f74;
        }
        else {
          for (; iVar10 < iVar4; iVar10 = iVar10 + 1) {
            local_a0 = iVar10;
            local_98 = iVar10;
            FUN_10128a16(local_88,iVar1);
            local_84 = FUN_1008ca98(local_88,local_a4,iVar10,iVar1);
            FUN_10128436(param_1,local_94);
          }
          if (iVar5 < iVar6) goto LAB_10128fde;
        }
        while (iVar3 = iVar3 + 1, iVar3 <= local_a8) {
          local_a0 = iVar3;
          local_98 = iVar3;
          FUN_10128a16(local_88,iVar1);
          local_84 = FUN_1008ca98(local_88,local_a4,iVar3,iVar1);
          FUN_10128436(param_1,local_94);
        }
      }
LAB_10128f74:
      local_9c = local_ac;
      local_a4 = iVar9 + 1;
      if (iVar9 + 1 < local_b4) {
        local_a4 = local_b4;
      }
      iVar1 = (local_ac + 1) - local_a4;
      if (0 < iVar1) {
        iVar3 = local_b0;
        if ((iVar8 < iVar7) && (iVar12 < iVar11)) {
LAB_10128f9a:
          if (iVar13 < iVar15) goto LAB_10128ee4;
        }
        else {
          for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
            local_a0 = iVar3;
            local_98 = iVar3;
            FUN_10128a16(local_88,iVar1);
            local_84 = FUN_1008ca98(local_88,local_a4,iVar3,iVar1);
            FUN_10128436(param_1,local_94);
          }
          if (iVar8 < iVar7) goto LAB_10128f9a;
        }
        while (iVar14 = iVar14 + 1, iVar14 <= local_a8) {
          local_a0 = iVar14;
          local_98 = iVar14;
          FUN_10128a16(local_88,iVar1);
          local_84 = FUN_1008ca98(local_88,local_a4,iVar14,iVar1);
          FUN_10128436(param_1,local_94);
        }
      }
    }
LAB_10128ee4:
    FUN_1008cb2c(local_54);
    FUN_1008cadc(uVar2);
  }
  else {
    local_a4 = local_b4;
    local_9c = local_ac;
    for (iVar1 = local_b0; iVar1 <= local_a8; iVar1 = iVar1 + 1) {
      if ((iVar11 <= iVar12) || (iVar4 <= iVar1)) {
        if ((iVar13 < iVar15) && (iVar14 < iVar1)) break;
        local_a0 = iVar1;
        local_98 = iVar1;
        FUN_10128a16(local_88,iVar3);
        local_84 = FUN_1008ca98(local_88,local_b4,iVar1,iVar3);
        FUN_10128436(param_1,local_94);
      }
    }
    FUN_1008cb2c(local_54);
    FUN_1008cadc(uVar2);
    if (local_c4 == -1) goto LAB_10128d8c;
  }
  FUN_1008cb2c(&local_78);
  FUN_1008cadc(local_c4);
LAB_10128d8c:
  FUN_10094444(local_88);
  return;
}


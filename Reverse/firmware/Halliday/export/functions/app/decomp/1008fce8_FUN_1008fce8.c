/* FUN_1008fce8 @ 0x1008fce8 */

void FUN_1008fce8(int param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  undefined4 uVar25;
  byte *local_e4;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  byte *local_d0;
  uint local_c8;
  int local_ac;
  ushort local_a6;
  ushort local_a4;
  short local_a2;
  short local_a0;
  byte local_9e;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int iStack_88;
  int local_84;
  int local_80;
  int *local_7c;
  undefined1 local_77;
  undefined2 local_74;
  int local_70;
  undefined1 local_6c;
  int *local_68;
  undefined1 local_64;
  byte local_63;
  undefined1 local_5e;
  undefined2 local_5a;
  undefined4 local_58;
  undefined1 local_48;
  undefined1 local_34;
  byte *pbVar24;
  
  iVar1 = FUN_100927e8(*param_2,&local_ac,param_4,0);
  if (iVar1 == 0) {
    if (param_4 < 0x20) {
      return;
    }
    if (param_4 == 0xf8ff) {
      return;
    }
    if (param_4 == 0x200c) {
      return;
    }
    FUN_10094174(2,DAT_1008fffc,0x6a,DAT_10090000,DAT_1008fff8,param_4);
    FUN_1012a82e(&local_8c,(int)local_a2 + *param_3,(int)local_a0 + param_3[1],
                 (uint)local_a6 + (int)local_a2 + *param_3,
                 (uint)local_a4 + (int)local_a0 + param_3[1]);
    FUN_1008d20c(&local_7c);
    local_77 = 2;
    local_48 = 2;
    local_34 = 2;
    local_5e = 2;
    local_5a = (undefined2)param_2[3];
    local_58 = 1;
    (**(code **)(param_1 + 0x10))(param_1,&local_7c,&local_8c);
    return;
  }
  uVar10 = (uint)local_a4;
  if (uVar10 == 0) {
    return;
  }
  if (local_a6 == 0) {
    return;
  }
  piVar2 = *(int **)(param_1 + 8);
  iVar1 = (int)local_a2 + *param_3;
  if ((int)((uint)local_a6 + iVar1) < *piVar2) {
    return;
  }
  if (piVar2[2] < iVar1) {
    return;
  }
  iVar6 = *(int *)(*param_2 + 0xc);
  iVar21 = (param_3[1] - ((int)local_a0 + uVar10)) + *(int *)(*param_2 + 8);
  iVar18 = iVar21 - iVar6;
  if ((int)(uVar10 + iVar18) < piVar2[1]) {
    return;
  }
  if (piVar2[3] < iVar18) {
    return;
  }
  iVar3 = FUN_10092778(local_ac,param_4);
  pbVar8 = DAT_10090010;
  uVar11 = DAT_10090000;
  if (iVar3 == 0) {
    uVar7 = 0x91;
    uVar25 = DAT_10090004;
LAB_1008fdf8:
    FUN_10094174(2,DAT_1008fffc,uVar7,uVar11,uVar25);
    return;
  }
  if ((*(byte *)(local_ac + 0x10) & 3) != 0) {
    uVar7 = 0x99;
    uVar25 = DAT_10090008;
    goto LAB_1008fdf8;
  }
  bVar9 = *(byte *)(param_2 + 9);
  uVar10 = (uint)bVar9;
  if ((local_9e & 0xf) == 3) {
switchD_1008fe2e_caseD_4:
    iVar17 = 4;
    local_d4 = 0xf0;
    iVar13 = 0x10;
    local_e4 = DAT_10090028;
  }
  else {
    switch(local_9e & 0xf) {
    case 1:
      iVar17 = 1;
      iVar13 = 2;
      local_d4 = 0x80;
      local_e4 = DAT_1009000c;
      break;
    case 2:
      iVar17 = 2;
      local_d4 = 0xc0;
      iVar13 = 4;
      local_e4 = DAT_1009002c;
      break;
    default:
      uVar7 = 0xd9;
      uVar11 = DAT_10090024;
      uVar25 = DAT_10090020;
      goto LAB_1008fdf8;
    case 4:
      goto switchD_1008fe2e_caseD_4;
    case 8:
      iVar17 = 8;
      local_d4 = 0xff;
      iVar13 = 0x100;
      local_e4 = DAT_1009001c;
    }
  }
  if (uVar10 < 0xfd) {
    if ((*DAT_10090010 != uVar10) || (*DAT_10090014 != iVar17)) {
      pbVar20 = DAT_1009011c;
      pbVar24 = local_e4;
      do {
        pbVar23 = pbVar24 + 1;
        bVar5 = bVar9;
        if (*pbVar24 != 0xff) {
          bVar5 = (byte)(uVar10 * *pbVar24 >> 8);
        }
        *pbVar20 = bVar5;
        pbVar20 = pbVar20 + 1;
        pbVar24 = pbVar23;
      } while (local_e4 + iVar13 != pbVar23);
    }
    piVar2 = DAT_10090014;
    *pbVar8 = bVar9;
    *piVar2 = iVar17;
    local_e4 = DAT_10090018;
  }
  uVar19 = (uint)local_a6;
  uVar10 = (uint)local_a4;
  piVar2 = *(int **)(param_1 + 8);
  if (iVar1 < *piVar2) {
    uVar15 = *piVar2 - iVar1;
  }
  else {
    uVar15 = 0;
  }
  iVar13 = piVar2[2];
  local_dc = uVar15;
  if (iVar13 < (int)(iVar1 + uVar19)) {
    local_dc = (iVar13 + 1) - iVar1;
  }
  iVar22 = piVar2[1];
  local_d8 = local_dc;
  if ((int)(iVar1 + uVar19) <= iVar13) {
    local_d8 = uVar19;
  }
  if (iVar18 < iVar22) {
    iVar13 = iVar22 + iVar6;
  }
  else {
    local_dc = 0;
    iVar13 = iVar22;
  }
  if (iVar18 < iVar22) {
    local_dc = iVar13 - iVar21;
  }
  local_c8 = uVar10;
  if (piVar2[3] < (int)(iVar18 + uVar10)) {
    local_c8 = (iVar6 + piVar2[3] + 1) - iVar21;
  }
  uVar16 = local_dc * iVar17 * uVar19 + uVar15 * iVar17;
  local_d0 = (byte *)(iVar3 + (uVar16 >> 3));
  FUN_101289f2(&local_7c,0x1c);
  local_74 = (undefined2)param_2[3];
  local_64 = 0xff;
  local_63 = (byte)(((uint)*(byte *)(param_2 + 10) << 0x1a) >> 0x1d);
  FUN_1008bbb4();
  uVar4 = FUN_10092f10();
  uVar12 = uVar10 * uVar19;
  if ((int)uVar4 <= (int)(uVar10 * uVar19)) {
    uVar12 = uVar4;
  }
  iVar6 = FUN_100942d8(uVar12);
  local_9c = iVar1 + uVar15;
  local_94 = iVar1 + -1 + local_d8;
  local_98 = iVar18 + local_dc;
  local_80 = local_98 + local_c8;
  iVar21 = (1 - local_9c) + local_94;
  local_90 = local_98;
  local_8c = local_9c;
  iStack_88 = local_98;
  local_84 = local_94;
  local_70 = iVar6;
  iVar18 = FUN_1008cb9c(&local_8c);
  local_7c = &local_9c;
  iVar1 = 0;
  local_68 = local_7c;
  for (; uVar16 = uVar16 & 7, (int)local_dc < (int)local_c8; local_dc = local_dc + 1) {
    pbVar20 = (byte *)(iVar6 + iVar1);
    uVar10 = uVar15;
    uVar4 = local_d4 >> uVar16;
    pbVar8 = pbVar20;
    while ((int)uVar10 < (int)local_d8) {
      uVar14 = (*local_d0 & uVar4) >> ((8U - iVar17) - uVar16 & 0xff) & 0xff;
      bVar9 = 0;
      if (uVar14 != 0) {
        bVar9 = local_e4[uVar14];
      }
      uVar10 = uVar10 + 1;
      *pbVar8 = bVar9;
      if (uVar16 < 8U - iVar17) {
        uVar16 = uVar16 + iVar17;
        uVar4 = uVar4 >> iVar17;
        pbVar8 = pbVar8 + 1;
      }
      else {
        uVar16 = 0;
        local_d0 = local_d0 + 1;
        uVar4 = local_d4;
        pbVar8 = pbVar8 + 1;
      }
    }
    iVar3 = local_d8 - uVar15;
    if ((int)local_d8 < (int)uVar15) {
      iVar3 = 0;
    }
    iVar13 = iVar1 + iVar3;
    if (iVar18 != 0) {
      iVar22 = FUN_1008ca98(pbVar20,local_9c,local_90,iVar21);
      local_6c = (undefined1)iVar22;
      if (iVar22 == 0) {
        FUN_101289f2(pbVar20,iVar21);
      }
    }
    if (iVar1 + iVar3 + (local_d8 - uVar15) < uVar12) {
      local_90 = local_90 + 1;
    }
    else {
      local_6c = 2;
      FUN_10128436(param_1,&local_7c);
      iVar13 = 0;
      local_98 = local_90 + 1;
      local_90 = local_98;
    }
    uVar16 = uVar16 + iVar17 * ((uVar19 + uVar15) - local_d8);
    local_d0 = local_d0 + (uVar16 >> 3);
    iVar1 = iVar13;
  }
  if (local_98 != local_90) {
    local_90 = local_90 + -1;
    local_6c = 2;
    FUN_10128436(param_1,&local_7c);
  }
  FUN_10094444(iVar6);
  return;
}


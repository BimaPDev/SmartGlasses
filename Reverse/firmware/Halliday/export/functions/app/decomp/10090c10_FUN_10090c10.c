/* FUN_10090c10 @ 0x10090c10 */

void FUN_10090c10(int param_1,int *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int *local_70;
  int local_6c;
  short local_68;
  uint local_64;
  undefined1 local_60;
  int *local_5c;
  byte local_58;
  undefined1 local_57;
  undefined1 auStack_54 [40];
  
  if (*(byte *)((int)param_2 + 5) < 3) {
    return;
  }
  local_b0 = *param_3;
  local_ac = param_3[1];
  local_a8 = param_3[2];
  local_a4 = param_3[3];
  if (((1 < param_2[9]) && (0xfc < *(byte *)(param_2 + 10))) && (*param_2 != 0)) {
    uVar8 = (uint)*(byte *)((int)param_2 + 0x29);
    local_b0 = local_b0 - ((int)(uVar8 << 0x1c) >> 0x1f);
    local_ac = local_ac - ((int)(uVar8 << 0x1d) >> 0x1f);
    local_a8 = local_a8 + ((int)(uVar8 << 0x1b) >> 0x1f);
    local_a4 = local_a4 + ((int)(uVar8 << 0x1e) >> 0x1f);
  }
  iVar2 = FUN_1012a896(&local_a0,&local_b0,*(undefined4 *)(param_1 + 8));
  if (iVar2 == 0) {
    return;
  }
  uVar8 = *(byte *)((int)param_2 + 0x11) & 7;
  if ((*(byte *)((int)param_2 + 0x11) & 7) == 0) {
    sVar1 = *(short *)((int)param_2 + 6);
  }
  else {
    sVar1 = (short)param_2[2];
  }
  if ((short)param_2[3] == sVar1) {
    uVar8 = 0;
  }
  iVar2 = FUN_1008cb9c(&local_b0);
  FUN_1011ea48(&local_70,0,0x1c);
  local_57 = (undefined1)param_2[1];
  iVar6 = *param_2;
  local_58 = *(byte *)((int)param_2 + 5);
  local_68 = sVar1;
  if (((iVar2 == 0) && (iVar6 == 0)) && (uVar8 == 0)) {
    local_70 = &local_b0;
    FUN_10128436();
    return;
  }
  bVar7 = local_58;
  if (0xfc < local_58) {
    bVar7 = 0xff;
  }
  iVar9 = (local_a8 + 1) - local_b0;
  iVar12 = (local_a4 + 1) - local_ac;
  iVar4 = iVar9;
  if (iVar12 <= iVar9) {
    iVar4 = iVar12;
  }
  iVar11 = iVar4 >> 1;
  if (iVar6 <= iVar4 >> 1) {
    iVar11 = iVar6;
  }
  iVar6 = (local_98 + 1) - local_a0;
  if ((iVar11 < 1) && (iVar2 == 0)) {
    local_b4 = -1;
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100942d8(iVar6);
    FUN_1008cd8c(auStack_54,&local_b0,iVar11,0);
    local_b4 = FUN_1008ca4c(auStack_54,0);
  }
  local_90 = local_a0;
  local_88 = local_98;
  local_70 = &local_90;
  local_58 = 0xff;
  local_64 = uVar3;
  local_5c = local_70;
  iVar4 = FUN_1008f924(param_2 + 2,iVar9,iVar12);
  if ((iVar4 != 0) && (uVar8 == 2)) {
    local_6c = *(int *)(iVar4 + 8) + (local_a0 - local_b0) * 2;
  }
  uVar10 = (*(byte *)((int)param_2 + 0x11) & 0x3f) >> 3;
  if (uVar8 == 1) {
    pcVar13 = DAT_10090fe8;
    if (uVar10 != 0) {
      local_6c = *(int *)(iVar4 + 8);
      goto LAB_10090dbe;
    }
    if (iVar4 == 0) goto LAB_10090dbe;
  }
  else if ((iVar4 == 0) || (uVar10 != 0)) {
    pcVar13 = DAT_10090fe4;
    if (uVar8 != 2) {
      pcVar13 = (code *)0x0;
    }
    goto LAB_10090dbe;
  }
  *(byte *)(iVar4 + 7) = *(byte *)(iVar4 + 7) & 0xbf;
  pcVar13 = DAT_10090fec;
  if (uVar8 == 1) {
    iVar9 = iVar12;
  }
LAB_10090dbe:
  iVar12 = local_9c;
  if (iVar2 == 0) {
    for (local_b8 = 0; local_b8 < iVar11; local_b8 = local_b8 + 1) {
      iVar12 = local_a4 - local_b8;
      iVar2 = local_ac + local_b8;
      if ((local_9c <= iVar2) || (iVar12 <= local_94)) {
        thunk_FUN_1011ea48(uVar3,bVar7,iVar6);
        iVar5 = FUN_1008ca98(uVar3,local_90,iVar2,iVar6);
        if (iVar5 == 1) {
          local_60 = 2;
        }
        else {
          local_60 = (undefined1)iVar5;
        }
        if (local_9c <= iVar2) {
          local_8c = iVar2;
          local_84 = iVar2;
          if (pcVar13 != (code *)0x0) {
            (*pcVar13)(iVar4,local_90,iVar2 - local_ac,iVar9);
          }
          if (uVar8 == 1) {
            local_68 = *(short *)(*(int *)(iVar4 + 8) + (iVar2 - local_ac) * 2);
          }
          FUN_10128436(param_1,&local_70);
        }
        if (iVar12 <= local_94) {
          local_8c = iVar12;
          local_84 = iVar12;
          if (pcVar13 != (code *)0x0) {
            (*pcVar13)(iVar4,local_90,iVar12 - local_ac,iVar9);
          }
          if (uVar8 == 1) {
            local_68 = *(short *)(*(int *)(iVar4 + 8) + (iVar12 - local_ac) * 2);
          }
          FUN_10128436(param_1,&local_70);
        }
      }
    }
    local_74 = local_a4 - iVar11;
    local_80 = local_b0;
    local_7c = local_ac + iVar11;
    local_78 = local_a8;
    iVar2 = FUN_1008cb9c(&local_80);
    local_58 = bVar7;
    if ((iVar2 == 0) && (uVar8 == 0)) {
      local_8c = local_ac + iVar11;
      local_84 = local_a4 - iVar11;
      local_64 = uVar8;
      FUN_10128436(param_1,&local_70);
    }
    else {
      iVar12 = local_a4 - iVar11;
      local_60 = 1;
      for (iVar11 = iVar11 + local_ac; iVar11 <= iVar12; iVar11 = iVar11 + 1) {
        if (iVar2 != 0) {
          thunk_FUN_1011ea48(uVar3,bVar7,iVar6);
          local_60 = FUN_1008ca98(uVar3,local_a0,iVar11,iVar6);
        }
        local_8c = iVar11;
        local_84 = iVar11;
        if (pcVar13 != (code *)0x0) {
          (*pcVar13)(iVar4,local_90,iVar11 - local_ac,iVar9);
        }
        if (uVar8 == 1) {
          local_68 = *(short *)(*(int *)(iVar4 + 8) + (iVar11 - local_ac) * 2);
        }
        FUN_10128436(param_1,&local_70);
      }
    }
  }
  else {
    for (; iVar12 <= local_94; iVar12 = iVar12 + 1) {
      local_8c = iVar12;
      local_84 = iVar12;
      thunk_FUN_1011ea48(uVar3,bVar7,iVar6);
      iVar2 = FUN_1008ca98(uVar3,local_a0,iVar12,iVar6);
      if (iVar2 == 1) {
        local_60 = 2;
      }
      else {
        local_60 = (undefined1)iVar2;
      }
      if (pcVar13 != (code *)0x0) {
        (*pcVar13)(iVar4,local_90,iVar12 - local_ac,iVar9);
      }
      if (uVar8 == 1) {
        local_68 = *(short *)(*(int *)(iVar4 + 8) + (iVar12 - local_ac) * 2);
      }
      FUN_10128436(param_1,&local_70);
    }
  }
  if (uVar3 != 0) {
    FUN_10094444(uVar3);
  }
  if (local_b4 != -1) {
    FUN_1008cadc(local_b4);
    FUN_1008cb2c(auStack_54);
  }
  if (iVar4 != 0) {
    FUN_1008fb20(iVar4);
  }
  return;
}


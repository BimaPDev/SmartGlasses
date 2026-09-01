/* FUN_1008b0a0 @ 0x1008b0a0 */

void FUN_1008b0a0(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint local_84;
  uint *puStack_80;
  int iStack_7c;
  int local_78;
  uint local_74;
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  uint *puStack_60;
  int iStack_5c;
  int iStack_58;
  uint local_54;
  undefined4 *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint *local_40;
  int local_3c;
  undefined4 uStack_38;
  byte local_34;
  byte local_2c;
  
  iVar4 = FUN_10124cb8(param_2,1);
  if (iVar4 != 0) {
    return;
  }
  iVar4 = FUN_1012548c(param_2);
  if (iVar4 == 0) {
    FUN_101271b8(param_1,param_2);
    return;
  }
  bVar1 = FUN_1012691c(param_2,0,0x61);
  if (bVar1 < 2) {
    return;
  }
  uVar5 = FUN_10125436(param_2);
  FUN_10125704(param_2,&local_74);
  FUN_1012a862(&local_74,uVar5);
  if (iVar4 == 2) {
    local_54 = local_74;
    local_50 = puStack_70;
    uStack_4c = uStack_6c;
    uStack_48 = uStack_68;
    FUN_1012590c(param_2,&local_54,0,0);
    iVar6 = FUN_1012a896(&local_64,*(undefined4 *)(param_1 + 8),&local_54);
    if (iVar6 == 0) {
      return;
    }
    puVar7 = &local_44;
    local_44 = local_64;
    local_40 = puStack_60;
    local_3c = iStack_5c;
    uStack_38 = iStack_58;
    FUN_1012590c(param_2,puVar7,0,1);
  }
  else {
    if (iVar4 != 1) {
      uVar11 = 0x415;
      uVar5 = DAT_1008b394;
      uVar13 = DAT_1008b390;
      goto LAB_1008b1c4;
    }
    puVar7 = *(undefined4 **)(param_1 + 8);
  }
  iVar6 = FUN_1012a896(&local_44,puVar7,&local_74);
  if (iVar6 == 0) {
    return;
  }
  local_84 = local_44;
  puStack_80 = local_40;
  iStack_7c = local_3c;
  local_78 = uStack_38;
  iVar6 = FUN_1012aa22(&local_84,param_2 + 0x14,0);
  if (iVar6 == 0) {
    uVar12 = 1;
  }
  else {
    local_44 = local_44 & 0xffffff00;
    local_40 = &local_84;
    FUN_10086f50(param_2,0x12,&local_44);
    uVar12 = 0;
    if ((local_44 & 0xff) != 0) {
      uVar12 = 1;
    }
  }
  if (iVar4 == 1) {
    uVar12 = uVar12 | 2;
  }
  puVar7 = (undefined4 *)FUN_1008c930(param_1,&local_84,uVar12);
  if (puVar7 != (undefined4 *)0x0) {
    uVar8 = FUN_1012691c(param_2,0,0x6f);
    uVar9 = FUN_1012691c(param_2,0,0x70);
    if (((uVar8 & 0x60000000) == 0x20000000) && (uVar10 = uVar8 & 0x9fffffff, (int)uVar10 < 0x7d1))
    {
      if (1000 < (int)uVar10) {
        uVar10 = 1000 - uVar10;
      }
      uVar8 = (int)((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x14)) * uVar10 + uVar10) / 100;
    }
    if (((uVar9 & 0x60000000) == 0x20000000) && (uVar10 = uVar9 & 0x9fffffff, (int)uVar10 < 0x7d1))
    {
      if (1000 < (int)uVar10) {
        uVar10 = 1000 - uVar10;
      }
      uVar9 = (int)((*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x18)) * uVar10 + uVar10) / 100;
    }
    FUN_10127788(&local_44);
    uStack_38 = CONCAT13(bVar1,(undefined3)uStack_38);
    sVar2 = FUN_1012691c(param_2,0,0x6e);
    if (sVar2 < 0xe11) {
      if (sVar2 < 0) {
        sVar2 = sVar2 + 0xe10;
      }
    }
    else {
      sVar2 = sVar2 + -0xe10;
    }
    local_44 = CONCAT22(local_44._2_2_,sVar2);
    uVar3 = FUN_1012691c(param_2,0,0x6d);
    local_44 = CONCAT22(uVar3,(undefined2)local_44);
    bVar1 = FUN_1012691c(param_2,0,0x68);
    local_34 = local_34 & 0xf0 | bVar1 & 0xf;
    local_2c = local_2c & 0xfe |
               (byte)(((uint)*(byte *)(*(int *)*DAT_1008b39c + 0x1c) << 0x1c) >> 0x1f);
    uVar10 = uVar12 & 2;
    if (uVar10 != 0) {
      puVar7[4] = *puVar7;
      puVar7[5] = puVar7[1];
      puVar7[6] = puVar7[2];
      puVar7[7] = puVar7[3];
      iVar4 = puVar7[5] + puVar7[9] + -1;
      if (iVar4 < (int)puVar7[3]) {
        puVar7[7] = iVar4;
      }
      else {
        puVar7[7] = puVar7[3];
      }
    }
    while ((int)puVar7[5] <= local_78) {
      if (uVar10 != 0) {
        uVar5 = 0;
        if (uVar12 != 2) {
          iVar4 = FUN_1012aa22(puVar7 + 4,param_2 + 0x14,0);
          if (iVar4 != 0) {
            local_54 = local_54 & 0xffffff00;
            local_50 = puVar7 + 4;
            FUN_10086f50(param_2,0x12,&local_54);
            uVar5 = 0;
            if ((local_54 & 0xff) == 0) goto LAB_1008b33c;
          }
          uVar5 = 1;
          puVar7[7] = puVar7[5] + puVar7[8] + -1;
        }
LAB_1008b33c:
        if ((int)puVar7[3] < (int)puVar7[7]) {
          puVar7[7] = puVar7[3];
        }
        FUN_1012781e(param_1,puVar7,uVar5);
      }
      FUN_101271b8(param_1,param_2);
      local_40 = (uint *)((*(int *)(param_2 + 0x14) - **(int **)(param_1 + 4)) + uVar8);
      local_3c = (*(int *)(param_2 + 0x18) - (*(int **)(param_1 + 4))[1]) + uVar9;
      FUN_10127826(param_1,puVar7,&local_44);
      if (uVar10 == 0) break;
      puVar7[5] = puVar7[7] + 1;
      puVar7[7] = puVar7[9] + -1 + puVar7[7] + 1;
    }
    FUN_1008ca08(param_1,puVar7);
    return;
  }
  uVar11 = 0x458;
  uVar5 = DAT_1008b38c;
  uVar13 = DAT_1008b388;
LAB_1008b1c4:
  FUN_10094174(2,DAT_1008b398,uVar11,uVar5,uVar13);
  return;
}


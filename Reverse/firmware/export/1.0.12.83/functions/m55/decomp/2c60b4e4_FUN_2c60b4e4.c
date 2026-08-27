/* FUN_2c60b4e4 @ 0x2c60b4e4 */

void FUN_2c60b4e4(int param_1,short *param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  short local_90;
  int local_84;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  undefined1 auStack_60 [24];
  short *local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  short *local_34;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c60b7e8;
  if (2 < *(byte *)((int)param_2 + 3)) {
    local_80 = *param_3;
    local_7c = param_3[2];
    local_7a = param_3[3];
    local_7e = param_3[1];
    if (((1 < param_2[0x1c]) && (0xfc < *(byte *)(param_2 + 0x1d))) && (*param_2 != 0)) {
      uVar8 = (uint)*(byte *)((int)param_2 + 0x3b);
      local_80 = local_80 - (short)((int)(uVar8 << 0x1c) >> 0x1f);
      local_7e = local_7e - (short)((int)(uVar8 << 0x1d) >> 0x1f);
      local_7c = local_7c + (short)((int)(uVar8 << 0x1b) >> 0x1f);
      local_7a = local_7a + (short)((int)(uVar8 << 0x1e) >> 0x1f);
    }
    iVar4 = FUN_2c62a6b4(&local_78,&local_80,*(undefined4 *)(param_1 + 8));
    if (iVar4 != 0) {
      bVar15 = *(byte *)((int)param_2 + 0x21) & 7;
      if ((*(byte *)((int)param_2 + 0x21) & 7) == 0) {
        iVar4 = *(int *)(param_2 + 2);
      }
      else {
        iVar4 = *(int *)(param_2 + 4);
      }
      if (*(int *)(param_2 + 8) == iVar4) {
        bVar15 = 0;
      }
      uVar8 = FUN_2c613fa8(&local_80);
      local_34 = (short *)0x0;
      local_48 = (short *)0x0;
      local_44 = 0;
      local_3c = 0;
      local_38 = 0;
      local_30 = (uint)*(byte *)(param_2 + 1) << 8;
      iVar9 = (int)*param_2;
      local_40 = iVar4;
      if (((uVar8 == 0) && (iVar9 == 0)) && (bVar15 == 0)) {
        local_48 = &local_80;
        local_30 = (uint)CONCAT11(*(byte *)(param_2 + 1),*(undefined1 *)((int)param_2 + 3));
        FUN_2c60d588(param_1,&local_48);
      }
      else {
        iVar12 = (int)(short)((local_7c + 1) - local_80);
        iVar4 = (int)(short)((local_7a + 1) - local_7e);
        bVar14 = *(byte *)((int)param_2 + 3);
        if (0xfc < bVar14) {
          bVar14 = 0xff;
        }
        iVar6 = iVar4;
        if (iVar12 <= iVar4) {
          iVar6 = iVar12;
        }
        iVar11 = iVar6 >> 1;
        if (iVar9 <= iVar6 >> 1) {
          iVar11 = iVar9;
        }
        uVar7 = uVar8;
        if (0 < iVar11) {
          uVar7 = uVar8 | 1;
        }
        iVar9 = (int)(short)((local_74 + 1) - local_78);
        if ((uVar7 & 0xff) == 0) {
          local_84 = -1;
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_2c62bf1c(iVar9);
          FUN_2c6144a0(auStack_60,&local_80,iVar11,0);
          local_84 = FUN_2c613e5c(auStack_60,0);
        }
        local_48 = &local_70;
        local_70 = local_78;
        local_30 = CONCAT31(local_30._1_3_,0xff);
        local_3c = iVar6;
        local_34 = local_48;
        iVar4 = FUN_2c610690(param_2 + 4,iVar12,iVar4);
        if ((iVar4 != 0) && (bVar15 == 2)) {
          local_44 = *(int *)(iVar4 + 8) + ((int)local_78 - (int)local_80) * 4;
        }
        if (uVar8 == 0) {
          local_66 = local_7e;
          local_62 = local_7a;
          if ((uVar7 & 0xff) != 0) {
            iVar12 = 0;
            do {
              sVar2 = local_66 + (short)iVar12;
              sVar1 = local_62 - (short)iVar12;
              iVar13 = (int)sVar2;
              iVar10 = (int)sVar1;
              if ((local_76 <= iVar13) || (iVar10 <= local_72)) {
                FUN_2c62c314(iVar6,bVar14,iVar9);
                iVar5 = FUN_2c613e90(iVar6,(int)local_70,iVar13,iVar9);
                if (iVar5 == 1) {
                  local_38._0_1_ = 2;
                }
                else {
                  local_38._0_1_ = (undefined1)iVar5;
                }
                if (local_76 <= iVar13) {
                  if (bVar15 == 1) {
                    local_40 = *(int *)(*(int *)(iVar4 + 8) + (iVar13 - local_7e) * 4);
                  }
                  local_6e = sVar2;
                  local_6a = sVar2;
                  FUN_2c60d588(param_1,&local_48);
                }
                local_66 = local_7e;
                local_62 = local_7a;
                if (iVar10 <= local_72) {
                  if (bVar15 == 1) {
                    local_40 = *(int *)(*(int *)(iVar4 + 8) + (iVar10 - local_7e) * 4);
                  }
                  local_6e = sVar1;
                  local_6a = sVar1;
                  FUN_2c60d588(param_1,&local_48);
                  local_66 = local_7e;
                  local_62 = local_7a;
                }
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar11);
          }
          local_90 = (short)iVar11;
          local_66 = local_66 + local_90;
          local_62 = local_62 - local_90;
          local_68 = local_80;
          local_64 = local_7c;
          uVar8 = FUN_2c613fa8(&local_68);
          local_30 = CONCAT31(local_30._1_3_,bVar14);
          if ((((uVar8 ^ 1) & 0xff) == 0) || (bVar15 != 0)) {
            iVar10 = (int)local_7a;
            local_38 = CONCAT31(local_38._1_3_,1);
            for (iVar12 = local_7e + iVar11; iVar12 <= iVar10 - iVar11; iVar12 = iVar12 + 1) {
              sVar1 = (short)iVar12;
              if (uVar8 != 0) {
                FUN_2c62c314(iVar6,bVar14,iVar9);
                uVar3 = FUN_2c613e90(iVar6,(int)local_78,(int)sVar1,iVar9);
                local_38 = CONCAT31(local_38._1_3_,uVar3);
              }
              if (bVar15 == 1) {
                local_40 = *(int *)(*(int *)(iVar4 + 8) + (iVar12 - local_7e) * 4);
              }
              local_6e = sVar1;
              local_6a = sVar1;
              FUN_2c60d588(param_1,&local_48);
            }
          }
          else {
            local_6e = local_7e + local_90;
            local_6a = local_7a - local_90;
            local_3c = 0;
            FUN_2c60d588(param_1,&local_48);
          }
        }
        else {
          iVar12 = (int)local_76;
          if (iVar12 <= local_72) {
            do {
              local_6e = (short)iVar12;
              iVar11 = (int)local_6e;
              local_6a = local_6e;
              FUN_2c62c314(iVar6,bVar14,iVar9);
              iVar11 = FUN_2c613e90(iVar6,(int)local_78,iVar11,iVar9);
              if (iVar11 == 1) {
                local_38 = CONCAT31(local_38._1_3_,2);
              }
              else {
                local_38 = CONCAT31(local_38._1_3_,(char)iVar11);
              }
              if (bVar15 == 1) {
                local_40 = *(int *)(*(int *)(iVar4 + 8) + (iVar12 - local_7e) * 4);
              }
              FUN_2c60d588(param_1,&local_48);
              iVar12 = iVar12 + 1;
            } while (iVar12 <= local_72);
          }
        }
        if (iVar6 != 0) {
          FUN_2c62c040(iVar6);
        }
        if (local_84 != -1) {
          FUN_2c613ee4(local_84);
          FUN_2c613f44(auStack_60);
        }
        if (iVar4 != 0) {
          FUN_2c61095c(iVar4);
        }
      }
    }
  }
  if (*DAT_2c60b7e8 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


/* FUN_2c4cbe0c @ 0x2c4cbe0c */

undefined4 FUN_2c4cbe0c(uint *param_1,int param_2,int *param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int local_6c;
  int local_64;
  undefined1 *local_50;
  int local_30;
  
  iVar5 = *(int *)(param_2 + 0xc0);
  cVar2 = *(char *)(param_2 + 0xb3);
  *(undefined1 *)(iVar5 + 0x875) = 0;
  piVar4 = param_3;
  if (cVar2 == '\x02') {
    piVar4 = param_3 + 1;
  }
  iVar14 = *piVar4;
  FUN_2c674268(iVar5 + 0x200,0,0x80);
  bVar3 = *(byte *)(param_2 + 0xb4);
  uVar9 = (uint)*(byte *)(param_2 + 0xb0);
  local_50 = (undefined1 *)(iVar5 + 0x772);
  if (*(char *)(param_2 + 0xb3) == '\x02') {
    iVar16 = 3;
    uVar6 = 7;
  }
  else {
    iVar16 = 5;
    uVar6 = 0x1f;
  }
  if (uVar9 != 0) {
    puVar17 = param_1 + 2;
    local_64 = 0;
    local_30 = 0;
    do {
      if (bVar3 != 0) {
        local_6c = 0;
        do {
          uVar9 = param_1[1];
          if ((param_4 & 1) == 0) {
            uVar12 = 4 - uVar9;
            uVar7 = 0;
            if ((int)uVar12 < 1) {
              uVar12 = *param_1;
            }
            else {
              if (uVar12 != 0x20) {
                uVar7 = *param_1 << (uVar12 & 0xff);
              }
              uVar12 = FUN_2c4d74d4(puVar17);
              *param_1 = uVar12;
              uVar9 = param_1[1] + 0x20;
            }
            uVar9 = uVar9 - 4;
            uVar8 = *(uint *)(DAT_2c4cc0f8 + 0x10);
            param_1[1] = uVar9;
            uVar7 = (uVar7 | uVar12 >> (uVar9 & 0xff)) & uVar8 & 0xff;
LAB_2c4cc004:
            uVar12 = iVar16 - uVar9;
            if ((int)uVar12 < 1) {
              uVar12 = *param_1;
              uVar8 = 0;
            }
            else {
              if (uVar12 == 0x20) {
                uVar8 = 0;
              }
              else {
                uVar8 = *param_1 << (uVar12 & 0xff);
              }
              uVar12 = FUN_2c4d74d4(puVar17);
              *param_1 = uVar12;
              uVar9 = param_1[1] + 0x20;
            }
            uVar9 = uVar9 - iVar16;
            uVar11 = *(uint *)(DAT_2c4cc0f8 + iVar16 * 4);
            param_1[1] = uVar9;
            uVar12 = (uVar12 >> (uVar9 & 0xff) | uVar8) & uVar11;
            if (uVar12 == uVar6) {
              iVar15 = 0;
              do {
                uVar8 = iVar16 - uVar9;
                uVar13 = 0;
                iVar15 = iVar15 + uVar12;
                if ((int)uVar8 < 1) {
                  uVar8 = *param_1;
                }
                else {
                  if (uVar8 == 0x20) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = *param_1 << (uVar8 & 0xff);
                  }
                  uVar8 = FUN_2c4d74d4(puVar17);
                  *param_1 = uVar8;
                  uVar9 = param_1[1] + 0x20;
                }
                uVar9 = uVar9 - iVar16;
                param_1[1] = uVar9;
                uVar8 = (uVar8 >> (uVar9 & 0xff) | uVar13) & uVar11;
              } while (uVar12 == uVar8);
              uVar12 = iVar15 + uVar8;
            }
          }
          else {
            uVar7 = 5 - uVar9;
            if ((int)uVar7 < 1) {
              uVar7 = *param_1;
              uVar12 = 0;
            }
            else {
              if (uVar7 == 0x20) {
                uVar12 = 0;
              }
              else {
                uVar12 = *param_1 << (uVar7 & 0xff);
              }
              uVar7 = FUN_2c4d74d4(puVar17);
              *param_1 = uVar7;
              uVar9 = param_1[1] + 0x20;
            }
            uVar9 = uVar9 - 5;
            uVar8 = *(uint *)(DAT_2c4cc0f8 + 0x14);
            param_1[1] = uVar9;
            uVar7 = (uVar12 | uVar7 >> (uVar9 & 0xff)) & uVar8 & 0xff;
            if ((uVar7 < 0xb) || (uVar7 - 0xc < 4)) goto LAB_2c4cc004;
            uVar12 = 1;
          }
          iVar15 = uVar12 + local_6c;
          if ((param_4 & 4) != 0) {
            if (0xff < local_64) {
              return 0x4002;
            }
            if (*(char *)(param_2 + 0xb3) == '\x02') {
              bVar1 = *(byte *)((int)param_3 + 9);
            }
            else {
              bVar1 = *(byte *)(param_3 + 2);
            }
            if ((int)(uint)bVar1 < iVar15) {
              return 0x4002;
            }
            *(short *)(iVar5 + 0x572 + local_64 * 2) =
                 *(short *)(iVar14 + iVar15 * 2) - *(short *)(iVar14 + local_6c * 2);
            local_64 = local_64 + 1;
            if (uVar7 == 0xc) {
              return 0x4006;
            }
            *local_50 = (char)uVar7;
            *(char *)(*(int *)(param_2 + 0xc0) + 0x875) =
                 *(char *)(*(int *)(param_2 + 0xc0) + 0x875) + '\x01';
            local_50 = local_50 + 1;
          }
          if (*(char *)(param_2 + 0xb3) == '\x02') {
            if (0x80 < local_30 * 0x10 + iVar15) {
              return 0x4004;
            }
          }
          else if (0x40 < iVar15) {
            return 0x4004;
          }
          if ((uVar7 == 0xc) ||
             ((uVar7 - 0xe < 2 && (*(char *)(*(int *)(param_2 + 0xc0) + 0x563) == '\0')))) {
            return 0x4006;
          }
          if (local_6c < iVar15) {
            puVar10 = (undefined1 *)(local_6c + local_30 * 0x10 + 0x1ff + iVar5);
            do {
              puVar10 = puVar10 + 1;
              *puVar10 = (char)uVar7;
              local_6c = iVar15;
            } while ((undefined1 *)(iVar5 + local_30 * 0x10 + 0x1ff + iVar15) != puVar10);
          }
        } while (local_6c < (int)(uint)bVar3);
        uVar9 = (uint)*(byte *)(param_2 + 0xb0);
      }
      local_30 = local_30 + 1;
    } while (local_30 < (int)uVar9);
  }
  return 0;
}


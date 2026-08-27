/* FUN_1401f8c4 @ 0x1401f8c4 */

undefined1 * FUN_1401f8c4(uint *param_1,int param_2,int *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  bool bVar17;
  int local_6c;
  int local_64;
  undefined1 *local_50;
  int local_30;
  
  piVar3 = param_3;
  if (*(char *)(param_2 + 0xb3) == '\x02') {
    piVar3 = param_3 + 1;
  }
  iVar13 = *piVar3;
  iVar11 = *(int *)(param_2 + 0xc0);
  *(undefined1 *)(iVar11 + 0x875) = 0;
  func_0x13f4aa28(iVar11 + 0x200,0,0x80);
  bVar17 = *(char *)(param_2 + 0xb3) != '\x02';
  if (bVar17) {
    uVar6 = 0x1f;
  }
  else {
    uVar6 = 7;
  }
  bVar2 = *(byte *)(param_2 + 0xb4);
  uVar7 = (uint)*(byte *)(param_2 + 0xb0);
  local_50 = (undefined1 *)(iVar11 + 0x772);
  if (bVar17) {
    iVar15 = 5;
  }
  else {
    iVar15 = 3;
  }
  if (uVar7 != 0) {
    local_64 = 0;
    puVar16 = param_1 + 2;
    local_30 = 0;
    do {
      if (bVar2 != 0) {
        local_6c = 0;
        do {
          uVar7 = param_1[1];
          if ((param_4 & 1) == 0) {
            uVar10 = 4 - uVar7;
            uVar5 = 0;
            if ((int)uVar10 < 1) {
              uVar10 = *param_1;
            }
            else {
              if (uVar10 != 0x20) {
                uVar5 = *param_1 << (uVar10 & 0xff);
              }
              uVar10 = FUN_1401c128(puVar16);
              *param_1 = uVar10;
              uVar7 = param_1[1] + 0x20;
            }
            uVar7 = uVar7 - 4;
            uVar14 = *(uint *)(DAT_1401fbb0 + 0x10);
            param_1[1] = uVar7;
            uVar5 = (uVar5 | uVar10 >> (uVar7 & 0xff)) & uVar14 & 0xff;
LAB_1401fac2:
            uVar10 = iVar15 - uVar7;
            if ((int)uVar10 < 1) {
              uVar14 = 0;
              uVar10 = *param_1;
            }
            else {
              if (uVar10 == 0x20) {
                uVar14 = 0;
              }
              else {
                uVar14 = *param_1 << (uVar10 & 0xff);
              }
              uVar10 = FUN_1401c128(puVar16);
              *param_1 = uVar10;
              uVar7 = param_1[1] + 0x20;
            }
            uVar7 = uVar7 - iVar15;
            uVar9 = *(uint *)(DAT_1401fbb0 + iVar15 * 4);
            uVar10 = (uVar10 >> (uVar7 & 0xff) | uVar14) & uVar9;
            param_1[1] = uVar7;
            if (uVar10 == uVar6) {
              iVar12 = 0;
              do {
                uVar14 = iVar15 - uVar7;
                iVar12 = iVar12 + uVar10;
                if ((int)uVar14 < 1) {
                  uVar14 = 0;
                  uVar4 = *param_1;
                }
                else {
                  if (uVar14 == 0x20) {
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = *param_1 << (uVar14 & 0xff);
                  }
                  uVar4 = FUN_1401c128(puVar16);
                  *param_1 = uVar4;
                  uVar7 = param_1[1] + 0x20;
                }
                uVar7 = uVar7 - iVar15;
                uVar14 = (uVar4 >> (uVar7 & 0xff) | uVar14) & uVar9;
                param_1[1] = uVar7;
              } while (uVar10 == uVar14);
              uVar10 = iVar12 + uVar14;
            }
          }
          else {
            uVar5 = 5 - uVar7;
            if ((int)uVar5 < 1) {
              uVar10 = 0;
              uVar5 = *param_1;
            }
            else {
              if (uVar5 == 0x20) {
                uVar10 = 0;
              }
              else {
                uVar10 = *param_1 << (uVar5 & 0xff);
              }
              uVar5 = FUN_1401c128(puVar16);
              *param_1 = uVar5;
              uVar7 = param_1[1] + 0x20;
            }
            uVar7 = uVar7 - 5;
            uVar5 = (uVar10 | uVar5 >> (uVar7 & 0xff)) & *(uint *)(DAT_1401fbb0 + 0x14) & 0xff;
            param_1[1] = uVar7;
            if ((uVar5 < 0xb) || (uVar5 - 0xc < 4)) goto LAB_1401fac2;
            uVar10 = 1;
          }
          iVar12 = uVar10 + local_6c;
          if ((param_4 & 4) != 0) {
            if (0xff < local_64) {
              return (undefined1 *)0x4002;
            }
            if (*(char *)(param_2 + 0xb3) == '\x02') {
              bVar1 = *(byte *)((int)param_3 + 9);
            }
            else {
              bVar1 = *(byte *)(param_3 + 2);
            }
            if ((int)(uint)bVar1 < iVar12) {
              return (undefined1 *)0x4002;
            }
            *(short *)(iVar11 + 0x572 + local_64 * 2) =
                 *(short *)(iVar13 + iVar12 * 2) - *(short *)(iVar13 + local_6c * 2);
            local_64 = local_64 + 1;
            if (uVar5 == 0xc) {
              return (undefined1 *)0x4006;
            }
            *local_50 = (char)uVar5;
            *(char *)(*(int *)(param_2 + 0xc0) + 0x875) =
                 *(char *)(*(int *)(param_2 + 0xc0) + 0x875) + '\x01';
            local_50 = local_50 + 1;
          }
          if (*(char *)(param_2 + 0xb3) == '\x02') {
            if (0x80 < local_30 * 0x10 + iVar12) goto LAB_1401fb82;
          }
          else if (0x40 < iVar12) {
LAB_1401fb82:
            return &DAT_00004004;
          }
          if ((uVar5 == 0xc) ||
             ((uVar5 - 0xe < 2 && (*(char *)(*(int *)(param_2 + 0xc0) + 0x563) == '\0')))) {
            return (undefined1 *)0x4006;
          }
          if (local_6c < iVar12) {
            puVar8 = (undefined1 *)(local_6c + local_30 * 0x10 + 0x1ff + iVar11);
            do {
              puVar8 = puVar8 + 1;
              *puVar8 = (char)uVar5;
              local_6c = iVar12;
            } while ((undefined1 *)(iVar11 + local_30 * 0x10 + 0x1ff + iVar12) != puVar8);
          }
        } while (local_6c < (int)(uint)bVar2);
        uVar7 = (uint)*(byte *)(param_2 + 0xb0);
      }
      local_30 = local_30 + 1;
    } while (local_30 < (int)uVar7);
  }
  return (undefined1 *)0x0;
}


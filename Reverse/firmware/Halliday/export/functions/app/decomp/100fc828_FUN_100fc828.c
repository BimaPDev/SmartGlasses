/* FUN_100fc828 @ 0x100fc828 */

undefined4 FUN_100fc828(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 uVar22;
  
  puVar18 = param_1 + 0x2a;
  uVar3 = param_1[0x10];
  param_1[0x2d] = param_3;
  param_1[0x2a] = param_4;
  param_1[0x2c] = param_2;
  param_1[0x2e] = param_1[0xf];
  param_1[0xc] = (uint)puVar18;
  param_1[0x2f] = uVar3;
  param_1[0x2b] = param_5;
  puVar5 = puVar18;
  do {
    uVar20 = uVar3;
    uVar12 = param_5;
    if ((int)uVar3 <= (int)param_5) {
      uVar20 = param_5;
      uVar12 = uVar3;
    }
    if (((int)param_3 < (int)uVar12) || ((int)uVar20 < (int)param_3)) {
      iVar6 = puVar5[4] + puVar5[2];
      iVar9 = puVar5[2] + param_4;
      puVar5[9] = uVar3;
      puVar5[8] = puVar5[4];
      puVar5[4] = iVar9 + iVar6 >> 2;
      puVar5[6] = iVar6 >> 1;
      puVar5[2] = iVar9 >> 1;
      puVar5[5] = (int)(param_3 + param_5 + uVar3 + param_3) >> 2;
      puVar5[7] = (int)(uVar3 + param_3) >> 1;
      puVar5[3] = (int)(param_3 + param_5) >> 1;
      puVar5 = puVar5 + 4;
      param_1[0xc] = (uint)puVar5;
    }
    else if (uVar3 == param_5) {
      puVar5 = puVar5 + -4;
      param_1[0xc] = (uint)puVar5;
    }
    else {
      cVar2 = (char)param_1[0x17];
      if ((int)uVar3 < (int)param_5) {
        uVar12 = param_5;
        if (cVar2 != '\x01') {
          bVar1 = (int)(((param_1[1] - 1) + uVar3 & -param_1[1]) - uVar3) < (int)param_1[2];
          uVar4 = 1;
          goto LAB_100fc89e;
        }
LAB_100fcb06:
        uVar20 = param_1[0x11];
        puVar17 = (uint *)param_1[9];
        puVar21 = puVar17;
        if (((int)uVar20 <= (int)uVar12) && (uVar15 = param_1[0x12], (int)uVar3 <= (int)uVar15)) {
          uVar16 = param_1[1];
          uVar12 = -uVar16 & uVar12;
          if ((int)uVar12 <= (int)uVar15) {
            uVar15 = uVar12;
          }
          uVar12 = uVar20;
          if (((int)uVar20 <= (int)uVar3) &&
             (uVar20 = uVar3 + (uVar16 - 1) & -uVar16, uVar12 = uVar20,
             (ushort)((ushort)(uVar16 - 1) & (ushort)uVar3) == 0)) {
            if (*(char *)((int)param_1 + 0x4f) == '\0') {
              puVar17 = puVar17 + 1;
            }
            else {
              *(undefined1 *)((int)param_1 + 0x4f) = 0;
              puVar21 = puVar17 + -1;
            }
            *puVar21 = puVar5[4];
            uVar12 = uVar16 + uVar20;
          }
          if (*(char *)((int)param_1 + 0x4e) != '\0') {
            *(int *)(param_1[0x14] + 0x14) = (int)uVar20 >> (*param_1 & 0xff);
            *(undefined1 *)((int)param_1 + 0x4e) = 0;
          }
          puVar21 = puVar17;
          if ((int)uVar12 <= (int)uVar15) {
            puVar11 = puVar5;
            if ((uint *)param_1[8] <= puVar17 + ((int)(uVar15 - uVar12) >> (*param_1 & 0xff)) + 1) {
              param_1[9] = (uint)puVar17;
              param_1[10] = 0x62;
              return 1;
            }
            do {
              *(undefined1 *)((int)param_1 + 0x4f) = 0;
              uVar3 = puVar11[1];
              puVar21 = puVar17;
              if ((int)uVar12 < (int)uVar3) {
                uVar20 = puVar11[5];
                iVar9 = uVar12 - uVar20;
                if ((int)(uVar3 - uVar20) < (int)param_1[4]) {
                  puVar10 = puVar11 + -4;
                  uVar12 = uVar12 + uVar16;
                  puVar21 = puVar17 + 1;
                  *puVar17 = puVar11[4] +
                             (int)(iVar9 * (*puVar11 - puVar11[4])) / (int)(uVar3 - uVar20);
                }
                else {
                  iVar9 = uVar3 + puVar11[3];
                  iVar19 = puVar11[2] + *puVar11;
                  iVar6 = puVar11[3] + uVar20;
                  iVar14 = puVar11[2] + puVar11[4];
                  puVar11[9] = uVar20;
                  puVar11[8] = puVar11[4];
                  puVar11[4] = iVar19 + iVar14 >> 2;
                  puVar11[6] = iVar14 >> 1;
                  puVar11[2] = iVar19 >> 1;
                  puVar11[5] = iVar9 + iVar6 >> 2;
                  puVar11[7] = iVar6 >> 1;
                  puVar11[3] = iVar9 >> 1;
                  puVar10 = puVar11 + 4;
                }
              }
              else {
                if (uVar3 == uVar12) {
                  *(undefined1 *)((int)param_1 + 0x4f) = 1;
                  uVar12 = uVar12 + uVar16;
                  puVar21 = puVar17 + 1;
                  *puVar17 = *puVar11;
                }
                puVar10 = puVar11 + -4;
              }
            } while ((puVar5 <= puVar10) &&
                    (puVar11 = puVar10, puVar17 = puVar21, (int)uVar12 <= (int)uVar15));
          }
        }
        puVar5 = puVar5 + -4;
        param_1[0xc] = (uint)puVar5;
        param_1[9] = (uint)puVar21;
      }
      else {
        uVar12 = param_5;
        if (cVar2 != '\x02') {
          bVar1 = (int)(uVar3 & param_1[1] - 1) < (int)param_1[2];
          uVar4 = 2;
LAB_100fc89e:
          if (cVar2 != '\0') {
            uVar12 = param_1[0x14];
            uVar3 = param_1[9];
            iVar9 = uVar3 - *(int *)(uVar12 + 8);
            if (iVar9 < 0) {
              param_1[10] = 99;
              return 1;
            }
            uVar20 = uVar3;
            if (iVar9 != 0) {
              *(int *)(uVar12 + 0x10) = iVar9 >> 2;
              if (!bVar1) {
                uVar8 = *(ushort *)(uVar12 + 0xc);
                if ((uVar8 & 8) == 0) {
                  uVar8 = uVar8 | 0x20;
                }
                else {
                  uVar8 = uVar8 | 0x10;
                }
                *(ushort *)(uVar12 + 0xc) = uVar8;
              }
              uVar20 = uVar3 + 0x20;
              param_1[0x14] = uVar3;
              param_1[9] = uVar20;
              *(undefined4 *)(uVar3 + 0x10) = 0;
              *(uint *)(uVar3 + 8) = uVar20;
              *(uint *)(uVar12 + 0x1c) = uVar3;
              *(short *)(param_1 + 0x13) = (short)param_1[0x13] + 1;
            }
            if (param_1[8] <= uVar20) {
              param_1[10] = 0x62;
              return 1;
            }
            *(undefined1 *)((int)param_1 + 0x4f) = 0;
          }
          uVar22 = FUN_100fba58(param_1,uVar4);
          if ((int)uVar22 != 0) {
            return 1;
          }
          if ((int)((ulonglong)uVar22 >> 0x20) == 1) {
            puVar5 = (uint *)param_1[0xc];
            uVar3 = puVar5[5];
            uVar12 = puVar5[1];
            goto LAB_100fcb06;
          }
          puVar5 = (uint *)param_1[0xc];
          param_3 = puVar5[3];
          uVar3 = puVar5[5];
          uVar12 = puVar5[1];
        }
        uVar20 = -uVar12;
        uVar15 = -uVar3;
        uVar16 = -param_1[0x12];
        uVar13 = param_1[0x11];
        puVar5[3] = -param_3;
        puVar5[1] = uVar20;
        puVar5[5] = uVar15;
        cVar2 = *(char *)((int)param_1 + 0x4e);
        puVar21 = (uint *)param_1[9];
        if (((int)uVar16 <= (int)uVar20) && (uVar13 = -uVar13, (int)uVar15 <= (int)uVar13)) {
          uVar12 = param_1[1];
          uVar20 = uVar20 & -uVar12;
          if ((int)uVar20 <= (int)uVar13) {
            uVar13 = uVar20;
          }
          uVar20 = uVar16;
          cVar7 = cVar2;
          if (((int)uVar16 <= (int)uVar15) &&
             (uVar16 = (uVar12 - 1) - uVar3 & -uVar12, uVar20 = uVar16,
             (ushort)((ushort)(uVar12 - 1) & (ushort)uVar15) == 0)) {
            if (*(char *)((int)param_1 + 0x4f) == '\0') {
              puVar17 = puVar21;
              puVar21 = puVar21 + 1;
            }
            else {
              *(undefined1 *)((int)param_1 + 0x4f) = 0;
              puVar17 = puVar21 + -1;
            }
            *puVar17 = puVar5[4];
            uVar20 = uVar12 + uVar16;
            cVar7 = *(char *)((int)param_1 + 0x4e);
          }
          if (cVar7 != '\0') {
            *(int *)(param_1[0x14] + 0x14) = (int)uVar16 >> (*param_1 & 0xff);
            *(undefined1 *)((int)param_1 + 0x4e) = 0;
          }
          if ((int)uVar20 <= (int)uVar13) {
            puVar17 = puVar5;
            if ((uint *)param_1[8] <= puVar21 + ((int)(uVar13 - uVar20) >> (*param_1 & 0xff)) + 1) {
              param_1[9] = (uint)puVar21;
              param_1[10] = 0x62;
              if (cVar2 != '\0') {
                uVar3 = puVar5[1];
                *(int *)(param_1[0x14] + 0x14) = -*(int *)(param_1[0x14] + 0x14);
                puVar5[1] = -uVar3;
                return 1;
              }
              puVar5[1] = -puVar5[1];
              return 1;
            }
            do {
              *(undefined1 *)((int)param_1 + 0x4f) = 0;
              uVar3 = puVar17[1];
              if ((int)uVar20 < (int)uVar3) {
                uVar15 = puVar17[5];
                iVar9 = uVar20 - uVar15;
                if ((int)(uVar3 - uVar15) < (int)param_1[4]) {
                  puVar11 = puVar17 + -4;
                  uVar20 = uVar20 + uVar12;
                  *puVar21 = puVar17[4] +
                             (int)(iVar9 * (*puVar17 - puVar17[4])) / (int)(uVar3 - uVar15);
                  puVar21 = puVar21 + 1;
                }
                else {
                  iVar19 = puVar17[2] + *puVar17;
                  iVar9 = uVar3 + puVar17[3];
                  iVar6 = puVar17[2] + puVar17[4];
                  iVar14 = puVar17[3] + uVar15;
                  puVar17[9] = uVar15;
                  puVar17[8] = puVar17[4];
                  puVar17[4] = iVar19 + iVar6 >> 2;
                  puVar17[6] = iVar6 >> 1;
                  puVar17[2] = iVar19 >> 1;
                  puVar17[5] = iVar9 + iVar14 >> 2;
                  puVar17[7] = iVar14 >> 1;
                  puVar17[3] = iVar9 >> 1;
                  puVar11 = puVar17 + 4;
                }
              }
              else {
                puVar10 = puVar21;
                if (uVar3 == uVar20) {
                  *(undefined1 *)((int)param_1 + 0x4f) = 1;
                  uVar20 = uVar20 + uVar12;
                  puVar10 = puVar21 + 1;
                  *puVar21 = *puVar17;
                }
                puVar11 = puVar17 + -4;
                puVar21 = puVar10;
              }
            } while ((puVar5 <= puVar11) && (puVar17 = puVar11, (int)uVar20 <= (int)uVar13));
          }
          uVar12 = -puVar5[1];
        }
        param_1[9] = (uint)puVar21;
        param_1[0xc] = (uint)(puVar5 + -4);
        if ((cVar2 != '\0') && (*(char *)((int)param_1 + 0x4e) == '\0')) {
          *(int *)(param_1[0x14] + 0x14) = -*(int *)(param_1[0x14] + 0x14);
        }
        puVar5[1] = uVar12;
        puVar5 = puVar5 + -4;
      }
    }
    if (puVar5 < puVar18) {
      param_1[0xf] = param_4;
      param_1[0x10] = param_5;
      return 0;
    }
    param_4 = *puVar5;
    param_5 = puVar5[1];
    uVar3 = puVar5[5];
    param_3 = puVar5[3];
  } while( true );
}


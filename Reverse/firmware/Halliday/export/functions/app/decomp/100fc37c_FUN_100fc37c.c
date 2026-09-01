/* FUN_100fc37c @ 0x100fc37c */

undefined4
FUN_100fc37c(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined8 uVar24;
  
  puVar17 = param_1 + 0x2a;
  uVar3 = param_1[0x10];
  param_1[0x2e] = param_2;
  param_1[0x2f] = param_3;
  param_1[0x2c] = param_4;
  param_1[0x2a] = param_6;
  param_1[0x2b] = param_7;
  param_1[0x30] = param_1[0xf];
  param_1[0xc] = (uint)puVar17;
  param_1[0x31] = uVar3;
  param_1[0x2d] = param_5;
  puVar15 = puVar17;
  do {
    uVar21 = uVar3;
    uVar13 = param_7;
    if ((int)uVar3 <= (int)param_7) {
      uVar21 = param_7;
      uVar13 = uVar3;
    }
    uVar8 = param_3;
    uVar23 = param_5;
    if ((int)param_3 <= (int)param_5) {
      uVar8 = param_5;
      uVar23 = param_3;
    }
    if (((int)uVar23 < (int)uVar13) || ((int)uVar21 < (int)uVar8)) {
      iVar19 = puVar15[6] + puVar15[4];
      iVar16 = puVar15[4] + puVar15[2];
      iVar22 = puVar15[2] + param_6;
      iVar20 = iVar16 + iVar19;
      puVar15[0xd] = uVar3;
      iVar16 = iVar16 + iVar22;
      iVar14 = param_3 + param_5 + param_3 + uVar3;
      iVar7 = param_3 + param_5 + param_5 + param_7;
      puVar15[0xc] = puVar15[6];
      puVar15[2] = iVar22 >> 1;
      puVar15[10] = iVar19 >> 1;
      puVar15[6] = iVar20 + iVar16 >> 3;
      puVar15[8] = iVar20 >> 2;
      puVar15[4] = iVar16 >> 2;
      puVar15[0xb] = (int)(param_3 + uVar3) >> 1;
      puVar15[3] = (int)(param_5 + param_7) >> 1;
      puVar15[7] = iVar14 + iVar7 >> 3;
      puVar15[9] = iVar14 >> 2;
      puVar15[5] = iVar7 >> 2;
      puVar15 = puVar15 + 6;
      param_1[0xc] = (uint)puVar15;
    }
    else if (param_7 == uVar3) {
      param_1[0xc] = (uint)(puVar15 + -6);
      puVar15 = puVar15 + -6;
    }
    else {
      cVar2 = (char)param_1[0x17];
      if ((int)param_7 < (int)uVar3) {
        uVar13 = param_7;
        if (cVar2 != '\x02') {
          uVar13 = param_1[1];
          bVar1 = (int)(uVar3 & uVar13 - 1) < (int)param_1[2];
          uVar6 = 2;
          goto LAB_100fc404;
        }
LAB_100fc46e:
        uVar21 = -uVar13;
        uVar23 = -param_1[0x12];
        uVar8 = -uVar3;
        uVar9 = param_1[0x11];
        puVar15[3] = -param_5;
        puVar15[5] = -param_3;
        puVar15[1] = uVar21;
        puVar15[7] = uVar8;
        cVar2 = *(char *)((int)param_1 + 0x4e);
        puVar18 = (uint *)param_1[9];
        if (((int)uVar21 < (int)uVar23) || (uVar9 = -uVar9, (int)uVar9 < (int)uVar8)) {
LAB_100fc660:
          puVar10 = puVar15 + -6;
          param_1[0xc] = (uint)puVar10;
          param_1[9] = (uint)puVar18;
        }
        else {
          uVar13 = param_1[1];
          uVar21 = uVar21 & -uVar13;
          if ((int)uVar21 <= (int)uVar9) {
            uVar9 = uVar21;
          }
          uVar21 = uVar23;
          cVar11 = cVar2;
          if (((int)uVar23 <= (int)uVar8) &&
             (uVar23 = (uVar13 - 1) - uVar3 & -uVar13, uVar21 = uVar23,
             (ushort)((ushort)(uVar13 - 1) & (ushort)uVar8) == 0)) {
            if (*(char *)((int)param_1 + 0x4f) == '\0') {
              puVar10 = puVar18;
              puVar18 = puVar18 + 1;
            }
            else {
              *(undefined1 *)((int)param_1 + 0x4f) = 0;
              puVar10 = puVar18 + -1;
            }
            *puVar10 = puVar15[6];
            uVar21 = uVar13 + uVar23;
            cVar11 = *(char *)((int)param_1 + 0x4e);
          }
          if (cVar11 != '\0') {
            *(int *)(param_1[0x14] + 0x14) = (int)uVar23 >> (*param_1 & 0xff);
            *(undefined1 *)((int)param_1 + 0x4e) = 0;
          }
          if ((int)uVar9 < (int)uVar21) {
            uVar13 = -puVar15[1];
            goto LAB_100fc660;
          }
          puVar10 = puVar15;
          if ((uint *)param_1[8] <= puVar18 + ((int)(uVar9 - uVar21) >> (*param_1 & 0xff)) + 1) {
            param_1[9] = (uint)puVar18;
            param_1[10] = 0x62;
            if (cVar2 != '\0') {
              uVar3 = puVar15[1];
              *(int *)(param_1[0x14] + 0x14) = -*(int *)(param_1[0x14] + 0x14);
              puVar15[1] = -uVar3;
              return 1;
            }
            puVar15[1] = -puVar15[1];
            return 1;
          }
          do {
            *(undefined1 *)((int)param_1 + 0x4f) = 0;
            uVar3 = puVar10[1];
            if ((int)uVar21 < (int)uVar3) {
              iVar14 = uVar3 - puVar10[7];
              puVar5 = puVar10 + 6;
              if (iVar14 < (int)param_1[4]) {
                puVar5 = puVar10 + -6;
                uVar3 = param_1[1];
                *puVar18 = (int)((uVar21 - puVar10[7]) * (*puVar10 - puVar10[6])) / iVar14 +
                           puVar10[6];
                uVar21 = uVar21 + uVar3;
                puVar18 = puVar18 + 1;
              }
              else {
                FUN_100fbb34();
              }
            }
            else {
              puVar4 = puVar18;
              if (uVar3 == uVar21) {
                *(undefined1 *)((int)param_1 + 0x4f) = 1;
                uVar3 = param_1[1];
                puVar4 = puVar18 + 1;
                *puVar18 = *puVar10;
                uVar21 = uVar21 + uVar3;
              }
              puVar5 = puVar10 + -6;
              puVar18 = puVar4;
            }
          } while ((puVar15 <= puVar5) && (puVar10 = puVar5, (int)uVar21 <= (int)uVar9));
          puVar10 = (uint *)(param_1[0xc] - 0x18);
          uVar13 = -puVar15[1];
          param_1[0xc] = (uint)puVar10;
          param_1[9] = (uint)puVar18;
        }
        if ((cVar2 != '\0') && (*(char *)((int)param_1 + 0x4e) == '\0')) {
          *(int *)(param_1[0x14] + 0x14) = -*(int *)(param_1[0x14] + 0x14);
        }
        puVar15[1] = uVar13;
        puVar15 = puVar10;
      }
      else {
        uVar13 = param_7;
        if (cVar2 != '\x01') {
          uVar13 = param_1[2];
          bVar1 = (int)(((param_1[1] - 1) + uVar3 & -param_1[1]) - uVar3) < (int)uVar13;
          uVar6 = 1;
LAB_100fc404:
          if (cVar2 != '\0') {
            uVar13 = param_1[0x14];
            uVar3 = param_1[9];
            iVar14 = uVar3 - *(int *)(uVar13 + 8);
            if (iVar14 < 0) {
              param_1[10] = 99;
              return 1;
            }
            uVar21 = uVar3;
            if (iVar14 != 0) {
              *(int *)(uVar13 + 0x10) = iVar14 >> 2;
              if (!bVar1) {
                uVar12 = *(ushort *)(uVar13 + 0xc);
                if ((uVar12 & 8) == 0) {
                  uVar12 = uVar12 | 0x20;
                }
                else {
                  uVar12 = uVar12 | 0x10;
                }
                *(ushort *)(uVar13 + 0xc) = uVar12;
              }
              uVar21 = uVar3 + 0x20;
              param_1[0x14] = uVar3;
              param_1[9] = uVar21;
              *(undefined4 *)(uVar3 + 0x10) = 0;
              *(uint *)(uVar3 + 8) = uVar21;
              *(uint *)(uVar13 + 0x1c) = uVar3;
              *(short *)(param_1 + 0x13) = (short)param_1[0x13] + 1;
            }
            if (param_1[8] <= uVar21) {
              param_1[10] = 0x62;
              return 1;
            }
            uVar13 = 0;
            *(undefined1 *)((int)param_1 + 0x4f) = 0;
          }
          uVar24 = FUN_100fba58(param_1,uVar6,!bVar1,uVar13,param_4);
          if ((int)uVar24 != 0) {
            return 1;
          }
          if ((int)((ulonglong)uVar24 >> 0x20) != 1) {
            puVar15 = (uint *)param_1[0xc];
            param_5 = puVar15[3];
            param_3 = puVar15[5];
            uVar3 = puVar15[7];
            uVar13 = puVar15[1];
            goto LAB_100fc46e;
          }
          puVar15 = (uint *)param_1[0xc];
          uVar3 = puVar15[7];
          uVar13 = puVar15[1];
        }
        uVar21 = param_1[0x11];
        puVar10 = (uint *)param_1[9];
        puVar18 = puVar10;
        if (((int)uVar21 <= (int)uVar13) && (uVar23 = param_1[0x12], (int)uVar3 <= (int)uVar23)) {
          uVar8 = param_1[1];
          uVar13 = -uVar8 & uVar13;
          if ((int)uVar13 <= (int)uVar23) {
            uVar23 = uVar13;
          }
          uVar13 = uVar21;
          if (((int)uVar21 <= (int)uVar3) &&
             (uVar21 = uVar3 + (uVar8 - 1) & -uVar8, uVar13 = uVar21,
             (ushort)((ushort)(uVar8 - 1) & (ushort)uVar3) == 0)) {
            if (*(char *)((int)param_1 + 0x4f) == '\0') {
              puVar18 = puVar10 + 1;
              puVar5 = puVar10;
            }
            else {
              *(undefined1 *)((int)param_1 + 0x4f) = 0;
              puVar5 = puVar10 + -1;
            }
            *puVar5 = puVar15[6];
            uVar13 = uVar8 + uVar21;
            puVar10 = puVar18;
          }
          if (*(char *)((int)param_1 + 0x4e) != '\0') {
            *(int *)(param_1[0x14] + 0x14) = (int)uVar21 >> (*param_1 & 0xff);
            *(undefined1 *)((int)param_1 + 0x4e) = 0;
          }
          puVar18 = puVar10;
          if ((int)uVar13 <= (int)uVar23) {
            puVar5 = puVar15;
            if ((uint *)param_1[8] <= puVar10 + ((int)(uVar23 - uVar13) >> (*param_1 & 0xff)) + 1) {
              param_1[9] = (uint)puVar10;
              param_1[10] = 0x62;
              return 1;
            }
            do {
              *(undefined1 *)((int)param_1 + 0x4f) = 0;
              uVar3 = puVar5[1];
              puVar18 = puVar10;
              if ((int)uVar13 < (int)uVar3) {
                iVar14 = uVar3 - puVar5[7];
                puVar4 = puVar5 + 6;
                if (iVar14 < (int)param_1[4]) {
                  puVar4 = puVar5 + -6;
                  uVar3 = param_1[1];
                  puVar18 = puVar10 + 1;
                  *puVar10 = (int)((uVar13 - puVar5[7]) * (*puVar5 - puVar5[6])) / iVar14 +
                             puVar5[6];
                  uVar13 = uVar13 + uVar3;
                }
                else {
                  FUN_100fbb34();
                }
              }
              else {
                if (uVar3 == uVar13) {
                  *(undefined1 *)((int)param_1 + 0x4f) = 1;
                  uVar13 = uVar13 + param_1[1];
                  puVar18 = puVar10 + 1;
                  *puVar10 = *puVar5;
                }
                puVar4 = puVar5 + -6;
              }
            } while ((puVar15 <= puVar4) &&
                    (puVar5 = puVar4, puVar10 = puVar18, (int)uVar13 <= (int)uVar23));
            puVar15 = (uint *)param_1[0xc];
          }
        }
        puVar15 = puVar15 + -6;
        param_1[0xc] = (uint)puVar15;
        param_1[9] = (uint)puVar18;
      }
    }
    if (puVar15 < puVar17) {
      param_1[0xf] = param_6;
      param_1[0x10] = param_7;
      return 0;
    }
    param_6 = *puVar15;
    param_7 = puVar15[1];
    uVar3 = puVar15[7];
    param_3 = puVar15[5];
    param_5 = puVar15[3];
  } while( true );
}


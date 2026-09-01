/* FUN_1009faf4 @ 0x1009faf4 */

int FUN_1009faf4(int param_1,int *param_2)

{
  short sVar1;
  undefined2 uVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  char cVar16;
  undefined4 *puVar17;
  int *piVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  byte *pbVar26;
  undefined4 *puVar27;
  uint uVar28;
  ushort uVar29;
  uint uVar30;
  bool bVar31;
  int local_74;
  int local_64;
  int *local_60;
  int local_54;
  int local_50;
  int local_48;
  char local_29 [5];
  
  local_29[0] = '\x02';
  if (((param_2 == (int *)0x0) || (param_2[1] == 0)) || (*param_2 < 1)) {
    return -0x16;
  }
  iVar20 = param_2[2];
  FUN_1006c788(param_2[1],local_29);
  if (local_29[0] != '\b') {
    FUN_100a5b78(DAT_1009fdec | (DAT_1009fde8 - DAT_1009fde4) * 0x20 & 0xff00U,DAT_1009fdf4,
                 DAT_1009fdf0,param_2[1]);
    return -0x13;
  }
  iVar8 = thunk_FUN_1009f30c(0x44,DAT_1009fdf8);
  if (iVar8 == 0) {
    return -0xc;
  }
  FUN_1011ea48(iVar8,0,0x44);
  *(int *)(iVar8 + 0x3c) = param_2[3];
  uVar5 = DAT_1009fdf8;
  *(short *)(iVar8 + 4) = (short)*param_2;
  *(undefined2 *)(iVar8 + 2) = 0xffff;
  iVar9 = thunk_FUN_1009f30c(0x108,uVar5);
  local_60 = (int *)(iVar8 + 8);
  *(int *)(iVar8 + 0x40) = iVar9;
  uVar5 = DAT_1009fdf8;
  if (iVar9 != 0) {
    piVar10 = local_60;
    for (iVar9 = 0; iVar9 < (int)(uint)*(ushort *)(iVar8 + 4); iVar9 = iVar9 + 1) {
      iVar11 = thunk_FUN_1009f30c(8,uVar5);
      *piVar10 = iVar11;
      if (iVar11 == 0) goto LAB_100a0258;
      piVar10 = piVar10 + 1;
    }
    iVar9 = thunk_FUN_1009f30c((uint)*(ushort *)(iVar8 + 4) << 1,DAT_1009fdf8);
    *(int *)(iVar8 + 0x2c) = iVar9;
    if (iVar9 != 0) {
      iVar9 = thunk_FUN_1009f30c(0x202,DAT_1009fdf8);
      *(int *)(iVar8 + 0x34) = iVar9;
      piVar10 = DAT_1009fdfc;
      if (iVar9 != 0) {
        if (*DAT_1009fdfc == 0) {
          iVar9 = thunk_FUN_1009f30c(0x1a4,DAT_1009fdf8);
          *piVar10 = iVar9;
          uVar5 = DAT_1009fdf8;
          if (iVar9 == 0) goto LAB_100a0258;
          iVar9 = 0;
          do {
            iVar12 = *piVar10;
            uVar25 = thunk_FUN_1009f30c(8,uVar5);
            iVar11 = *piVar10;
            *(undefined4 *)(iVar12 + iVar9 * 4) = uVar25;
            if (*(int *)(iVar11 + iVar9 * 4) == 0) goto LAB_100a0258;
            iVar9 = iVar9 + 1;
          } while (iVar9 != 100);
        }
        FUN_1011e9f0(*(undefined4 *)(iVar8 + 0x34),param_2[1]);
        uVar7 = FUN_1011ea10(param_2[1]);
        **(ushort **)(iVar8 + 0x2c) = uVar7;
        *(ushort *)(iVar8 + 0x32) = uVar7;
        cVar16 = *(char *)(*(int *)(iVar8 + 0x34) + (uint)uVar7 + -1);
        if ((cVar16 != ':') && (cVar16 != '/')) {
          *(ushort *)(iVar8 + 0x32) = uVar7 + 1;
          *(undefined1 *)(*(int *)(iVar8 + 0x34) + (uint)uVar7) = 0x2f;
          **(short **)(iVar8 + 0x2c) = **(short **)(iVar8 + 0x2c) + 1;
        }
        *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar8 + 0x34);
        uVar5 = DAT_1009fe00;
        *(int *)(param_1 + 4) = iVar8;
        puVar27 = (undefined4 *)*piVar10;
        piVar10 = (int *)thunk_FUN_1009f30c(8,uVar5);
        if (piVar10 != (int *)0x0) {
          iVar9 = *(ushort *)(iVar8 + 0x32) - 1;
          cVar16 = *(char *)(*(int *)(iVar8 + 0x34) + iVar9);
          bVar31 = cVar16 == '/';
          if (bVar31) {
            cVar16 = '\0';
          }
          if (bVar31) {
            *(char *)(*(int *)(iVar8 + 0x34) + iVar9) = cVar16;
          }
          iVar9 = FUN_1006be64(piVar10,*(undefined4 *)(iVar8 + 0x34));
          uVar30 = (DAT_1009fde8 - DAT_1009fde4) * 0x20 & 0xff00;
          if (iVar9 == 0) {
            iVar9 = *(ushort *)(iVar8 + 0x32) - 1;
            cVar16 = *(char *)(*(int *)(iVar8 + 0x34) + iVar9);
            bVar31 = cVar16 != ':';
            if (bVar31) {
              cVar16 = '/';
            }
            if (bVar31) {
              *(char *)(*(int *)(iVar8 + 0x34) + iVar9) = cVar16;
            }
            piVar18 = (int *)*piVar10;
            puVar27[0x67] = param_2[1];
            puVar27[0x68] = param_2[3];
            iVar9 = piVar18[0xd];
            uVar2 = *(undefined2 *)(*piVar18 + 10);
            piVar18 = (int *)*puVar27;
            *(undefined2 *)((int)puVar27 + 0x19a) = uVar2;
            *piVar18 = iVar9;
            *(undefined2 *)(piVar18 + 1) = 0;
            *(undefined1 *)((int)piVar18 + 6) = 0;
            FUN_100a5b78(uVar30 | 0x2980033,DAT_1009fe0c,DAT_1009fe14,*(undefined4 *)(iVar8 + 0x34),
                         iVar9,uVar2);
            FUN_1006c184(piVar10);
          }
          else {
            FUN_100a5b78(uVar30 | DAT_1009fe04,DAT_1009fe0c,DAT_1009fe08,
                         *(undefined4 *)(iVar8 + 0x34),iVar9);
          }
          FUN_1012d1f4(piVar10);
        }
        for (iVar9 = (int)*(short *)(iVar8 + 2); -1 < iVar9; iVar9 = iVar9 + -1) {
          FUN_1006c184(local_60[iVar9]);
        }
        *(undefined2 *)(iVar8 + 2) = 0xffff;
        *(undefined2 *)(iVar8 + 0x30) = 0;
        uVar7 = **(ushort **)(iVar8 + 0x2c);
        *(ushort *)(iVar8 + 0x32) = uVar7;
        *(undefined1 *)(*(int *)(iVar8 + 0x34) + (uint)uVar7) = 0;
        iVar11 = DAT_1009fde8;
        iVar9 = *(ushort *)(iVar8 + 0x32) - 1;
        if (*(char *)(*(int *)(iVar8 + 0x34) + iVar9) == '/') {
          *(undefined1 *)(*(int *)(iVar8 + 0x34) + iVar9) = 0;
        }
        iVar9 = FUN_1006be64(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0x34));
        uVar30 = (iVar11 - DAT_1009fde4) * 0x20 & 0xff00;
        if (iVar9 != 0) {
          FUN_100a5b78(uVar30 | 0x2680012,DAT_1009fe10,DAT_1009fe08,*(undefined4 *)(iVar8 + 0x34),
                       iVar9);
          goto LAB_1009fca8;
        }
        iVar9 = *(ushort *)(iVar8 + 0x32) - 1;
        cVar16 = *(char *)(*(int *)(iVar8 + 0x34) + iVar9);
        bVar31 = cVar16 != ':';
        if (bVar31) {
          cVar16 = '/';
        }
        if (bVar31) {
          *(char *)(*(int *)(iVar8 + 0x34) + iVar9) = cVar16;
        }
        piVar10 = (int *)param_2[2];
        *(undefined2 *)(iVar8 + 2) = 0;
        if (piVar10 == (int *)0x0) goto LAB_1009ff6e;
        pbVar26 = *(byte **)(param_1 + 4);
        *(undefined4 *)(param_1 + 8) = 0;
        if (*(short *)(pbVar26 + 2) < 0) goto LAB_1009ff6e;
        iVar9 = *piVar10;
        if (iVar9 == 0) {
LAB_1009fedc:
          local_54 = 0;
          local_50 = 0;
          local_74 = 0;
        }
        else {
          iVar11 = FUN_1011ea10(iVar9);
          iVar11 = thunk_FUN_1009f30c(iVar11 + 1,DAT_100a00e0);
          if (iVar11 == 0) goto LAB_1009fedc;
          FUN_1011e9f0(iVar11,iVar9);
          iVar9 = FUN_1013d44e(iVar11,DAT_100a00e4);
          if (iVar9 == 0) {
LAB_100a02e2:
            local_54 = 0;
            local_50 = 0;
            local_74 = 0;
          }
          else {
            iVar12 = FUN_1011ea10(DAT_100a00e4);
            puVar13 = (undefined1 *)FUN_1011ea00(iVar9 + iVar12,0x2f);
            if (puVar13 == (undefined1 *)0x0) goto LAB_100a02e2;
            *puVar13 = 0;
            puVar14 = (undefined1 *)FUN_1011ea00(puVar13 + 1,0x2f);
            if (puVar14 == (undefined1 *)0x0) goto LAB_100a02e2;
            *puVar14 = 0;
            local_54 = FUN_1013d036(iVar9 + iVar12);
            local_50 = FUN_1013d036(puVar13 + 1);
            local_74 = FUN_1013d036(puVar14 + 1);
          }
          FUN_1012d1f4(iVar11);
        }
        uVar5 = DAT_100a0110;
        bVar31 = true;
        local_64 = **(int **)(pbVar26 + (*(short *)(pbVar26 + 2) + 2) * 4);
        local_48 = *(int *)(local_64 + 0x34);
        uVar21 = DAT_100a00e8 | uVar30;
        uVar22 = DAT_100a00ec | uVar30;
        uVar23 = DAT_100a00f0 | uVar30;
        uVar24 = DAT_100a00f4 | uVar30;
        bVar6 = false;
LAB_1009ff24:
        bVar4 = bVar6;
        iVar9 = FUN_1006c070(*(undefined4 *)(pbVar26 + (*(short *)(pbVar26 + 2) + 2) * 4),
                             *(undefined4 *)(pbVar26 + 0x40));
        bVar6 = bVar4;
        if (iVar9 != 0) {
          FUN_100a5b78(uVar23,uVar5,DAT_100a00f8);
LAB_1009ff46:
          FUN_1006c184(*(undefined4 *)(pbVar26 + (*(short *)(pbVar26 + 2) + 2) * 4));
          if (*(short *)(pbVar26 + 2) == 0) {
            if ((!bVar31) || (!bVar4)) {
              pbVar26[2] = 0xff;
              pbVar26[3] = 0xff;
              goto LAB_1009ff6e;
            }
          }
          else if ((!bVar31) || (!bVar4)) {
            bVar31 = false;
            uVar7 = *(short *)(pbVar26 + 0x32) -
                    (*(short *)(pbVar26 + 0x30) +
                    *(short *)(*(int *)(pbVar26 + 0x2c) + *(short *)(pbVar26 + 2) * 2));
            *(ushort *)(pbVar26 + 0x32) = uVar7;
            *(undefined1 *)(*(int *)(pbVar26 + 0x34) + (uint)uVar7) = 0;
            pbVar26[0x30] = 0;
            pbVar26[0x31] = 0;
            *(short *)(pbVar26 + 2) = *(short *)(pbVar26 + 2) + -1;
            goto LAB_1009ff24;
          }
          sVar1 = *(short *)(pbVar26 + 0x32);
          *(short *)(pbVar26 + 0x32) = sVar1 - *(short *)(pbVar26 + 0x30);
          *(undefined1 *)
           (*(int *)(pbVar26 + 0x34) + (uint)(ushort)(sVar1 - *(short *)(pbVar26 + 0x30))) = 0;
          pbVar26[0x30] = 0;
          pbVar26[0x31] = 0;
          if (*(char *)(*(int *)(pbVar26 + 0x34) + (*(ushort *)(pbVar26 + 0x32) - 1)) == '/') {
            *(undefined1 *)(*(int *)(pbVar26 + 0x34) + (*(ushort *)(pbVar26 + 0x32) - 1)) = 0;
          }
          iVar9 = FUN_1006be64(*(undefined4 *)(pbVar26 + (*(short *)(pbVar26 + 2) + 2) * 4),
                               *(undefined4 *)(pbVar26 + 0x34));
          if (iVar9 != 0) {
            FUN_100a5b78(uVar24,uVar5,DAT_100a0108,*(undefined4 *)(pbVar26 + 0x34),iVar9);
          }
          if (*(char *)(*(int *)(pbVar26 + 0x34) + (*(ushort *)(pbVar26 + 0x32) - 1)) == '\0') {
            *(undefined1 *)(*(int *)(pbVar26 + 0x34) + (*(ushort *)(pbVar26 + 0x32) - 1)) = 0x2f;
            bVar31 = false;
            bVar6 = bVar31;
          }
          else {
            bVar31 = false;
            bVar6 = false;
          }
          goto LAB_1009ff24;
        }
        cVar16 = *(char *)(*(int *)(pbVar26 + 0x40) + 1);
        if (cVar16 == '\0') goto LAB_1009ff46;
        if (cVar16 == '.') goto LAB_1009ff24;
        uVar7 = FUN_1011ea10(*(int *)(pbVar26 + 0x40) + 1);
        uVar28 = (uint)uVar7;
        uVar29 = *(short *)(pbVar26 + 0x32) - *(short *)(pbVar26 + 0x30);
        uVar15 = uVar29 + uVar28;
        *(ushort *)(pbVar26 + 0x32) = uVar29;
        if (0x200 < uVar15) {
          FUN_100a5b78(uVar22,uVar5,DAT_100a0300,uVar15 - 4,*(int *)(pbVar26 + 0x40) + 1);
          *(short *)(pbVar26 + 0x32) = *(short *)(pbVar26 + 0x32) + *(short *)(pbVar26 + 0x30);
          goto LAB_1009ff24;
        }
        FUN_1011ea40(*(int *)(pbVar26 + 0x34) + (uint)uVar29,*(int *)(pbVar26 + 0x40) + 1,uVar28);
        uVar29 = *(ushort *)(pbVar26 + 0x32);
        *(ushort *)(pbVar26 + 0x30) = uVar7;
        *(short *)(pbVar26 + 0x32) = (short)(uVar28 + uVar29);
        *(undefined1 *)(*(int *)(pbVar26 + 0x34) + (uVar28 + uVar29 & 0xffff)) = 0;
        if ((*(code **)(pbVar26 + 0x3c) != (code *)0x0) &&
           (iVar9 = (**(code **)(pbVar26 + 0x3c))
                              (*(undefined4 *)(pbVar26 + 0x34),**(char **)(pbVar26 + 0x40) == '\x01'
                              ), iVar9 == 0)) goto LAB_1009ff24;
        pcVar19 = *(char **)(pbVar26 + 0x40);
        cVar16 = *pcVar19;
        if (cVar16 != '\0') {
          if (((cVar16 != '\x01') || (bVar6 = bVar31, !bVar31)) &&
             (bVar6 = bVar4, *(short *)(pbVar26 + 2) + 1 < (int)(uint)*(ushort *)(pbVar26 + 4))) {
            if (99 < *(byte *)(puVar27 + 0x65) + 1) {
              FUN_100a5b78(uVar30 | 0x39c0031,DAT_100a0110,DAT_100a010c,100);
              goto LAB_100a0198;
            }
            iVar9 = FUN_1006be64(*(undefined4 *)(pbVar26 + (*(short *)(pbVar26 + 2) + 3) * 4),
                                 *(undefined4 *)(pbVar26 + 0x34));
            if (iVar9 == 0) {
              cVar16 = *(char *)(puVar27 + 0x65);
              bVar31 = true;
              *(byte *)(puVar27 + 0x65) = cVar16 + 1U;
              sVar1 = *(short *)(pbVar26 + 2);
              puVar17 = (undefined4 *)puVar27[(byte)(cVar16 + 1U)];
              uVar25 = *(undefined4 *)(**(int **)(pbVar26 + (sVar1 + 3) * 4) + 0x34);
              *(undefined2 *)(puVar17 + 1) = 0;
              *puVar17 = uVar25;
              *(char *)((int)puVar17 + 6) = (char)sVar1 + '\x01';
              *(undefined1 *)(*(int *)(pbVar26 + 0x34) + (uint)*(ushort *)(pbVar26 + 0x32)) = 0x2f;
              sVar1 = *(short *)(pbVar26 + 0x32);
              *(ushort *)(pbVar26 + 0x32) = sVar1 + 1U;
              *(undefined1 *)(*(int *)(pbVar26 + 0x34) + (uint)(ushort)(sVar1 + 1U)) = 0;
              sVar1 = *(short *)(pbVar26 + 2);
              *(short *)(pbVar26 + 2) = sVar1 + 1;
              *(short *)(*(int *)(pbVar26 + 0x2c) + (short)(sVar1 + 1) * 2) =
                   *(short *)(pbVar26 + 0x30) + 1;
              pbVar26[0x30] = 0;
              pbVar26[0x31] = 0;
              local_64 = **(int **)(pbVar26 + (*(short *)(pbVar26 + 2) + 2) * 4);
              local_48 = *(int *)(local_64 + 0x34);
            }
            else {
              FUN_100a5b78(uVar21,uVar5,DAT_100a02fc,*(undefined4 *)(pbVar26 + 0x34),iVar9);
            }
          }
          goto LAB_1009ff24;
        }
        if (!bVar31) goto LAB_1009ff24;
        *(short *)(puVar27[*(byte *)(puVar27 + 0x65)] + 4) =
             *(short *)(puVar27[*(byte *)(puVar27 + 0x65)] + 4) + 1;
        *(short *)(puVar27 + 100) = *(short *)(puVar27 + 100) + 1;
        if ((*piVar10 != 0) &&
           ((((local_48 == local_54 && (*(int *)(local_64 + 0x4c) == local_50)) &&
             (*(int *)(pcVar19 + 0x104) == local_74)) ||
            (iVar9 = FUN_1011ea18(*piVar10,*(undefined4 *)(pbVar26 + 0x34)), iVar9 == 0)))) {
          bVar3 = *(byte *)(puVar27 + 0x65);
          uVar2 = *(undefined2 *)(puVar27[bVar3] + 4);
          *(undefined2 *)((int)puVar27 + 0x196) = uVar2;
          *(byte *)((int)puVar27 + 0x195) = bVar3;
          *(undefined2 *)((int)puVar27 + 0x192) = *(undefined2 *)(puVar27 + 100);
          FUN_100a5b78(uVar30 | 0x3800033,uVar5,DAT_100a02ec,*(undefined2 *)(puVar27 + 100),uVar2,
                       (uint)bVar3);
        }
        if (*(short *)(puVar27 + 100) != 10000) goto LAB_1009ff24;
        FUN_100a5b78(DAT_100a02f0 | uVar30,DAT_100a02f8,DAT_100a02f4);
LAB_100a0198:
        *pbVar26 = *pbVar26 & 0xfd;
LAB_1009ff6e:
        FUN_100a5b78(uVar30 | 0x4500032,DAT_100a0100,DAT_100a0104,
                     *(undefined2 *)(*DAT_100a00fc + 400),*(byte *)(*DAT_100a00fc + 0x194) + 1);
        if (iVar20 != 0) {
          (**(code **)(*(int *)(param_1 + 0xc) + 0x18))(param_1,iVar20);
        }
        for (iVar20 = (int)*(short *)(iVar8 + 2); -1 < iVar20; iVar20 = iVar20 + -1) {
          FUN_1006c184(local_60[iVar20]);
        }
        if (*(int *)(iVar8 + 0x40) != 0) {
          FUN_1012d1f4();
          *(undefined4 *)(iVar8 + 0x40) = 0;
        }
        for (iVar20 = 0; iVar20 < (int)(uint)*(ushort *)(iVar8 + 4); iVar20 = iVar20 + 1) {
          if (*local_60 != 0) {
            FUN_1012d1f4();
            *local_60 = 0;
          }
          local_60 = local_60 + 1;
        }
        if (*(int *)(iVar8 + 0x2c) == 0) {
          return 0;
        }
        FUN_1012d1f4();
        *(undefined4 *)(iVar8 + 0x2c) = 0;
        return 0;
      }
    }
  }
LAB_100a0258:
  iVar9 = -0xc;
LAB_1009fca8:
  for (iVar20 = (int)*(short *)(iVar8 + 2); -1 < iVar20; iVar20 = iVar20 + -1) {
    FUN_1006c184(local_60[iVar20]);
  }
  if (*(int *)(iVar8 + 0x40) != 0) {
    FUN_1012d1f4();
    *(undefined4 *)(iVar8 + 0x40) = 0;
  }
  for (iVar20 = 0; iVar20 < (int)(uint)*(ushort *)(iVar8 + 4); iVar20 = iVar20 + 1) {
    if (*local_60 != 0) {
      FUN_1012d1f4();
      *local_60 = 0;
    }
    local_60 = local_60 + 1;
  }
  if (*(int *)(iVar8 + 0x2c) != 0) {
    FUN_1012d1f4();
    *(undefined4 *)(iVar8 + 0x2c) = 0;
  }
  if (*(int *)(iVar8 + 0x34) != 0) {
    FUN_1012d1f4();
    *(undefined4 *)(iVar8 + 0x34) = 0;
  }
  piVar10 = DAT_1009fdfc;
  FUN_1012d1f4(iVar8);
  if (*piVar10 != 0) {
    iVar20 = 0;
    do {
      if (*(int *)(*piVar10 + iVar20 * 4) != 0) {
        FUN_1012d1f4();
        *(undefined4 *)(*piVar10 + iVar20 * 4) = 0;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 != 100);
    FUN_1012d1f4(*piVar10);
    *piVar10 = 0;
  }
  return iVar9;
}


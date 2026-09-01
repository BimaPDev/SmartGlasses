/* FUN_100f76f0 @ 0x100f76f0 */

int FUN_100f76f0(int *param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 uVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  short *psVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  undefined1 local_38 [20];
  
  if ((param_1 == (int *)0x0) || (param_2 == (uint *)0x0)) {
    FUN_100a5b78(DAT_100f7ba4 | (DAT_100f7b8c - DAT_100f7b88) * 0x20 & 0xff00U,DAT_100f7b98,
                 DAT_100f7ba8,param_1,param_2);
    return 0;
  }
  iVar19 = param_1[2];
  piVar13 = (int *)*param_1;
  iVar18 = *piVar13;
  if (param_3 == *(int *)(iVar19 + 0x40)) {
    iVar20 = *(int *)(iVar19 + 0x44);
    if (iVar20 == 0) {
      iVar6 = param_1[0xb];
      if ((iVar6 == 0) || (param_3 == iVar6)) {
LAB_100f772a:
        if (*(int *)(iVar19 + 0x30) != 0) {
          return iVar19 + 0x18;
        }
LAB_100f775c:
        iVar20 = 1;
      }
      else {
LAB_100f7996:
        iVar20 = FUN_100f9cd4(*piVar13);
        if (iVar20 == 0) goto LAB_100f7752;
        *(int *)(iVar19 + 0x40) = iVar6;
        *(int *)(iVar19 + 0x44) = iVar20;
      }
    }
  }
  else {
    iVar20 = FUN_100f9cd4(iVar18,param_3);
    if (iVar20 == 0) {
      iVar6 = param_1[0xb];
      if (iVar6 == 0) {
LAB_100f7752:
        iVar19 = param_1[2];
        if (iVar19 != 0) goto LAB_100f772a;
        goto LAB_100f775c;
      }
      iVar19 = param_1[2];
      if (iVar6 != *(int *)(iVar19 + 0x40)) {
        piVar13 = (int *)*param_1;
        goto LAB_100f7996;
      }
      iVar20 = *(int *)(iVar19 + 0x44);
      if (iVar20 == 0) goto LAB_100f772a;
    }
    else {
      *(int *)(iVar19 + 0x40) = param_3;
      *(int *)(iVar19 + 0x44) = iVar20;
    }
  }
  iVar19 = FUN_10138cac();
  if (((iVar19 != 0) && ((uint *)param_1[2] == param_2)) && (param_2[0xd] == 0)) {
    FUN_1011ea48(param_2,0,0x50);
    iVar19 = param_1[2];
    iVar6 = *param_1;
    *(uint *)(iVar19 + 0x38) =
         (uint)*(ushort *)(param_1 + 5) *
         ((*(ushort *)(param_1 + 5) + 3 & 0xfffffffc) / (uint)(8 / param_1[0xc])) + 3 & 0xfffffffc;
    iVar19 = FUN_100f6b1c(param_1,iVar19,iVar6 + 4,0);
    if (iVar19 < 0) {
      FUN_100a5b78(DAT_100f7bac | (DAT_100f7b8c - DAT_100f7b88) * 0x20 & 0xff00U,DAT_100f7b98,
                   DAT_100f7bb0);
      return 0;
    }
  }
  iVar19 = FUN_100f625c(param_2,iVar20);
  if (-1 < iVar19) {
    return param_2[4] + iVar19 * 0x18;
  }
  FUN_100f9d80(param_1[1]);
  iVar19 = FUN_10138cac();
  if ((iVar19 == 0) || ((uint *)param_1[3] != param_2)) {
    FUN_100f9b78(*(undefined4 *)*param_1,0,(short)param_1[5]);
    *(short *)(*param_1 + 0x74) = (short)param_1[5];
  }
  else {
    FUN_100f9b78(*(undefined4 *)*param_1,0,0x80);
    *(undefined2 *)(*param_1 + 0x74) = 0x80;
  }
  iVar19 = FUN_10138cb6();
  uVar10 = 0;
  if (iVar19 != 0) {
    uVar10 = 10;
  }
  if (param_3 == 0x20) {
    *DAT_100f7b84 = 1;
    iVar19 = FUN_100fa624(iVar18,iVar20,uVar10);
  }
  else {
    if (param_3 != 0xa0) {
      iVar19 = FUN_100fa624(iVar18,iVar20,uVar10);
      if (iVar19 != 0) goto LAB_100f7950;
      iVar19 = FUN_10138cac();
      if ((iVar19 == 0) || ((uint *)param_1[3] != param_2)) {
        iVar19 = FUN_10138cb6();
        if (iVar19 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 3;
        }
        iVar19 = FUN_100fad24(*(undefined4 *)(iVar18 + 0x54),uVar10);
        if (iVar19 != 0) {
          FUN_100a5b78((DAT_100f7f9c - DAT_100f7f98) * 0x20 & 0xff00U | 0x6900011,DAT_100f7fb4,
                       DAT_100f7fb8,iVar19);
          return 0;
        }
        uVar7 = *(int *)(*(int *)(iVar18 + 0x54) + 0x4c) * *(int *)(*(int *)(iVar18 + 0x54) + 0x54);
        uVar3 = uVar7 / (uint)(8 / param_1[0xc]);
        uVar16 = uVar3 / param_2[0xe];
        if ((uVar3 != param_2[0xe] * uVar16) || (uVar7 < (uint)(8 / param_1[0xc]))) {
          uVar16 = uVar16 + 1;
        }
        uVar3 = param_2[0xf];
        uVar7 = param_2[2] + uVar16;
        if (uVar3 < uVar7) {
          uVar7 = param_2[1];
          uVar8 = uVar7 + uVar16;
          uVar11 = uVar3;
          if (uVar3 <= uVar8) {
            uVar11 = 0;
          }
          *param_2 = uVar7;
          param_2[1] = uVar8;
          if (uVar3 <= uVar8) {
            *param_2 = uVar11;
            param_2[1] = uVar16;
            uVar7 = uVar11;
          }
          if (uVar8 < uVar3) {
            uVar7 = uVar7 << 2;
          }
          uVar10 = *(undefined4 *)(param_2[3] + uVar7);
          iVar19 = FUN_100f625c(param_2,uVar10);
          if (-1 < iVar19) {
            if (param_2[0x13] != 0) {
              uVar3 = param_2[5];
              iVar19 = param_2[0xe] * iVar19;
              iVar6 = uVar3 + iVar19;
              if (iVar6 == 0) {
                uVar3 = (DAT_100f80d4 - DAT_100f80d0) * 0x20 & 0xff00;
                goto LAB_100f7f2c;
              }
              if (*(int *)(uVar3 + iVar19) != 0) {
                FUN_100e8474();
                piVar13 = DAT_100f7b80;
                uVar1 = *(ushort *)(iVar6 + 4);
                iVar14 = *DAT_100f7b80;
                *(undefined4 *)(uVar3 + iVar19) = 0;
                *piVar13 = iVar14 - (uint)uVar1;
                *(undefined2 *)(iVar6 + 4) = 0;
              }
            }
LAB_100f7896:
            uVar3 = param_2[3];
            *(int *)(uVar3 + *param_2 * 4) = iVar20;
            if (1 < uVar16) {
              uVar7 = 1;
              do {
                iVar19 = *param_2 + uVar7;
                uVar7 = uVar7 + 1;
                *(undefined4 *)(uVar3 + iVar19 * 4) = 0xffffffff;
              } while (uVar16 != uVar7);
            }
            if (param_2[0xf] <= param_2[2]) goto LAB_100f7b78;
            uVar7 = *param_2;
            param_2[2] = param_2[0xf];
            goto LAB_100f78c6;
          }
          uVar3 = (DAT_100f7f9c - DAT_100f7f98) * 0x20 & 0xff00;
          FUN_100a5b78(uVar3 | DAT_100f7fa0,DAT_100f7fa8,DAT_100f7fa4,uVar10);
          if (param_2[0x13] == 0) goto LAB_100f7896;
LAB_100f7f2c:
          FUN_100a5b78(uVar3 | 0x2900011,DAT_100f7fc0,DAT_100f7fbc);
          uVar7 = 0xffffffff;
        }
        else {
          uVar3 = param_2[3];
          if (*(int *)(uVar3 + *param_2 * 4) == 0) {
            param_2[2] = uVar7;
            *(int *)(uVar3 + *param_2 * 4) = iVar20;
          }
          else {
            param_2[2] = uVar7;
            *param_2 = param_2[1];
            *(int *)(uVar3 + param_2[1] * 4) = iVar20;
          }
          uVar7 = *param_2;
          uVar11 = uVar7 + uVar16;
          param_2[1] = uVar11;
          if (1 < uVar16) {
            if (uVar16 != 2) {
              uVar11 = 2;
            }
            *(undefined4 *)(uVar3 + (uVar7 + 1) * 4) = 0xffffffff;
            if (uVar16 != 2) {
              do {
                iVar19 = *param_2 + uVar11;
                uVar11 = uVar11 + 1;
                *(undefined4 *)(uVar3 + iVar19 * 4) = 0xffffffff;
              } while (uVar11 != uVar16);
            }
LAB_100f7b78:
            uVar7 = *param_2;
          }
LAB_100f78c6:
          param_2[0x12] = uVar7;
        }
        iVar19 = FUN_100f625c(param_2,iVar20);
        if (iVar19 < 0) {
          uVar3 = (DAT_100f7f9c - DAT_100f7f98) * 0x20 & 0xff00;
          FUN_100a5b78(DAT_100f7fa0 | uVar3,DAT_100f7fa8,DAT_100f7fa4,iVar20);
LAB_100f7e38:
          FUN_100a5b78(DAT_100f7fac | uVar3,DAT_100f7fb4,DAT_100f7fb0,iVar20);
          return 0;
        }
        iVar19 = param_2[0xe] * iVar19 + param_2[5];
        if (iVar19 == 0) {
          uVar3 = (DAT_100f80d4 - DAT_100f80d0) * 0x20 & 0xff00;
          goto LAB_100f7e38;
        }
        if (param_1[0xc] == 8) {
          iVar20 = *(int *)(iVar18 + 0x54);
          FUN_1011ea40(iVar19,*(undefined4 *)(iVar20 + 0x58),
                       *(int *)(iVar20 + 0x4c) * *(int *)(iVar20 + 0x54));
        }
        else {
          iVar20 = *(int *)(iVar18 + 0x54);
          FUN_100f743c(iVar19,*(undefined4 *)(iVar20 + 0x58),*(undefined4 *)(iVar20 + 0x54),
                       *(undefined4 *)(iVar20 + 0x4c),param_1[0xc]);
        }
        goto LAB_100f78fc;
      }
      uVar3 = param_2[0xf];
      uVar7 = param_2[2] + 1;
      if (uVar3 < uVar7) {
        uVar7 = param_2[1];
        uVar11 = uVar7 + 1;
        uVar16 = uVar3;
        if (uVar3 <= uVar11) {
          uVar16 = 1;
        }
        *param_2 = uVar7;
        param_2[1] = uVar11;
        if (uVar3 <= uVar11) {
          *param_2 = 0;
          param_2[1] = uVar16;
          uVar7 = 0;
        }
        if (uVar11 < uVar3) {
          uVar7 = uVar7 << 2;
        }
        uVar10 = *(undefined4 *)(param_2[3] + uVar7);
        iVar14 = FUN_100f625c(param_2,uVar10);
        iVar6 = DAT_100f80d4;
        iVar19 = DAT_100f80d0;
        if (-1 < iVar14) {
          if (param_2[0x13] != 0) {
            uVar3 = param_2[5];
            iVar14 = param_2[0xe] * iVar14;
            iVar22 = uVar3 + iVar14;
            if (iVar22 == 0) goto LAB_100f8070;
            if (*(int *)(uVar3 + iVar14) != 0) {
              FUN_100e8474();
              piVar13 = DAT_100f7f90;
              uVar1 = *(ushort *)(iVar22 + 4);
              iVar19 = *DAT_100f7f90;
              *(undefined4 *)(uVar3 + iVar14) = 0;
              *piVar13 = iVar19 - (uint)uVar1;
              *(undefined2 *)(iVar22 + 4) = 0;
            }
          }
LAB_100f7eec:
          *(int *)(param_2[3] + *param_2 * 4) = iVar20;
          uVar7 = *param_2;
          if (param_2[2] < param_2[0xf]) {
            param_2[2] = param_2[0xf];
          }
          goto LAB_100f7c7e;
        }
        FUN_100a5b78(DAT_100f80e4 | (DAT_100f80d4 - DAT_100f80d0) * 0x20 & 0xff00U,DAT_100f80ec,
                     DAT_100f80e8,uVar10);
        if (param_2[0x13] == 0) goto LAB_100f7eec;
LAB_100f8070:
        FUN_100a5b78((iVar6 - iVar19) * 0x20 & 0xff00U | 0x2900011,DAT_100f80fc,DAT_100f80f8);
        uVar7 = 0xffffffff;
      }
      else {
        uVar3 = param_2[3];
        if (*(int *)(uVar3 + *param_2 * 4) == 0) {
          param_2[2] = uVar7;
          *(int *)(uVar3 + *param_2 * 4) = iVar20;
        }
        else {
          param_2[2] = uVar7;
          *param_2 = param_2[1];
          *(int *)(uVar3 + param_2[1] * 4) = iVar20;
        }
        uVar7 = *param_2;
        param_2[1] = uVar7 + 1;
LAB_100f7c7e:
        param_2[0x12] = uVar7;
      }
      iVar6 = FUN_100f625c(param_2,iVar20);
      iVar19 = DAT_100f7fc4;
      uVar10 = DAT_100f7f8c;
      if (iVar6 < 0) {
        uVar3 = (DAT_100f80d4 - DAT_100f80d0) * 0x20 & 0xff00;
        FUN_100a5b78(DAT_100f80e4 | uVar3,DAT_100f80ec,DAT_100f80e8,iVar20);
      }
      else {
        uVar3 = param_2[5];
        iVar6 = param_2[0xe] * iVar6;
        iVar14 = uVar3 + iVar6;
        if (iVar14 != 0) {
          iVar20 = *(int *)(iVar18 + 0x54);
          *(undefined2 *)(DAT_100f7fc4 + 8) = 0;
          FUN_100fa228(iVar20 + 0x6c,uVar10,iVar19);
          FUN_100fb938(*(int *)(iVar18 + 0x54) + 0x6c,local_38);
          uVar16 = (uint)*(ushort *)(iVar19 + 8);
          puVar21 = *(undefined4 **)(iVar19 + 0xc);
          if (uVar16 == 0) {
            uVar8 = 4;
            uVar11 = uVar8;
          }
          else {
            uVar8 = 4;
            puVar23 = puVar21;
            uVar11 = uVar16;
            do {
              uVar4 = puVar23[6];
              if (uVar4 == 3) {
                uVar8 = uVar8 + 10;
              }
              else if (uVar4 < 4) {
                if (uVar4 - 1 < 2) {
                  uVar8 = uVar8 + 6;
                }
              }
              else if (uVar4 == 4) {
                uVar8 = uVar8 + 0xe;
              }
              uVar11 = uVar11 - 1;
              puVar23 = puVar23 + 7;
            } while (uVar11 != 0);
            uVar11 = uVar8 & 0xffff;
          }
          *(short *)(iVar14 + 4) = (short)uVar11;
          psVar5 = (short *)FUN_100e8428(uVar8);
          if (psVar5 == (short *)0x0) {
            iVar18 = DAT_100f80d4 - DAT_100f80d0;
            *(undefined4 *)(uVar3 + iVar6) = 0;
            FUN_100a5b78(DAT_100f80d8 | iVar18 * 0x20 & 0xff00U,DAT_100f80dc,DAT_100f80e0,param_3);
            *(undefined4 *)(param_2[3] + uVar7 * 4) = 0;
            if (uVar7 == 0) {
              return 0;
            }
            *param_2 = uVar7 - 1;
            param_2[1] = uVar7;
            param_2[2] = param_2[2] - 1;
            return 0;
          }
          psVar17 = psVar5 + 1;
          *psVar5 = (short)uVar11 + -2;
          piVar13 = DAT_100f7f90;
          for (; DAT_100f7f90 = piVar13, uVar16 != 0; uVar16 = uVar16 - 1) {
            switch(puVar21[6]) {
            case 1:
              uVar12 = 2;
              goto LAB_100f7de6;
            case 2:
              uVar12 = 4;
LAB_100f7de6:
              *(undefined1 *)psVar17 = uVar12;
              uVar10 = *puVar21;
              psVar17[2] = -(short)puVar21[1];
              psVar17[1] = (short)uVar10;
              psVar17 = psVar17 + 3;
              break;
            case 3:
              *(undefined1 *)psVar17 = 6;
              uVar15 = puVar21[1];
              uVar10 = puVar21[2];
              psVar17[2] = -(short)puVar21[3];
              uVar9 = *puVar21;
              psVar17[1] = (short)uVar10;
              psVar17[4] = -(short)uVar15;
              psVar17[3] = (short)uVar9;
              psVar17 = psVar17 + 5;
              break;
            case 4:
              *(undefined1 *)psVar17 = 8;
              uVar9 = puVar21[5];
              uVar15 = puVar21[1];
              uVar24 = puVar21[2];
              psVar17[2] = -(short)puVar21[3];
              uVar10 = puVar21[4];
              psVar17[4] = -(short)uVar9;
              uVar9 = *puVar21;
              psVar17[1] = (short)uVar24;
              psVar17[3] = (short)uVar10;
              psVar17[6] = -(short)uVar15;
              psVar17[5] = (short)uVar9;
              psVar17 = psVar17 + 7;
            }
            puVar21 = puVar21 + 7;
            piVar13 = DAT_100f7f90;
          }
          *(undefined1 *)psVar17 = 0;
          piVar2 = DAT_100f7f94;
          uVar1 = *(ushort *)(iVar14 + 4);
          *(short **)(uVar3 + iVar6) = psVar5;
          iVar19 = *piVar2;
          iVar20 = *piVar13 + (uint)uVar1;
          *piVar13 = iVar20;
          *(undefined2 *)(iVar14 + 6) = 0x80;
          if (iVar19 < iVar20) {
            *piVar2 = iVar20;
          }
LAB_100f78fc:
          iVar19 = FUN_10138cac();
          if ((iVar19 != 0) && ((uint *)param_1[3] == param_2)) {
            iVar18 = *(int *)(iVar18 + 0x54);
            uVar3 = param_2[4];
            iVar19 = *(int *)(iVar18 + 0x1c);
            iVar6 = *(int *)(iVar18 + 0x24);
            *(int *)(uVar3 + uVar7 * 0x18) = *(int *)(iVar18 + 0x28) >> 6;
            iVar14 = *(int *)(iVar18 + 0x18);
            iVar20 = *(int *)(iVar18 + 0x20);
            iVar18 = uVar3 + uVar7 * 0x18;
            *(int *)(iVar18 + 8) = iVar19 >> 6;
            *(int *)(iVar18 + 0x10) = iVar6 - iVar19 >> 6;
            *(int *)(iVar18 + 4) = iVar14 >> 6;
            *(int *)(iVar18 + 0xc) = iVar20 >> 6;
            *(undefined4 *)(iVar18 + 0x14) = 0x80;
            return iVar18;
          }
          iVar20 = *(int *)(iVar18 + 0x54);
          uVar3 = param_2[4];
          iVar6 = *(int *)(iVar20 + 0x4c);
          iVar19 = *(int *)(iVar20 + 0x68);
          uVar1 = *(ushort *)(param_1 + 5);
          *(int *)(uVar3 + uVar7 * 0x18) = *(int *)(iVar20 + 0x28) >> 6;
          uVar10 = *(undefined4 *)(iVar20 + 100);
          iVar18 = uVar3 + uVar7 * 0x18;
          *(undefined4 *)(iVar18 + 4) = *(undefined4 *)(iVar20 + 0x54);
          *(int *)(iVar18 + 8) = iVar6;
          *(undefined4 *)(iVar18 + 0xc) = uVar10;
          *(int *)(iVar18 + 0x10) = iVar19 - iVar6;
          *(uint *)(iVar18 + 0x14) = (uint)uVar1;
          return iVar18;
        }
        uVar3 = (DAT_100f80d4 - DAT_100f80d0) * 0x20 & 0xff00;
      }
      FUN_100a5b78(DAT_100f80f0 | uVar3,DAT_100f80dc,DAT_100f80f4,iVar20);
      return 0;
    }
    *DAT_100f7b84 = 1;
    iVar19 = FUN_100fa624(iVar18,iVar20,uVar10);
  }
  if (iVar19 != 0) {
LAB_100f7950:
    uVar3 = (DAT_100f7b8c - DAT_100f7b88) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100f7b90 | uVar3,DAT_100f7b98,DAT_100f7b94,iVar19,param_3,iVar20);
    FUN_100a5b78(DAT_100f7b9c | uVar3,DAT_100f7b98,DAT_100f7ba0,(undefined4 *)*param_1 + 1,
                 (short)param_1[5],*(undefined4 *)*param_1,param_1[1]);
    return 0;
  }
  uVar3 = param_2[2] + 1;
  if (param_2[0xf] < uVar3) {
    uVar3 = param_2[1];
    *param_2 = uVar3;
    param_2[1] = uVar3 + 1;
    if (uVar3 + 1 < param_2[0xf]) {
      iVar19 = uVar3 << 2;
    }
    else {
      iVar19 = 0;
      *param_2 = 0;
      param_2[1] = 1;
    }
    uVar10 = *(undefined4 *)(param_2[3] + iVar19);
    iVar19 = FUN_100f625c(param_2,uVar10);
    if (iVar19 < 0) {
      uVar3 = (DAT_100f7f9c - DAT_100f7f98) * 0x20 & 0xff00;
      FUN_100a5b78(uVar3 | DAT_100f7fa0,DAT_100f7fa8,DAT_100f7fa4,uVar10);
      if (param_2[0x13] != 0) {
LAB_100f7f6a:
        FUN_100a5b78(uVar3 | 0x2900011,DAT_100f7fc0,DAT_100f7fbc);
        uVar3 = 0xffffffff;
        goto LAB_100f7aca;
      }
    }
    else if (param_2[0x13] != 0) {
      uVar3 = param_2[5];
      iVar19 = param_2[0xe] * iVar19;
      iVar6 = uVar3 + iVar19;
      if (iVar6 == 0) {
        uVar3 = (DAT_100f80d4 - DAT_100f80d0) * 0x20 & 0xff00;
        goto LAB_100f7f6a;
      }
      if (*(int *)(uVar3 + iVar19) != 0) {
        FUN_100e8474();
        piVar13 = DAT_100f7b80;
        uVar1 = *(ushort *)(iVar6 + 4);
        iVar14 = *DAT_100f7b80;
        *(undefined4 *)(uVar3 + iVar19) = 0;
        *piVar13 = iVar14 - (uint)uVar1;
        *(undefined2 *)(iVar6 + 4) = 0;
      }
    }
    *(int *)(param_2[3] + *param_2 * 4) = iVar20;
    uVar3 = *param_2;
    if (param_2[2] < param_2[0xf]) {
      param_2[2] = param_2[0xf];
    }
  }
  else {
    uVar7 = param_2[3];
    if (*(int *)(uVar7 + *param_2 * 4) == 0) {
      param_2[2] = uVar3;
      *(int *)(uVar7 + *param_2 * 4) = iVar20;
    }
    else {
      param_2[2] = uVar3;
      *param_2 = param_2[1];
      *(int *)(uVar7 + param_2[1] * 4) = iVar20;
    }
    uVar3 = *param_2;
    param_2[1] = uVar3 + 1;
  }
  param_2[0x12] = uVar3;
LAB_100f7aca:
  iVar19 = FUN_100f625c(param_2,iVar20);
  if (iVar19 < 0) {
    FUN_100a5b78(DAT_100f7fa0 | (DAT_100f7f9c - DAT_100f7f98) * 0x20 & 0xff00U,DAT_100f7fa8,
                 DAT_100f7fa4,iVar20);
  }
  iVar19 = uVar3 * 0x18;
  iVar20 = param_2[4] + uVar3 * 0x18;
  *(int *)(param_2[4] + iVar19) = *(int *)(*(int *)(iVar18 + 0x54) + 0x40) >> 6;
  *(undefined4 *)(iVar20 + 4) = 0;
  *(undefined4 *)(iVar20 + 8) = 0;
  *(undefined4 *)(iVar20 + 0xc) = 0;
  *(undefined4 *)(iVar20 + 0x10) = 0;
  iVar18 = FUN_10138cac();
  if ((iVar18 == 0) || ((uint *)param_1[3] != param_2)) {
    iVar19 = param_2[4] + iVar19;
    *(uint *)(iVar19 + 0x14) = (uint)*(ushort *)(param_1 + 5);
  }
  else {
    iVar19 = param_2[4] + iVar19;
    *(undefined4 *)(iVar19 + 0x14) = 0x80;
  }
  return iVar19;
}


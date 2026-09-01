/* FUN_100afe10 @ 0x100afe10 */

undefined4 FUN_100afe10(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [8];
  uint local_38;
  int local_34;
  undefined4 local_30;
  
  iVar10 = *(int *)(param_1 + 0xc);
  iVar12 = iVar10 + 0x88;
  if ((*(byte *)(param_1 + 0xd6) & 0xc) != 0) {
    return 0xffffffc3;
  }
  iVar11 = *(int *)(iVar10 + 0x94);
  if (0 < iVar11) {
    uVar6 = (uint)*(byte *)(param_1 + 0xcf);
    if ((int)uVar6 < *(int *)(iVar10 + 0x90)) {
      *(uint *)(iVar10 + 0x90) = uVar6;
    }
    else if (uVar6 == 2) {
      if (*(int *)(iVar10 + 0x90) < 2) {
        *(undefined4 *)(iVar10 + 0x90) = 2;
        *(undefined4 *)(iVar10 + 0x8c) = *(undefined4 *)(iVar10 + 0x88);
      }
      if (*(char *)(param_1 + 0xc9) == '\x01') {
        *(undefined4 *)(iVar10 + 0x8c) = *(undefined4 *)(iVar10 + 0x88);
      }
      else if (*(char *)(param_1 + 0xc9) == '\x02') {
        *(undefined4 *)(iVar10 + 0x88) = *(undefined4 *)(iVar10 + 0x8c);
      }
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (iVar11 < 1) {
      iVar4 = 0;
    }
    else {
      uVar14 = *(undefined4 *)(iVar10 + 0x88);
      uVar2 = *(undefined4 *)(iVar10 + 0x8c);
      iVar11 = FUN_1012fa5e(param_1,iVar12,iVar11);
      if (iVar11 == 0) {
        uVar5 = 0x3fffffff;
        iVar11 = *(int *)(iVar10 + 0x90);
        if ((*(int *)(iVar10 + 0xd4) == 0) &&
           (uVar5 = FUN_1012fb4a(*(undefined4 *)(param_1 + 0x34),0x3fffffff), 1 < iVar11)) {
          uVar5 = FUN_1012fb4a(*(undefined4 *)(param_1 + 0x38),uVar5);
        }
        iVar4 = FUN_1012fb4a(*(undefined4 *)(param_1 + 0x40),uVar5);
        if (1 < iVar11) {
          iVar4 = FUN_1012fb4a(*(undefined4 *)(param_1 + 0x44),iVar4);
        }
        iVar4 = FUN_100af72c(iVar12,*(undefined4 *)(param_1 + 0x118),iVar4 * iVar11);
        iVar12 = iVar4 * *(int *)(iVar10 + 0x98);
        if (iVar12 < 0) {
          iVar12 = iVar12 + 7;
        }
        FUN_1012fa14(*(undefined4 *)(param_1 + 0x40),uVar14);
        if (1 < *(int *)(iVar10 + 0x90)) {
          FUN_1012fa14(*(undefined4 *)(param_1 + 0x44),uVar2);
        }
        if ((*(int *)(iVar10 + 0xd4) == 0) &&
           (FUN_1012fa14(*(undefined4 *)(param_1 + 0x34),uVar14), 1 < *(int *)(iVar10 + 0x90))) {
          FUN_1012fa14(*(undefined4 *)(param_1 + 0x38),uVar2,iVar12 >> 3);
        }
      }
      else {
        iVar4 = *(int *)(iVar10 + 0x94);
        *(undefined4 *)(iVar10 + 0x94) = 0;
      }
    }
  }
  else {
    if (iVar11 < 1) {
      iVar4 = 0;
    }
    else {
      piVar7 = *(int **)(param_1 + 0x18);
      iVar4 = (piVar7[2] + *piVar7) - piVar7[1];
      if ((*(int *)(iVar10 + 0xd4) == 0) &&
         (iVar4 = FUN_1012fb4a(*(undefined4 *)(param_1 + 0x34)), 1 < *(int *)(iVar10 + 0x90))) {
        iVar4 = FUN_1012fb4a(*(undefined4 *)(param_1 + 0x38));
      }
      iVar8 = *(int *)(iVar10 + 0x98);
      if (iVar8 < 0) {
        iVar8 = iVar8 + 7;
      }
      iVar4 = iVar4 / (iVar8 >> 3);
      if (iVar11 <= iVar4) {
        iVar4 = iVar11;
      }
      if (0 < iVar4) {
        iVar11 = iVar4 * (iVar8 >> 3);
        iVar12 = FUN_1012fa5e(param_1,iVar12,iVar4);
        if (iVar12 != 0) {
          *(int *)(iVar10 + 0x94) = *(int *)(iVar10 + 0x94) - iVar4;
          *(int *)(iVar10 + 0x88) = *(int *)(iVar10 + 0x88) + iVar11;
          if (1 < *(int *)(iVar10 + 0x90)) {
            *(int *)(iVar10 + 0x8c) = iVar11 + *(int *)(iVar10 + 0x8c);
          }
          goto LAB_100afed4;
        }
        if (*(int *)(iVar10 + 0xd4) == 0) {
          FUN_1012fa14(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(iVar10 + 0x88),iVar11);
        }
        FUN_1012d2f0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar10 + 0x88),iVar11);
        *(int *)(iVar10 + 0x88) = *(int *)(iVar10 + 0x88) + iVar11;
        if (1 < *(int *)(iVar10 + 0x90)) {
          if (*(int *)(iVar10 + 0xd4) == 0) {
            FUN_1012fa14(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(iVar10 + 0x8c),iVar11);
          }
          FUN_1012d2f0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar10 + 0x8c),iVar11);
          *(int *)(iVar10 + 0x8c) = iVar11 + *(int *)(iVar10 + 0x8c);
        }
        *(int *)(iVar10 + 0x94) = *(int *)(iVar10 + 0x94) - iVar4;
      }
    }
    if ((*(int **)(param_1 + 0x18))[1] == **(int **)(param_1 + 0x18)) {
      iVar4 = 0;
    }
    else {
      FUN_1012fa06(*(undefined4 *)(param_1 + 8));
      if (((int)((uint)*(byte *)(param_1 + 0xd6) << 0x1e) < 0) && (*(int *)(iVar10 + 0x94) < 1)) {
        iVar12 = FUN_1013107e(*(undefined4 *)(param_1 + 0x10));
      }
      else {
        iVar12 = FUN_10131070(*(undefined4 *)(param_1 + 0x10));
      }
      iVar4 = iVar4 + iVar12;
      thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x38);
    }
    uVar6 = (*(int **)(param_1 + 0x24))[1] - **(int **)(param_1 + 0x24);
    if (0 < (int)uVar6) {
      uVar3 = FUN_1012d654(*(undefined4 *)(param_1 + 0x118));
      if ((int)uVar3 < (int)uVar6) {
        uVar6 = uVar3 & 0xfffffffe;
      }
      if (*(int *)(param_1 + 0xd8) == 0) {
        iVar12 = FUN_1012d378(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x118),uVar6
                              ,DAT_100b020c);
        iVar4 = iVar4 + iVar12;
      }
      else {
        do {
          iVar12 = FUN_1012d654(*(undefined4 *)(param_1 + 0x118));
          if (iVar12 < *(int *)(param_1 + 0xe0) * 4) break;
          FUN_1011ea48(auStack_40,0,0x18);
          local_48 = *(undefined4 *)(param_1 + 0xec);
          local_44 = *(undefined4 *)(param_1 + 0xf0);
          local_38 = (uint)*(byte *)(param_1 + 0xcf);
          local_30 = 0x10;
          local_34 = *(int *)(param_1 + 0xfc) / 2;
          iVar12 = FUN_100af87c(&local_48,*(undefined4 *)(param_1 + 0x24),
                                *(undefined4 *)(param_1 + 0xdc),0x7fffffff);
          iVar12 = *(int *)(param_1 + 0xfc) + iVar12 * 2;
          *(int *)(param_1 + 0xfc) = iVar12;
          if (iVar12 < *(int *)(param_1 + 0xdc) * 2) break;
          iVar12 = FUN_1012f5ae(*(undefined4 *)(param_1 + 0xd8),*(undefined1 *)(param_1 + 0xcf),
                                param_1 + 0xf4,param_1 + 0xec,*(int *)(param_1 + 0xdc));
          *(int *)(param_1 + 0xe0) = iVar12;
          if (0 < iVar12) {
            local_60 = *(undefined4 *)(param_1 + 0xf4);
            local_5c = *(undefined4 *)(param_1 + 0xf8);
            local_58 = *(undefined4 *)(param_1 + 0xe8);
            local_50 = 0x10;
            uStack_4c = 0;
            iStack_54 = iVar12;
            FUN_100af72c(&local_60,*(undefined4 *)(param_1 + 0x118),0x7fffffff);
          }
          iVar12 = *(int *)(param_1 + 0xdc) * -2;
          *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + iVar12;
          uVar6 = iVar12 * (uint)*(byte *)(param_1 + 0xcf) + uVar6;
        } while (0 < (int)uVar6);
      }
    }
  }
LAB_100afed4:
  if (0 < *(int *)(iVar10 + 0x94)) goto LAB_100aff42;
  if (*(short *)(param_1 + 0xd0) != 0) {
    iVar11 = FUN_1012fe64(*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),
                          *(undefined1 *)(param_1 + 0xcb),*(undefined1 *)(param_1 + 0xcc),
                          *(undefined1 *)(param_1 + 0xce),*(undefined1 *)(param_1 + 0xcf));
    iVar12 = DAT_100b03c8;
    bVar1 = *(byte *)(param_1 + 0xd6);
    if ((int)((uint)bVar1 << 0x1f) < 0) {
      if (iVar11 < (int)(uint)*(ushort *)(param_1 + 0xd2)) {
        *(byte *)(param_1 + 0xd6) = bVar1 & 0xfe;
        FUN_100a5b78(DAT_100b0204 | (DAT_100b01fc - DAT_100b0200) * 0x20 & 0xff00U,DAT_100b0208,0,
                     iVar11);
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
        goto LAB_100aff42;
      }
    }
    else {
      if (iVar11 < (int)(uint)*(ushort *)(param_1 + 0xd0)) goto LAB_100aff42;
      *(byte *)(param_1 + 0xd6) = bVar1 | 1;
      FUN_100a5b78(DAT_100b03d0 | (iVar12 - DAT_100b03cc) * 0x20 & 0xff00U,DAT_100b03d4,1,iVar11);
    }
  }
  if (-1 < (int)((uint)*(byte *)(param_1 + 0xd6) << 0x1e)) {
    iVar12 = *(int *)(param_1 + 0xc);
    pcVar13 = *(code **)(iVar12 + 0xcc);
    FUN_1012fa06(*(undefined4 *)(param_1 + 8));
    *(int *)(iVar12 + 0xb0) = iVar12 + 0x88;
    if (*(int *)(iVar12 + 0xd4) == 0) {
LAB_100b0326:
      iVar11 = (*pcVar13)(*(undefined4 *)(iVar12 + 0xd0),8);
      if (iVar11 == 0) {
        iVar11 = (*pcVar13)(*(undefined4 *)(iVar12 + 0xd0),4,iVar12 + 0xa0);
      }
      bVar1 = *(byte *)(param_1 + 0xd6);
      if ((bVar1 & 0x20) == 0) {
        if (iVar11 < 1) {
          if (*(int *)(iVar12 + 0xd4) != 0) {
            if (*(char *)(param_1 + 0xcc) == '\x10') {
              iVar8 = 0x78;
            }
            else {
              iVar8 = 0x3c;
            }
            if (iVar11 != 0) {
              puVar9 = *(undefined4 **)(iVar12 + 0xb0);
              uVar2 = *(undefined4 *)(iVar12 + 0xd8);
              puVar9[2] = 1;
              *puVar9 = uVar2;
              puVar9[4] = 0x10;
              puVar9[3] = iVar8;
              FUN_1011ea48(uVar2,bVar1 & 0x20,iVar8 << 1);
            }
            uVar2 = **(undefined4 **)(iVar12 + 0xb0);
            if (*(int *)(param_1 + 0x34) != 0) {
              FUN_1012d2f0(*(int *)(param_1 + 0x34),uVar2,iVar8 << 1);
            }
            if (*(int *)(param_1 + 0x3c) != 0) {
              FUN_1012d2f0(*(int *)(param_1 + 0x3c),uVar2,iVar8 << 1);
            }
          }
          if (iVar11 != 0) {
            *(short *)(param_1 + 0xb2) = *(short *)(param_1 + 0xb2) + 1;
          }
        }
        else if (iVar11 != 1) goto LAB_100b0298;
        iVar11 = 0;
      }
    }
    else {
      piVar7 = *(int **)(param_1 + 0x3c);
      if (*(char *)(param_1 + 0xcb) == '\v') {
        uVar6 = 0xf0;
      }
      else {
        uVar6 = 0x78;
      }
      if (((piVar7 == (int *)0x0) || (uVar6 <= (uint)((piVar7[2] + *piVar7) - piVar7[1]))) &&
         ((piVar7 = *(int **)(param_1 + 0x34), piVar7 == (int *)0x0 ||
          (uVar6 <= (uint)((piVar7[2] + *piVar7) - piVar7[1]))))) goto LAB_100b0326;
      iVar11 = 0;
      *(undefined4 *)(iVar12 + 0x94) = 0;
    }
LAB_100b0298:
    thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x38);
    if (iVar11 != 0) {
      *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) | 2;
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      iVar4 = iVar4 + *(int *)(iVar10 + 0x94);
      iVar12 = *(int *)(iVar10 + 0x98) * *(int *)(iVar10 + 0x94) * *(int *)(iVar10 + 0x90);
      if (iVar12 < 0) {
        iVar12 = iVar12 + 7;
      }
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + (iVar12 >> 3);
    }
  }
  if ((((int)((uint)*(byte *)(param_1 + 0xd6) << 0x1e) < 0) && (*(int *)(iVar10 + 0x94) < 1)) &&
     (((piVar7 = *(int **)(param_1 + 0x18), piVar7 == (int *)0x0 || (piVar7[1] == *piVar7)) &&
      ((piVar7 = *(int **)(param_1 + 0x24), piVar7 == (int *)0x0 || (piVar7[1] == *piVar7)))))) {
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_100a8fb0();
    }
    FUN_1012fe38(param_1,6,0);
    *(byte *)(param_1 + 0xd6) = *(byte *)(param_1 + 0xd6) | 4;
  }
LAB_100aff42:
  if (iVar4 == 0) {
    uVar2 = 0xffffff97;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


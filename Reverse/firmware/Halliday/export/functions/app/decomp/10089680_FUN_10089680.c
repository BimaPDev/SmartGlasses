/* FUN_10089680 @ 0x10089680 */

undefined4 FUN_10089680(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [20];
  
  if ((*(byte *)(param_1 + 0x2b) & 0xc) == 0xc) {
    return 0;
  }
  iVar3 = FUN_10126fae();
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_1008a000(param_1);
  bVar2 = *(byte *)(param_1 + 0x2b) & 8;
  if ((*(byte *)(param_1 + 0x2b) & 8) == 0) {
    uVar15 = FUN_1012691c(param_1,bVar2,1);
    uVar7 = DAT_10089a94;
    bVar21 = uVar15 == DAT_10089a94;
    if ((uVar15 & 0x60000000) == 0x20000000) {
      if ((int)(uVar15 & 0x9fffffff) < 0x7d1) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
    }
    iVar18 = FUN_1012579a(iVar3);
    if (uVar15 == uVar7) {
      FUN_1008a284(param_1,0);
      iVar16 = FUN_101254a6(param_1);
      iVar6 = FUN_101254b2(param_1);
      iVar6 = iVar16 + iVar6;
      iVar8 = FUN_101254be(param_1);
      iVar16 = iVar16 + iVar8;
      iVar8 = FUN_1008960c(param_1);
      uVar15 = iVar6 + iVar16 + iVar8;
      iVar8 = FUN_10126fd2(param_1);
      iVar9 = FUN_10125498(param_1);
      iVar10 = 0;
      uVar7 = DAT_10089a98;
      if (iVar9 == 1) {
        for (; iVar8 != iVar10; iVar10 = iVar10 + 1) {
          iVar19 = *(int *)(**(int **)(param_1 + 8) + iVar10 * 4);
          iVar9 = FUN_10124cc6(iVar19,DAT_10089a9c);
          if (iVar9 == 0) {
            iVar9 = FUN_1008953c(iVar19);
            if (iVar9 == 0) {
              uVar1 = FUN_1012691c(iVar19,0,9);
              switch(uVar1) {
              case 0:
              case 3:
              case 6:
              case 8:
                break;
              default:
                iVar9 = FUN_1012691c(iVar19,0,7);
                if ((iVar9 == 0) &&
                   (uVar17 = (iVar6 + 1 + *(int *)(iVar19 + 0x1c)) - *(int *)(iVar19 + 0x14),
                   (int)uVar7 < (int)uVar17)) {
                  uVar7 = uVar17;
                }
                goto LAB_100898a0;
              }
            }
            uVar17 = (*(int *)(param_1 + 0x1c) + 1) - *(int *)(iVar19 + 0x14);
            if ((int)uVar7 < (int)uVar17) {
              uVar7 = uVar17;
            }
          }
LAB_100898a0:
        }
        if (uVar7 != DAT_10089a98) {
          uVar7 = uVar7 + iVar16;
          goto LAB_100898b2;
        }
      }
      else {
        for (; iVar8 != iVar10; iVar10 = iVar10 + 1) {
          iVar19 = *(int *)(**(int **)(param_1 + 8) + iVar10 * 4);
          iVar9 = FUN_10124cc6(iVar19,DAT_10089a9c);
          if (iVar9 == 0) {
            iVar9 = FUN_1008953c(iVar19);
            if (iVar9 == 0) {
              bVar2 = FUN_1012691c(iVar19,0,9);
              if ((7 < bVar2) || ((1 << (uint)bVar2 & 0x93U) == 0)) {
                iVar9 = FUN_1012691c(iVar19,0,8);
                if ((iVar9 == 0) &&
                   (uVar17 = (iVar16 + 1 + *(int *)(iVar19 + 0x1c)) - *(int *)(iVar19 + 0x14),
                   (int)uVar7 < (int)uVar17)) {
                  uVar7 = uVar17;
                }
                goto LAB_10089962;
              }
            }
            uVar17 = (1 - *(int *)(param_1 + 0x14)) + *(int *)(iVar19 + 0x1c);
            if ((int)uVar7 < (int)uVar17) {
              uVar7 = uVar17;
            }
          }
LAB_10089962:
        }
        if (uVar7 != DAT_10089a98) {
          uVar7 = uVar7 + iVar6;
LAB_100898b2:
          if ((uVar7 != DAT_10089a98) && ((int)uVar15 < (int)uVar7)) {
            uVar15 = uVar7;
          }
        }
      }
    }
    else if (bVar2 != 0) {
      if (((*(byte *)(iVar3 + 0x2b) & 8) == 0) &&
         (uVar17 = FUN_1012691c(iVar3,*(byte *)(iVar3 + 0x2b) & 8,1), uVar17 == uVar7)) {
        iVar16 = FUN_101254a6(param_1);
        iVar6 = FUN_101254be(param_1);
        iVar8 = FUN_101254b2(param_1);
        uVar15 = iVar6 + iVar8 + iVar16 * 2;
      }
      else {
        uVar15 = uVar15 & 0x9fffffff;
        if (1000 < (int)uVar15) {
          uVar15 = 1000 - uVar15;
        }
        uVar15 = (int)(iVar18 * uVar15) / 100;
      }
    }
    uVar5 = FUN_1012691c(param_1,0,2);
    uVar11 = FUN_1012691c(param_1,0,3);
    iVar18 = FUN_10125ee4(uVar15,uVar5,uVar11,iVar18);
  }
  else {
    iVar18 = (*(int *)(param_1 + 0x1c) + 1) - *(int *)(param_1 + 0x14);
    bVar21 = false;
  }
  uVar5 = thunk_FUN_10126008(param_1);
  bVar2 = *(byte *)(param_1 + 0x2b) & 4;
  if ((*(byte *)(param_1 + 0x2b) & 4) == 0) {
    uVar7 = FUN_1012691c(param_1,bVar2,4);
    if ((uVar7 & 0x60000000) == 0x20000000) {
      if ((int)(uVar7 & 0x9fffffff) < 0x7d1) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
    }
    iVar16 = FUN_101257c8(iVar3);
    uVar15 = DAT_10089a94;
    if (uVar7 == DAT_10089a94) {
      FUN_1008a2b0(param_1,0);
      iVar6 = FUN_101254a6(param_1);
      iVar8 = FUN_101254d6(param_1);
      iVar9 = FUN_101254ca(param_1);
      iVar10 = FUN_1008962c(param_1);
      uVar17 = iVar6 + iVar8 + iVar6 + iVar9 + iVar10;
      iVar10 = FUN_10126fd2(param_1);
      uVar15 = DAT_10089a98;
      for (iVar19 = 0; iVar10 != iVar19; iVar19 = iVar19 + 1) {
        iVar20 = *(int *)(**(int **)(param_1 + 8) + iVar19 * 4);
        iVar13 = FUN_10124cc6(iVar20,DAT_10089b60);
        if (iVar13 == 0) {
          iVar13 = FUN_1008953c(iVar20);
          if ((iVar13 == 0) && (bVar2 = FUN_1012691c(iVar20,0,9), 3 < bVar2)) {
            iVar13 = FUN_1012691c(iVar20,0,8);
            if ((iVar13 == 0) &&
               (uVar14 = (iVar6 + iVar8 + 1 + *(int *)(iVar20 + 0x20)) - *(int *)(iVar20 + 0x18),
               (int)uVar15 < (int)uVar14)) {
              uVar15 = uVar14;
            }
          }
          else {
            uVar14 = (1 - *(int *)(param_1 + 0x18)) + *(int *)(iVar20 + 0x20);
            if ((int)uVar15 < (int)uVar14) {
              uVar15 = uVar14;
            }
          }
        }
      }
      if ((uVar15 != DAT_10089a98) && (uVar15 = iVar6 + iVar9 + uVar15, (int)uVar17 < (int)uVar15))
      {
        uVar17 = uVar15;
      }
    }
    else {
      uVar17 = uVar7;
      if (bVar2 != 0) {
        if (((*(byte *)(iVar3 + 0x2b) & 4) == 0) &&
           (uVar17 = FUN_1012691c(iVar3,*(byte *)(iVar3 + 0x2b) & 4,4), uVar17 == uVar15)) {
          iVar6 = FUN_101254a6(param_1);
          iVar8 = FUN_101254d6(param_1);
          iVar9 = FUN_101254ca(param_1);
          uVar17 = iVar8 + iVar9 + iVar6 * 2;
        }
        else {
          uVar15 = uVar7 & 0x9fffffff;
          if (1000 < (int)uVar15) {
            uVar15 = 1000 - uVar15;
          }
          uVar17 = (int)(iVar16 * uVar15) / 100;
        }
      }
    }
    uVar11 = FUN_1012691c(param_1,0,5);
    uVar12 = FUN_1012691c(param_1,0,6);
    iVar16 = FUN_10125ee4(uVar17,uVar11,uVar12,iVar16);
    if ((!bVar21) && (uVar7 != DAT_10089a94)) goto LAB_100896ea;
  }
  else {
    iVar16 = (*(int *)(param_1 + 0x20) + 1) - *(int *)(param_1 + 0x18);
    if (!bVar21) goto LAB_100896ea;
  }
  FUN_10126144(param_1,uVar4,uVar5,0);
LAB_100896ea:
  if (((*(int *)(param_1 + 0x1c) + 1) - *(int *)(param_1 + 0x14) == iVar18) &&
     ((*(int *)(param_1 + 0x20) + 1) - *(int *)(param_1 + 0x18) == iVar16)) {
    return 0;
  }
  FUN_10125af4(param_1);
  local_50 = *(undefined4 *)(param_1 + 0x14);
  local_4c = *(undefined4 *)(param_1 + 0x18);
  local_48 = *(undefined4 *)(param_1 + 0x1c);
  local_44 = *(undefined4 *)(param_1 + 0x20);
  FUN_101257f6(iVar3,auStack_40);
  iVar6 = FUN_1012aa22(&local_50,auStack_40,0);
  if (iVar6 == 0) {
    FUN_10126802(iVar3);
  }
  *(int *)(param_1 + 0x20) = iVar16 + *(int *)(param_1 + 0x18) + -1;
  iVar16 = FUN_10125498(param_1);
  if (iVar16 == 1) {
    *(int *)(param_1 + 0x14) = (*(int *)(param_1 + 0x1c) + 1) - iVar18;
  }
  else {
    *(int *)(param_1 + 0x1c) = iVar18 + *(int *)(param_1 + 0x14) + -1;
  }
  FUN_10086f50(param_1,0x29,&local_50);
  FUN_10086f50(iVar3,0x22,param_1);
  FUN_10125af4(param_1);
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) | 2;
  iVar18 = FUN_1012aa22(param_1 + 0x14,auStack_40,0);
  if ((iVar6 != 0) || (iVar18 != 0)) {
    FUN_10126802(iVar3);
  }
  FUN_1012543e(param_1);
  return 1;
}


/* FUN_10007460 @ 0x10007460 */

uint FUN_10007460(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint **ppuVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *local_284;
  int local_280;
  int local_270;
  int local_26c;
  uint *local_260 [2];
  uint local_258 [20];
  undefined8 auStack_208 [20];
  int local_168 [40];
  undefined8 uStack_c8;
  undefined8 auStack_c0 [19];
  
  local_260[1] = (uint *)param_2;
  iVar4 = param_4 + -1;
  iVar7 = *(int *)(DAT_1000774c + param_5 * 4);
  if (param_3 < -0x14) {
    local_270 = -0x18;
    local_26c = 0;
  }
  else {
    local_26c = (int)((longlong)DAT_10007750 * (longlong)(param_3 + -3) >> 0x22) -
                (param_3 + -3 >> 0x1f);
    local_270 = (local_26c + 1) * -0x18;
  }
  local_270 = param_3 + local_270;
  iVar11 = local_26c - iVar4;
  if (-1 < iVar7 + iVar4) {
    iVar14 = iVar7 + iVar4 + 1 + iVar11;
    puVar18 = auStack_208;
    do {
      uVar22 = 0;
      if (-1 < iVar11) {
        uVar22 = FUN_10003a34(*(undefined4 *)(param_6 + iVar11 * 4));
      }
      iVar11 = iVar11 + 1;
      *puVar18 = uVar22;
      puVar18 = puVar18 + 1;
    } while (iVar11 != iVar14);
  }
  if (-1 < iVar7) {
    puVar17 = auStack_208 + param_4;
    iVar11 = iVar4;
    puVar18 = &uStack_c8;
    do {
      if (iVar4 < 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        puVar19 = param_1;
        puVar16 = puVar17;
        do {
          puVar15 = puVar19 + 2;
          uVar23 = FUN_10003b08(*puVar19,puVar19[1],*(undefined4 *)(puVar16 + -1),
                                *(undefined4 *)((int)puVar16 + -4));
          uVar22 = FUN_1000379c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                                (int)((ulonglong)uVar23 >> 0x20));
          puVar19 = puVar15;
          puVar16 = puVar16 + -1;
        } while (puVar15 != param_1 + param_4 * 2);
      }
      iVar11 = iVar11 + 1;
      puVar17 = puVar17 + 1;
      *puVar18 = uVar22;
      puVar18 = puVar18 + 1;
    } while (iVar11 != iVar7 + param_4);
  }
  local_260[0] = local_258 + iVar7 + -1;
  local_284 = (undefined8 *)iVar7;
  do {
    uVar12 = *(undefined4 *)(&uStack_c8 + (int)local_284);
    uVar22 = CONCAT44(*(undefined4 *)((int)&uStack_c8 + (int)local_284 * 8 + 4),uVar12);
    if (0 < (int)local_284) {
      puVar18 = &uStack_c8 + (int)local_284;
      puVar5 = local_258;
      do {
        uVar21 = (undefined4)((ulonglong)uVar22 >> 0x20);
        FUN_10003b08((int)uVar22,uVar21,0,DAT_10007754);
        FUN_10004068();
        uVar23 = FUN_10003a34();
        uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
        uVar24 = FUN_10003b08((int)uVar23,uVar12,0,DAT_10007758);
        FUN_10003798((int)uVar22,uVar21,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
        uVar2 = FUN_10004068();
        *puVar5 = uVar2;
        puVar17 = puVar18 + -1;
        uVar22 = FUN_1000379c((int)uVar23,uVar12,*(undefined4 *)puVar17,
                              *(undefined4 *)((int)puVar18 + -4));
        uVar12 = (undefined4)uVar22;
        puVar18 = puVar17;
        puVar5 = puVar5 + 1;
      } while (puVar17 != &uStack_c8);
    }
    uVar21 = FUN_10008240(uVar12,local_270);
    uVar12 = FUN_10003b08(uVar21,extraout_s1,0,0x3fc00000);
    uVar12 = FUN_10006668(uVar12);
    uVar22 = FUN_10003b08(uVar12,extraout_s1_00,0,DAT_1000775c);
    uVar22 = FUN_10003798(uVar21,extraout_s1,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
    uVar2 = FUN_10004068();
    uVar23 = FUN_10003a34();
    uVar22 = FUN_10003798((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                          (int)((ulonglong)uVar23 >> 0x20));
    uVar21 = (undefined4)((ulonglong)uVar22 >> 0x20);
    uVar12 = (undefined4)uVar22;
    if (local_270 < 1) {
      if (local_270 == 0) {
        iVar11 = (int)local_258[(int)local_284 + -1] >> 0x17;
        goto joined_r0x10007770;
      }
      iVar11 = FUN_10004014(uVar12,uVar21,0,DAT_10007afc);
      if (iVar11 != 0) {
        uVar2 = uVar2 + 1;
        iVar11 = 2;
        if ((int)local_284 < 1) {
          uVar22 = FUN_10003798(0,DAT_10007af8,uVar12,uVar21);
          goto LAB_1000765e;
        }
        goto LAB_10007780;
      }
      iVar11 = 0;
    }
    else {
      iVar11 = (int)local_258[(int)local_284 + -1] >> (0x18U - local_270 & 0xff);
      uVar2 = uVar2 + iVar11;
      uVar8 = local_258[(int)local_284 + -1] - (iVar11 << (0x18U - local_270 & 0xff));
      iVar11 = (int)uVar8 >> (0x17U - local_270 & 0xff);
      local_258[(int)local_284 + -1] = uVar8;
joined_r0x10007770:
      if (0 < iVar11) {
        uVar2 = uVar2 + 1;
        if ((int)local_284 < 1) {
          bVar20 = false;
        }
        else {
LAB_10007780:
          if (local_258[0] == 0) {
            bVar20 = false;
            if (local_284 != (undefined8 *)0x1) {
              puVar5 = local_258;
              iVar14 = 1;
              do {
                puVar5 = puVar5 + 1;
                if (*puVar5 != 0) {
                  iVar10 = iVar14 + 1;
                  uVar8 = *puVar5;
                  goto LAB_1000779a;
                }
                iVar14 = iVar14 + 1;
              } while ((undefined8 *)iVar14 != local_284);
              bVar20 = false;
            }
          }
          else {
            iVar10 = 1;
            iVar14 = 0;
            uVar8 = local_258[0];
LAB_1000779a:
            local_258[iVar14] = 0x1000000 - uVar8;
            if (iVar10 < (int)local_284) {
              uVar8 = local_258[iVar10];
              puVar5 = local_258 + iVar10;
              while( true ) {
                puVar9 = puVar5 + 1;
                *puVar5 = 0xffffff - uVar8;
                if (puVar9 == local_258 + (int)local_284) break;
                uVar8 = *puVar9;
                puVar5 = puVar9;
              }
            }
            bVar20 = true;
          }
        }
        if (0 < local_270) {
          if (local_270 == 1) {
            local_258[(int)local_284 + -1] = local_258[(int)local_284 + -1] & 0x7fffff;
          }
          else if (local_270 == 2) {
            local_258[(int)local_284 + -1] = local_258[(int)local_284 + -1] & 0x3fffff;
          }
        }
        if (iVar11 == 2) {
          uVar22 = FUN_10003798(0,DAT_10007af8,uVar12,uVar21);
          if (bVar20) {
            uVar12 = FUN_10008240((int)DAT_10007ae8,local_270);
            uVar22 = FUN_10003798((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),uVar12,extraout_s1_01
                                 );
          }
        }
      }
    }
LAB_1000765e:
    iVar14 = FUN_10003fd8((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0,0);
    if (iVar14 == 0) {
      uVar12 = FUN_10008240((int)uVar22,-local_270);
      iVar4 = FUN_10004014(uVar12,extraout_s1_03,0,DAT_10007c9c);
      if (iVar4 == 0) {
        uVar8 = FUN_10004068(uVar12,extraout_s1_03);
        local_258[(int)local_284] = uVar8;
        puVar18 = local_284;
      }
      else {
        local_270 = local_270 + 0x18;
        FUN_10003b08(uVar12,extraout_s1_03,0,DAT_10007ca0);
        uVar8 = FUN_10004068();
        uVar22 = FUN_10003a34();
        uVar22 = FUN_10003b08((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0,DAT_10007c9c);
        FUN_10003798(uVar12,extraout_s1_03,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
        uVar3 = FUN_10004068();
        local_258[(int)local_284] = uVar3;
        local_258[(int)local_284 + 1] = uVar8;
        puVar18 = (undefined8 *)((int)local_284 + 1);
      }
      goto LAB_1000788e;
    }
    puVar18 = (undefined8 *)((int)local_284 + -1);
    if (iVar7 <= (int)puVar18) {
      uVar8 = 0;
      puVar5 = local_258 + (int)local_284 + 0x3fffffff;
      do {
        puVar9 = puVar5 + -1;
        uVar8 = uVar8 | *puVar5;
        puVar5 = puVar9;
      } while (puVar9 != local_260[0]);
      if (uVar8 != 0) break;
    }
    if (local_258[iVar7 + -1] == 0) {
      local_280 = 1;
      ppuVar6 = local_260 + iVar7;
      do {
        puVar5 = *ppuVar6;
        local_280 = local_280 + 1;
        ppuVar6 = ppuVar6 + -1;
      } while (puVar5 == (uint *)0x0);
      local_280 = (int)local_284 + local_280;
    }
    else {
      local_280 = (int)local_284 + 1;
    }
    iVar11 = (int)local_284 + 1;
    puVar19 = (undefined4 *)(param_6 + (iVar11 + local_26c + 0x3fffffff) * 4);
    puVar18 = auStack_208 + (int)local_284 + param_4;
    puVar17 = &uStack_c8 + iVar11;
    do {
      local_284 = puVar17;
      puVar19 = puVar19 + 1;
      uVar22 = FUN_10003a34(*puVar19);
      puVar16 = puVar18 + 1;
      *puVar18 = uVar22;
      if (iVar4 < 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        puVar15 = param_1;
        while( true ) {
          uVar22 = FUN_10003b08(*puVar15,puVar15[1],(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
          uVar23 = FUN_1000379c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar22,
                                (int)((ulonglong)uVar22 >> 0x20));
          if (puVar15 + 2 == param_1 + param_4 * 2) break;
          puVar18 = puVar18 + -1;
          uVar22 = *puVar18;
          puVar15 = puVar15 + 2;
        }
      }
      iVar11 = iVar11 + 1;
      puVar17 = local_284 + 1;
      *local_284 = uVar23;
      local_284 = (undefined8 *)local_280;
      puVar18 = puVar16;
    } while (iVar11 <= local_280);
  } while( true );
  local_270 = local_270 + -0x18;
  if (local_258[(int)puVar18] == 0) {
    puVar5 = local_258 + (int)local_284 + DAT_10007b00;
    do {
      uVar8 = *puVar5;
      puVar18 = (undefined8 *)((int)puVar18 + -1);
      local_270 = local_270 + -0x18;
      puVar5 = puVar5 + -1;
    } while (uVar8 == 0);
  }
LAB_1000788e:
  uVar12 = FUN_10008240((int)DAT_10007ae8,local_270);
  uVar22 = CONCAT44(extraout_s1_02,uVar12);
  if ((int)puVar18 < 0) {
    if (2 < param_5) {
      if (param_5 == 3) {
        uVar22 = 0;
LAB_10007a84:
        if (iVar11 != 0) {
          local_260[1][2] = local_168[2];
          local_260[1][3] = local_168[3] + -0x80000000;
          local_260[1][4] = (int)uVar22;
          local_260[1][1] = local_168[1] + -0x80000000;
          *local_260[1] = local_168[0];
          local_260[1][5] = (int)((ulonglong)uVar22 >> 0x20) + -0x80000000;
          return uVar2 & 7;
        }
        *(undefined8 *)(local_260[1] + 4) = uVar22;
        local_260[1][2] = local_168[2];
        local_260[1][3] = local_168[3];
        *local_260[1] = local_168[0];
        local_260[1][1] = local_168[1];
        return uVar2 & 7;
      }
      goto LAB_1000799c;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_1000799c;
      uVar22 = 0;
LAB_1000798c:
      iVar4 = (int)((ulonglong)uVar22 >> 0x20);
      if (iVar11 != 0) {
        iVar4 = iVar4 + -0x80000000;
      }
      *local_260[1] = (int)uVar22;
      local_260[1][1] = iVar4;
LAB_1000799c:
      return uVar2 & 7;
    }
    uVar22 = 0;
  }
  else {
    puVar16 = &uStack_c8 + (int)puVar18;
    puVar17 = auStack_c0 + (int)puVar18;
    puVar5 = local_258 + (int)puVar18 + 1;
    do {
      uVar12 = (undefined4)((ulonglong)uVar22 >> 0x20);
      puVar5 = puVar5 + -1;
      uVar23 = FUN_10003a34(*puVar5);
      uVar23 = FUN_10003b08((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar22,uVar12);
      puVar17 = puVar17 + -1;
      *puVar17 = uVar23;
      uVar22 = FUN_10003b08((int)uVar22,uVar12,0,DAT_10007b04);
    } while (puVar5 != local_258);
    iVar4 = 0;
    uVar12 = DAT_10007af0;
    uVar21 = DAT_10007af4;
    do {
      DAT_10007af0 = uVar12;
      DAT_10007af4 = uVar21;
      if (iVar7 < 0) {
        uVar22 = 0;
      }
      else {
        iVar14 = 0;
        uVar22 = 0;
        puVar17 = puVar16;
        puVar19 = DAT_10007b08;
        while( true ) {
          iVar14 = iVar14 + 1;
          uVar23 = FUN_10003b08(*(undefined4 *)puVar17,*(undefined4 *)((int)puVar17 + 4),uVar12,
                                uVar21);
          uVar22 = FUN_1000379c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),(int)uVar23,
                                (int)((ulonglong)uVar23 >> 0x20));
          if ((iVar7 < iVar14) || (iVar4 < iVar14)) break;
          uVar12 = *puVar19;
          uVar21 = puVar19[1];
          puVar17 = puVar17 + 1;
          puVar19 = puVar19 + 2;
        }
      }
      puVar16 = puVar16 + -1;
      local_168[iVar4 * 2] = (int)uVar22;
      local_168[iVar4 * 2 + 1] = (int)((ulonglong)uVar22 >> 0x20);
      bVar20 = puVar18 != (undefined8 *)iVar4;
      iVar4 = iVar4 + 1;
      uVar12 = DAT_10007af0;
      uVar21 = DAT_10007af4;
    } while (bVar20);
    if (2 < param_5) {
      if (param_5 == 3) {
        if (puVar18 != (undefined8 *)0x0) {
          uVar22 = CONCAT44(local_168[(int)puVar18 * 2 + 1],local_168[(int)puVar18 * 2]);
          piVar13 = local_168 + (int)puVar18 * 2;
          do {
            uVar21 = (undefined4)((ulonglong)uVar22 >> 0x20);
            uVar12 = (undefined4)uVar22;
            piVar1 = piVar13 + -2;
            iVar4 = *piVar1;
            iVar7 = piVar13[-1];
            uVar22 = FUN_1000379c(uVar12,uVar21,iVar4,iVar7);
            uVar23 = FUN_10003798(iVar4,iVar7,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
            uVar23 = FUN_1000379c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar12,uVar21);
            *(undefined8 *)piVar13 = uVar23;
            *(undefined8 *)piVar1 = uVar22;
            piVar13 = piVar1;
          } while (local_168 != piVar1);
          if (1 < (int)puVar18) {
            uVar22 = CONCAT44(local_168[(int)puVar18 * 2 + 1],local_168[(int)puVar18 * 2]);
            piVar13 = local_168 + ((int)puVar18 + 0x1fffffff) * 2 + 2;
            do {
              uVar21 = (undefined4)((ulonglong)uVar22 >> 0x20);
              uVar12 = (undefined4)uVar22;
              piVar1 = piVar13 + -2;
              iVar4 = *piVar1;
              iVar7 = piVar13[-1];
              uVar22 = FUN_1000379c(uVar12,uVar21,iVar4,iVar7);
              uVar23 = FUN_10003798(iVar4,iVar7,(int)uVar22,(int)((ulonglong)uVar22 >> 0x20));
              uVar23 = FUN_1000379c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),uVar12,uVar21);
              *(undefined8 *)piVar13 = uVar23;
              *(undefined8 *)piVar1 = uVar22;
              piVar13 = piVar1;
            } while (local_168 + 2 != piVar1);
            uVar22 = 0;
            piVar13 = local_168 + ((int)puVar18 + 0x1fffffff) * 2 + 4;
            do {
              piVar1 = piVar13 + -2;
              uVar22 = FUN_1000379c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),*piVar1,piVar13[-1]
                                   );
              piVar13 = piVar1;
            } while (local_168 + 4 != piVar1);
            goto LAB_10007a84;
          }
        }
        uVar22 = 0;
        goto LAB_10007a84;
      }
      goto LAB_1000799c;
    }
    if (param_5 < 1) {
      if (param_5 != 0) goto LAB_1000799c;
      uVar22 = 0;
      piVar13 = local_168 + (int)puVar18 * 2 + 2;
      do {
        piVar1 = piVar13 + -2;
        uVar22 = FUN_1000379c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),*piVar1,piVar13[-1]);
        piVar13 = piVar1;
      } while (local_168 != piVar1);
      goto LAB_1000798c;
    }
    uVar22 = 0;
    piVar13 = local_168 + ((int)puVar18 + 1) * 2;
    do {
      piVar1 = piVar13 + -2;
      uVar22 = FUN_1000379c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),*piVar1,piVar13[-1]);
      piVar13 = piVar1;
    } while (local_168 != piVar1);
  }
  iVar7 = (int)((ulonglong)uVar22 >> 0x20);
  iVar4 = (int)uVar22;
  if (iVar11 == 0) {
    *(undefined8 *)local_260[1] = uVar22;
    uVar22 = FUN_10003798(local_168[0],local_168[1],iVar4,iVar7);
    if ((int)puVar18 < 1) goto LAB_10007bdc;
LAB_10007bc0:
    piVar13 = local_168;
    iVar4 = 1;
    do {
      piVar13 = piVar13 + 2;
      iVar4 = iVar4 + 1;
      uVar22 = FUN_1000379c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),*piVar13,piVar13[1]);
    } while (iVar4 <= (int)puVar18);
    if (iVar11 == 0) goto LAB_10007bdc;
  }
  else {
    *local_260[1] = iVar4;
    local_260[1][1] = iVar7 + -0x80000000;
    uVar22 = FUN_10003798(local_168[0],local_168[1],iVar4,iVar7);
    if (0 < (int)puVar18) goto LAB_10007bc0;
  }
  uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20) + -0x80000000,(int)uVar22);
LAB_10007bdc:
  *(undefined8 *)(local_260[1] + 2) = uVar22;
  return uVar2 & 7;
}


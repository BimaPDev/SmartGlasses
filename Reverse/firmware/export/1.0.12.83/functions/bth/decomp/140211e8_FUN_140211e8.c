/* FUN_140211e8 @ 0x140211e8 */

int FUN_140211e8(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,undefined4 param_8,int param_9,int param_10,int param_11,int param_12,
                uint param_13)

{
  sbyte sVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *extraout_r2;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  uint extraout_r3;
  byte *pbVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  short *psVar30;
  uint uVar31;
  int *piVar32;
  undefined4 *puVar33;
  int *piVar34;
  uint *local_114;
  int local_110;
  uint local_10c;
  int local_108;
  int local_fc;
  short *local_f4;
  uint local_f0;
  byte *local_ec;
  uint local_e0;
  int local_d0;
  int local_cc;
  byte *local_c8;
  int local_6c;
  short *local_68;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar16 = param_10;
  local_2c = *DAT_14021478;
  local_30 = 0;
  local_38 = param_7 - param_9 >> 1;
  uVar19 = param_13 & 1;
  iVar20 = param_7 - param_11;
  FUN_14021120(&param_12,&local_30,param_7);
  if (param_1[4] != param_9) {
    FUN_14021184(param_1,&param_9,&local_38,param_7,param_8,param_6);
  }
  iVar12 = *param_1;
  piVar25 = (int *)(iVar12 + (param_1[6] + 0x3fffffff) * 4);
  if (param_6 < 1) {
    local_6c = 0;
  }
  else {
    local_6c = param_1[5];
    if (0 < local_6c) {
      iVar21 = 0;
      piVar22 = param_2;
      while( true ) {
        iVar13 = iVar21 * 4;
        iVar21 = iVar21 + 1;
        param_2 = piVar22 + 1;
        *piVar22 = *(int *)(iVar12 + iVar13);
        local_6c = param_1[5];
        if (local_6c <= iVar21) break;
        iVar12 = *param_1;
        piVar22 = param_2;
      }
    }
    param_1[5] = 0;
  }
  if (0 < param_5) {
    local_68 = (short *)(param_4 + -2);
    psVar30 = local_68 + param_5;
    iVar12 = param_1[4];
    iVar21 = param_3;
    do {
      if (param_9 != iVar12) {
        FUN_14021184(param_1,&param_9,&local_38,param_7,param_8,param_6);
      }
      local_34 = local_30;
      iVar12 = param_1[1];
      FUN_1401c4bc(iVar21,param_7,&local_34);
      if ((param_12 != 0) && (0 < param_7)) {
        iVar13 = 0;
        piVar22 = (int *)(iVar21 + -4);
        do {
          piVar22 = piVar22 + 1;
          iVar13 = iVar13 + 1;
          *piVar22 = (int)((ulonglong)((longlong)*piVar22 * (longlong)param_12) >> 0x20) << 1;
        } while (param_7 != iVar13);
      }
      local_68 = local_68 + 1;
      iVar13 = *local_68 + local_34;
      if (0x1e < iVar13) {
        iVar13 = 0x1f;
      }
      FUN_140249f4(iVar21,param_7,iVar13);
      if (local_6c < param_6) {
        iVar13 = param_1[3];
        local_6c = local_6c + iVar13 + param_9 / 2;
      }
      else {
        iVar13 = param_1[3];
        iVar7 = param_1[5];
        param_1[5] = iVar13 + param_9 / 2 + iVar7;
        param_2 = (int *)(*param_1 + iVar7 * 4);
      }
      iVar7 = param_1[9];
      if ((iVar7 == 0) || (iVar13 != param_9 / 2)) {
        iVar7 = param_1[8];
        if (iVar7 == 0) {
          if (iVar13 < 1) {
LAB_1402185c:
            iVar13 = param_9 / 2;
            goto LAB_1402137a;
          }
          iVar13 = 0;
          piVar22 = piVar25;
          piVar34 = param_2;
          do {
            piVar25 = piVar22 + -1;
            iVar13 = iVar13 + 1;
            param_2 = piVar34 + 1;
            *piVar34 = -*piVar22;
            piVar22 = piVar25;
            piVar34 = param_2;
          } while (iVar13 < param_1[3]);
        }
        else {
          if (iVar13 < 1) goto LAB_1402185c;
          iVar13 = 0;
          piVar22 = piVar25;
          piVar34 = param_2;
          do {
            piVar25 = piVar22 + -1;
            iVar13 = iVar13 + 1;
            param_2 = piVar34 + 1;
            *piVar34 = *piVar22;
            piVar22 = piVar25;
            piVar34 = param_2;
          } while (iVar13 < param_1[3]);
        }
        iVar7 = param_1[8];
        iVar13 = param_9 / 2;
      }
      else {
        if (0 < iVar13) {
          iVar13 = 0;
          piVar22 = piVar25;
          piVar34 = param_2;
          while( true ) {
            iVar14 = iVar13 * 4;
            piVar25 = piVar22 + -1;
            iVar13 = iVar13 + 1;
            param_2 = piVar34 + 1;
            *piVar34 = *(int *)(iVar7 + iVar14) - *piVar22;
            if (param_1[3] <= iVar13) break;
            iVar7 = param_1[9];
            piVar22 = piVar25;
            piVar34 = param_2;
          }
          iVar13 = param_9 / 2;
        }
        iVar7 = param_1[8];
        param_1[9] = 0;
      }
LAB_1402137a:
      if (local_6c < param_6) {
        local_6c = local_6c + iVar13 + local_38;
        piVar22 = param_2 + param_9 + 0x3fffffff;
      }
      else {
        piVar22 = (int *)(*param_1 + (param_1[5] + 0x3fffffff + iVar13) * 4);
        param_1[5] = param_1[5] + iVar13 + local_38;
      }
      iVar14 = param_1[7];
      piVar34 = (int *)(iVar21 + (param_7 - iVar13) * 4);
      if (iVar7 == 0) {
        if (iVar14 == 0) {
          if (param_1[10] == 0) {
            if (param_9 < 2) goto LAB_14021866;
            puVar33 = (undefined4 *)(iVar12 + -4);
            iVar12 = 0;
            piVar32 = piVar22;
            do {
              puVar33 = puVar33 + 1;
              sVar5 = (short)((uint)*puVar33 >> 0x10);
              sVar4 = (short)*puVar33;
              iVar13 = (int)((uint6)((int6)*piVar34 * (int6)sVar4 +
                                    (int6)-(int)((ulonglong)((longlong)-*piVar25 * (longlong)sVar5)
                                                >> 0x10) * 0x10000) >> 0x10);
              iVar7 = (int)((uint6)((int6)-*piVar25 * (int6)sVar4 +
                                   (int6)(int)((ulonglong)((longlong)*piVar34 * (longlong)sVar5) >>
                                              0x10) * 0x10000) >> 0x10);
              if (iVar7 < 0x40000000) {
                iVar14 = iRam1402187c;
                if (-0x40000000 < iVar7) {
                  iVar14 = iVar7 << 1;
                }
                *param_2 = iVar14;
                if (-0x40000000 < iVar13) goto LAB_140217f2;
LAB_1402184e:
                iVar7 = 0x7fffffff;
              }
              else {
                *param_2 = 0x7fffffff;
                if (iVar13 < -0x3fffffff) goto LAB_1402184e;
LAB_140217f2:
                iVar7 = iRam1402187c;
                if (iVar13 < 0x40000000) {
                  iVar7 = iVar13 * -2;
                }
              }
              param_2 = param_2 + 1;
              piVar22 = piVar32 + -1;
              *piVar32 = iVar7;
              iVar12 = iVar12 + 1;
              piVar25 = piVar25 + -1;
              piVar34 = piVar34 + 1;
              piVar32 = piVar22;
            } while (iVar12 < param_9 / 2);
            goto LAB_140214f0;
          }
          if (1 < param_9) {
            piVar32 = (int *)(param_1[10] + iVar13 * 4);
            piVar34 = piVar34 + -1;
            iVar7 = 0;
            piVar23 = piVar22;
            do {
              sVar4 = *(short *)(iVar12 + 2 + iVar7 * 4);
              piVar34 = piVar34 + 1;
              sVar5 = *(short *)(iVar12 + iVar7 * 4);
              iVar13 = (int)((ulonglong)((longlong)*piVar34 * (longlong)sVar4) >> 0x10) -
                       (int)((ulonglong)((longlong)*piVar25 * (longlong)sVar5) >> 0x10);
              piVar32 = piVar32 + -1;
              iVar14 = (int)((ulonglong)((longlong)*piVar32 * (longlong)sVar4) >> 0x10) -
                       (int)((ulonglong)((longlong)*piVar34 * (longlong)sVar5) >> 0x10);
              if (iVar13 < 0x40000000) {
                iVar11 = DAT_1402147c;
                if (-0x40000000 < iVar13) {
                  iVar11 = iVar13 * 2;
                }
                *param_2 = iVar11;
                if (iVar14 < 0x40000000) goto LAB_140213ee;
LAB_1402144e:
                iVar13 = 0x7fffffff;
              }
              else {
                *param_2 = 0x7fffffff;
                if (0x3fffffff < iVar14) goto LAB_1402144e;
LAB_140213ee:
                iVar13 = DAT_1402147c;
                if (-0x40000000 < iVar14) {
                  iVar13 = iVar14 * 2;
                }
              }
              param_2 = param_2 + 1;
              piVar22 = piVar23 + -1;
              *piVar23 = iVar13;
              iVar7 = iVar7 + 1;
              iVar13 = param_9 / 2;
              piVar23 = piVar22;
              piVar25 = piVar25 + -1;
            } while (iVar7 < iVar13);
          }
          param_1[10] = 0;
        }
        else {
          if (param_9 < 2) goto LAB_14021866;
          puVar33 = (undefined4 *)(iVar12 + -4);
          iVar12 = 0;
          piVar32 = piVar22;
          do {
            puVar33 = puVar33 + 1;
            sVar5 = (short)((uint)*puVar33 >> 0x10);
            sVar4 = (short)*puVar33;
            iVar13 = (int)((uint6)((int6)*piVar34 * (int6)sVar4 +
                                  (int6)-(int)((ulonglong)((longlong)-*piVar25 * (longlong)sVar5) >>
                                              0x10) * 0x10000) >> 0x10);
            iVar7 = (int)((uint6)((int6)-*piVar25 * (int6)sVar4 +
                                 (int6)(int)((ulonglong)((longlong)*piVar34 * (longlong)sVar5) >>
                                            0x10) * 0x10000) >> 0x10);
            if (iVar7 < 0x40000000) {
              iVar14 = DAT_140217d8;
              if (-0x40000000 < iVar7) {
                iVar14 = iVar7 << 1;
              }
              *param_2 = iVar14;
              if (iVar13 < 0x40000000) goto LAB_140216ea;
LAB_14021744:
              iVar7 = 0x7fffffff;
            }
            else {
              *param_2 = 0x7fffffff;
              if (0x3fffffff < iVar13) goto LAB_14021744;
LAB_140216ea:
              iVar7 = DAT_140217d8;
              if (-0x40000000 < iVar13) {
                iVar7 = iVar13 << 1;
              }
            }
            param_2 = param_2 + 1;
            piVar22 = piVar32 + -1;
            *piVar32 = iVar7;
            iVar12 = iVar12 + 1;
            piVar25 = piVar25 + -1;
            piVar34 = piVar34 + 1;
            piVar32 = piVar22;
          } while (iVar12 < param_9 / 2);
LAB_140214f0:
          iVar13 = param_9 / 2;
        }
        iVar12 = param_1[9];
        if (iVar12 == 0) {
          iVar14 = param_1[7];
        }
        else {
          if (1 < param_9) {
            iVar7 = 0;
            piVar25 = param_2 + (-1 - iVar13);
            while( true ) {
              iVar13 = iVar7 * 4;
              piVar25 = piVar25 + 1;
              iVar7 = iVar7 + 1;
              *piVar25 = *piVar25 + *(int *)(iVar12 + iVar13);
              iVar13 = param_9 / 2;
              if (iVar13 <= iVar7) break;
              iVar12 = param_1[9];
            }
          }
          iVar14 = param_1[7];
LAB_14021602:
          param_1[9] = 0;
        }
      }
      else {
        if (iVar14 != 0) {
          if (param_9 < 2) goto LAB_14021866;
          iVar13 = 0;
          puVar33 = (undefined4 *)(iVar12 + -4);
          piVar32 = piVar22;
          do {
            puVar33 = puVar33 + 1;
            sVar5 = (short)((uint)*puVar33 >> 0x10);
            sVar4 = (short)*puVar33;
            iVar7 = (int)((uint6)((int6)*piVar34 * (int6)sVar4 +
                                 (int6)-(int)((ulonglong)((longlong)*piVar25 * (longlong)sVar5) >>
                                             0x10) * 0x10000) >> 0x10);
            iVar12 = (int)((uint6)((int6)*piVar25 * (int6)sVar4 +
                                  (int6)(int)((ulonglong)((longlong)*piVar34 * (longlong)sVar5) >>
                                             0x10) * 0x10000) >> 0x10);
            if (iVar12 < 0x40000000) {
              iVar14 = DAT_140217d8;
              if (-0x40000000 < iVar12) {
                iVar14 = iVar12 << 1;
              }
              *param_2 = iVar14;
              if (iVar7 < 0x40000000) goto LAB_1402165c;
LAB_140216b4:
              iVar12 = 0x7fffffff;
            }
            else {
              *param_2 = 0x7fffffff;
              if (0x3fffffff < iVar7) goto LAB_140216b4;
LAB_1402165c:
              iVar12 = DAT_140217d8;
              if (-0x40000000 < iVar7) {
                iVar12 = iVar7 << 1;
              }
            }
            param_2 = param_2 + 1;
            piVar22 = piVar32 + -1;
            *piVar32 = iVar12;
            iVar13 = iVar13 + 1;
            piVar25 = piVar25 + -1;
            piVar34 = piVar34 + 1;
            piVar32 = piVar22;
          } while (iVar13 < param_9 / 2);
          goto LAB_140214f0;
        }
        if (1 < param_9) {
          puVar33 = (undefined4 *)(iVar12 + -4);
          iVar12 = 0;
          piVar32 = piVar22;
          do {
            puVar33 = puVar33 + 1;
            sVar5 = (short)((uint)*puVar33 >> 0x10);
            sVar4 = (short)*puVar33;
            iVar7 = (int)((uint6)((int6)*piVar34 * (int6)sVar4 +
                                 (int6)-(int)((ulonglong)((longlong)*piVar25 * (longlong)sVar5) >>
                                             0x10) * 0x10000) >> 0x10);
            iVar13 = (int)((uint6)((int6)*piVar25 * (int6)sVar4 +
                                  (int6)(int)((ulonglong)((longlong)*piVar34 * (longlong)sVar5) >>
                                             0x10) * 0x10000) >> 0x10);
            if (iVar13 < 0x40000000) {
              iVar14 = DAT_140217d8;
              if (-0x40000000 < iVar13) {
                iVar14 = iVar13 << 1;
              }
              *param_2 = iVar14;
              if (-0x40000000 < iVar7) goto LAB_14021492;
LAB_140214ea:
              iVar13 = 0x7fffffff;
            }
            else {
              *param_2 = 0x7fffffff;
              if (iVar7 < -0x3fffffff) goto LAB_140214ea;
LAB_14021492:
              iVar13 = DAT_140217d8;
              if (iVar7 < 0x40000000) {
                iVar13 = iVar7 * -2;
              }
            }
            param_2 = param_2 + 1;
            piVar22 = piVar32 + -1;
            *piVar32 = iVar13;
            iVar12 = iVar12 + 1;
            piVar25 = piVar25 + -1;
            piVar34 = piVar34 + 1;
            piVar32 = piVar22;
          } while (iVar12 < param_9 / 2);
          goto LAB_140214f0;
        }
LAB_14021866:
        if (param_1[9] != 0) goto LAB_14021602;
      }
      param_2 = param_2 + local_38 + iVar13;
      piVar25 = (int *)(iVar21 + ((param_7 + 0x3fffffff) - iVar13) * 4);
      if (iVar14 == 0) {
        iVar12 = 0;
        piVar22 = piVar22 + iVar13 + 1;
        if (0 < local_38) {
          do {
            iVar12 = iVar12 + 1;
            *piVar22 = -*piVar25;
            piVar25 = piVar25 + -1;
            piVar22 = piVar22 + 1;
          } while (iVar12 < local_38);
LAB_14021530:
          iVar14 = param_1[7];
        }
      }
      else if (0 < local_38) {
        iVar12 = 0;
        piVar22 = piVar22 + iVar13 + 1;
        do {
          iVar12 = iVar12 + 1;
          *piVar22 = *piVar25;
          piVar25 = piVar25 + -1;
          piVar22 = piVar22 + 1;
        } while (iVar12 < local_38);
        goto LAB_14021530;
      }
      param_1[8] = iVar14;
      param_1[3] = iVar20 >> 1;
      param_1[4] = param_11;
      param_1[2] = param_7;
      param_1[1] = iVar16;
      param_1[7] = uVar19;
      piVar25 = (int *)((param_7 / 2 + 0x3fffffff) * 4 + iVar21);
      iVar21 = iVar21 + param_7 * 4;
      iVar12 = param_11;
    } while (psVar30 != local_68);
  }
  local_3c = param_7 / 2;
  func_0x13f4a83c(*param_1 + (param_1[6] - local_3c) * 4,param_3 + param_7 * (param_5 + -1) * 4,
                  local_3c << 2);
  if (*DAT_140217dc == local_2c) {
    return local_6c;
  }
  puVar8 = (uint *)FUN_14024a44();
  *(short *)puVar8 = (short)puVar8;
  psVar30 = (short *)*extraout_r2;
  if (*(char *)((int)puVar8 + 0xb3) == '\x02') {
    psVar30 = (short *)extraout_r2[1];
  }
  uVar19 = puVar8[0x25];
  func_0x13f4aa28(uVar19,0,0x1000);
  if ((extraout_r3 & 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x14021c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar16 = (*(code *)0x1402187b)(&DAT_00004004);
    return iVar16;
  }
  uVar15 = puVar8[0x30];
  uVar6 = puVar8[0x2d];
  if ((byte)puVar8[0x2c] != 0) {
    iVar16 = puVar8[0x2e] * 4;
    local_c8 = (byte *)((int)puVar8 + 0xa7);
    pbVar24 = local_c8 + (byte)puVar8[0x2c];
    local_d0 = 0;
    local_cc = 0;
    do {
      local_c8 = local_c8 + 1;
      uVar17 = (uint)*local_c8;
      if ((byte)uVar6 != 0) {
        iVar20 = iVar16 * local_d0 + uVar19;
        local_ec = (byte *)(uVar15 + 0x1ff + local_cc);
        local_110 = (int)*psVar30;
        local_f4 = psVar30;
        do {
          while( true ) {
            local_ec = local_ec + 1;
            local_10c = (uint)*local_ec;
            local_f4 = local_f4 + 1;
            iVar12 = (int)*local_f4;
            if (local_10c - 0x10 < 0x10) break;
            if ((local_10c != 0) && (2 < local_10c - 0xd)) goto LAB_1402195c;
LAB_14021aa2:
            local_110 = iVar12;
            if (psVar30 + (byte)uVar6 == local_f4) goto LAB_14021aac;
          }
          *local_ec = 0xb;
          local_10c = 0xb;
LAB_1402195c:
          iVar21 = DAT_14021bd0 + local_10c * 8;
          sVar1 = *(sbyte *)(iVar21 + 5);
          bVar2 = *(byte *)(iVar21 + 6);
          iVar13 = *(int *)(DAT_14021bd0 + local_10c * 8);
          uVar28 = (uint)*(byte *)(iVar21 + 4);
          uVar27 = (1 << sVar1) - 1;
          if (bVar2 == 0) {
            if (uVar17 != 0) {
              local_e0 = 0;
              local_f0 = iVar20;
              do {
                if (local_110 < iVar12) {
                  local_108 = local_110;
                  local_114 = (uint *)(local_f0 + (local_110 + 0x3fffffff) * 4);
                  do {
                    uVar26 = 0;
                    uVar9 = *puVar8;
                    uVar29 = puVar8[1];
                    while( true ) {
                      uVar31 = uVar9 << (2 - uVar29 & 0xff);
                      if ((int)(2 - uVar29) < 1) {
                        uVar31 = 0;
                        uVar18 = uVar29;
                      }
                      else {
                        uVar9 = FUN_1401c128(puVar8 + 2);
                        *puVar8 = uVar9;
                        uVar18 = puVar8[1] + 0x20;
                      }
                      uVar29 = uVar18 - 2;
                      puVar8[1] = uVar29;
                      uVar3 = *(ushort *)
                               (iVar13 + uVar26 * 8 + ((uVar9 >> (uVar29 & 0xff) | uVar31) & 3) * 2)
                      ;
                      if ((int)((uint)uVar3 << 0x1f) < 0) break;
                      uVar26 = (uint)(uVar3 >> 2);
                    }
                    if ((int)((uint)uVar3 << 0x1e) < 0) {
                      puVar8[1] = uVar18 - 1;
                    }
                    uVar9 = (uint)(uVar3 >> 2);
                    if (uVar28 != 0) {
                      uVar29 = 0;
                      puVar10 = local_114;
                      do {
                        while( true ) {
                          uVar26 = uVar27 & uVar9;
                          uVar9 = (int)uVar9 >> sVar1;
                          if (uVar26 != 0) break;
LAB_14021a32:
                          uVar29 = uVar29 + 1;
                          puVar10 = puVar10 + 1;
                          *puVar10 = uVar26;
                          if (uVar28 == uVar29) goto LAB_14021a74;
                        }
                        if (puVar8[1] == 0) {
                          uVar31 = FUN_1401c128(puVar8 + 2);
                          *puVar8 = uVar31;
                          puVar8[1] = 0x1f;
                          uVar31 = uVar31 >> 0x1f;
                        }
                        else {
                          uVar31 = puVar8[1] - 1;
                          puVar8[1] = uVar31;
                          uVar31 = *puVar8 >> (uVar31 & 0xff) & 1;
                        }
                        if (uVar31 == 0) goto LAB_14021a32;
                        uVar29 = uVar29 + 1;
                        puVar10 = puVar10 + 1;
                        *puVar10 = -uVar26;
                      } while (uVar28 != uVar29);
                    }
LAB_14021a74:
                    if (local_10c == 0xb) {
                      uVar9 = local_114[1];
                      if ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f) == 0x10) {
                        uVar9 = FUN_1401d040(puVar8,uVar9);
                      }
                      local_114[1] = uVar9;
                      uVar9 = local_114[2];
                      if ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f) == 0x10) {
                        uVar9 = FUN_1401d040(puVar8,uVar9);
                      }
                      local_114[2] = uVar9;
                    }
                    local_114 = local_114 + uVar28;
                    local_108 = local_108 + uVar28;
                  } while (local_108 < iVar12);
                }
                local_f0 = local_f0 + iVar16;
                local_e0 = local_e0 + 1;
              } while (uVar17 != local_e0);
            }
            goto LAB_14021aa2;
          }
          if (uVar17 == 0) goto LAB_14021aa2;
          local_f0 = 0;
          local_fc = iVar20;
          do {
            if (local_110 < iVar12) {
              local_108 = local_110;
              local_114 = (uint *)(local_fc + (local_110 + 0x3fffffff) * 4);
              do {
                uVar9 = *puVar8;
                uVar29 = puVar8[1];
                uVar26 = 0;
                while( true ) {
                  uVar31 = uVar9 << (2 - uVar29 & 0xff);
                  if ((int)(2 - uVar29) < 1) {
                    uVar31 = 0;
                    uVar18 = uVar29;
                  }
                  else {
                    uVar9 = FUN_1401c128(puVar8 + 2);
                    *puVar8 = uVar9;
                    uVar18 = puVar8[1] + 0x20;
                  }
                  uVar29 = uVar18 - 2;
                  puVar8[1] = uVar29;
                  uVar3 = *(ushort *)
                           (iVar13 + uVar26 * 8 + ((uVar9 >> (uVar29 & 0xff) | uVar31) & 3) * 2);
                  if ((int)((uint)uVar3 << 0x1f) < 0) break;
                  uVar26 = (uint)(uVar3 >> 2);
                }
                if ((int)((uint)uVar3 << 0x1e) < 0) {
                  puVar8[1] = uVar18 - 1;
                }
                uVar9 = (uint)(uVar3 >> 2);
                if (uVar28 != 0) {
                  uVar29 = 0;
                  puVar10 = local_114;
                  do {
                    uVar29 = uVar29 + 1;
                    puVar10 = puVar10 + 1;
                    *puVar10 = (uVar27 & uVar9) - (uint)bVar2;
                    uVar9 = (int)uVar9 >> sVar1;
                  } while (uVar28 != uVar29);
                }
                if (local_10c == 0xb) {
                  uVar9 = local_114[1];
                  if ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f) == 0x10) {
                    uVar9 = FUN_1401d040(puVar8);
                  }
                  local_114[1] = uVar9;
                  uVar9 = local_114[2];
                  if ((uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f) == 0x10) {
                    uVar9 = FUN_1401d040(puVar8);
                  }
                  local_114[2] = uVar9;
                }
                local_114 = local_114 + uVar28;
                local_108 = local_108 + uVar28;
              } while (local_108 < iVar12);
            }
            local_fc = local_fc + iVar16;
            local_f0 = local_f0 + 1;
          } while (uVar17 != local_f0);
          local_110 = iVar12;
        } while (psVar30 + (byte)uVar6 != local_f4);
      }
LAB_14021aac:
      local_d0 = local_d0 + uVar17;
      local_cc = local_cc + 0x10;
    } while (pbVar24 != local_c8);
  }
  if ((*(char *)((int)puVar8 + 0xb3) != '\x02') && ((extraout_r3 & 0x18) == 0)) {
    FUN_140234ec(puVar8[0x30] + 0x566,*extraout_r2,uVar19);
                    /* WARNING: Could not recover jumptable at 0x14021c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar16 = (*(code *)0x1402187b)(0);
    return iVar16;
  }
                    /* WARNING: Could not recover jumptable at 0x14021ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar16 = (*(code *)0x1402187b)(0);
  return iVar16;
}


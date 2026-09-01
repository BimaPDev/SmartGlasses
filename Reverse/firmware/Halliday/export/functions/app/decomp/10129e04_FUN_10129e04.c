/* FUN_10129e04 @ 0x10129e04 */

void FUN_10129e04(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 short *param_7,byte param_8,int param_9,int param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  short sVar31;
  short sVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  bool bVar37;
  int local_bc;
  int local_b8;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_88;
  short local_82;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 auStack_58 [16];
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar33 = (int)*param_7;
  local_40 = 0x10000 / (ushort)param_7[1];
  local_30 = *(int *)(param_7 + 2);
  local_2c = *(int *)(param_7 + 4);
  local_3c = -iVar33;
  iVar28 = local_3c / 10;
  sVar32 = (short)iVar28;
  iVar17 = iVar28 * -10 - iVar33;
  iVar7 = FUN_1013d980((int)sVar32);
  iVar8 = FUN_1013d980((int)(short)(sVar32 + 1));
  iVar9 = FUN_1013d980((int)(short)(sVar32 + 0x5a));
  iVar10 = FUN_1013d980((int)(short)(sVar32 + 0x5b));
  iVar28 = iVar33 + 10 + iVar28 * 10;
  local_38 = local_30 << 8;
  local_48 = (iVar28 * iVar7 + iVar17 * iVar8) / 10 >> 5;
  local_34 = local_2c << 8;
  local_44 = (iVar28 * iVar9 + iVar17 * iVar10) / 10 >> 5;
  iVar9 = param_2[2] - *param_2;
  iVar10 = iVar9 + 1;
  iVar17 = param_2[3];
  iVar7 = param_2[1];
  iVar8 = param_5 * param_6 * 2;
  iVar28 = param_3 + param_5 * param_6 * 2;
  iVar33 = 0;
  do {
    if ((iVar17 + 1) - iVar7 <= iVar33) {
      return;
    }
    FUN_10129d84(auStack_58,*param_2,param_2[1] + iVar33,&local_68,&local_64);
    FUN_10129d84(auStack_58,param_2[2],param_2[1] + iVar33,&local_60,&local_5c);
    if (iVar10 < 2) {
      local_bc = 0;
      local_ac = 0;
    }
    else {
      local_ac = ((local_60 - local_68) * 0x100) / iVar9;
      local_bc = ((local_5c - local_64) * 0x100) / iVar9;
    }
    iVar22 = local_68 + 0x80;
    iVar23 = local_64 + 0x80;
    uVar24 = *(byte *)(param_7 + 0xc) & 1;
    if ((*(byte *)(param_7 + 0xc) & 1) == 0) {
      if (param_8 == 6) {
LAB_1012a034:
        piVar11 = (int *)FUN_1008bbb4();
        sVar32 = *(short *)(*piVar11 + 0x48);
        FUN_1011ea48(param_10,0xff,iVar10);
        iVar29 = 0;
        iVar30 = 0;
        for (iVar18 = 0; iVar18 < iVar10; iVar18 = iVar18 + 1) {
          iVar12 = iVar22 + (iVar29 >> 8) >> 8;
          if ((((iVar12 < 0) || (param_4 <= iVar12)) ||
              (iVar19 = iVar23 + (iVar30 >> 8) >> 8, iVar19 < 0)) || (param_5 <= iVar19)) {
            *(undefined1 *)(param_10 + iVar18) = 0;
          }
          else {
            *(undefined2 *)(param_9 + iVar18 * 2) =
                 *(undefined2 *)(param_3 + (iVar19 * param_6 + iVar12) * 2);
          }
          if ((param_8 == 6) && (*(short *)(param_9 + iVar18 * 2) == sVar32)) {
            *(undefined1 *)(param_10 + iVar18) = 0;
          }
          iVar30 = iVar30 + local_bc;
          iVar29 = iVar29 + local_ac;
        }
      }
      else {
        uVar4 = (undefined1)uVar24;
        if (param_8 < 7) {
          if (param_8 == 4) goto LAB_1012a034;
          uVar25 = uVar24;
          uVar13 = uVar24;
          if (param_8 == 5) {
            for (; (int)uVar25 < iVar10; uVar25 = uVar25 + 1) {
              iVar29 = iVar22 + ((int)uVar13 >> 8) >> 8;
              if (((iVar29 < 0) || (param_4 <= iVar29)) ||
                 ((iVar18 = iVar23 + ((int)uVar24 >> 8) >> 8, iVar18 < 0 || (param_5 <= iVar18)))) {
                *(undefined1 *)(param_10 + uVar25) = uVar4;
              }
              else {
                iVar29 = (iVar18 * param_6 + iVar29) * 3;
                iVar18 = param_3 + iVar29;
                *(ushort *)(param_9 + uVar25 * 2) =
                     (ushort)*(byte *)(param_3 + iVar29) + (ushort)*(byte *)(iVar18 + 1) * 0x100;
                *(undefined1 *)(param_10 + uVar25) = *(undefined1 *)(iVar18 + 2);
              }
              uVar24 = uVar24 + local_bc;
              uVar13 = uVar13 + local_ac;
            }
          }
        }
        else {
          uVar25 = uVar24;
          uVar13 = uVar24;
          if (param_8 == 0x14) {
            for (; (int)uVar24 < iVar10; uVar24 = uVar24 + 1) {
              iVar29 = iVar22 + ((int)uVar25 >> 8) >> 8;
              if (((iVar29 < 0) || (param_4 <= iVar29)) ||
                 ((iVar18 = iVar23 + ((int)uVar13 >> 8) >> 8, iVar18 < 0 || (param_5 <= iVar18)))) {
                *(undefined1 *)(param_10 + uVar24) = uVar4;
              }
              else {
                iVar29 = iVar18 * param_6 + iVar29;
                *(undefined2 *)(param_9 + uVar24 * 2) = *(undefined2 *)(param_3 + iVar29 * 2);
                *(undefined1 *)(param_10 + uVar24) = *(undefined1 *)(iVar29 + param_3 + iVar8);
              }
              uVar25 = uVar25 + local_ac;
              uVar13 = uVar13 + local_bc;
            }
          }
        }
      }
    }
    else {
      local_82 = 0;
      if (param_8 == 6) {
        piVar11 = (int *)FUN_1008bbb4();
        local_82 = *(short *)(*piVar11 + 0x48);
LAB_1012a0fc:
        local_b8 = 2;
LAB_1012a0ee:
        bVar21 = true;
      }
      else {
        if (6 < param_8) {
          if (param_8 != 0x14) goto LAB_10129f76;
          goto LAB_1012a0fc;
        }
        if (param_8 != 4) {
          if (param_8 != 5) goto LAB_10129f76;
          local_b8 = 3;
          goto LAB_1012a0ee;
        }
        local_b8 = 2;
        bVar21 = false;
      }
      local_a4 = 0;
      local_88 = 0;
      for (iVar29 = 0; iVar29 < iVar10; iVar29 = iVar29 + 1) {
        uVar24 = iVar22 + (local_a4 >> 8);
        iVar18 = (int)uVar24 >> 8;
        if ((iVar18 < 0) || (param_4 <= iVar18)) {
LAB_1012a154:
          *(undefined1 *)(param_10 + iVar29) = 0;
        }
        else {
          uVar25 = iVar23 + (local_88 >> 8);
          iVar30 = (int)uVar25 >> 8;
          if ((iVar30 < 0) || (param_5 <= iVar30)) goto LAB_1012a154;
          bVar37 = -1 < (int)(uVar24 * 0x1000000);
          if (bVar37) {
            iVar12 = 0x7f - (uVar24 & 0xff);
          }
          else {
            iVar12 = (uVar24 & 0xff) - 0x80;
          }
          if (bVar37) {
            iVar19 = -1;
          }
          else {
            iVar19 = 1;
          }
          uVar24 = iVar12 * 2;
          iVar16 = uVar25 * 0x1000000;
          bVar37 = -1 < iVar16;
          if (bVar37) {
            iVar20 = 0x7f - (uVar25 & 0xff);
          }
          else {
            iVar20 = (uVar25 & 0xff) - 0x80;
          }
          local_a8 = iVar20 * 2;
          if (bVar37) {
            iVar16 = -1;
          }
          iVar26 = iVar18 + iVar30 * param_6;
          if (!bVar37) {
            iVar16 = 1;
          }
          iVar35 = local_b8 * iVar26;
          iVar27 = param_3 + iVar35;
          if ((((iVar18 + iVar19 == -1) || (param_4 + -1 < iVar18 + iVar19)) ||
              (iVar36 = iVar30 + iVar16, iVar36 == -1)) || (param_5 + -1 < iVar36)) {
            sVar32 = CONCAT11(*(undefined1 *)(iVar27 + 1),*(undefined1 *)(param_3 + iVar35));
            *(short *)(param_9 + iVar29 * 2) = sVar32;
            if (param_8 == 6) {
              if (local_82 == sVar32) {
                uVar25 = 0;
              }
              else {
                uVar25 = 0xff;
              }
            }
            else if (param_8 == 0x14) {
              uVar25 = (uint)*(byte *)(iVar30 * param_6 + param_3 + iVar18 + iVar8);
            }
            else if (param_8 == 5) {
              uVar25 = (uint)*(byte *)(iVar27 + 2);
            }
            else {
              uVar25 = 0xff;
            }
            if (((((iVar18 != 0) || (iVar19 != -1)) && ((iVar18 != param_4 + -1 || (iVar19 != 1))))
                && ((uVar24 = local_a8, iVar30 != 0 || (iVar16 != -1)))) &&
               ((iVar30 != param_5 + -1 || (iVar16 != 1)))) goto LAB_1012a154;
            *(char *)(param_10 + iVar29) = (char)(uVar25 * (0xff - uVar24) >> 8);
          }
          else {
            iVar30 = iVar19 * local_b8;
            iVar16 = iVar16 * param_6 * local_b8;
            if (bVar21) {
              if (param_8 == 5) {
                bVar3 = *(byte *)(iVar27 + 2);
                bVar1 = *(byte *)(iVar27 + iVar16 + 2);
                bVar2 = *(byte *)(iVar27 + iVar30 + 2);
LAB_1012a206:
                uVar34 = (uint)bVar3;
                uVar25 = (uint)bVar1;
                uVar13 = (uint)bVar2;
                if (uVar34 != uVar25) {
                  uVar25 = (uVar34 * (iVar20 * -2 + 0x100) + local_a8 * uVar25 & 0xffff) >> 8;
                }
                if (uVar34 != uVar13) {
                  uVar13 = (uVar34 * (iVar12 * -2 + 0x100) + uVar24 * uVar13 & 0xffff) >> 8;
                }
              }
              else {
                if (param_8 == 0x14) {
                  bVar3 = *(byte *)(iVar28 + iVar26);
                  bVar2 = *(byte *)(iVar19 + iVar28 + iVar26);
                  bVar1 = *(byte *)(iVar36 * param_6 + iVar28 + iVar18);
                  goto LAB_1012a206;
                }
                if ((param_8 == 6) &&
                   (((*(short *)(param_3 + iVar35) == local_82 ||
                     (*(short *)(iVar27 + iVar16) == local_82)) ||
                    (*(short *)(iVar27 + iVar30) == local_82)))) goto LAB_1012a154;
                uVar13 = 0xff;
                uVar25 = uVar13;
              }
              iVar18 = (int)(uVar13 + uVar25) >> 1;
              *(char *)(param_10 + iVar29) = (char)iVar18;
              if (iVar18 == 0) goto LAB_1012a270;
              sVar31 = CONCAT11(*(undefined1 *)(iVar27 + 1),*(undefined1 *)(param_3 + iVar35));
              sVar5 = CONCAT11(*(undefined1 *)(iVar27 + iVar16 + 1),*(undefined1 *)(iVar27 + iVar16)
                              );
              sVar32 = CONCAT11(*(undefined1 *)(iVar27 + iVar30 + 1),
                                *(undefined1 *)(iVar27 + iVar30));
            }
            else {
              sVar32 = *(short *)(iVar27 + iVar30);
              sVar31 = *(short *)(param_3 + iVar35);
              sVar5 = *(short *)(iVar27 + iVar16);
              *(undefined1 *)(param_10 + iVar29) = 0xff;
            }
            if ((sVar5 == sVar31) && (sVar5 == sVar32)) {
              *(short *)(param_9 + iVar29 * 2) = sVar5;
            }
            else {
              uVar14 = FUN_10129d1e(sVar5,sVar31,local_a8 & 0xfe);
              uVar15 = FUN_10129d1e(sVar32,sVar31,uVar24 & 0xfe);
              uVar6 = FUN_10129d1e(uVar15,uVar14,0x7f);
              *(undefined2 *)(param_9 + iVar29 * 2) = uVar6;
            }
          }
        }
LAB_1012a270:
        local_88 = local_88 + local_bc;
        local_a4 = local_a4 + local_ac;
      }
    }
LAB_10129f76:
    param_9 = param_9 + iVar10 * 2;
    param_10 = param_10 + iVar10;
    iVar33 = iVar33 + 1;
  } while( true );
}


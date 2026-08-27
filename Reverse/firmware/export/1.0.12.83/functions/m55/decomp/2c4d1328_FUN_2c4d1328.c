/* FUN_2c4d1328 @ 0x2c4d1328 */

undefined4 FUN_2c4d1328(byte *param_1,int param_2,uint *param_3,int param_4)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  ushort *puVar35;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined2 local_14c;
  int local_148 [4];
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined1 auStack_108 [212];
  int local_34;
  
  uVar5 = local_154;
  local_34 = *DAT_2c4d167c;
  iVar14 = param_2 + 0x20;
  FUN_2c674668(auStack_108,iVar14,0xd1);
  cVar3 = *(char *)(param_2 + 0xed);
  if (param_3[9] == 0) {
    FUN_2c4d766c(param_3 + 2,param_3[1]);
  }
  else if (param_3[1] != 0) {
    FUN_2c4d7598(param_3 + 2,*param_3);
  }
  puVar20 = param_3 + 2;
  uVar18 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  iVar4 = FUN_2c4d76a8(puVar20);
  iVar4 = iVar4 + 0xc;
  if (0x37 < iVar4) {
    uVar15 = param_3[1];
    uVar26 = 1 - uVar15;
    if ((int)uVar26 < 1) {
      uVar26 = *param_3;
    }
    else {
      if (uVar26 != 0x20) {
        uVar18 = *param_3 << (uVar26 & 0xff);
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    iVar33 = DAT_2c4d1680;
    uVar15 = uVar15 - 1;
    param_3[1] = uVar15;
    uVar19 = *(uint *)(iVar33 + 4);
    uVar27 = (uVar26 >> (uVar15 & 0xff) | uVar18) & uVar19;
    uVar18 = uVar27 & 0xff;
    uVar28 = 2 - uVar15;
    if ((int)uVar28 < 1) {
      uVar28 = 0;
    }
    else {
      if (uVar28 == 0x20) {
        uVar28 = 0;
      }
      else {
        uVar28 = uVar26 << (uVar28 & 0xff);
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 2;
    param_3[1] = uVar15;
    uVar9 = *(uint *)(iVar33 + 8);
    uVar28 = (uVar26 >> (uVar15 & 0xff) | uVar28) & uVar9;
    uVar29 = 1 - uVar15;
    if ((int)uVar29 < 1) {
      uVar29 = 0;
    }
    else {
      if (uVar29 == 0x20) {
        uVar29 = 0;
      }
      else {
        uVar29 = uVar26 << (uVar29 & 0xff);
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 1;
    param_3[1] = uVar15;
    uVar30 = 2 - uVar15;
    uVar29 = (uVar26 >> (uVar15 & 0xff) | uVar29) & uVar19;
    if ((int)uVar30 < 1) {
      uVar30 = 0;
    }
    else {
      if (uVar30 == 0x20) {
        uVar30 = 0;
      }
      else {
        uVar30 = uVar26 << (uVar30 & 0xff);
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 2;
    param_3[1] = uVar15;
    uVar30 = (uVar26 >> (uVar15 & 0xff) | uVar30) & uVar9;
    uVar31 = 4 - uVar15;
    local_15c = CONCAT13((char)uVar30,CONCAT12((char)uVar29,CONCAT11((char)uVar28,(char)uVar27)));
    if ((int)uVar31 < 1) {
      uVar27 = 0;
    }
    else {
      if (uVar31 == 0x20) {
        uVar27 = 0;
      }
      else {
        uVar27 = uVar26 << (uVar31 & 0xff);
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 4;
    param_3[1] = uVar15;
    uVar31 = (uVar26 >> (uVar15 & 0xff) | uVar27) & *(uint *)(iVar33 + 0x10);
    uVar27 = uVar31 & 0xff;
    uVar32 = 1 - uVar15;
    uVar8 = (undefined1)uVar31;
    if ((int)uVar32 < 1) {
      bVar22 = 0;
    }
    else {
      if (uVar32 == 0x20) {
        bVar22 = 0;
      }
      else {
        bVar22 = (byte)(uVar26 << (uVar32 & 0xff));
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 1;
    uVar31 = uVar26 >> (uVar15 & 0xff);
    param_3[1] = uVar15;
    bVar2 = (byte)uVar19;
    uVar19 = 3 - uVar15;
    if ((int)uVar19 < 1) {
      uVar19 = 0;
    }
    else {
      if (uVar19 == 0x20) {
        uVar19 = 0;
      }
      else {
        uVar19 = uVar26 << (uVar19 & 0xff);
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 3;
    param_3[1] = uVar15;
    uVar32 = *(uint *)(iVar33 + 0xc);
    uVar10 = (uVar26 >> (uVar15 & 0xff) | uVar19) & uVar32;
    uVar11 = 1 - uVar15;
    uVar19 = uVar10 & 0xff;
    uVar1 = (undefined1)uVar10;
    if ((int)uVar11 < 1) {
      bVar23 = 0;
    }
    else {
      if (uVar11 == 0x20) {
        bVar23 = 0;
      }
      else {
        bVar23 = (byte)(uVar26 << (uVar11 & 0xff));
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 1;
    param_3[1] = uVar15;
    uVar10 = 1 - uVar15;
    local_158 = CONCAT13(((byte)(uVar26 >> (uVar15 & 0xff)) | bVar23) & bVar2,
                         CONCAT12(uVar1,CONCAT11(((byte)uVar31 | bVar22) & bVar2,uVar8)));
    if ((int)uVar10 < 1) {
      bVar22 = 0;
    }
    else {
      if (uVar10 == 0x20) {
        bVar22 = 0;
      }
      else {
        bVar22 = (byte)(uVar26 << (uVar10 & 0xff));
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 1;
    uVar31 = uVar26 >> (uVar15 & 0xff);
    param_3[1] = uVar15;
    uVar10 = 1 - uVar15;
    if ((int)uVar10 < 1) {
      bVar23 = 0;
    }
    else {
      if (uVar10 == 0x20) {
        bVar23 = 0;
      }
      else {
        bVar23 = (byte)(uVar26 << (uVar10 & 0xff));
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 1;
    uVar10 = uVar26 >> (uVar15 & 0xff);
    param_3[1] = uVar15;
    uVar11 = 1 - uVar15;
    if ((int)uVar11 < 1) {
      bVar24 = 0;
    }
    else {
      if (uVar11 == 0x20) {
        bVar24 = 0;
      }
      else {
        bVar24 = (byte)(uVar26 << (uVar11 & 0xff));
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 1;
    param_3[1] = uVar15;
    uVar11 = 0xd - uVar15;
    local_154._3_1_ = SUB41(uVar5,3);
    local_154._0_3_ =
         CONCAT12(((byte)(uVar26 >> (uVar15 & 0xff)) | bVar24) & bVar2,
                  CONCAT11(((byte)uVar10 | bVar23) & bVar2,((byte)uVar31 | bVar22) & bVar2));
    if ((int)uVar11 < 1) {
      uVar25 = 0;
    }
    else {
      if (uVar11 == 0x20) {
        uVar25 = 0;
      }
      else {
        uVar25 = (ushort)(uVar26 << (uVar11 & 0xff));
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 0xd;
    uVar31 = 0xb - uVar15;
    param_3[1] = uVar15;
    uVar25 = ((ushort)(uVar26 >> (uVar15 & 0xff)) | uVar25) & (ushort)*(undefined4 *)(iVar33 + 0x34)
    ;
    if ((int)uVar31 < 1) {
      uVar31 = 0;
    }
    else {
      if (uVar31 == 0x20) {
        uVar31 = 0;
      }
      else {
        uVar31 = uVar26 << (uVar31 & 0xff);
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 0xb;
    param_3[1] = uVar15;
    uVar31 = *(uint *)(iVar33 + 0x2c) & (uVar31 | uVar26 >> (uVar15 & 0xff));
    uVar10 = 2 - uVar15;
    local_150 = CONCAT22((short)uVar31,uVar25);
    if ((int)uVar10 < 1) {
      uVar10 = 0;
    }
    else {
      if (uVar10 == 0x20) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar26 << (uVar10 & 0xff);
      }
      uVar26 = FUN_2c4d74d4(puVar20);
      *param_3 = uVar26;
      uVar15 = param_3[1] + 0x20;
    }
    uVar15 = uVar15 - 2;
    uVar11 = (uint)uVar25;
    param_3[1] = uVar15;
    uVar9 = (uVar10 | uVar26 >> (uVar15 & 0xff)) & uVar9;
    uVar26 = uVar11 * 8;
    uVar10 = uVar9 & 0xff;
    bVar22 = (byte)uVar9;
    local_14c = (ushort)bVar22;
    if ((int)(uVar11 * 8) <= iVar4) {
      if ((uVar29 & 0xff) == 0) {
        pbVar16 = param_1 + 0x14;
        FUN_2c4d82c8(pbVar16);
        uVar15 = param_3[1];
        uVar9 = param_3[9];
        uVar29 = uVar15 + 0x38;
        if (uVar29 < 0x20) {
          if (uVar9 != 0) {
LAB_2c4d1972:
            FUN_2c4d7598(puVar20,*param_3,uVar15);
            uVar9 = param_3[9];
            goto LAB_2c4d197e;
          }
          param_3[1] = uVar29;
          FUN_2c4d766c(puVar20,uVar29,0);
          *param_3 = 0;
          param_3[1] = 0;
        }
        else {
          if (uVar9 == 0) {
            FUN_2c4d766c(puVar20,uVar15,0);
            uVar9 = param_3[9];
          }
          else if (uVar15 != 0) goto LAB_2c4d1972;
LAB_2c4d197e:
          *param_3 = 0;
          param_3[1] = 0;
          FUN_2c4d766c(puVar20,0x38,uVar9 & 0xff);
        }
        uVar5 = FUN_2c4d82e0(pbVar16,param_3,0);
        uVar15 = param_3[1];
        if (uVar15 < 0x39) {
          uVar9 = param_3[9];
          if (uVar9 == 0) {
            FUN_2c4d766c(puVar20);
            uVar9 = param_3[9];
          }
          else if (uVar15 != 0) goto LAB_2c4d19ac;
LAB_2c4d19b8:
          *param_3 = 0;
          param_3[1] = 0;
          FUN_2c4d768c(puVar20,0x38,uVar9 & 0xff);
          if (uVar10 == 0) goto LAB_2c4d19ce;
          if (param_3[9] == 0) {
            uVar15 = param_3[1];
            goto LAB_2c4d1c24;
          }
          if (param_3[1] != 0) {
            FUN_2c4d7598(puVar20,*param_3);
          }
LAB_2c4d1af0:
          *param_3 = 0;
          param_3[1] = 0;
          iVar34 = FUN_2c4d76a8(puVar20);
          if (iVar34 < (int)(uVar10 * 0x10)) {
            uVar15 = param_3[1];
            iVar34 = 0x38;
            goto LAB_2c4d18c6;
          }
          uVar21 = *(undefined4 *)(iVar33 + 0x40);
          puVar35 = (ushort *)(param_1 + 0x5c);
          iVar34 = 0;
          do {
            uVar9 = param_3[1];
            uVar15 = 0x10 - uVar9;
            if ((int)uVar15 < 1) {
              uVar15 = *param_3;
              uVar17 = 0;
            }
            else {
              if (uVar15 == 0x20) {
                uVar17 = 0;
              }
              else {
                uVar17 = (ushort)(*param_3 << (uVar15 & 0xff));
              }
              uVar15 = FUN_2c4d74d4(puVar20);
              *param_3 = uVar15;
              uVar9 = param_3[1] + 0x20;
            }
            iVar34 = iVar34 + 1;
            param_3[1] = uVar9 - 0x10;
            puVar35 = puVar35 + 1;
            *puVar35 = (uVar17 | (ushort)(uVar15 >> (uVar9 - 0x10 & 0xff))) & (ushort)uVar21;
          } while (iVar34 < (int)uVar10);
          uVar15 = (uVar25 - 9) + uVar10 * -2;
          iVar34 = uVar10 * 0x10 + 0x38;
          if (uVar10 == 0) {
            iVar34 = 0x48;
          }
          *(short *)(param_1 + uVar10 * 2 + 0x5e) = (short)uVar15;
          pbVar12 = param_1 + (uVar10 + 0x2f) * 2;
          uVar15 = uVar15 & 0xffff;
          do {
            puVar35 = (ushort *)(pbVar12 + -2);
            pbVar13 = pbVar12 + -2;
            *(ushort *)pbVar12 = (short)uVar15 - *puVar35;
            pbVar12 = pbVar13;
            uVar15 = (uint)*puVar35;
          } while (pbVar13 != param_1 + 0x5e);
        }
        else {
          if (param_3[9] != 0) {
LAB_2c4d19ac:
            FUN_2c4d7598(puVar20,*param_3,uVar15);
            uVar9 = param_3[9];
            goto LAB_2c4d19b8;
          }
          uVar15 = uVar15 - 0x38;
          param_3[1] = uVar15;
          if (uVar10 != 0) {
LAB_2c4d1c24:
            FUN_2c4d766c(puVar20,uVar15,0);
            goto LAB_2c4d1af0;
          }
LAB_2c4d19ce:
          iVar34 = 0x38;
        }
        FUN_2c4d835c(pbVar16,param_3,uVar5);
        if (param_3[9] == 0) {
          FUN_2c4d766c(puVar20,param_3[1]);
        }
        else if (param_3[1] != 0) {
          FUN_2c4d7598(puVar20,*param_3);
        }
        *param_3 = 0;
        param_3[1] = 0;
        iVar6 = FUN_2c4d76a8(puVar20);
        uVar15 = 0;
        if (iVar6 < 0x10) {
          uVar15 = param_3[1];
          goto LAB_2c4d18c6;
        }
        uVar29 = param_3[1];
        uVar9 = 0x10 - uVar29;
        if ((int)uVar9 < 1) {
          uVar9 = *param_3;
        }
        else {
          if (uVar9 != 0x20) {
            uVar15 = *param_3 << (uVar9 & 0xff);
          }
          uVar9 = FUN_2c4d74d4(puVar20);
          uVar29 = param_3[1] + 0x20;
          *param_3 = uVar9;
        }
        uVar7 = *(uint *)(iVar33 + 0x40);
        iVar34 = iVar34 + 0x10;
        param_3[1] = uVar29 - 0x10;
        uVar7 = (uVar9 >> (uVar29 - 0x10 & 0xff) | uVar15) & uVar7;
        *(short *)(param_1 + 0x5c) = (short)uVar7;
        if (uVar10 != 0) {
          uVar15 = FUN_2c4d8838(pbVar16);
          if (uVar15 != (uVar7 & 0xffff)) {
            uVar5 = 0x403;
            goto LAB_2c4d1898;
          }
          FUN_2c4d82c8(pbVar16);
        }
      }
      else {
        iVar34 = 0x38;
      }
      if ((uVar27 < 0xd) && ((uVar28 & 0xff) == 0)) {
        if ((uVar18 != 0) || (param_1[0x12] != 0)) {
          if (param_4 == 0) {
            local_148[0] = *DAT_2c4d1adc;
            local_148[1] = DAT_2c4d1adc[1];
            local_148[2] = DAT_2c4d1adc[2];
            local_148[3] = DAT_2c4d1adc[3];
            local_138 = DAT_2c4d1adc[4];
            iStack_134 = DAT_2c4d1adc[5];
            iStack_130 = DAT_2c4d1adc[6];
            iStack_12c = DAT_2c4d1adc[7];
            local_128 = DAT_2c4d1adc[8];
            iStack_124 = DAT_2c4d1adc[9];
            iStack_120 = DAT_2c4d1adc[10];
            iStack_11c = DAT_2c4d1adc[0xb];
            local_118 = DAT_2c4d1adc[0xc];
            iStack_114 = DAT_2c4d1adc[0xd];
            iStack_110 = DAT_2c4d1adc[0xe];
            iStack_10c = DAT_2c4d1adc[0xf];
            if (((uVar31 & 0xffff) != 0x7ff) && (param_1[0x13] != 0)) {
              iVar33 = uVar11 + local_148[uVar19] * (uVar31 & 0xffff) * 4;
              if (iVar4 < iVar33 * 8) {
                uVar18 = param_3[1];
                uVar26 = param_3[9];
                uVar15 = iVar34 + uVar18;
                if (uVar15 < 0x20) {
                  if (uVar26 != 0) {
LAB_2c4d1cb2:
                    if (uVar18 != 0) {
                      FUN_2c4d7598(puVar20,*param_3,uVar18);
                      uVar26 = param_3[9];
                    }
                    goto LAB_2c4d1cb8;
                  }
                  param_3[1] = uVar15;
                  FUN_2c4d766c(puVar20,uVar15,0);
                  *param_3 = 0;
                  param_3[1] = 0;
                }
                else {
                  if (uVar26 != 0) goto LAB_2c4d1cb2;
                  FUN_2c4d766c(puVar20,uVar18,0);
                  uVar26 = param_3[9];
LAB_2c4d1cb8:
                  *param_3 = 0;
                  param_3[1] = 0;
                  FUN_2c4d766c(puVar20,iVar34,uVar26 & 0xff);
                }
                if (DAT_2c4d1e0c < iVar34 + iVar33 * 8) {
                  uVar5 = 0x102;
                  goto LAB_2c4d1898;
                }
                goto LAB_2c4d18ee;
              }
              param_1[0x13] = 0;
            }
          }
          FUN_2c4d64f4(param_2);
          *(undefined1 *)(param_2 + 0x108) = uVar1;
          *(undefined1 *)(param_2 + 0x10f) = uVar8;
          *(ushort *)(param_2 + 0xf2) = ((ushort)uVar30 & 0xff) + 1;
          *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(DAT_2c4d1ad4 + uVar27 * 4);
          *(undefined4 *)(param_2 + 0xf8) = 0x400;
          if (uVar19 == 0) {
            if (param_3[9] == 0) {
              FUN_2c4d766c(puVar20,param_3[1],0);
            }
            else if (param_3[1] != 0) {
              FUN_2c4d7598(puVar20,*param_3);
            }
            uVar28 = 0;
            *param_3 = 0;
            param_3[1] = 0;
            uVar5 = FUN_2c4d76a8(puVar20);
            uVar19 = param_3[1];
            uVar15 = 3 - uVar19;
            if ((int)uVar15 < 1) {
              uVar15 = *param_3;
            }
            else {
              if (uVar15 != 0x20) {
                uVar28 = *param_3 << (uVar15 & 0xff);
              }
              uVar15 = FUN_2c4d74d4(puVar20);
              *param_3 = uVar15;
              uVar19 = param_3[1] + 0x20;
            }
            uVar9 = uVar19 - 3;
            param_3[1] = uVar9;
            if (((uVar28 | uVar15 >> (uVar9 & 0xff)) & uVar32) == 5) {
              if (param_1[2] == 0) {
                uVar21 = FUN_2c4d82e0(param_1 + 0x14,param_3);
              }
              else {
                uVar21 = 0;
              }
              FUN_2c4d4b5c(iVar14,param_3,uVar5);
              if (param_1[2] == 0) {
                FUN_2c4d835c(param_1 + 0x14,param_3,uVar21);
              }
              if (param_3[9] == 0) {
                FUN_2c4d766c(puVar20,param_3[1]);
              }
              else if (param_3[1] != 0) {
                FUN_2c4d7598(puVar20,*param_3);
              }
              *param_3 = 0;
              param_3[1] = 0;
              cVar3 = FUN_2c4d76a8(puVar20);
              local_14c = CONCAT11((char)uVar5 - cVar3,bVar22);
            }
            else {
              uVar28 = param_3[9];
              if (uVar19 < 0x20) {
                if (uVar28 != 0) {
LAB_2c4d1bc2:
                  if (uVar9 != 0) {
                    FUN_2c4d7598(puVar20,uVar15,uVar9);
                    uVar28 = param_3[9];
                  }
                  goto LAB_2c4d1bc8;
                }
                param_3[1] = uVar19;
                FUN_2c4d766c(puVar20,uVar19,0);
                *param_3 = 0;
                param_3[1] = 0;
              }
              else {
                if (uVar28 != 0) goto LAB_2c4d1bc2;
                FUN_2c4d766c(puVar20,uVar9,0);
                uVar28 = param_3[9];
LAB_2c4d1bc8:
                *param_3 = 0;
                param_3[1] = 0;
                FUN_2c4d766c(puVar20,3,uVar28 & 0xff);
              }
              if ((((cVar3 == '\0') || (param_1[4] != uVar27)) || (param_1[6] != 0)) ||
                 (*param_1 != uVar18)) {
                if (uVar18 == 0) {
                  uVar18 = param_3[1];
                  uVar15 = param_3[9];
                  uVar26 = (uVar26 - iVar34) - 3;
                  if (uVar26 < uVar18) {
                    if (uVar15 == 0) {
                      uVar5 = 0x402;
                      param_3[1] = uVar18 - uVar26;
                      goto LAB_2c4d1898;
                    }
LAB_2c4d1dde:
                    if (uVar18 != 0) {
                      FUN_2c4d7598(puVar20,*param_3,uVar18);
                      uVar15 = param_3[9];
                    }
                  }
                  else {
                    if (uVar15 != 0) goto LAB_2c4d1dde;
                    FUN_2c4d766c(puVar20,uVar18,0);
                    uVar15 = param_3[9];
                  }
                  uVar8 = (undefined1)uVar15;
                  goto LAB_2c4d1a88;
                }
              }
              else {
                FUN_2c674668(iVar14,auStack_108,0xd1);
              }
            }
          }
          uVar5 = 0;
          *(undefined4 *)(param_1 + 4) = local_158;
          *(undefined4 *)param_1 = local_15c;
          *(undefined4 *)(param_1 + 8) = local_154;
          *(undefined4 *)(param_1 + 0xc) = local_150;
          *(ushort *)(param_1 + 0x10) = local_14c;
          goto LAB_2c4d1898;
        }
        uVar18 = param_3[1];
        if (uVar26 < uVar18) goto LAB_2c4d1a6e;
        uVar15 = param_3[9];
        if (uVar15 != 0) goto LAB_2c4d1ace;
LAB_2c4d1c88:
        FUN_2c4d766c(puVar20,uVar18,0);
        uVar8 = (undefined1)param_3[9];
      }
      else {
        uVar18 = param_3[1];
        if (uVar26 < uVar18) {
LAB_2c4d1a6e:
          if (param_3[9] == 0) {
            uVar5 = 0x402;
            param_3[1] = uVar18 + uVar11 * -8;
            goto LAB_2c4d1898;
          }
        }
        else {
          uVar15 = param_3[9];
          if (uVar15 == 0) goto LAB_2c4d1c88;
LAB_2c4d1ace:
          uVar8 = (undefined1)uVar15;
          if (uVar18 == 0) goto LAB_2c4d1a88;
        }
        FUN_2c4d7598(puVar20,*param_3,uVar18);
        uVar8 = (undefined1)param_3[9];
      }
LAB_2c4d1a88:
      uVar5 = 0x402;
      *param_3 = 0;
      param_3[1] = 0;
      FUN_2c4d768c(puVar20,uVar26,uVar8);
      goto LAB_2c4d1898;
    }
    iVar34 = 0x38;
LAB_2c4d18c6:
    uVar18 = iVar34 + uVar15;
    uVar26 = param_3[9];
    if (uVar18 < 0x20) {
      if (uVar26 == 0) {
        param_3[1] = uVar18;
        FUN_2c4d766c(puVar20,uVar18,0);
        uVar5 = 0x101;
        *param_3 = 0;
        param_3[1] = 0;
        goto LAB_2c4d1898;
      }
LAB_2c4d18d8:
      if (uVar15 != 0) {
        FUN_2c4d7598(puVar20,*param_3,uVar15);
        uVar26 = param_3[9];
      }
    }
    else {
      if (uVar26 != 0) goto LAB_2c4d18d8;
      FUN_2c4d766c(puVar20,uVar15,0);
      uVar26 = param_3[9];
    }
    *param_3 = 0;
    param_3[1] = 0;
    FUN_2c4d766c(puVar20,iVar34,uVar26 & 0xff);
  }
LAB_2c4d18ee:
  uVar5 = 0x101;
LAB_2c4d1898:
  if (*DAT_2c4d1ad8 == local_34) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


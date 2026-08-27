/* FUN_2c60c244 @ 0x2c60c244 */

void FUN_2c60c244(int param_1,short *param_2,short *param_3)

{
  byte *pbVar1;
  undefined1 uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  byte bVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  short sVar25;
  short sVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  short sVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined2 *puVar35;
  int local_b4;
  short local_b0;
  short local_ac;
  undefined4 local_a0;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  undefined1 auStack_88 [8];
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  undefined4 local_50;
  short local_4c;
  short local_4a;
  undefined4 local_48;
  int local_44;
  undefined1 local_40;
  code *local_3c;
  byte local_38;
  undefined1 local_37;
  int local_34;
  
  local_34 = *DAT_2c60c504;
  uVar20 = (uint)param_2[0x26];
  if ((uVar20 == 0) || (bVar13 = *(byte *)(param_2 + 0x2a), bVar13 < 3)) goto LAB_2c60c8c8;
  sVar3 = param_2[0x29];
  sVar25 = param_2[0x27];
  sVar14 = param_2[0x28];
  if ((uVar20 == 1) && (((sVar3 < 1 && (sVar25 == 0)) && (sVar14 == 0)))) goto LAB_2c60c8c8;
  sVar15 = param_3[1];
  sVar31 = *param_3 + sVar25;
  if ((int)uVar20 < 0) {
    uVar20 = uVar20 + 1;
  }
  sVar26 = sVar25 + sVar3 + param_3[2];
  sVar25 = sVar3 + sVar14 + param_3[3];
  if (0xfd < bVar13) {
    bVar13 = 0xff;
  }
  uVar5 = (ushort)((uVar20 & 0x1ffff) >> 1);
  uVar4 = ~uVar5;
  local_8a = uVar5 + 1;
  local_8e = (uVar4 + sVar15 + sVar14) - sVar3;
  local_90 = (sVar31 + uVar4) - sVar3;
  local_8c = sVar26 + local_8a;
  local_8a = local_8a + sVar25;
  local_b4 = FUN_2c62a6b4(auStack_88,&local_90,*(undefined4 *)(param_1 + 8));
  if (local_b4 == 0) goto LAB_2c60c8c8;
  local_80 = *param_3;
  local_7e = param_3[1];
  local_7c = param_3[2];
  local_7a = param_3[3];
  FUN_2c62a66c(&local_80,0xffffffff);
  sVar26 = sVar26 + sVar3 + 1;
  local_62 = (sVar3 + 1 + sVar25) - (sVar15 + sVar14);
  iVar21 = (int)(short)((local_7c + 1) - local_80);
  iVar16 = (int)(short)((local_7a + 1) - local_7e);
  if (iVar16 <= iVar21) {
    iVar21 = iVar16;
  }
  iVar16 = (int)(short)(sVar26 - sVar31);
  if (local_62 <= iVar16) {
    iVar16 = (int)local_62;
  }
  iVar11 = (int)*param_2;
  iVar22 = iVar21 >> 1;
  if (iVar11 <= iVar21 >> 1) {
    iVar22 = iVar11;
  }
  if (iVar16 >> 1 < iVar11) {
    iVar11 = iVar16 >> 1;
  }
  iVar21 = param_2[0x26] + iVar11;
  puVar6 = (undefined2 *)FUN_2c62bf1c(iVar21 * iVar21 * 2);
  uVar27 = (uint)param_2[0x26];
  uVar20 = uVar27;
  if ((int)uVar27 < 0) {
    uVar20 = uVar27 + 1;
  }
  iVar16 = iVar11 + uVar27;
  local_66 = (short)((uVar20 << 0xf) >> 0x10) + 1;
  local_64 = (param_2[0x26] | 0xfffeU) + (short)((uVar20 & 0x1ffff) >> 1) + (short)iVar11;
  local_62 = local_62 + local_66;
  local_68 = (sVar31 - sVar26) + local_64;
  FUN_2c6144a0(&local_50,&local_68,iVar11,0);
  sVar3 = (short)iVar16;
  if (uVar27 == 1) {
    pbVar7 = (byte *)FUN_2c62bf1c(iVar16);
    iVar11 = 1;
    if (0 < iVar16) goto LAB_2c60c40c;
    FUN_2c62c040();
    FUN_2c613f44(&local_50);
LAB_2c60ca7e:
    if (iVar16 * iVar16 != 0) goto LAB_2c60d228;
  }
  else {
    pbVar7 = (byte *)FUN_2c62bf1c(iVar16);
    iVar11 = (int)uVar27 >> 1;
    if (iVar16 < 1) {
      FUN_2c62c040();
      FUN_2c613f44(&local_50);
      if (iVar11 == 1) goto LAB_2c60ca7e;
    }
    else {
LAB_2c60c40c:
      iVar28 = 0;
      puVar35 = puVar6;
      do {
        while( true ) {
          FUN_2c62c484(pbVar7,iVar16);
          iVar8 = (*local_50)(pbVar7,0,(int)(short)iVar28,(int)sVar3,&local_50);
          if (iVar8 != 0) break;
          FUN_2c62c3b0(puVar35,iVar16 * 2);
LAB_2c60c436:
          iVar28 = iVar28 + 1;
          puVar35 = puVar35 + iVar16;
          if (iVar16 <= iVar28) goto LAB_2c60c4a6;
        }
        *puVar35 = (short)((int)((uint)*pbVar7 << 6) / iVar11);
        puVar12 = puVar35;
        pbVar17 = pbVar7;
        if (iVar16 == 1) goto LAB_2c60c436;
        do {
          while( true ) {
            pbVar1 = pbVar17 + 1;
            if ((uint)*pbVar17 != (uint)*pbVar1) break;
            puVar12[1] = *puVar12;
            puVar12 = puVar12 + 1;
            pbVar17 = pbVar1;
            if (pbVar7 + iVar16 + -1 == pbVar1) goto LAB_2c60c49c;
          }
          puVar12[1] = (short)((int)((uint)*pbVar1 << 6) / iVar11);
          puVar12 = puVar12 + 1;
          pbVar17 = pbVar1;
        } while (pbVar7 + iVar16 + -1 != pbVar1);
LAB_2c60c49c:
        iVar28 = iVar28 + 1;
        puVar35 = puVar35 + iVar16;
      } while (iVar28 < iVar16);
LAB_2c60c4a6:
      FUN_2c62c040(pbVar7);
      FUN_2c613f44(&local_50);
      if (iVar11 == 1) {
LAB_2c60d228:
        puVar9 = puVar6 + -1;
        puVar18 = (undefined1 *)((int)puVar6 + -1);
        do {
          puVar9 = puVar9 + 1;
          puVar19 = puVar18 + (2 - (int)puVar6);
          puVar18 = puVar18 + 1;
          *puVar18 = (char)(*puVar9 >> 6);
        } while (iVar16 * iVar16 - (int)puVar19 != 0 && (int)puVar19 <= iVar16 * iVar16);
        goto LAB_2c60c52a;
      }
    }
    iVar16 = iVar16 * iVar16;
    FUN_2c60b2f8((int)sVar3,iVar11,puVar6);
    uVar20 = (uVar27 & 1) + iVar11;
    if (1 < (int)uVar20) {
      if (iVar16 != 0) {
        iVar11 = 0;
        puVar9 = puVar6 + -1;
        do {
          puVar9 = puVar9 + 1;
          uVar4 = *puVar9;
          if (uVar4 != 0) {
            if (uVar4 == 0xff) {
              *puVar9 = (ushort)(0x3fc0 / uVar20);
            }
            else {
              *puVar9 = (ushort)(((ulonglong)uVar4 << 6) / (ulonglong)uVar20);
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar16);
      }
      FUN_2c60b2f8((int)sVar3,uVar20,puVar6);
    }
    if (iVar16 != 0) {
      puVar35 = puVar6 + -1;
      puVar18 = (undefined1 *)((int)puVar6 + -1);
      puVar12 = puVar35 + iVar16;
      do {
        puVar35 = puVar35 + 1;
        puVar18 = puVar18 + 1;
        *puVar18 = (char)*puVar35;
      } while (puVar12 != puVar35);
    }
  }
LAB_2c60c52a:
  iVar16 = FUN_2c613fa8(&local_90);
  if ((iVar16 == 0) && (param_2[1] == -0x100)) {
    local_a0 = 0xffffffff;
  }
  else {
    FUN_2c6144a0(&local_68,&local_80,iVar22,1);
    local_a0 = FUN_2c613e5c(&local_68,0);
    local_b4 = 0;
  }
  iVar16 = FUN_2c62bf1c((int)(short)((local_8c + 1) - local_90));
  FUN_2c62c3b0(&local_50,0x1c);
  local_50 = (code *)&local_78;
  local_38 = *(byte *)(param_2 + 0x2a);
  local_48 = *(undefined4 *)(param_2 + 0x24);
  local_37 = (undefined1)param_2[1];
  iVar11 = (int)(short)((local_8c + 1) - local_90);
  local_74 = local_8c;
  local_b0 = (short)iVar21;
  if (iVar11 < 0) {
    iVar11 = iVar11 + 1;
  }
  local_78 = (local_8c + 1) - local_b0;
  sVar3 = local_90 + (short)(iVar11 >> 1);
  iVar11 = (int)sVar3;
  local_76 = local_8e;
  iVar28 = (int)(short)((local_8a + 1) - local_8e);
  if (iVar28 < 0) {
    iVar28 = iVar28 + 1;
  }
  sVar25 = local_8e + (short)(iVar28 >> 1);
  if (local_78 < iVar11) {
    local_78 = sVar3;
  }
  local_72 = local_8e + -1 + local_b0;
  iVar28 = (int)sVar25;
  if (iVar28 <= local_72) {
    local_72 = sVar25;
  }
  local_44 = iVar16;
  local_3c = local_50;
  iVar8 = FUN_2c62a6b4(&local_70,&local_78,*(undefined4 *)(param_1 + 8));
  local_ac = (short)iVar22;
  if (iVar8 != 0) {
    iVar8 = FUN_2c62a998(&local_70,&local_80);
    if (iVar8 == 0) {
      iVar8 = (int)local_8e;
      iVar29 = (int)local_70;
      iVar10 = (int)local_8c;
      iVar34 = (int)(short)((local_6c + 1) - local_70);
      iVar33 = (int)local_6e;
      if (local_b4 != 0) {
        FUN_2c62aa4c(&local_70,&local_80,(int)local_ac);
      }
      if (0 < iVar34) {
        iVar30 = (int)local_6e;
        local_78 = local_70;
        local_74 = local_6c;
        local_40 = 2;
        local_44 = iVar16;
        if (iVar30 <= local_6a) {
          iVar8 = iVar21 * (iVar33 - iVar8) + (iVar29 - ((iVar10 - iVar21) + 1)) + (int)puVar6;
          do {
            sVar14 = (short)iVar30;
            local_76 = sVar14;
            local_72 = sVar14;
            iVar10 = iVar8;
            if (local_b4 == 0) {
              FUN_2c62c0d8(iVar16,iVar8,iVar21);
              iVar33 = FUN_2c613e90(iVar16,(int)local_70,iVar30,iVar34);
              iVar10 = local_44;
              if (iVar33 == 1) {
                local_40 = 2;
              }
              else {
                local_40 = (undefined1)iVar33;
              }
            }
            local_44 = iVar10;
            iVar8 = iVar8 + iVar21;
            FUN_2c60d588(param_1,&local_50);
            iVar30 = (int)(short)(sVar14 + 1);
          } while (iVar30 <= local_6a);
        }
      }
    }
  }
  local_74 = local_8c;
  local_78 = (local_8c + 1) - local_b0;
  if (local_78 < iVar11) {
    local_78 = sVar3;
  }
  iVar8 = iVar28 + 1;
  local_72 = local_8a;
  local_76 = (local_8a + 1) - local_b0;
  sVar14 = (short)iVar8;
  if (local_76 < iVar8) {
    local_76 = sVar14;
  }
  iVar10 = FUN_2c62a6b4(&local_70,&local_78,*(undefined4 *)(param_1 + 8));
  if (iVar10 != 0) {
    iVar10 = FUN_2c62a998(&local_70,&local_80);
    if (iVar10 == 0) {
      iVar10 = (int)local_6a;
      iVar34 = (int)local_70;
      iVar33 = (int)local_8c;
      iVar30 = (int)(short)((local_6c + 1) - local_70);
      iVar29 = (int)local_72;
      if (local_b4 != 0) {
        FUN_2c62aa4c(&local_70,&local_80,(int)local_ac);
      }
      if (0 < iVar30) {
        iVar32 = (int)local_6a;
        local_78 = local_70;
        local_74 = local_6c;
        local_40 = 2;
        local_44 = iVar16;
        if (local_6e <= iVar32) {
          iVar10 = iVar21 * (iVar29 - iVar10) + (iVar34 - ((iVar33 - iVar21) + 1)) + (int)puVar6;
          do {
            sVar15 = (short)iVar32;
            local_76 = sVar15;
            local_72 = sVar15;
            iVar33 = iVar10;
            if (local_b4 == 0) {
              FUN_2c62c0d8(iVar16,iVar10,iVar21);
              iVar29 = FUN_2c613e90(iVar16,(int)local_70,iVar32,iVar30);
              iVar33 = local_44;
              if (iVar29 == 1) {
                local_40 = 2;
              }
              else {
                local_40 = (undefined1)iVar29;
              }
            }
            local_44 = iVar33;
            iVar10 = iVar10 + iVar21;
            FUN_2c60d588(param_1,&local_50);
            iVar32 = (int)(short)(sVar15 + -1);
          } while (local_6e <= iVar32);
        }
      }
    }
  }
  local_76 = local_8e;
  local_72 = local_8e + -1 + local_b0;
  if (iVar28 <= local_72) {
    local_72 = sVar25;
  }
  local_78 = local_90 + local_b0;
  local_74 = local_8c - local_b0;
  iVar10 = FUN_2c62a6b4(&local_70,&local_78,*(undefined4 *)(param_1 + 8));
  if (iVar10 != 0) {
    iVar10 = FUN_2c62a998(&local_70,&local_80);
    if (iVar10 == 0) {
      iVar33 = (int)local_6e;
      iVar10 = (int)local_76;
      iVar29 = (int)(short)((local_6c + 1) - local_70);
      if (local_b4 == 0) {
        iVar34 = iVar33;
        iVar30 = iVar16;
        if (0 < iVar29) {
LAB_2c60d0b0:
          local_44 = iVar30;
          local_78 = local_70;
          local_74 = local_6c;
          if (iVar34 <= local_6a) {
            pbVar7 = (byte *)(iVar21 * (iVar33 - iVar10) + (int)puVar6);
            do {
              sVar15 = (short)iVar34;
              local_72 = sVar15;
              local_76 = sVar15;
              if (local_b4 == 0) {
                FUN_2c62c314(iVar16,*pbVar7,iVar29);
                iVar10 = FUN_2c613e90(iVar16,(int)local_70,iVar34,iVar29);
                if (iVar10 == 1) {
                  local_40 = 2;
                }
                else {
                  local_40 = (undefined1)iVar10;
                }
              }
              else {
                local_38 = *pbVar7;
                if (bVar13 != 0xff) {
                  local_38 = (byte)((uint)((int)(short)(ushort)local_38 *
                                          (int)(short)(ushort)*(byte *)(param_2 + 0x2a)) >> 8);
                }
              }
              pbVar7 = pbVar7 + iVar21;
              FUN_2c60d588(param_1,&local_50);
              iVar34 = (int)(short)(sVar15 + 1);
            } while (iVar34 <= local_6a);
          }
        }
      }
      else {
        FUN_2c62aa4c(&local_70,&local_80,(int)local_ac);
        if (0 < iVar29) {
          local_44 = 0;
          iVar34 = (int)local_6e;
          iVar30 = local_44;
          goto LAB_2c60d0b0;
        }
      }
    }
  }
  local_72 = local_8a;
  local_76 = (local_8a + 1) - local_b0;
  if (local_76 < iVar8) {
    local_76 = sVar14;
  }
  local_78 = local_90 + local_b0;
  local_74 = local_8c - local_b0;
  local_38 = *(byte *)(param_2 + 0x2a);
  iVar10 = FUN_2c62a6b4(&local_70,&local_78,*(undefined4 *)(param_1 + 8));
  if (iVar10 != 0) {
    iVar33 = (int)local_ac;
    iVar10 = FUN_2c62a998(&local_70,&local_80,iVar33);
    if ((iVar10 == 0) && (iVar10 = (int)(short)((local_6c + 1) - local_70), 0 < iVar10)) {
      iVar30 = (int)local_72;
      iVar32 = (int)local_6a;
      iVar29 = iVar32;
      iVar34 = iVar16;
      if (local_b4 != 0) {
        FUN_2c62aa4c(&local_70,&local_80,iVar33);
        iVar29 = (int)local_6a;
        iVar34 = 0;
      }
      local_44 = iVar34;
      local_78 = local_70;
      local_74 = local_6c;
      if (local_6e <= iVar29) {
        pbVar7 = (byte *)(iVar21 * (iVar30 - iVar32) + (int)puVar6);
        do {
          sVar15 = (short)iVar29;
          local_72 = sVar15;
          local_76 = sVar15;
          if (local_b4 == 0) {
            FUN_2c62c314(iVar16,*pbVar7,iVar10);
            iVar29 = FUN_2c613e90(iVar16,(int)local_70,iVar29,iVar10);
            if (iVar29 == 1) {
              local_40 = 2;
            }
            else {
              local_40 = (undefined1)iVar29;
            }
          }
          else {
            FUN_2c62aa4c(&local_70,&local_80,iVar33);
            if (bVar13 == 0xff) {
              local_38 = *pbVar7;
            }
            else {
              local_38 = (byte)((uint)((int)(short)(ushort)*pbVar7 *
                                      (int)(short)(ushort)*(byte *)(param_2 + 0x2a)) >> 8);
            }
          }
          pbVar7 = pbVar7 + iVar21;
          FUN_2c60d588(param_1,&local_50);
          iVar29 = (int)(short)(sVar15 + -1);
        } while (local_6e <= iVar29);
      }
    }
  }
  local_76 = local_8e + local_b0;
  local_74 = local_8c;
  local_78 = (local_8c + 1) - local_b0;
  local_38 = (byte)param_2[0x2a];
  if (iVar28 < local_76) {
    local_76 = sVar25 + 1;
  }
  local_72 = local_8a - local_b0;
  if ((short)(local_8a - local_b0) < iVar28) {
    local_72 = sVar25;
  }
  if (local_78 < iVar11) {
    local_78 = sVar3;
  }
  iVar10 = FUN_2c62a6b4(&local_70,&local_78,*(undefined4 *)(param_1 + 8));
  if (iVar10 != 0) {
    iVar10 = FUN_2c62a998(&local_70,&local_80);
    if (iVar10 == 0) {
      iVar33 = (int)(short)((local_6c + 1) - local_70);
      iVar29 = iVar21 * (iVar21 + -1) + ((int)local_70 - ((local_8c - iVar21) + 1)) + (int)puVar6;
      iVar10 = iVar16;
      if (local_b4 != 0) {
        FUN_2c62aa4c(&local_70,&local_80,(int)local_ac);
        iVar10 = iVar29;
      }
      local_44 = iVar10;
      if (0 < iVar33) {
        iVar10 = (int)local_6e;
        local_78 = local_70;
        local_74 = local_6c;
        local_40 = 2;
        if (iVar10 <= local_6a) {
          do {
            sVar3 = (short)iVar10;
            local_76 = sVar3;
            local_72 = sVar3;
            if (local_b4 == 0) {
              FUN_2c62c0d8(iVar16,iVar29,iVar33);
              iVar10 = FUN_2c613e90(iVar16,(int)local_70,iVar10,iVar33);
              if (iVar10 == 1) {
                local_40 = 2;
              }
              else {
                local_40 = (undefined1)iVar10;
              }
            }
            FUN_2c60d588(param_1,&local_50);
            iVar10 = (int)(short)(sVar3 + 1);
          } while (iVar10 <= local_6a);
        }
      }
    }
  }
  if (0 < iVar21) {
    iVar10 = 0;
    puVar18 = (undefined1 *)(iVar21 + -1 + (int)puVar6);
    puVar35 = puVar6;
    do {
      if (iVar21 != 1) {
        puVar19 = (undefined1 *)((int)puVar35 + -1);
        puVar23 = puVar18;
        do {
          puVar19 = puVar19 + 1;
          uVar2 = *puVar19;
          *puVar19 = *puVar23;
          puVar24 = puVar23 + -1;
          *puVar23 = uVar2;
          puVar23 = puVar24;
        } while ((int)puVar18 - (int)puVar24 < iVar21 >> 1);
      }
      puVar35 = (undefined2 *)((int)puVar35 + iVar21);
      puVar18 = puVar18 + iVar21;
      iVar10 = (int)(short)((short)iVar10 + 1);
    } while (iVar10 < iVar21);
  }
  local_76 = local_8e + local_b0;
  local_78 = local_90;
  local_74 = local_90 + -1 + local_b0;
  if (iVar28 < local_76) {
    local_76 = sVar25 + 1;
  }
  iVar11 = iVar11 + -1;
  local_72 = local_8a - local_b0;
  if ((short)(local_8a - local_b0) < iVar28) {
    local_72 = sVar25;
  }
  if (iVar11 <= local_74) {
    local_74 = (short)iVar11;
  }
  iVar10 = FUN_2c62a6b4(&local_70,&local_78,*(undefined4 *)(param_1 + 8));
  if (iVar10 != 0) {
    iVar10 = FUN_2c62a998(&local_70,&local_80);
    if (iVar10 == 0) {
      iVar29 = (int)(short)((local_6c + 1) - local_70);
      iVar33 = (int)puVar6 + iVar21 * (iVar21 + -1) + ((int)local_70 - (int)local_78);
      iVar10 = iVar16;
      if (local_b4 != 0) {
        FUN_2c62aa4c(&local_70,&local_80,(int)local_ac);
        iVar10 = iVar33;
      }
      local_44 = iVar10;
      if (0 < iVar29) {
        iVar10 = (int)local_6e;
        local_78 = local_70;
        local_74 = local_6c;
        local_40 = 2;
        if (iVar10 <= local_6a) {
          do {
            sVar3 = (short)iVar10;
            local_76 = sVar3;
            local_72 = sVar3;
            if (local_b4 == 0) {
              FUN_2c62c0d8(iVar16,iVar33,iVar29);
              iVar10 = FUN_2c613e90(iVar16,(int)local_70,iVar10,iVar29);
              if (iVar10 == 1) {
                local_40 = 2;
              }
              else {
                local_40 = (undefined1)iVar10;
              }
            }
            FUN_2c60d588(param_1,&local_50);
            iVar10 = (int)(short)(sVar3 + 1);
          } while (iVar10 <= local_6a);
        }
      }
    }
  }
  local_78 = local_90;
  local_74 = local_90 + -1 + local_b0;
  if (iVar11 <= local_74) {
    local_74 = (short)iVar11;
  }
  local_76 = local_8e;
  sVar3 = local_8e + -1 + local_b0;
  local_72 = sVar25;
  if (sVar3 <= iVar28) {
    local_72 = sVar3;
  }
  iVar28 = FUN_2c62a6b4(&local_70,&local_78,*(undefined4 *)(param_1 + 8));
  if (iVar28 != 0) {
    iVar28 = FUN_2c62a998(&local_70,&local_80);
    if (iVar28 == 0) {
      iVar28 = (int)local_76;
      iVar29 = (int)local_70;
      iVar10 = (int)local_78;
      iVar34 = (int)(short)((local_6c + 1) - local_70);
      iVar33 = (int)local_6e;
      if (local_b4 != 0) {
        FUN_2c62aa4c(&local_70,&local_80,(int)local_ac);
      }
      local_44 = iVar16;
      if (0 < iVar34) {
        iVar30 = (int)local_6e;
        local_78 = local_70;
        local_74 = local_6c;
        local_40 = 2;
        if (iVar30 <= local_6a) {
          iVar28 = iVar21 * (iVar33 - iVar28) + (iVar29 - iVar10) + (int)puVar6;
          do {
            sVar3 = (short)iVar30;
            local_76 = sVar3;
            local_72 = sVar3;
            iVar10 = iVar28;
            if (local_b4 == 0) {
              FUN_2c62c0d8(iVar16,iVar28,iVar21);
              iVar33 = FUN_2c613e90(iVar16,(int)local_70,iVar30,iVar34);
              iVar10 = local_44;
              if (iVar33 == 1) {
                local_40 = 2;
              }
              else {
                local_40 = (undefined1)iVar33;
              }
            }
            local_44 = iVar10;
            iVar28 = iVar28 + iVar21;
            FUN_2c60d588(param_1,&local_50);
            iVar30 = (int)(short)(sVar3 + 1);
          } while (iVar30 <= local_6a);
        }
      }
    }
  }
  local_78 = local_90;
  iVar28 = (int)(short)(local_90 + -1 + local_b0);
  if (iVar28 <= iVar11) {
    iVar11 = iVar28;
  }
  local_72 = local_8a;
  local_74 = (short)iVar11;
  local_76 = (local_8a + 1) - local_b0;
  if (local_76 < iVar8) {
    local_76 = sVar14;
  }
  iVar11 = FUN_2c62a6b4(&local_70,&local_78,*(undefined4 *)(param_1 + 8));
  if (iVar11 != 0) {
    iVar11 = FUN_2c62a998(&local_70,&local_80);
    if (iVar11 == 0) {
      iVar11 = (int)local_72;
      iVar10 = (int)local_70;
      iVar28 = (int)local_6a;
      iVar33 = (int)(short)((local_6c + 1) - local_70);
      iVar8 = (int)local_78;
      if (local_b4 != 0) {
        FUN_2c62aa4c(&local_70,&local_80,(int)local_ac);
      }
      if (0 < iVar33) {
        iVar29 = (int)local_6a;
        local_78 = local_70;
        local_40 = 2;
        local_74 = local_6c;
        if (local_6e <= iVar29) {
          iVar11 = iVar21 * (iVar11 - iVar28) + (iVar10 - iVar8) + (int)puVar6;
          local_44 = iVar16;
          do {
            sVar3 = (short)iVar29;
            local_76 = sVar3;
            local_72 = sVar3;
            iVar28 = iVar11;
            if (local_b4 == 0) {
              FUN_2c62c0d8(iVar16,iVar11,iVar21);
              iVar8 = FUN_2c613e90(iVar16,(int)local_70,iVar29,iVar33);
              iVar28 = local_44;
              if (iVar8 == 1) {
                local_40 = 2;
              }
              else {
                local_40 = (undefined1)iVar8;
              }
            }
            local_44 = iVar28;
            iVar11 = iVar11 + iVar21;
            FUN_2c60d588(param_1,&local_50);
            iVar29 = (int)(short)(sVar3 + -1);
          } while (local_6e <= iVar29);
        }
      }
    }
  }
  local_78 = local_90 + local_b0;
  local_74 = local_8c - local_b0;
  local_76 = local_8e + local_b0;
  local_72 = local_8a - local_b0;
  local_44 = iVar16;
  iVar21 = FUN_2c62a6b4(&local_70,&local_78,*(undefined4 *)(param_1 + 8));
  if ((iVar21 != 0) && (iVar21 = FUN_2c62a998(&local_70,&local_80,iVar22), iVar21 == 0)) {
    iVar21 = (int)(short)((local_6c + 1) - local_70);
    if (0 < iVar21) {
      iVar11 = (int)local_6e;
      local_74 = local_6c;
      local_78 = local_70;
      if (iVar11 <= local_6a) {
        do {
          sVar3 = (short)iVar11;
          local_76 = sVar3;
          local_72 = sVar3;
          FUN_2c62c484(iVar16,iVar21);
          local_40 = FUN_2c613e90(iVar16,(int)local_70,iVar11,iVar21);
          iVar11 = (int)(short)(sVar3 + 1);
          FUN_2c60d588(param_1,&local_50);
        } while (iVar11 <= local_6a);
      }
    }
  }
  if (local_b4 == 0) {
    FUN_2c613f44(&local_68);
    FUN_2c613ee4(local_a0);
  }
  FUN_2c62c040(puVar6);
  FUN_2c62c040(iVar16);
LAB_2c60c8c8:
  FUN_2c60b4e4(param_1,param_2,param_3);
  FUN_2c60b908(param_1,param_2,param_3);
  if ((((2 < *(byte *)(param_2 + 0x1d)) && (sVar3 = param_2[0x1c], sVar3 != 0)) &&
      (uVar20 = (uint)*(byte *)((int)param_2 + 0x3b), (*(byte *)((int)param_2 + 0x3b) & 0x3e) != 0))
     && (-1 < (int)(uVar20 << 0x1f))) {
    uVar27 = (uVar20 & 0x3f) >> 1;
    iVar21 = (int)(short)((param_3[2] + 1) - *param_3);
    iVar16 = (int)(short)((param_3[3] + 1) - param_3[1]);
    if (iVar16 <= iVar21) {
      iVar21 = iVar16;
    }
    iVar16 = iVar21 >> 1;
    if ((int)*param_2 <= iVar21 >> 1) {
      iVar16 = (int)*param_2;
    }
    sVar25 = (short)iVar16;
    sVar14 = sVar3;
    if (-1 < (int)(uVar20 << 0x1c)) {
      sVar14 = -(sVar3 + sVar25);
    }
    local_4c = sVar3;
    if ((uVar27 & 8) == 0) {
      local_4c = -(sVar3 + sVar25);
    }
    local_4c = param_3[2] - local_4c;
    sVar15 = sVar3;
    if ((uVar27 & 2) == 0) {
      sVar15 = -(sVar3 + sVar25);
    }
    local_50 = (code *)CONCAT22(param_3[1] + sVar15,sVar14 + *param_3);
    local_4a = sVar3;
    if ((uVar27 & 1) == 0) {
      local_4a = -(sVar3 + sVar25);
    }
    local_4a = param_3[3] - local_4a;
    FUN_2c60bb78(param_1,param_3,&local_50,iVar16,
                 (int)(short)(sVar25 - sVar3) & ~((int)(short)(sVar25 - sVar3) >> 0x1f),
                 *(undefined4 *)(param_2 + 0x1a),*(byte *)(param_2 + 0x1d),(char)param_2[1]);
  }
  if ((2 < *(byte *)(param_2 + 0x22)) && (sVar3 = param_2[0x20], sVar3 != 0)) {
    sVar25 = param_2[0x21] + -1;
    local_66 = param_2[0x21] + -1;
    local_68 = *param_3 - local_66;
    local_64 = param_3[2] + local_66;
    local_62 = param_3[3] + local_66;
    local_66 = param_3[1] - local_66;
    local_4c = local_64 + sVar3;
    iVar16 = (int)(short)((1 - *param_3) + sVar25 + local_64);
    iVar21 = (int)(short)(sVar25 + (1 - param_3[1]) + local_62);
    local_4a = local_62 + sVar3;
    local_50 = (code *)CONCAT22(local_66 - sVar3,local_68 - sVar3);
    if (iVar16 <= iVar21) {
      iVar21 = iVar16;
    }
    iVar16 = iVar21 >> 1;
    if ((int)*param_2 <= iVar21 >> 1) {
      iVar16 = (int)*param_2;
    }
    FUN_2c60bb78(param_1,&local_50,&local_68,(int)(short)(sVar3 + (short)iVar16),iVar16,
                 *(undefined4 *)(param_2 + 0x1e),*(byte *)(param_2 + 0x22),(char)param_2[1]);
  }
  if (*DAT_2c60ccb0 == local_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


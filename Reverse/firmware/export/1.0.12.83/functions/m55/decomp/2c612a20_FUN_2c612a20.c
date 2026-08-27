/* FUN_2c612a20 @ 0x2c612a20 */

void FUN_2c612a20(int param_1,int *param_2,short *param_3,char *param_4,int *param_5)

{
  char cVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  undefined8 uVar22;
  int local_120;
  uint local_11c;
  uint local_114;
  int local_110;
  uint local_108;
  uint local_f4;
  uint local_ec;
  short local_e8;
  short local_e6;
  uint local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined1 auStack_d8 [8];
  short local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  uint local_c8;
  short local_c4;
  undefined1 local_be;
  byte local_bd;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  uint local_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int local_9c;
  int iStack_98;
  undefined1 auStack_94 [4];
  int local_90;
  byte local_3c [4];
  byte local_38;
  byte local_37;
  uint local_34;
  
  local_34 = *DAT_2c612b3c;
  iVar8 = 0;
  iVar6 = param_1;
  if (((*(byte *)(param_2 + 8) < 3) || (iVar20 = *param_2, iVar20 == 0)) ||
     (*(int *)(param_1 + 0x1c) == 0)) goto LAB_2c612a7a;
  local_bc = *param_2;
  iStack_b8 = param_2[1];
  iStack_b4 = param_2[2];
  local_b0 = param_2[3];
  local_ac = param_2[4];
  iStack_a8 = param_2[5];
  iStack_a4 = param_2[6];
  iStack_a0 = param_2[7];
  iVar6 = param_2[8];
  iStack_98 = param_2[9];
  iVar8 = iStack_98;
  local_9c = iVar6;
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) goto LAB_2c612a7a;
  uVar22 = FUN_2c62a6b4(auStack_d8,param_3,*(undefined4 *)(param_1 + 8));
  iVar6 = 0;
  iVar8 = (int)((ulonglong)uVar22 >> 0x20);
  if ((int)uVar22 == 0) goto LAB_2c612a7a;
  cVar1 = *(char *)((int)param_2 + 0x22);
  if ((int)((uint)*(byte *)((int)param_2 + 0x23) << 0x1e) < 0) {
    FUN_2c62b954(&local_c8,param_4,*param_2,(int)*(short *)((int)param_2 + 0x1a),
                 (int)(short)param_2[6],0x1fff,(uint)*(byte *)((int)param_2 + 0x23));
    local_e8 = *param_3;
    sVar5 = (short)local_c8;
  }
  else {
    local_e8 = *param_3;
    sVar5 = (param_3[2] + 1) - local_e8;
  }
  iVar21 = (int)sVar5;
  sVar5 = *(short *)(iVar20 + 8);
  sVar2 = param_3[1];
  iVar12 = (int)(short)param_2[6] + (int)sVar5;
  iVar4 = param_2[7];
  local_e6 = sVar2 + *(short *)((int)param_2 + 0x1e);
  pcVar19 = param_4;
  if ((((uint)(param_5 != (int *)0x0) & (uint)(int)sVar2 >> 0x1f) == 0) ||
     (*(short *)((int)param_2 + 0x1e) != 0)) {
LAB_2c612b02:
    local_120 = 0;
  }
  else {
    iVar6 = param_5[2] - (int)sVar2;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if ((0x200 - iVar12) * 2 < iVar6) {
      *param_5 = -1;
      local_120 = 0;
    }
    else {
      local_120 = *param_5;
      if (local_120 < 0) goto LAB_2c612b02;
      pcVar19 = param_4 + local_120;
      local_e6 = local_e6 + (short)param_5[1];
    }
  }
  iVar6 = FUN_2c62b834(pcVar19,iVar20,(int)*(short *)((int)param_2 + 0x1a),iVar21,0,
                       *(undefined1 *)((int)param_2 + 0x23));
  iVar13 = (int)local_e6;
  iVar6 = iVar6 + local_120;
  do {
    local_110 = iVar6;
    sVar2 = (short)iVar12;
    if ((int)*(short *)(*(int *)(param_1 + 8) + 2) <= iVar13 + sVar5) {
      if (cVar1 == '\x02') {
        iVar6 = FUN_2c62b85c(param_4 + local_120,local_110 - local_120,iVar20,
                             (int)*(short *)((int)param_2 + 0x1a),
                             *(undefined1 *)((int)param_2 + 0x23));
        iVar6 = (short)((param_3[2] + 1) - *param_3) - iVar6;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 1;
        }
        local_e8 = local_e8 + (short)(iVar6 >> 1);
      }
      else if (cVar1 == '\x03') {
        sVar5 = FUN_2c62b85c(param_4 + local_120,local_110 - local_120,iVar20,
                             (int)*(short *)((int)param_2 + 0x1a),
                             *(undefined1 *)((int)param_2 + 0x23));
        local_e8 = (((param_3[2] + 1) - *param_3) - sVar5) + local_e8;
      }
      uVar14 = param_2[1];
      local_108 = param_2[2];
      local_114 = uVar14;
      if (local_108 < uVar14) {
        local_114 = local_108;
        local_108 = uVar14;
      }
      if ((*(byte *)(param_2 + 9) & 3) != 0) {
        FUN_2c6120a0(&local_c8);
        local_c8 = param_2[3];
        iVar6 = (int)*(char *)(iVar20 + 0xe);
        if (iVar6 == 0) {
          iVar6 = 1;
        }
        local_c4 = (short)iVar6;
        local_bd = local_bd & 0xfc | (byte)(((uint)*(byte *)(param_2 + 9) << 0x1a) >> 0x1d) & 3;
        local_be = (undefined1)param_2[8];
      }
      local_f4 = 0;
      uVar22 = FUN_2c61314c(auStack_94);
      sVar5 = local_e8;
      local_90 = param_2[5];
      uVar14 = 0xff000000;
      local_11c = 0xff000000;
      goto LAB_2c612c18;
    }
    iVar6 = FUN_2c62b834(param_4 + local_110,iVar20,(int)*(short *)((int)param_2 + 0x1a),iVar21,0,
                         *(undefined1 *)((int)param_2 + 0x23));
    iVar6 = iVar6 + local_110;
    local_e6 = local_e6 + sVar2;
    iVar13 = (int)local_e6;
    if (((-0x401 < iVar13) && ((param_5 != (int *)0x0) != 0)) && (*param_5 < 0)) {
      *param_5 = local_110;
      param_5[1] = iVar13 - param_3[1];
      param_5[2] = (int)param_3[1];
    }
    iVar8 = iVar20;
    local_120 = local_110;
  } while (param_4[local_110] != '\0');
LAB_2c612a7a:
  if ((*DAT_2c612b3c ^ local_34) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(iVar6,iVar8,*DAT_2c612b3c ^ local_34,0);
  }
  return;
LAB_2c612c18:
  do {
    iVar6 = (int)uVar22;
    pcVar19 = param_4 + local_120;
    iVar8 = (int)((ulonglong)uVar22 >> 0x20);
    if (*pcVar19 == '\0') break;
    local_e4 = 0;
    local_e8 = local_e8 + (short)iVar4;
    if (local_110 != local_120) {
      bVar3 = 0;
      do {
        if (local_108 != 0xffff && local_114 != 0xffff) {
          uVar7 = (*(code *)*DAT_2c612f30)(param_4,local_e4 + local_120);
        }
        else {
          uVar7 = 0;
        }
        FUN_2c62bb98(pcVar19,&local_e0,&local_dc,&local_e4);
        bVar11 = *(byte *)((int)param_2 + 0x23) & 1;
        if ((*(byte *)((int)param_2 + 0x23) & 1) == 0) {
LAB_2c612c9e:
          uVar14 = param_2[3];
          bVar11 = bVar3;
          if (bVar3 == 2) {
            uVar14 = local_11c;
          }
LAB_2c612caa:
          iVar6 = FUN_2c6298c0(iVar20,local_e0,local_dc);
          if (((local_108 != 0xffff && local_114 != 0xffff) && (local_114 <= uVar7)) &&
             (uVar7 < local_108)) {
            local_ce = local_e6;
            local_ca = local_e6 + -1 + sVar2;
            local_d0 = local_e8;
            local_cc = local_e8 + -1 + *(short *)((int)param_2 + 0x1a) + (short)iVar6;
            FUN_2c61319c(param_1,auStack_94,&local_d0);
            uVar14 = param_2[4];
          }
          local_b0 = uVar14;
          (**(code **)(param_1 + 0x1c))(param_1,&local_bc,&local_e8,local_e0);
          if (iVar6 != 0) {
            local_e8 = (short)iVar6 + local_e8 + *(short *)((int)param_2 + 0x1a);
          }
        }
        else {
          if (local_e0 == 0x23) {
            if (bVar3 == 0) {
              local_f4 = local_e4;
              goto LAB_2c612d18;
            }
            if (bVar3 == 1) {
              uVar14 = param_2[3];
              bVar11 = 0;
            }
            else {
              if (bVar3 == 2) {
                bVar11 = 0;
                goto LAB_2c612d18;
              }
              uVar14 = param_2[3];
              bVar11 = bVar3;
            }
            goto LAB_2c612caa;
          }
          if (bVar3 != 1) goto LAB_2c612c9e;
          bVar11 = bVar3;
          if (local_e0 == 0x20) {
            if (local_e4 - local_f4 == 7) {
              pbVar15 = (byte *)(pcVar19 + (local_f4 - 1));
              pbVar9 = local_3c;
              do {
                pbVar15 = pbVar15 + 1;
                *pbVar9 = *pbVar15;
                pbVar9 = pbVar9 + 1;
              } while ((byte *)(pcVar19 + local_f4 + 5) != pbVar15);
              uVar16 = (uint)local_3c[0];
              uVar7 = uVar16 - 0x30 & 0xff;
              if (uVar7 < 10) {
LAB_2c612ffe:
                uVar7 = uVar7 << 4;
              }
              else {
                if ('`' < (char)local_3c[0]) {
                  uVar16 = uVar16 - 0x20 & 0xff;
                }
                if (uVar16 - 0x41 < 6) {
                  uVar7 = uVar16 - 0x37 & 0xff;
                  goto LAB_2c612ffe;
                }
                uVar7 = 0;
              }
              uVar17 = (uint)local_3c[1];
              uVar16 = uVar17 - 0x30 & 0xff;
              if (uVar16 < 10) {
                uVar7 = uVar7 + uVar16;
              }
              else {
                if ('`' < (char)local_3c[1]) {
                  uVar17 = uVar17 - 0x20 & 0xff;
                }
                if (uVar17 - 0x41 < 6) {
                  uVar7 = uVar7 + (uVar17 - 0x37 & 0xff);
                }
              }
              uVar17 = (uint)local_3c[2];
              uVar16 = uVar17 - 0x30 & 0xff;
              if (uVar16 < 10) {
                uVar16 = uVar16 << 4;
              }
              else {
                if ('`' < (char)local_3c[2]) {
                  uVar17 = uVar17 - 0x20 & 0xff;
                }
                if (uVar17 - 0x41 < 6) {
                  uVar16 = (uVar17 - 0x37 & 0xff) << 4;
                }
                else {
                  uVar16 = 0;
                }
              }
              uVar10 = (uint)local_3c[3];
              uVar17 = uVar10 - 0x30 & 0xff;
              if (uVar17 < 10) {
                uVar16 = uVar16 + uVar17;
              }
              else {
                if ('`' < (char)local_3c[3]) {
                  uVar10 = uVar10 - 0x20 & 0xff;
                }
                if (uVar10 - 0x41 < 6) {
                  uVar16 = uVar16 + (uVar10 - 0x37 & 0xff);
                }
              }
              uVar10 = (uint)local_38;
              uVar17 = uVar10 - 0x30 & 0xff;
              if (uVar17 < 10) {
                uVar17 = uVar17 << 4;
              }
              else {
                if ('`' < (char)local_38) {
                  uVar10 = uVar10 - 0x20 & 0xff;
                }
                if (uVar10 - 0x41 < 6) {
                  uVar17 = (uVar10 - 0x37 & 0xff) << 4;
                }
                else {
                  uVar17 = 0;
                }
              }
              uVar10 = (uint)local_37;
              uVar18 = uVar10 - 0x30 & 0xff;
              if (uVar18 < 10) {
                uVar17 = uVar17 + uVar18;
              }
              else {
                if ('`' < (char)local_37) {
                  uVar10 = uVar10 - 0x20 & 0xff;
                }
                if (uVar10 - 0x41 < 6) {
                  uVar17 = uVar17 + (uVar10 - 0x37 & 0xff);
                }
              }
              bVar11 = 2;
              local_11c = local_ec & 0xff000000 | uVar17 & 0xff | (uVar16 & 0xff) << 8 |
                          (uVar7 & 0xff) << 0x10 | 0xff000000;
              local_ec = local_11c;
            }
            else {
              local_11c = param_2[3];
              bVar11 = 2;
            }
          }
        }
LAB_2c612d18:
        bVar3 = bVar11;
      } while (local_e4 < (uint)(local_110 - local_120));
    }
    uVar7 = (uint)*(byte *)(param_2 + 9);
    if ((int)(uVar7 << 0x1e) < 0) {
      iVar6 = (int)local_c4;
      iVar8 = (int)*(short *)(*param_2 + 8);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1;
      }
      local_ce = local_e6 + (short)(iVar6 >> 1) + (short)(iVar8 >> 1);
      local_dc = CONCAT22(local_ce,sVar5);
      local_d0 = local_e8;
      local_c8 = uVar14;
      FUN_2c6120f4(param_1,&local_c8,&local_dc,&local_d0);
      uVar7 = (uint)*(byte *)(param_2 + 9);
    }
    if ((int)(uVar7 << 0x1f) < 0) {
      local_ce = ((local_e6 + *(short *)(*param_2 + 8)) - *(short *)(*param_2 + 10)) -
                 (short)*(char *)(iVar20 + 0xd);
      local_dc = CONCAT22(local_ce,sVar5);
      local_d0 = local_e8;
      local_c8 = uVar14;
      FUN_2c6120f4(param_1,&local_c8,&local_dc,&local_d0);
    }
    pcVar19 = param_4 + local_110;
    iVar6 = FUN_2c62b834(pcVar19,iVar20,(int)*(short *)((int)param_2 + 0x1a),iVar21,0,
                         *(undefined1 *)((int)param_2 + 0x23));
    iVar12 = local_110 + iVar6;
    local_e8 = *param_3;
    if (cVar1 == '\x02') {
      iVar6 = FUN_2c62b85c(pcVar19,iVar6,iVar20,(int)*(short *)((int)param_2 + 0x1a),
                           *(undefined1 *)((int)param_2 + 0x23));
      iVar6 = (short)((param_3[2] + 1) - *param_3) - iVar6;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      local_e8 = local_e8 + (short)(iVar6 >> 1);
    }
    else if (cVar1 == '\x03') {
      iVar6 = FUN_2c62b85c(pcVar19,iVar6,iVar20,(int)*(short *)((int)param_2 + 0x1a),
                           *(undefined1 *)((int)param_2 + 0x23));
      local_e8 = (((param_3[2] + 1) - *param_3) - (short)iVar6) + local_e8;
    }
    uVar22 = CONCAT44(local_110,iVar6);
    local_120 = local_110;
    local_e6 = sVar2 + local_e6;
    iVar8 = local_110;
    local_110 = iVar12;
  } while (local_e6 <= *(short *)(*(int *)(param_1 + 8) + 6));
  goto LAB_2c612a7a;
}


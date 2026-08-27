/* FUN_2c4d9604 @ 0x2c4d9604 */

int FUN_2c4d9604(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                int param_7,undefined4 param_8,int param_9,int param_10,int param_11,int param_12,
                uint param_13)

{
  short sVar1;
  short sVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  short *psVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr13;
  int extraout_s4;
  int extraout_s5;
  int extraout_s6;
  int extraout_s7;
  undefined8 extraout_d4;
  undefined8 extraout_d5;
  undefined1 in_q3 [16];
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  int local_108;
  short *local_104;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_5c;
  
  iVar4 = param_10;
  local_5c = *DAT_2c4d98a0;
  local_98 = param_7 - param_9 >> 1;
  uVar11 = param_13 & 1;
  local_90 = 0;
  iVar12 = param_7 - param_11;
  FUN_2c4d954c(&param_12,&local_90,param_7);
  if (param_1[4] != param_9) {
    FUN_2c4d95b0(param_1,&param_9,&local_98,param_7,param_8,param_6);
  }
  iVar8 = *param_1;
  piVar14 = (int *)(iVar8 + (param_1[6] + 0x3fffffff) * 4);
  if (param_6 < 1) {
    local_108 = 0;
  }
  else {
    local_108 = param_1[5];
    if (0 < local_108) {
      iVar13 = 0;
      piVar17 = param_2;
      while( true ) {
        iVar9 = iVar13 * 4;
        iVar13 = iVar13 + 1;
        param_2 = piVar17 + 1;
        *piVar17 = *(int *)(iVar8 + iVar9);
        local_108 = param_1[5];
        if (local_108 <= iVar13) break;
        iVar8 = *param_1;
        piVar17 = param_2;
      }
    }
    param_1[5] = 0;
  }
  if (param_5 < 1) {
    local_dc = param_7;
    if (param_7 < 0) {
      local_dc = param_7 + 1;
    }
    local_dc = local_dc >> 1;
  }
  else {
    local_104 = (short *)(param_4 + -2);
    local_dc = param_7;
    if (param_7 < 0) {
      local_dc = param_7 + 1;
    }
    local_dc = local_dc >> 1;
    psVar7 = local_104 + param_5;
    iVar8 = param_1[4];
    iVar13 = param_3;
    do {
      if (param_9 != iVar8) {
        FUN_2c4d95b0(param_1,&param_9,&local_98,param_7,param_8,param_6);
      }
      psVar15 = (short *)param_1[1];
      local_94 = local_90;
      FUN_2c4da7c0(iVar13,param_7,&local_94);
      if ((param_12 != 0) && (0 < param_7)) {
        piVar17 = (int *)(iVar13 + -4);
        iVar8 = 0;
        do {
          iVar8 = iVar8 + 1;
          piVar17 = piVar17 + 1;
          *piVar17 = (int)((ulonglong)((longlong)*piVar17 * (longlong)param_12) >> 0x20) << 1;
        } while (param_7 != iVar8);
      }
      local_104 = local_104 + 1;
      iVar8 = *local_104 + local_94;
      if (0x1e < iVar8) {
        iVar8 = 0x1f;
      }
      FUN_2c4d9db4(iVar13,param_7,iVar8);
      if (local_108 < param_6) {
        iVar8 = param_1[3];
        iVar9 = param_9;
        if (param_9 < 0) {
          iVar9 = param_9 + 1;
        }
        local_108 = local_108 + iVar8 + (iVar9 >> 1);
      }
      else {
        iVar8 = param_1[3];
        iVar9 = param_9;
        if (param_9 < 0) {
          iVar9 = param_9 + 1;
        }
        param_2 = (int *)(*param_1 + param_1[5] * 4);
        param_1[5] = iVar8 + (iVar9 >> 1) + param_1[5];
      }
      iVar9 = param_1[9];
      if (iVar9 == 0) {
LAB_2c4d977e:
        iVar9 = param_1[8];
        if (iVar9 == 0) {
          iVar5 = 0;
          piVar17 = piVar14;
          piVar16 = param_2;
          if (iVar8 < 1) {
LAB_2c4d9d60:
            iVar8 = param_9;
            if (param_9 < 0) {
              iVar8 = param_9 + 1;
            }
            iVar8 = iVar8 >> 1;
            goto LAB_2c4d97ae;
          }
          do {
            piVar14 = piVar17 + -1;
            iVar5 = iVar5 + 1;
            param_2 = piVar16 + 1;
            *piVar16 = -*piVar17;
            piVar17 = piVar14;
            piVar16 = param_2;
          } while (iVar5 < param_1[3]);
        }
        else {
          if (iVar8 < 1) goto LAB_2c4d9d60;
          iVar8 = 0;
          piVar17 = piVar14;
          piVar16 = param_2;
          do {
            piVar14 = piVar17 + -1;
            iVar8 = iVar8 + 1;
            param_2 = piVar16 + 1;
            *piVar16 = *piVar17;
            piVar17 = piVar14;
            piVar16 = param_2;
          } while (iVar8 < param_1[3]);
        }
        iVar9 = param_1[8];
        iVar8 = param_9;
        if (param_9 < 0) {
          iVar8 = param_9 + 1;
        }
        iVar8 = iVar8 >> 1;
      }
      else {
        iVar5 = param_9;
        if (param_9 < 0) {
          iVar5 = param_9 + 1;
        }
        if (iVar8 != iVar5 >> 1) goto LAB_2c4d977e;
        if (0 < iVar8) {
          iVar8 = 0;
          piVar17 = piVar14;
          piVar16 = param_2;
          while( true ) {
            iVar5 = iVar8 * 4;
            iVar8 = iVar8 + 1;
            piVar14 = piVar17 + -1;
            param_2 = piVar16 + 1;
            *piVar16 = *(int *)(iVar9 + iVar5) - *piVar17;
            if (param_1[3] <= iVar8) break;
            iVar9 = param_1[9];
            piVar17 = piVar14;
            piVar16 = param_2;
          }
          iVar8 = param_9;
          if (param_9 < 0) {
            iVar8 = param_9 + 1;
          }
          iVar8 = iVar8 >> 1;
        }
        param_1[9] = 0;
        iVar9 = param_1[8];
      }
LAB_2c4d97ae:
      if (local_108 < param_6) {
        local_108 = local_108 + iVar8 + local_98;
        piVar17 = param_2 + param_9 + 0x3fffffff;
      }
      else {
        piVar17 = (int *)(*param_1 + (param_1[5] + 0x3fffffff + iVar8) * 4);
        param_1[5] = iVar8 + local_98 + param_1[5];
      }
      iVar5 = param_1[7];
      piVar16 = (int *)(iVar13 + (param_7 - iVar8) * 4);
      if (iVar9 == 0) {
        if (iVar5 == 0) {
          if (param_1[10] == 0) {
            local_6c = *DAT_2c4d9db0;
            uStack_68 = DAT_2c4d9db0[1];
            uStack_64 = DAT_2c4d9db0[2];
            uStack_60 = DAT_2c4d9db0[3];
            coprocessor_load(0xf,in_cr1,&local_6c);
            if (param_9 < 2) {
              iVar8 = param_9;
              if (param_9 < 0) {
                iVar8 = param_9 + 1;
              }
              iVar8 = iVar8 >> 1;
            }
            else {
              iVar9 = 0;
              piVar10 = param_2;
              do {
                local_8c = (int)*psVar15;
                iVar9 = iVar9 + 4;
                local_88 = (int)psVar15[2];
                local_84 = (int)psVar15[4];
                local_80 = (int)psVar15[6];
                coprocessor_load(0xf,in_cr7,&local_8c);
                local_7c = (int)psVar15[1];
                local_78 = (int)psVar15[3];
                local_74 = (int)psVar15[5];
                local_70 = (int)psVar15[7];
                coprocessor_load(0xf,in_cr5,&local_7c);
                local_a8 = in_q3._0_4_ << 0x10;
                local_a4 = in_q3._4_4_ << 0x10;
                local_a0 = in_q3._8_4_ << 0x10;
                local_9c = in_q3._12_4_ << 0x10;
                coprocessor_load(0xf,in_cr13,&local_a8);
                local_b8 = (int)extraout_d4 << 0x10;
                local_c4 = (int)((ulonglong)extraout_d4 >> 0x20);
                local_b4 = local_c4 << 0x10;
                local_b0 = (int)extraout_d5 << 0x10;
                local_bc = (int)((ulonglong)extraout_d5 >> 0x20);
                local_ac = local_bc << 0x10;
                coprocessor_load(0xf,in_cr8,piVar14);
                coprocessor_function(0xe,2,0,in_cr4,in_cr9,in_cr13);
                coprocessor_load(0xf,in_cr7,piVar16);
                piVar16 = piVar16 + 4;
                coprocessor_load(0xf,in_cr11,&local_b8);
                coprocessor_function(0xe,2,0,in_cr2,in_cr7,in_cr11);
                local_c8 = extraout_s4 - (int)extraout_d4;
                coprocessor_function(0xe,2,0,in_cr6,in_cr7,in_cr13);
                local_c4 = extraout_s5 - local_c4;
                coprocessor_function(0xe,2,0,in_cr8,in_cr9,in_cr11);
                auVar3._8_8_ = unaff_d9;
                auVar3._0_8_ = unaff_d8;
                in_q3 = VectorAdd(in_q3,auVar3,4);
                local_c0 = extraout_s6 - (int)extraout_d5;
                coprocessor_function(0xe,3,7,in_cr7,in_cr9,in_cr2);
                piVar14 = piVar14 + -4;
                local_bc = extraout_s7 - local_bc;
                coprocessor_load(0xf,in_cr5,&local_c8);
                coprocessor_function(0xe,3,7,in_cr5,in_cr9,in_cr2);
                param_2 = piVar10 + 4;
                coprocessor_store(0xf,in_cr5,piVar10);
                local_d8 = -in_q3._0_4_;
                local_d4 = -in_q3._4_4_;
                local_d0 = -in_q3._8_4_;
                local_cc = -in_q3._12_4_;
                coprocessor_load(0xf,in_cr7,&local_d8);
                coprocessor_store(0xf,in_cr6,piVar17);
                piVar17 = piVar17 + -4;
                iVar8 = param_9;
                if (param_9 < 0) {
                  iVar8 = param_9 + 1;
                }
                iVar8 = iVar8 >> 1;
                piVar10 = param_2;
                psVar15 = psVar15 + 8;
              } while (iVar9 < iVar8);
            }
          }
          else {
            if (1 < param_9) {
              piVar10 = (int *)(param_1[10] + iVar8 * 4);
              piVar16 = piVar16 + -1;
              iVar9 = 0;
              piVar18 = piVar17;
              do {
                piVar16 = piVar16 + 1;
                iVar5 = (int)((ulonglong)((longlong)*piVar16 * (longlong)psVar15[iVar9 * 2 + 1]) >>
                             0x10) -
                        (int)((ulonglong)((longlong)*piVar14 * (longlong)psVar15[iVar9 * 2]) >> 0x10
                             );
                piVar10 = piVar10 + -1;
                iVar8 = (int)((ulonglong)((longlong)*piVar10 * (longlong)psVar15[iVar9 * 2 + 1]) >>
                             0x10) -
                        (int)((ulonglong)((longlong)*piVar16 * (longlong)psVar15[iVar9 * 2]) >> 0x10
                             );
                if (iVar5 < 0x40000000) {
                  iVar6 = DAT_2c4d98a4;
                  if (-0x40000000 < iVar5) {
                    iVar6 = iVar5 * 2;
                  }
                  *param_2 = iVar6;
                  if (iVar8 < 0x40000000) goto LAB_2c4d9818;
LAB_2c4d987c:
                  iVar5 = 0x7fffffff;
                }
                else {
                  *param_2 = 0x7fffffff;
                  if (0x3fffffff < iVar8) goto LAB_2c4d987c;
LAB_2c4d9818:
                  iVar5 = DAT_2c4d98a4;
                  if (-0x40000000 < iVar8) {
                    iVar5 = iVar8 * 2;
                  }
                }
                param_2 = param_2 + 1;
                piVar17 = piVar18 + -1;
                *piVar18 = iVar5;
                iVar9 = iVar9 + 1;
                iVar8 = param_9;
                if (param_9 < 0) {
                  iVar8 = param_9 + 1;
                }
                iVar8 = iVar8 >> 1;
                piVar14 = piVar14 + -1;
                piVar18 = piVar17;
              } while (iVar9 < iVar8);
            }
            param_1[10] = 0;
          }
        }
        else {
          if (param_9 < 2) goto LAB_2c4d9d6e;
          psVar15 = psVar15 + -2;
          iVar9 = 0;
          piVar10 = piVar17;
          do {
            psVar15 = psVar15 + 2;
            sVar2 = (short)((uint)*(undefined4 *)psVar15 >> 0x10);
            sVar1 = (short)*(undefined4 *)psVar15;
            iVar8 = (int)((uint6)((int6)*piVar16 * (int6)sVar1 +
                                 (int6)-(int)((ulonglong)((longlong)-*piVar14 * (longlong)sVar2) >>
                                             0x10) * 0x10000) >> 0x10);
            iVar5 = (int)((uint6)((int6)-*piVar14 * (int6)sVar1 +
                                 (int6)(int)((ulonglong)((longlong)*piVar16 * (longlong)sVar2) >>
                                            0x10) * 0x10000) >> 0x10);
            if (iVar5 < 0x40000000) {
              iVar6 = DAT_2c4d9bc0;
              if (-0x40000000 < iVar5) {
                iVar6 = iVar5 << 1;
              }
              *param_2 = iVar6;
              if (iVar8 < 0x40000000) goto LAB_2c4d9b1e;
LAB_2c4d9b7c:
              iVar5 = 0x7fffffff;
            }
            else {
              *param_2 = 0x7fffffff;
              if (0x3fffffff < iVar8) goto LAB_2c4d9b7c;
LAB_2c4d9b1e:
              iVar5 = DAT_2c4d9bc0;
              if (-0x40000000 < iVar8) {
                iVar5 = iVar8 << 1;
              }
            }
            param_2 = param_2 + 1;
            piVar17 = piVar10 + -1;
            *piVar10 = iVar5;
            iVar9 = iVar9 + 1;
            iVar8 = param_9;
            if (param_9 < 0) {
              iVar8 = param_9 + 1;
            }
            iVar8 = iVar8 >> 1;
            piVar10 = piVar17;
            piVar14 = piVar14 + -1;
            piVar16 = piVar16 + 1;
          } while (iVar9 < iVar8);
        }
LAB_2c4d99a0:
        iVar9 = param_1[9];
        if (iVar9 == 0) {
          iVar5 = param_1[7];
        }
        else {
          if (1 < param_9) {
            iVar5 = 0;
            piVar14 = param_2 + (-1 - iVar8);
            while( true ) {
              iVar8 = iVar5 * 4;
              iVar5 = iVar5 + 1;
              piVar14 = piVar14 + 1;
              *piVar14 = *piVar14 + *(int *)(iVar9 + iVar8);
              iVar8 = param_9;
              if (param_9 < 0) {
                iVar8 = param_9 + 1;
              }
              iVar8 = iVar8 >> 1;
              if (iVar8 <= iVar5) break;
              iVar9 = param_1[9];
            }
          }
          iVar5 = param_1[7];
LAB_2c4d9a60:
          param_1[9] = 0;
        }
      }
      else {
        if (iVar5 != 0) {
          if (param_9 < 2) goto LAB_2c4d9d6e;
          psVar15 = psVar15 + -2;
          iVar9 = 0;
          piVar10 = piVar17;
          do {
            psVar15 = psVar15 + 2;
            sVar2 = (short)((uint)*(undefined4 *)psVar15 >> 0x10);
            sVar1 = (short)*(undefined4 *)psVar15;
            iVar8 = (int)((uint6)((int6)*piVar16 * (int6)sVar1 +
                                 (int6)-(int)((ulonglong)((longlong)*piVar14 * (longlong)sVar2) >>
                                             0x10) * 0x10000) >> 0x10);
            iVar5 = (int)((uint6)((int6)*piVar14 * (int6)sVar1 +
                                 (int6)(int)((ulonglong)((longlong)*piVar16 * (longlong)sVar2) >>
                                            0x10) * 0x10000) >> 0x10);
            if (iVar5 < 0x40000000) {
              iVar6 = DAT_2c4d9bc0;
              if (-0x40000000 < iVar5) {
                iVar6 = iVar5 << 1;
              }
              *param_2 = iVar6;
              if (iVar8 < 0x40000000) goto LAB_2c4d9a8a;
LAB_2c4d9ae6:
              iVar5 = 0x7fffffff;
            }
            else {
              *param_2 = 0x7fffffff;
              if (0x3fffffff < iVar8) goto LAB_2c4d9ae6;
LAB_2c4d9a8a:
              iVar5 = DAT_2c4d9bc0;
              if (-0x40000000 < iVar8) {
                iVar5 = iVar8 << 1;
              }
            }
            param_2 = param_2 + 1;
            piVar17 = piVar10 + -1;
            *piVar10 = iVar5;
            iVar9 = iVar9 + 1;
            iVar8 = param_9;
            if (param_9 < 0) {
              iVar8 = param_9 + 1;
            }
            iVar8 = iVar8 >> 1;
            piVar10 = piVar17;
            piVar14 = piVar14 + -1;
            piVar16 = piVar16 + 1;
          } while (iVar9 < iVar8);
          goto LAB_2c4d99a0;
        }
        if (1 < param_9) {
          psVar15 = psVar15 + -2;
          iVar9 = 0;
          piVar10 = piVar17;
          do {
            psVar15 = psVar15 + 2;
            sVar2 = (short)((uint)*(undefined4 *)psVar15 >> 0x10);
            sVar1 = (short)*(undefined4 *)psVar15;
            iVar5 = (int)((uint6)((int6)*piVar16 * (int6)sVar1 +
                                 (int6)-(int)((ulonglong)((longlong)*piVar14 * (longlong)sVar2) >>
                                             0x10) * 0x10000) >> 0x10);
            iVar8 = (int)((uint6)((int6)*piVar14 * (int6)sVar1 +
                                 (int6)(int)((ulonglong)((longlong)*piVar16 * (longlong)sVar2) >>
                                            0x10) * 0x10000) >> 0x10);
            if (iVar8 < 0x40000000) {
              iVar6 = DAT_2c4d9bc0;
              if (-0x40000000 < iVar8) {
                iVar6 = iVar8 << 1;
              }
              *param_2 = iVar6;
              if (-0x40000000 < iVar5) goto LAB_2c4d98ba;
LAB_2c4d991a:
              iVar8 = 0x7fffffff;
            }
            else {
              *param_2 = 0x7fffffff;
              if (iVar5 < -0x3fffffff) goto LAB_2c4d991a;
LAB_2c4d98ba:
              iVar8 = DAT_2c4d9bc0;
              if (iVar5 < 0x40000000) {
                iVar8 = iVar5 * -2;
              }
            }
            param_2 = param_2 + 1;
            piVar17 = piVar10 + -1;
            *piVar10 = iVar8;
            iVar9 = iVar9 + 1;
            iVar8 = param_9;
            if (param_9 < 0) {
              iVar8 = param_9 + 1;
            }
            iVar8 = iVar8 >> 1;
            piVar10 = piVar17;
            piVar14 = piVar14 + -1;
            piVar16 = piVar16 + 1;
          } while (iVar9 < iVar8);
          goto LAB_2c4d99a0;
        }
LAB_2c4d9d6e:
        if (param_1[9] != 0) goto LAB_2c4d9a60;
      }
      param_2 = param_2 + local_98 + iVar8;
      piVar14 = (int *)(iVar13 + ((param_7 + 0x3fffffff) - iVar8) * 4);
      if (iVar5 == 0) {
        iVar9 = 0;
        piVar17 = piVar17 + iVar8 + 1;
        if (0 < local_98) {
          do {
            iVar9 = iVar9 + 1;
            *piVar17 = -*piVar14;
            piVar14 = piVar14 + -1;
            piVar17 = piVar17 + 1;
          } while (iVar9 < local_98);
LAB_2c4d99dc:
          iVar5 = param_1[7];
        }
      }
      else if (0 < local_98) {
        iVar9 = 0;
        piVar17 = piVar17 + iVar8 + 1;
        do {
          iVar9 = iVar9 + 1;
          *piVar17 = *piVar14;
          piVar14 = piVar14 + -1;
          piVar17 = piVar17 + 1;
        } while (iVar9 < local_98);
        goto LAB_2c4d99dc;
      }
      param_1[3] = iVar12 >> 1;
      param_1[8] = iVar5;
      param_1[4] = param_11;
      param_1[2] = param_7;
      param_1[1] = iVar4;
      param_1[7] = uVar11;
      piVar14 = (int *)((local_dc + 0x3fffffff) * 4 + iVar13);
      iVar13 = iVar13 + param_7 * 4;
      iVar8 = param_11;
    } while (psVar7 != local_104);
  }
  FUN_2c674668(*param_1 + (param_1[6] - local_dc) * 4,param_3 + param_7 * (param_5 + -1) * 4,
               local_dc << 2);
  if (*DAT_2c4d9dac == local_5c) {
    return local_108;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


/* FUN_2c4af188 @ 0x2c4af188 */

int FUN_2c4af188(int *param_1,uint *param_2,undefined4 param_3,int param_4,ushort param_5,
                undefined4 param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *extraout_r2;
  uint uVar10;
  int extraout_r2_00;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  uint local_ac;
  uint local_a8;
  int local_a4;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  
  uVar12 = (uint)param_5;
  local_34 = *DAT_2c4af244;
  if ((3 < DAT_2c4af248 + uVar12) && ((short)param_2[0x14] != 0x1f04)) {
    uVar4 = (uint)*(byte *)((int)param_2 + 0xd);
    if (uVar4 - 100 < 3) {
      if (*(char *)((int)param_2 + 0xa9) == '\0') {
LAB_2c4af1c8:
        if (((((3 < uVar4 - 0x15) &&
              (uVar14 = (uint)*(byte *)((int)param_1 + 0xd), 5 < uVar14 - 0x76)) &&
             ((9 < uVar4 - 0x76 &&
              (((char)param_2[0x2a] == '\0' && ((short)param_2[0x14] != 0x1f02)))))) &&
            (1 < DAT_2c4af24c + uVar12)) &&
           (((uVar12 == 0 || (0x18 < uVar14)) || (-1 < (int)((DAT_2c4af250 >> uVar14) << 0x1f))))) {
          if (*(char *)((int)param_2 + 0x52) == '\x01') {
            uVar15 = 0x8000;
          }
          else {
            uVar15 = 0;
          }
          if (param_4 != 0) {
            uVar16 = in_fpscr & 0xfffffff;
            in_fpscr = uVar16 | (uint)(*(float *)(param_4 + 4) == 0.0) << 0x1e;
            if (((((byte)(in_fpscr >> 0x1e) == 0) ||
                 (in_fpscr = uVar16 | (uint)(*(float *)(param_4 + 0xc) == 0.0) << 0x1e,
                 (byte)(in_fpscr >> 0x1e) == 0)) ||
                ((in_fpscr = uVar16 | (uint)(*(float *)(param_4 + 0x18) == 0.0) << 0x1e,
                 (byte)(in_fpscr >> 0x1e) == 0 ||
                 ((in_fpscr = uVar16 | (uint)(*(float *)(param_4 + 0x1c) == 0.0) << 0x1e,
                  (byte)(in_fpscr >> 0x1e) == 0 ||
                  (in_fpscr = uVar16 | (uint)(*(float *)(param_4 + 0x20) == 1.0) << 0x1e,
                  (byte)(in_fpscr >> 0x1e) == 0)))))) &&
               ((DAT_2c4af55c + uVar12 < 2 || (uVar12 == 0x2000)))) {
              uVar15 = 0x8000;
            }
          }
          if (uVar14 == 0xb) {
            if (uVar4 - 10 < 2) {
              local_a8 = 0;
            }
            else {
              local_a8 = 0x80000000;
            }
          }
          else {
            local_a8 = 0;
          }
          iVar17 = FUN_2c4ad834(uVar4,param_2[2]);
          if (iVar17 != 0) goto LAB_2c4af212;
          uVar4 = *param_2;
          uVar14 = param_2[1];
          if (extraout_r2 == (uint *)0x0) {
            uVar16 = 0;
            local_ac = 0;
            uVar10 = uVar14;
LAB_2c4af328:
            uVar22 = FUN_2c4adaa4(DAT_2c4af560,&local_84,param_4);
            iVar9 = local_80;
            if ((int)uVar22 != 0) {
              fVar20 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
              iVar5 = FUN_2c4adaa4(DAT_2c4af560,fVar20,&local_84,(int)((ulonglong)uVar22 >> 0x20),
                                   local_84);
              iVar2 = local_80;
              iVar7 = local_84;
              if (iVar5 != 0) {
                fVar21 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
                iVar6 = FUN_2c4adaa4(fVar21,fVar20,&local_84);
                iVar3 = local_80;
                iVar5 = local_84;
                if ((iVar6 != 0) &&
                   (iVar6 = FUN_2c4adaa4(fVar21,DAT_2c4af560,&local_84), iVar6 != 0)) {
                  iVar18 = iVar7;
                  iVar6 = extraout_r2_00;
                  if (iVar7 < extraout_r2_00) {
                    iVar18 = extraout_r2_00;
                    iVar6 = iVar7;
                  }
                  if (iVar5 <= iVar6) {
                    iVar6 = iVar5;
                  }
                  if (iVar18 < iVar5) {
                    iVar18 = iVar5;
                  }
                  if (local_84 <= iVar6) {
                    iVar6 = local_84;
                  }
                  if (local_84 < iVar18) {
                    local_84 = iVar18;
                  }
                  if (*(int *)(DAT_2c4af564 + 0x6d8) == 0) {
                    local_a4 = *param_1;
                    iVar18 = param_1[1];
                    iVar7 = 0;
                    iVar5 = 0;
                  }
                  else {
                    iVar7 = *(int *)(DAT_2c4af564 + 0x6e0);
                    iVar5 = *(int *)(DAT_2c4af564 + 0x6e4);
                    local_a4 = *(int *)(DAT_2c4af564 + 0x6e8);
                    iVar18 = *(int *)(DAT_2c4af564 + 0x6ec);
                  }
                  if (iVar7 < iVar6) {
                    iVar7 = iVar6;
                  }
                  if (local_84 < local_a4) {
                    local_a4 = local_84 - iVar7;
                  }
                  else {
                    local_a4 = local_a4 - iVar7;
                  }
                  if (local_a4 < 1) goto LAB_2c4af212;
                  iVar6 = iVar2;
                  if (iVar2 < iVar9) {
                    iVar6 = iVar9;
                    iVar9 = iVar2;
                  }
                  if (iVar3 <= iVar9) {
                    iVar9 = iVar3;
                  }
                  if (iVar6 < iVar3) {
                    iVar6 = iVar3;
                  }
                  if (local_80 <= iVar9) {
                    iVar9 = local_80;
                  }
                  if (local_80 < iVar6) {
                    local_80 = iVar6;
                  }
                  if (iVar9 < iVar5) {
                    iVar9 = iVar5;
                  }
                  if (iVar18 < local_80) {
                    iVar18 = iVar18 - iVar9;
                  }
                  else {
                    iVar18 = local_80 - iVar9;
                  }
                  if ((iVar18 < 1) || (iVar17 = FUN_2c4ae5a0(param_1), iVar17 != 0))
                  goto LAB_2c4af212;
                  iVar17 = FUN_2c4ad904(&local_58,param_4);
                  if (iVar17 == 0) goto LAB_2c4af53a;
                  local_7c = local_58 / fVar21;
                  local_78 = local_4c / fVar20;
                  local_70 = local_54 / fVar21;
                  local_6c = local_48 / fVar20;
                  local_74 = local_40;
                  local_60 = (local_44 + (local_4c + local_48) * 0.5) / fVar20;
                  local_68 = local_3c;
                  local_64 = (local_50 + (local_58 + local_54) * 0.5) / fVar21;
                  local_5c = local_38 + (local_40 + local_3c) * 0.5;
                  if ((ushort)param_2[0x14] == 0) {
switchD_2c4af51a_caseD_0:
                    uVar14 = 0x1000;
                  }
                  else {
                    uVar8 = (ushort)param_2[0x14] - 0x1f00;
                    uVar14 = 0;
                    if ((uVar8 & 0xffff) < 5) {
                      switch(uVar8) {
                      case 0:
                        goto switchD_2c4af51a_caseD_0;
                      case 1:
                        uVar14 = 0x2000;
                        break;
                      case 2:
                        uVar14 = 0x3000;
                        break;
                      default:
                        uVar14 = 0;
                        break;
                      case 4:
                        uVar14 = 0x6000;
                      }
                    }
                  }
                  uVar12 = uVar12 + 0xdfff & 0xffff;
                  if (uVar12 < 0xe) {
                    uVar12 = *(uint *)(DAT_2c4af834 + uVar12 * 4);
                  }
                  else {
                    uVar12 = 0;
                  }
                  if ((char)param_2[3] == '\0') {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = 0x10000000;
                  }
                  if ((char)param_1[3] == '\0') {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = 0x40;
                  }
                  uVar1 = param_2[0x2a];
                  if (uVar12 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = 0x80;
                  }
                  iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa00,
                                        DAT_2c4af83c |
                                        *(uint *)(DAT_2c4af838 + 0x764) |
                                        *(uint *)(DAT_2c4af838 + 0x730) |
                                        *(uint *)(DAT_2c4af838 + 0x734) | uVar11 |
                                        *(uint *)(DAT_2c4af838 + 0x76c) | uVar15 | uVar14 | uVar12);
                  if ((((((iVar17 == 0) &&
                         (iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa02,param_6), iVar17 == 0)) &&
                        (iVar17 = FUN_2c4add48(0xa18,&local_64), iVar17 == 0)) &&
                       ((iVar17 = FUN_2c4add48(0xa19,&local_60), iVar17 == 0 &&
                        (iVar17 = FUN_2c4add48(0xa1a,&local_5c), iVar17 == 0)))) &&
                      (iVar17 = FUN_2c4add48(0xa1c,&local_7c), iVar17 == 0)) &&
                     (((iVar17 = FUN_2c4add48(0xa1d,&local_78), iVar17 == 0 &&
                       (iVar17 = FUN_2c4add48(0xa1e,&local_74), iVar17 == 0)) &&
                      ((iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa1f,1), iVar17 == 0 &&
                       (((iVar17 = FUN_2c4add48(0xa20,&local_70), iVar17 == 0 &&
                         (iVar17 = FUN_2c4add48(0xa21,&local_6c), iVar17 == 0)) &&
                        (iVar17 = FUN_2c4add48(0xa22,&local_68), iVar17 == 0)))))))) {
                    uVar12 = (uint)*(byte *)((int)param_2 + 0xd);
                    if ((uVar12 - 0xd < 3) || (uVar12 - 0x15 < 4)) {
                      if (*(char *)((int)param_2 + 0x1d) == '\x01') {
                        uVar14 = 0x8000;
                      }
                      else {
                        uVar14 = 0;
                      }
                      if ((char)param_2[7] == '\0') {
                        uVar15 = 0x40;
                      }
                      else if ((char)param_2[7] == '\x01') {
                        uVar15 = 0x50;
                      }
                      else {
                        uVar15 = 0;
                      }
                    }
                    else {
                      uVar14 = 0;
                      uVar15 = 0;
                    }
                    if ((int)(uVar12 << 0x18) < 0) {
                      uVar12 = 0xf;
                    }
                    else {
                      uVar12 = *(uint *)(DAT_2c4af840 + uVar12 * 4);
                    }
                    iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa25,
                                          uVar12 | param_7 | (uint)(byte)uVar1 << 0x19 | local_a8 |
                                                   uVar13 | uVar14 | uVar15);
                    if ((((iVar17 == 0) &&
                         ((param_2[8] == 0 ||
                          (iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa51), iVar17 == 0)))) &&
                        ((param_2[9] == 0 ||
                         (iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa53), iVar17 == 0)))) &&
                       (((iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa27,0), iVar17 == 0 &&
                         (iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa29,param_2[6]), iVar17 == 0)) &&
                        (iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa34,0), iVar17 == 0)))) {
                      uVar12 = param_2[2];
                      if (*(byte *)((int)param_2 + 0xd) - 0x76 < 6) {
                        uVar12 = (int)uVar12 / 3 << 2;
                      }
                      iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa2b,uVar8 | uVar12);
                      if (((iVar17 == 0) &&
                          (iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa2d,uVar16 | local_ac << 0x10),
                          iVar17 == 0)) &&
                         ((iVar17 = FUN_2c4ae148(DAT_2c4af838,0xa2f,uVar4 | uVar10 << 0x10),
                          iVar17 == 0 &&
                          ((iVar17 = FUN_2c4ae004(iVar7,iVar9,local_a4,iVar18), iVar17 == 0 &&
                           (*(int *)(DAT_2c4af838 + 0x708) == 0)))))) {
                        iVar17 = FUN_2c4ae20c();
                      }
                    }
                  }
                  goto LAB_2c4af212;
                }
              }
            }
          }
          else {
            uVar16 = *extraout_r2;
            local_ac = extraout_r2[1];
            if ((uVar16 <= uVar4) && (local_ac <= uVar14)) {
              uVar8 = extraout_r2[2];
              uVar10 = extraout_r2[3];
              if ((uVar8 != 0) && (uVar10 != 0)) {
                bVar19 = uVar16 + uVar8 <= uVar4;
                if (bVar19) {
                  uVar4 = uVar8;
                }
                if (!bVar19) {
                  uVar4 = uVar4 - uVar16;
                }
                if (uVar14 < local_ac + uVar10) {
                  uVar10 = uVar14 - local_ac;
                }
                goto LAB_2c4af328;
              }
            }
          }
LAB_2c4af53a:
          iVar17 = 1;
          goto LAB_2c4af212;
        }
      }
    }
    else if (((uVar4 != 0x75) && (4 < uVar4 - 0x10)) && (1 < uVar4 - 0xe)) goto LAB_2c4af1c8;
  }
  iVar17 = 7;
LAB_2c4af212:
  if (*DAT_2c4af244 == local_34) {
    return iVar17;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


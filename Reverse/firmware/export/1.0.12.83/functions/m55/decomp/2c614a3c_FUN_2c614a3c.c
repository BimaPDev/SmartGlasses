/* FUN_2c614a3c @ 0x2c614a3c */

void FUN_2c614a3c(int param_1,int *param_2,short *param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  uint *puVar12;
  uint *puVar13;
  undefined4 extraout_r1_03;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  short local_cc;
  short local_ca;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  short local_c0;
  short local_be;
  undefined1 auStack_bc [36];
  uint uStack_98;
  uint local_94 [22];
  int local_3c;
  
  local_3c = *DAT_2c614d44;
  if (param_4 == 0) {
    FUN_2c61314c(local_94);
    local_94[1] = 0xffffffff;
    FUN_2c61319c(param_1,local_94,param_3);
    FUN_2c6129e4(auStack_bc);
    FUN_2c612a20(param_1,auStack_bc,param_3,DAT_2c614d48,0);
  }
  else if (2 < *(byte *)((int)param_2 + 0x31)) {
    if (*(code **)(param_1 + 0x18) == (code *)0x0) {
      iVar6 = FUN_2c6132c8(param_4,param_2[0xb],param_2[0xd]);
      if (iVar6 != 0) {
        uVar14 = *(byte *)(iVar6 + 0x14) & 0x1f;
        uVar16 = *(byte *)(iVar6 + 0x14) & 0x1f;
        if ((uVar14 == 3) || (uVar14 == 6)) {
          if (uVar16 == 9) goto LAB_2c614da4;
          uVar16 = 6;
LAB_2c614b3e:
          iVar18 = *(int *)(iVar6 + 0x20);
          if (iVar18 == 0) {
            if (*(int *)(iVar6 + 0x18) == 0) goto LAB_2c614c42;
            bVar5 = false;
            puVar9 = (uint *)0x0;
LAB_2c614b54:
            local_c4 = *param_3;
            local_c2 = param_3[1];
            local_c0 = param_3[2];
            local_be = param_3[3];
            if (*param_2 != 0x1000000) {
              FUN_2c611f58(&local_c4,(int)(short)((local_c0 + 1) - local_c4),
                           (int)(short)((local_be + 1) - local_c2),(int)(short)*param_2,
                           *(short *)((int)param_2 + 2),param_2 + 1,
                           *(undefined1 *)((int)param_2 + 0x39));
              local_c4 = local_c4 + *param_3;
              local_c2 = local_c2 + param_3[1];
              local_c0 = *param_3 + local_c0;
              local_be = param_3[1] + local_be;
            }
            uVar20 = FUN_2c62a6b4(auStack_bc,*(undefined4 *)(param_1 + 8),&local_c4);
            uVar7 = (undefined4)((ulonglong)uVar20 >> 0x20);
            if ((int)uVar20 == 0) {
              FUN_2c612998(iVar6);
              if (puVar9 != (uint *)0x0) {
                FUN_2c62bea8(puVar9);
              }
              goto LAB_2c614a6c;
            }
            uVar17 = *(undefined4 *)(param_1 + 8);
            *(undefined1 **)(param_1 + 8) = auStack_bc;
            if (bVar5) {
              if (*(code **)(param_1 + 0x14) != (code *)0x0) {
                (**(code **)(param_1 + 0x14))(param_1,param_2,param_3,puVar9,uVar16);
                uVar7 = extraout_r1;
              }
              if (puVar9 != (uint *)0x0) {
                FUN_2c62bea8(puVar9);
                uVar7 = extraout_r1_00;
              }
            }
            else {
              if (*(code **)(param_1 + 0x14) != (code *)0x0) {
                (**(code **)(param_1 + 0x14))
                          (param_1,param_2,param_3,*(undefined4 *)(iVar6 + 0x18),uVar16);
              }
              FUN_2c62c040(puVar9);
              uVar7 = extraout_r1_03;
            }
            *(undefined4 *)(param_1 + 8) = uVar17;
          }
          else {
LAB_2c614bec:
            FUN_2c61314c(local_94);
            local_94[1] = 0xffffffff;
            FUN_2c61319c(param_1,local_94,param_3);
            FUN_2c6129e4(auStack_bc);
            FUN_2c612a20(param_1,auStack_bc,param_3,iVar18,0);
            uVar7 = extraout_r1_01;
          }
        }
        else {
          if (uVar16 != 0xe) {
            if (uVar16 == 0x14) goto LAB_2c614b3e;
            if ((uVar14 < 0xf) && ((1 << uVar14 & 0x7fa4U) != 0)) {
              if (uVar16 != 9) {
                uVar16 = 5;
                goto LAB_2c614b3e;
              }
            }
            else if (uVar16 != 9) {
              uVar16 = 4;
              goto LAB_2c614b3e;
            }
LAB_2c614da4:
            uVar4 = (param_3[2] + 1) - *param_3;
            iVar15 = (int)(short)uVar4;
            iVar18 = (int)(short)((param_3[3] + 1) - param_3[1]);
            puVar9 = (uint *)FUN_2c62be98(0x40,iVar15 * iVar18 * 4);
            if (puVar9 != (uint *)0x0) {
              iVar8 = *(int *)(param_4 + 8);
              puVar12 = &uStack_98;
              iVar19 = iVar8;
              do {
                uVar14 = 0;
                puVar12 = puVar12 + 1;
                pbVar10 = (byte *)(iVar19 + -1);
                uVar16 = 0;
                do {
                  pbVar10 = pbVar10 + 1;
                  uVar3 = uVar14 & 0xff;
                  uVar14 = uVar14 + 8;
                  uVar16 = uVar16 | (uint)*pbVar10 << uVar3;
                } while (uVar14 != 0x20);
                iVar19 = iVar19 + 4;
                *puVar12 = uVar16;
              } while (local_94 + 0xf != puVar12);
              iVar8 = iVar8 + 0x40;
              if ((uVar4 & 1) == 0) {
                if (iVar15 < 0) {
                  iVar15 = iVar15 + 1;
                }
                iVar15 = iVar15 >> 1;
              }
              else {
                if (iVar15 < 0) {
                  iVar15 = iVar15 + 1;
                }
                iVar15 = (int)(short)((short)(iVar15 >> 1) + 1);
              }
              if (0 < iVar18) {
                iVar19 = 0;
                puVar12 = puVar9;
                do {
                  if (iVar15 != 0) {
                    pbVar10 = (byte *)(iVar8 + -1);
                    iVar11 = 0;
                    puVar13 = puVar12;
                    do {
                      pbVar10 = pbVar10 + 1;
                      bVar1 = *pbVar10;
                      *puVar13 = local_94[bVar1 >> 4];
                      if (((uVar4 & 1) == 0) || (iVar15 + -1 != iVar11)) {
                        puVar12 = puVar13 + 2;
                        puVar13[1] = local_94[bVar1 & 0xf];
                      }
                      else {
                        puVar12 = puVar13 + 1;
                      }
                      iVar11 = iVar11 + 1;
                      puVar13 = puVar12;
                    } while (iVar11 != iVar15);
                    iVar8 = iVar8 + iVar15;
                  }
                  iVar19 = iVar19 + 1;
                } while (iVar18 != iVar19);
              }
            }
            iVar18 = *(int *)(iVar6 + 0x20);
            if (iVar18 == 0) {
              bVar5 = true;
              uVar16 = 5;
              goto LAB_2c614b54;
            }
            goto LAB_2c614bec;
          }
          if (*param_2 == 0x1000000) goto LAB_2c614b3e;
          iVar18 = *(int *)(iVar6 + 0x20);
          *(undefined4 *)(iVar6 + 0x18) = 0;
          if (iVar18 != 0) goto LAB_2c614bec;
          uVar16 = 5;
LAB_2c614c42:
          iVar18 = FUN_2c62a6b4(&local_cc,*(undefined4 *)(param_1 + 8),param_3);
          if (iVar18 == 0) {
            FUN_2c612998(iVar6);
            goto LAB_2c614a6c;
          }
          iVar18 = (int)(short)((local_c8 + 1) - local_cc);
          uVar7 = FUN_2c62bf1c(iVar18 << 2);
          local_c4 = local_cc;
          local_c2 = local_ca;
          local_c0 = local_c8;
          local_be = local_c6;
          uVar17 = *(undefined4 *)(param_1 + 8);
          FUN_2c62a640(&local_c4,1);
          iVar19 = (int)local_ca;
          iVar15 = iVar19 - param_3[1];
          sVar2 = *param_3;
          if (iVar19 <= local_c6) {
            do {
              iVar8 = FUN_2c62a6b4(auStack_bc,uVar17,&local_c4);
              if (iVar8 != 0) {
                iVar8 = FUN_2c612974(iVar6,(int)(short)(local_cc - sVar2),(int)(short)iVar15,iVar18,
                                     uVar7);
                if (iVar8 != 1) {
                  FUN_2c612998(iVar6);
                  FUN_2c62c040(uVar7);
                  FUN_2c612998(iVar6);
                  *(undefined4 *)(param_1 + 8) = uVar17;
                  goto LAB_2c614a98;
                }
                *(undefined1 **)(param_1 + 8) = auStack_bc;
                if (*(code **)(param_1 + 0x14) != (code *)0x0) {
                  (**(code **)(param_1 + 0x14))(param_1,param_2,&local_c4,uVar7,uVar16);
                }
                iVar15 = iVar15 + 1;
                local_c2 = local_c2 + 1;
                local_be = local_be + 1;
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 <= local_c6);
          }
          *(undefined4 *)(param_1 + 8) = uVar17;
          FUN_2c62c040(uVar7);
          uVar7 = extraout_r1_02;
        }
        if (*DAT_2c614d44 == local_3c) {
          FUN_2c612998(iVar6,uVar7,0,0);
          return;
        }
        goto LAB_2c614f28;
      }
    }
    else {
      iVar6 = (**(code **)(param_1 + 0x18))();
      if (iVar6 != 0) goto LAB_2c614a6c;
    }
LAB_2c614a98:
    FUN_2c61314c(local_94);
    local_94[1] = 0xffffffff;
    FUN_2c61319c(param_1,local_94,param_3);
    FUN_2c6129e4(auStack_bc);
    FUN_2c612a20(param_1,auStack_bc,param_3,DAT_2c614d48,0);
  }
LAB_2c614a6c:
  if (*DAT_2c614d44 == local_3c) {
    return;
  }
LAB_2c614f28:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


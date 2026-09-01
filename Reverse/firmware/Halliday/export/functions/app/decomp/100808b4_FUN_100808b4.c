/* FUN_100808b4 @ 0x100808b4 */

undefined4 FUN_100808b4(int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  short *psVar11;
  uint uVar12;
  ushort *puVar13;
  short sVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  char *pcVar19;
  byte bVar20;
  undefined2 uVar21;
  ushort uVar22;
  int iVar23;
  code *pcVar24;
  byte *pbVar25;
  uint uVar26;
  undefined4 *puVar27;
  int *piVar29;
  ushort uVar30;
  uint uVar31;
  int iVar32;
  byte *pbVar33;
  int iVar34;
  undefined2 *puVar35;
  undefined1 *puVar36;
  int *piVar37;
  char *pcVar38;
  undefined4 *puVar39;
  int *piVar40;
  uint uVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  undefined8 uVar45;
  char *local_88;
  ushort *local_84;
  char *local_80;
  uint local_70;
  char local_5c [6];
  short local_56;
  undefined4 local_4c;
  ushort local_46;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  undefined4 *puVar28;
  
  iVar23 = param_1[3];
  FUN_10121e54();
  FUN_1011ea48(iVar23 + 4,0,0x60);
  FUN_1011ea48(iVar23 + 100,0xff,0x10);
  bVar20 = *(byte *)(iVar23 + 0x10d4);
  uVar30 = *(ushort *)(iVar23 + 0xc0);
  *(byte *)(iVar23 + 0x20) = bVar20;
  puVar36 = (undefined1 *)(iVar23 + 0x30);
  for (uVar9 = 0; puVar3 = DAT_10080bf8, uVar9 < bVar20; uVar9 = uVar9 + 1) {
    *puVar36 = *(undefined1 *)(iVar23 + 0x10d5);
    uVar22 = *(ushort *)(iVar23 + 0x10da);
    *(uint *)(puVar36 + 4) = (uint)uVar30;
    *(undefined4 *)(puVar36 + 0xc) = 8;
    *(uint *)(puVar36 + 8) = (uVar22 - 1) - (uint)uVar30;
    puVar36 = puVar36 + 0x1c;
  }
  if (*(char *)(*param_1 + 7) == '\0') {
    local_3c = *DAT_10080bf8;
    uStack_38 = DAT_10080bf8[1];
    uStack_34 = DAT_10080bf8[2];
    uStack_30 = DAT_10080bf8[3];
    piVar29 = (int *)param_1[3];
    piVar29[0x7ad] = -1;
    piVar29[0x7ae] = -1;
    if (*(ushort *)(*piVar29 + 0xe) < 0x201) {
      iVar32 = 0;
      piVar10 = piVar29 + 0x7af;
      piVar40 = &local_3c;
      do {
        iVar15 = *piVar40 / (int)(uint)*(ushort *)(*piVar29 + 0xe);
        piVar37 = (int *)((int)piVar10 + 1);
        *(char *)piVar10 = (char)iVar15;
        FUN_10121e98(param_1,*DAT_10080bfc,iVar15,0,0xf,0,&local_4c);
        if ((char)local_4c == -1) {
          if (local_46 == 0x80bb) {
            piVar29[0x7ad] = iVar15;
          }
          else if (local_46 == 0x80ee) {
            piVar29[0x7ae] = iVar15;
          }
        }
        else {
          iVar32 = iVar32 + 1;
          if (2 < iVar32) {
            if ((*(char *)(*param_1 + 0x10) == '\0') ||
               (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 == (code *)0x0)) goto LAB_100809a6;
            uVar16 = 0x88b;
            puVar7 = PTR_s_Error___s__d_BadBlks_more_than_2_10080c04;
            goto LAB_100809a4;
          }
        }
        piVar10 = piVar37;
        piVar40 = piVar40 + 1;
      } while (piVar29 + 0x7b0 != piVar37);
      iVar32 = piVar29[0x7ae];
      if (piVar29[0x7ad] == -1) {
        iVar15 = *param_1;
        if (iVar32 == -1) {
          if ((*(char *)(iVar15 + 0x10) != '\0') &&
             (pcVar24 = *(code **)(iVar15 + 0xc), pcVar24 != (code *)0x0)) {
            uVar16 = 0x89a;
            puVar7 = PTR_s_Error___s__d_Can_t_find_mapblks_f_10080c14;
LAB_100809a4:
            (*pcVar24)(puVar7,PTR_s_ScanSearchMbrecBlk_10080c00,uVar16);
          }
        }
        else if ((*(char *)(iVar15 + 0x10) != '\0') &&
                (pcVar24 = *(code **)(iVar15 + 0xc), pcVar24 != (code *)0x0)) {
          uVar16 = 0x89e;
          puVar7 = PTR_s_Error___s__d_Can_t_find_mapblk_f_10080c18;
          goto LAB_100809a4;
        }
      }
      else if (iVar32 != -1) {
        if ((3 < *(byte *)(*param_1 + 0x10)) &&
           (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
          (*pcVar24)(PTR_s_Debug___s__d_mbrec_0__>blk_d__mb_10080c1c,
                     PTR_s_ScanSearchMbrecBlk_10080c00,0x8a6,piVar29[0x7ad],iVar32);
        }
        goto LAB_10080b00;
      }
    }
LAB_100809a6:
    FUN_1011ea48(&local_4c,0,0x10);
    local_3c = *puVar3;
    uStack_38 = puVar3[1];
    uStack_34 = puVar3[2];
    uStack_30 = puVar3[3];
    piVar29 = (int *)param_1[3];
    piVar29[0x7ad] = -1;
    piVar29[0x7ae] = -1;
    if (*(ushort *)(*piVar29 + 0xe) < 0x201) {
      iVar15 = 0;
      iVar32 = 0;
      do {
        iVar42 = (int)(&local_3c)[iVar32] / (int)(uint)*(ushort *)(*piVar29 + 0xe);
        FUN_10121e98(param_1,*DAT_10080bfc,iVar42,0,0xf,0,local_5c);
        if (local_5c[0] == -1) {
          if (local_56 == -0x7f45) {
            piVar29[0x7ad] = iVar42;
            goto LAB_10080b30;
          }
          if (local_56 == -0x7f12) {
            piVar29[0x7ae] = iVar42;
            goto LAB_10080b30;
          }
          (&local_4c)[iVar32] = iVar42;
        }
        else {
          iVar15 = iVar15 + 1;
          if (2 < iVar15) {
            if ((*(char *)(*param_1 + 0x10) == '\0') ||
               (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 == (code *)0x0)) goto LAB_10080a36;
            uVar16 = 0x8c6;
            puVar7 = PTR_s_Error___s__d_BadBlks_more_than_2_10080c04;
            goto LAB_10080a34;
          }
LAB_10080b30:
          (&local_4c)[iVar32] = -1;
        }
        iVar32 = iVar32 + 1;
      } while (iVar32 != 4);
      if (piVar29[0x7ad] == -1) {
        iVar32 = 0;
        piVar10 = &local_4c;
        do {
          if (*piVar10 != -1) {
            piVar29[0x7ad] = *piVar10;
            (&local_4c)[iVar32] = 0xffffffff;
            break;
          }
          iVar32 = iVar32 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar32 != 4);
      }
      if (piVar29[0x7ae] == -1) {
        iVar32 = 0;
        piVar10 = &local_4c;
        do {
          if (*piVar10 != -1) {
            piVar29[0x7ae] = *piVar10;
            break;
          }
          iVar32 = iVar32 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar32 != 4);
      }
      iVar32 = *param_1;
      if ((piVar29[0x7ad] != -1) || (piVar29[0x7ae] != -1)) {
        if ((3 < *(byte *)(iVar32 + 0x10)) && (*(code **)(iVar32 + 0xc) != (code *)0x0)) {
          (**(code **)(iVar32 + 0xc))
                    (PTR_s_Debug___s__d_mbrec_0__>blk_d__mb_10080c1c,PTR_s_ScanMapMbrecBlk_10080c08,
                     0x8fa,piVar29[0x7ad],piVar29[0x7ae]);
        }
        goto LAB_10080b00;
      }
      if ((*(byte *)(iVar32 + 0x10) != 0) &&
         (pcVar24 = *(code **)(iVar32 + 0xc), pcVar24 != (code *)0x0)) {
        uVar16 = 0x8f6;
        puVar7 = PTR_s_Error___s__d_Can_t_find_mapblks_f_10080c20;
LAB_10080a34:
        (*pcVar24)(puVar7,PTR_s_ScanMapMbrecBlk_10080c08,uVar16);
      }
    }
LAB_10080a36:
    if ((*(char *)(*param_1 + 0x10) != '\0') &&
       (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
      (*pcVar24)(PTR_s_Error___s__d_Map_Mbrec_Blk_faile_10080c10,PTR_s_INIT_CreateBlkTbls_10080c0c,
                 0xb34);
    }
    uVar16 = 0x8003;
  }
  else {
LAB_10080b00:
    for (uVar9 = 0; pbVar33 = DAT_10080eac, uVar9 < *(byte *)(iVar23 + 0x10d4); uVar9 = uVar9 + 1) {
      FUN_1011ea48(DAT_10080eac,0,0x412e);
      *pbVar33 = (byte)uVar9;
      if (((undefined1 *)(iVar23 + 0x30))[uVar9 * 0x1c] != '\0') {
        iVar15 = param_1[3];
        iVar32 = 1;
        local_88 = (char *)0x0;
        for (uVar31 = (uint)*(byte *)(iVar15 + 0x10d2); uVar31 < *(ushort *)(iVar15 + 0x10d8);
            uVar31 = uVar31 + 1) {
          iVar42 = FUN_10121e28(param_1,uVar31);
          if ((((iVar42 == 0) &&
               (iVar32 = FUN_10121e98(param_1,*pbVar33,uVar31,0,0xf,0,&local_4c),
               (char)local_4c == -1)) && (uVar43 = (uint)local_46, uVar43 != 0x80dd)) &&
             ((uVar43 != 0x80bb && (uVar43 != 0x80ee)))) {
            local_88 = (char *)((int)local_88 + 1);
            if (0x28 < local_88) break;
            if (((local_46 & 0x8000) != 0) && ((uVar43 & 0x3ff) == 0xaa)) {
              uVar17 = (uint)*pbVar33;
              uVar43 = (uVar43 & 0x3fff) >> 10;
              if (uVar43 < *(byte *)(uVar17 * 0x1c + iVar15 + 0x30)) {
                iVar32 = FUN_10122008(param_1,uVar17,uVar43);
                iVar42 = iVar15 + iVar32 * 4;
                if (*(short *)(iVar42 + 100) == -1) {
                  iVar8 = 0;
                  iVar34 = param_1[3];
                  uVar26 = (uint)*(ushort *)(iVar34 + 0x10de);
                  iVar6 = uVar26 - 1;
                  if (iVar6 < 0) {
                    iVar6 = uVar26 + 2;
                  }
                  iVar6 = iVar6 >> 2;
                  do {
                    iVar1 = iVar8 + iVar6 >> 1;
                    FUN_10121e98(param_1,uVar17,uVar31,iVar1 << 2,0xf,iVar34 + 0xc6,&local_3c);
                    if (local_3c._3_1_ == -1) {
                      iVar6 = iVar1 + -1;
                    }
                    else {
                      iVar8 = iVar1 + 1;
                    }
                  } while (iVar8 <= iVar6);
                  *(short *)(iVar42 + 100) = (short)uVar31;
                  iVar32 = iVar15 + (iVar32 + 0x18) * 4;
                  iVar42 = ((iVar8 + iVar6) / 2) * 4;
                  *(ushort *)(iVar32 + 6) =
                       *(ushort *)(iVar32 + 6) & 0xf000 | (ushort)iVar42 & 0xfff;
                  iVar32 = FUN_10121e98(param_1,*pbVar33,uVar31,iVar42 + 2,0xf,0,&local_4c);
                  bVar20 = *pbVar33;
                  if (iVar32 == 0x3000) {
LAB_1008106a:
                    FUN_10121fb8(param_1,bVar20,uVar31);
                  }
                  else if (local_4c._3_1_ == -1) {
                    iVar6 = iVar15 + 0xc6;
                    iVar32 = FUN_10121e98(param_1,bVar20,uVar31,iVar42,0xf,iVar6,0);
                    if (iVar32 == 0x3000) {
LAB_100810c0:
                      bVar20 = *pbVar33;
                      goto LAB_1008106a;
                    }
                    uVar30 = *(ushort *)(iVar15 + 0x8c4);
                    uVar17 = FUN_10120ab0(iVar6,0x3ff);
                    if (uVar30 == uVar17) {
                      iVar32 = FUN_10121e98(param_1,*pbVar33,uVar31,iVar42 + 1,0xf,iVar6,0);
                      if (iVar32 == 0x3000) goto LAB_100810c0;
                      uVar30 = *(ushort *)(iVar15 + 0x8c4);
                      uVar17 = FUN_10120ab0(iVar6,0x20);
                      iVar6 = *param_1;
                      if (uVar30 == uVar17) {
                        bVar20 = *(byte *)(iVar6 + 0x10);
                        pbVar25 = DAT_10080eac;
                        if (3 < uVar43) goto LAB_10080c8a;
                        pbVar33[uVar43 + 10] = 1;
                        if ((2 < bVar20) && (*(code **)(iVar6 + 0xc) != (code *)0x0)) {
                          (**(code **)(iVar6 + 0xc))
                                    (PTR_s_Info____s__d_Found_valid_zone_ta_1008128c,
                                     PTR_s_ScanSearchZoneTbls_10081278,0x9ba,uVar43,*pbVar33,uVar31,
                                     iVar42);
                        }
                      }
                      else if ((*(char *)(iVar6 + 0x10) != '\0') &&
                              (pcVar24 = *(code **)(iVar6 + 0xc), pcVar24 != (code *)0x0)) {
                        bVar20 = *pbVar33;
                        uVar16 = 0x99b;
                        puVar7 = PTR_s_Error___s__d_Zone_table__d_LogBl_10081288;
                        goto LAB_1008109c;
                      }
                    }
                    else if ((*(char *)(*param_1 + 0x10) != '\0') &&
                            (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                      bVar20 = *pbVar33;
                      uVar16 = 0x989;
                      puVar7 = PTR_s_Error___s__d_Zone_table__d_check_10081284;
                      goto LAB_1008109c;
                    }
                  }
                  else if ((3 < *(byte *)(*param_1 + 0x10)) &&
                          (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                    uVar16 = 0x977;
                    puVar7 = PTR_s_Debug___s__d_Zone_table__d_has_d_10081280;
LAB_1008109c:
                    (*pcVar24)(puVar7,PTR_s_ScanSearchZoneTbls_10081278,uVar16,uVar43,bVar20,uVar31)
                    ;
                  }
                }
                else {
                  iVar32 = FUN_10121fb8(param_1,uVar17,uVar31);
                  if (iVar32 != 1) {
                    if ((*(char *)(*param_1 + 0x10) != '\0') &&
                       (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                      bVar20 = *pbVar33;
                      uVar16 = 0x95e;
                      goto LAB_10080f74;
                    }
                    goto LAB_10080f7a;
                  }
                }
              }
              else {
                iVar32 = FUN_10121fb8(param_1,uVar17,uVar31);
                if (iVar32 != 1) {
                  if ((*(char *)(*param_1 + 0x10) != '\0') &&
                     (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                    bVar20 = *pbVar33;
                    uVar16 = 0x94a;
LAB_10080f74:
                    (*pcVar24)(PTR_s_Error___s__d_Failed_to_erase_zon_1008127c,
                               PTR_s_ScanSearchZoneTbls_10081278,uVar16,uVar31,bVar20,iVar32);
                  }
LAB_10080f7a:
                  FUN_100803d8(param_1,*pbVar33,uVar31);
                }
              }
            }
          }
        }
        uVar31 = 0;
        pbVar33 = DAT_10080eac + 10;
        while (uVar31 < *(byte *)((uint)*DAT_10080eac * 0x1c + iVar15 + 0x30)) {
          pbVar25 = pbVar33 + 1;
          bVar20 = *pbVar33;
          uVar31 = uVar31 + 1;
          pbVar33 = pbVar25;
          if (bVar20 == 0) {
            iVar32 = 0;
          }
        }
        pbVar25 = DAT_10080eac;
        if (iVar32 != 1) {
LAB_10080c8a:
          if ((3 < *(byte *)(*param_1 + 0x10)) &&
             (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
            (*pcVar24)(DAT_10080eb4,DAT_10080eb0,0xb49,uVar9);
          }
          iVar32 = param_1[3];
          FUN_1013d064(DAT_10080eb8,0xff,(uint)*(ushort *)(iVar32 + 0x10d8) << 1,0x4120);
          local_84 = DAT_10080ebc;
          puVar13 = DAT_10080ebc;
          for (iVar15 = 0; iVar15 < (int)(uint)*(byte *)((uint)*pbVar25 * 0x1c + iVar32 + 0x30);
              iVar15 = iVar15 + 1) {
            puVar13[-4] = 0;
            puVar13[-3] = 0;
            puVar13[-2] = 0;
            puVar13[-1] = 0;
            FUN_1011ea48(puVar13,0xff,0x800);
            FUN_1011ea48(puVar13 + 0x400,0xff,0x40);
            puVar13 = puVar13 + 0x424;
          }
          piVar29 = (int *)param_1[3];
          FUN_1011ea48(&local_3c,0,0x10);
          uVar16 = DAT_10080ed4;
          uVar31 = (uint)*(byte *)((int)piVar29 + 0x10d2);
          pbVar33 = pbVar25 + (uVar31 + 7) * 2;
          for (; (int)uVar31 < (int)(uint)*(ushort *)(piVar29 + 0x436); uVar31 = uVar31 + 1) {
            iVar15 = FUN_10121e28(param_1,uVar31);
            if (iVar15 == 0) {
              uVar43 = (uint)*(byte *)(*piVar29 + 10) * (uint)*(byte *)(*piVar29 + 0xb);
              if (uVar43 == 0x20) {
                iVar15 = -1;
              }
              else {
                iVar15 = (1 << (uVar43 & 0xff)) + -1;
              }
              FUN_10121e98(param_1,*DAT_10081290,uVar31,0,iVar15,0,&local_3c);
              if ((char)local_3c == -1) {
                uVar21 = uStack_38._2_2_;
              }
              else {
                if ((3 < *(byte *)(*param_1 + 0x10)) &&
                   (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                  (*pcVar24)(DAT_10081298,DAT_10081294,0x4bb,uVar16,uVar31,*pbVar25);
                }
                uVar21 = 0xfffe;
              }
              *(undefined2 *)pbVar33 = uVar21;
            }
            pbVar33 = pbVar33 + 2;
          }
          iVar15 = param_1[3];
          local_70 = 0;
          for (uVar31 = (uint)*(byte *)(iVar15 + 0x10d2); pcVar19 = DAT_10080ec0,
              (int)uVar31 < (int)(uint)*(ushort *)(iVar15 + 0x10d8); uVar31 = uVar31 + 1) {
            iVar42 = FUN_10121e28(param_1,uVar31);
            pbVar33 = DAT_1008163c;
            if (iVar42 == 0) {
              uVar30 = *(ushort *)(DAT_1008129c + uVar31 * 2);
              uVar43 = (uint)uVar30;
              if (uVar43 == 0xfffe) {
                *(short *)(pbVar25 + 2) = *(short *)(pbVar25 + 2) + 1;
              }
              else if (((uVar43 != 0x80dd) && (uVar43 != 0x80bb)) && (uVar43 != 0x80ee)) {
                local_70 = local_70 + 1;
                pcVar19 = (char *)uVar31;
                if (uVar43 == 0xffff) {
                  if (*(int *)(*param_1 + 0x2d) != 0) {
                    FUN_10120a74(param_1,&local_3c,*pbVar25,uVar31,0);
                    iVar42 = (**(code **)(*param_1 + 0x2d))(param_1,&local_3c);
                    if (iVar42 != 1) goto LAB_100812f8;
                  }
                }
                else {
                  uVar17 = uVar43 & 0x3ff;
                  if ((int)(uVar43 << 0x10) < 0) {
                    if (uVar17 == 0xaa) {
                      if (local_70 < 0x28) goto LAB_10081272;
                      if ((*(char *)(*param_1 + 0x10) != '\0') &&
                         (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                        (*pcVar24)(DAT_10081638,DAT_10081634,0x515,uVar31);
                      }
                    }
                  }
                  else {
                    uVar30 = uVar30 >> 10;
                    iVar42 = (uint)*pbVar25 * 0x1c + iVar15;
                    uVar43 = (uVar43 & 0x3fff) >> 10;
                    if ((uVar43 < *(byte *)(iVar42 + 0x30)) && (uVar17 < *(uint *)(iVar42 + 0x34)))
                    {
                      if (DAT_1008163c[uVar43 + 10] != 0) goto LAB_10081272;
                      uVar26 = uVar30 & 0xc;
                      if ((uVar30 & 0xc) == 0) {
                        iVar42 = uVar43 * 0x424 + uVar17 + 0x100b;
                        uVar30 = *(ushort *)(DAT_1008163c + iVar42 * 2);
                        if ((uVar30 & 0xfff) == 0xfff) {
                          *(ushort *)(DAT_1008163c + iVar42 * 2) =
                               uVar30 & 0x1000 | (ushort)((uVar31 << 0x14) >> 0x14);
                          *(short *)(pbVar33 + uVar43 * 0x848 + 0x200e) =
                               *(short *)(pbVar33 + uVar43 * 0x848 + 0x200e) + 1;
                          goto LAB_10081272;
                        }
                        local_88 = (char *)(uVar30 & 0xfff);
                        FUN_10121e98(param_1,(uint)*pbVar25,local_88,uVar26,0xf,uVar26,&local_3c);
                        pbVar33 = DAT_1008163c;
                        bVar20 = local_3c._2_1_;
                        uVar41 = (uint)local_3c._2_1_;
                        FUN_10121e98(param_1,*DAT_1008163c,uVar31,uVar26,0xf,uVar26,&local_3c);
                        uVar12 = (uint)*pbVar33;
                        iVar34 = param_1[3];
                        uVar44 = (uint)local_3c._2_1_;
                        iVar6 = uVar43 * 0x848 + 0x2816;
                        for (; (int)uVar26 < *(int *)(uVar12 * 0x1c + iVar34 + 0x3c);
                            uVar26 = uVar26 + 1) {
                          if (uVar17 == *(ushort *)(pbVar33 + uVar26 * 8 + iVar6))
                          goto LAB_1008145e;
                        }
                        uVar26 = 0xffffffff;
LAB_1008145e:
                        pcVar19 = local_88;
                        if (uVar44 == uVar41) {
                          iVar6 = FUN_10121f80(param_1,uVar12,uVar31,local_88);
                          pcVar19 = (char *)uVar31;
                          if (iVar6 != 0) {
                            *(ushort *)(DAT_1008163c + iVar42 * 2) =
                                 *(ushort *)(DAT_1008163c + iVar42 * 2) & 0xf000 |
                                 (ushort)uVar31 & 0xfff;
                            pcVar19 = local_88;
                          }
                        }
                        else if (((int)(char)local_3c._2_1_ - (int)(char)bVar20) * 0x1000000 < 0) {
                          *(ushort *)(DAT_1008163c + iVar42 * 2) =
                               *(ushort *)(DAT_1008163c + iVar42 * 2) & 0xf000 |
                               (ushort)uVar31 & 0xfff;
                          uVar44 = uVar41;
                          if ((int)(char)bVar20 == (int)(char)(local_3c._2_1_ + 1)) {
LAB_1008156a:
                            pcVar19 = local_88;
                            if (uVar26 == 0xffffffff) {
                              sVar14 = *(short *)(pbVar25 + uVar43 * 0x848 + 0x2010);
                              uVar26 = *(uint *)(uVar12 * 0x1c + iVar34 + 0x3c);
                              if ((uint)(int)sVar14 <= uVar26) {
                                for (uVar44 = 0; uVar44 != uVar26; uVar44 = uVar44 + 1) {
                                  if (*(short *)(pbVar33 + uVar44 * 8 + iVar6) == -1) {
                                    iVar42 = uVar43 * 0x109 + uVar44 + 0x502;
                                    if ((*(ushort *)(pbVar25 + iVar42 * 8 + 8) & 0xfff) == 0xfff) {
                                      *(short *)(pbVar25 + iVar42 * 8 + 6) = (short)uVar17;
                                      *(ushort *)(pbVar25 + iVar42 * 8 + 8) =
                                           *(ushort *)(pbVar25 + iVar42 * 8 + 8) & 0x1000 |
                                           (ushort)((uint)((int)local_88 << 0x14) >> 0x14);
                                      *(short *)(DAT_10081dec + uVar43 * 0x848 + 0x2010) =
                                           sVar14 + 1;
                                      goto LAB_10081272;
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              uVar41 = *(ushort *)
                                        (pbVar25 + (uVar43 * 0x109 + uVar26 + 0x502) * 8 + 8) &
                                       0xfff;
                              FUN_10121e98(param_1,uVar12,uVar41,0,0xf,0,&local_3c);
                              uVar17 = local_3c >> 0x10;
                              iVar42 = FUN_10121f80(param_1,*pbVar25,uVar41,local_88);
                              if ((uVar44 != (uVar17 & 0xff)) || (iVar42 != 1)) {
                                iVar42 = uVar43 * 0x109 + uVar26 + 0x502;
                                *(ushort *)(pbVar25 + iVar42 * 8 + 8) =
                                     *(ushort *)(pbVar25 + iVar42 * 8 + 8) & 0x1000 |
                                     (ushort)((uint)((int)local_88 << 0x14) >> 0x14);
                                pcVar19 = (char *)uVar41;
                              }
                            }
                          }
                          else if (uVar26 != 0xffffffff) {
                            uVar30 = *(ushort *)
                                      (pbVar25 + (uVar43 * 0x109 + uVar26 + 0x502) * 8 + 8);
                            iVar42 = FUN_10121fb8(param_1);
                            iVar6 = (uVar30 & 0xfff) + 4;
                            if (iVar42 == 1) {
                              (pbVar25 + iVar6 * 2 + 6)[0] = 0xff;
                              (pbVar25 + iVar6 * 2 + 6)[1] = 0xff;
                              *(short *)(pbVar25 + 4) = *(short *)(pbVar25 + 4) + 1;
                            }
                            else {
                              (pbVar25 + iVar6 * 2 + 6)[0] = 0xfe;
                              (pbVar25 + iVar6 * 2 + 6)[1] = 0xff;
                              *(short *)(pbVar25 + 2) = *(short *)(pbVar25 + 2) + 1;
                              FUN_100803d8(param_1,*pbVar25);
                            }
                            iVar42 = (uVar43 * 0x109 + uVar26) * 8;
                            pbVar33 = pbVar25 + iVar42 + 0x2816;
                            pbVar33[0] = 0xff;
                            pbVar33[1] = 0xff;
                            pbVar33[2] = 0xff;
                            pbVar33[3] = 0xff;
                            pbVar33 = pbVar25 + iVar42 + 0x281a;
                            pbVar33[0] = 0xff;
                            pbVar33[1] = 0xff;
                            pbVar33[2] = 0xff;
                            pbVar33[3] = 0xff;
                            *(short *)(pbVar25 + uVar43 * 0x848 + 0x2010) =
                                 *(short *)(pbVar25 + uVar43 * 0x848 + 0x2010) + -1;
                          }
                        }
                        else {
                          local_88 = (char *)uVar31;
                          if ((int)(char)local_3c._2_1_ == (int)(char)(bVar20 + 1))
                          goto LAB_1008156a;
                          pcVar19 = (char *)uVar31;
                          if ((1 < *(byte *)(*param_1 + 0x10)) &&
                             (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                            (*pcVar24)(PTR_s_Warn____s__d_The_ages_of_two_phy_10081648,
                                       PTR_s_AddBlkToZoneTbls_10081640,0x3cf,uVar17,uVar41,uVar44);
                          }
                        }
                      }
                      else {
                        pcVar19 = (char *)0;
                        if (*(char *)(*param_1 + 0x10) != '\0') {
                          pcVar24 = *(code **)(*param_1 + 0xc);
                          pcVar19 = (char *)0;
                          if (pcVar24 != (code *)0x0) {
                            (*pcVar24)(PTR_s_Error___s__d_there_s_more_zones_t_10081644,
                                       PTR_s_AddBlkToZoneTbls_10081640,0x378,uVar43);
                            pcVar19 = (char *)0;
                          }
                        }
                      }
                    }
                  }
                  iVar42 = FUN_10121fb8(param_1,*pbVar25,pcVar19);
                  if (iVar42 == 0) {
                    (pbVar25 + ((int)pcVar19 + 4U) * 2 + 6)[0] = 0xfe;
                    (pbVar25 + ((int)pcVar19 + 4U) * 2 + 6)[1] = 0xff;
                    *(short *)(pbVar25 + 2) = *(short *)(pbVar25 + 2) + 1;
LAB_100812f8:
                    FUN_100803d8(param_1,*pbVar25,pcVar19);
                    goto LAB_10081272;
                  }
                  (pbVar25 + ((int)pcVar19 + 4U) * 2 + 6)[0] = 0xff;
                  (pbVar25 + ((int)pcVar19 + 4U) * 2 + 6)[1] = 0xff;
                }
                *(short *)(pbVar25 + 4) = *(short *)(pbVar25 + 4) + 1;
              }
            }
LAB_10081272:
          }
          iVar42 = param_1[3];
          local_80 = DAT_10080ec0;
          pcVar38 = DAT_10080ec0;
          for (iVar15 = 0; iVar15 < (int)(uint)*(byte *)((uint)*pbVar25 * 0x1c + iVar42 + 0x30);
              iVar15 = iVar15 + 1) {
            if ((*pcVar38 != '\0') && (iVar6 = FUN_1008049c(param_1,iVar15), iVar6 == 1)) {
              bVar2 = false;
              iVar6 = 0;
              sVar14 = *(short *)(pbVar25 + 4);
              puVar13 = (ushort *)(iVar15 * 0x848 + DAT_10081970);
              do {
                if (((*puVar13 & 0xfff) != 0xfff) &&
                   (iVar34 = (*puVar13 & 0xfff) + 4, *(short *)(pbVar25 + iVar34 * 2 + 6) == -1)) {
                  bVar2 = true;
                  sVar14 = sVar14 + -1;
                  (pbVar25 + iVar34 * 2 + 6)[0] = 0xfd;
                  (pbVar25 + iVar34 * 2 + 6)[1] = 0xff;
                }
                iVar6 = iVar6 + 1;
                puVar13 = puVar13 + 1;
              } while (iVar6 != 0x400);
              if (bVar2) {
                *(short *)(pbVar25 + 4) = sVar14;
              }
            }
            pcVar38 = pcVar38 + 1;
          }
          *(ushort *)(pbVar25 + 8) = (ushort)*(byte *)(iVar32 + 0x10d2);
          iVar15 = param_1[3];
          local_88 = DAT_10080ec0;
          for (iVar32 = 0; iVar32 < (int)(uint)*(byte *)((uint)*pbVar25 * 0x1c + iVar15 + 0x30);
              iVar32 = iVar32 + 1) {
            if (*local_88 == '\0') {
              iVar42 = FUN_10122008(param_1,(uint)*pbVar25,iVar32);
              iVar6 = iVar15 + iVar42 * 4;
              uVar31 = (uint)*(ushort *)(iVar6 + 100);
              if (uVar31 != 0xffff) {
                iVar34 = 0;
                uVar43 = (uint)*(byte *)(iVar15 + 0x10d2);
                while ((int)uVar43 < (int)uVar31) {
                  uVar45 = FUN_10121e28(param_1);
                  iVar8 = (int)((ulonglong)uVar45 >> 0x20);
                  if (((((int)uVar45 == 0) &&
                       (sVar14 = *(short *)(DAT_10081974 + iVar8 * 2), sVar14 != -2)) &&
                      (sVar14 != -0x7f23)) && ((sVar14 != -0x7f45 && (sVar14 != -0x7f12)))) {
                    iVar34 = iVar34 + 1;
                  }
                  uVar43 = iVar8 + 1;
                }
                if (iVar34 < 0x28) goto LAB_10081826;
              }
              iVar34 = 0;
              uVar30 = *(ushort *)(param_1[3] + 0x10d8);
              uVar31 = (uint)*(byte *)(param_1[3] + 0x10d2);
              while (uVar31 < uVar30) {
                uVar45 = FUN_10121e28(param_1);
                iVar8 = (int)((ulonglong)uVar45 >> 0x20);
                if ((((int)uVar45 == 0) &&
                    (sVar14 = *(short *)(DAT_10081974 + iVar8 * 2), sVar14 != -2)) &&
                   ((sVar14 != -0x7f23 && ((sVar14 != -0x7f45 && (sVar14 != -0x7f12)))))) {
                  iVar34 = iVar34 + 1;
                  if (0x28 < iVar34) break;
                  if (sVar14 == -1) {
                    (pbVar25 + iVar8 * 2 + 0xe)[0] = 0xfd;
                    (pbVar25 + iVar8 * 2 + 0xe)[1] = 0xff;
                    *(short *)(pbVar25 + 4) = *(short *)(pbVar25 + 4) + -1;
                    goto LAB_100817b4;
                  }
                }
                uVar31 = iVar8 + 1;
              }
              iVar8 = FUN_10080568(param_1,0);
              if (iVar8 == -1) {
                iVar8 = FUN_10080568(param_1,1);
LAB_100817b4:
                if (iVar8 == -1) {
                  if ((*(char *)(*param_1 + 0x10) != '\0') &&
                     (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                    (*pcVar24)(PTR_s_Error___s__d_sorry__cannot_found_10081988,
                               PTR_s_ScanAllocatedZoneTblBlks_10081984,0x5cc,iVar42);
                  }
                  if ((*(char *)(*param_1 + 0x10) == '\0') ||
                     (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 == (code *)0x0))
                  goto LAB_100817de;
                  uVar16 = 0x841;
                  bVar20 = *DAT_10081978;
                  goto LAB_100817d8;
                }
              }
              *(short *)(iVar6 + 100) = (short)iVar8;
              iVar42 = iVar15 + (iVar42 + 0x18) * 4;
              *(ushort *)(iVar42 + 6) = *(ushort *)(iVar42 + 6) & 0xf000 | 0xfff;
              *(ushort *)(pbVar25 + iVar8 * 2 + 0xe) = (ushort)(iVar32 << 10) | 0x80aa;
            }
LAB_10081826:
            local_88 = local_88 + 1;
          }
          iVar15 = param_1[3];
          local_88 = DAT_10080ec0;
          for (iVar32 = 0; iVar32 < (int)(uint)*(byte *)((uint)*pbVar25 * 0x1c + iVar15 + 0x30);
              iVar32 = iVar32 + 1) {
            if (*local_88 == '\0') {
              puVar35 = (undefined2 *)(iVar32 * 0x848 + DAT_1008198c);
              for (uVar31 = 0; uVar31 < *(uint *)((uint)*pbVar25 * 0x1c + iVar15 + 0x3c);
                  uVar31 = uVar31 + 1) {
                if ((puVar35[-2] != -1) &&
                   ((*(ushort *)(pbVar25 + (iVar32 * 0x109 + uVar31 + 0x502) * 8 + 8) & 0xfff) !=
                    0xfff)) {
                  FUN_10121ec8(param_1,(uint)*pbVar25,
                               *(ushort *)(pbVar25 + (iVar32 * 0x109 + uVar31 + 0x502) * 8 + 8) &
                               0xfff,&local_3c);
                  *puVar35 = (short)local_3c;
                }
                puVar35 = puVar35 + 4;
              }
            }
            local_88 = local_88 + 1;
          }
          iVar32 = 0;
          bVar2 = true;
          iVar15 = param_1[3];
          pcVar38 = DAT_10080ec0;
          while( true ) {
            iVar42 = (uint)*pbVar25 * 0x1c + iVar15;
            if ((int)(uint)*(byte *)(iVar42 + 0x30) <= iVar32) break;
            if (*pcVar38 == '\0') {
              iVar42 = *(int *)(iVar42 + 0x34) - (int)(short)local_84[-4];
              if ((int)(uint)*(ushort *)(pbVar25 + 4) < iVar42) {
                if (*(char *)(*param_1 + 0x10) == '\0') {
                  bVar2 = false;
                }
                else {
                  pcVar24 = *(code **)(*param_1 + 0xc);
                  bVar2 = false;
                  if (pcVar24 != (code *)0x0) {
                    (*pcVar24)(DAT_10080ec8,DAT_10080ec4,0x63c,iVar32,(uint)*pbVar25,iVar42,
                               (uint)*(ushort *)(pbVar25 + 4));
                    bVar2 = false;
                  }
                }
                break;
              }
              puVar13 = local_84;
              for (iVar42 = 0; iVar42 < *(int *)((uint)*pbVar25 * 0x1c + iVar15 + 0x34);
                  iVar42 = iVar42 + 1) {
                if ((*puVar13 & 0xfff) == 0xfff) {
                  iVar6 = FUN_10080444(param_1);
                  if (iVar6 == -1) {
                    if (*(char *)(*param_1 + 0x10) != '\0') {
                      pcVar24 = *(code **)(*param_1 + 0xc);
                      if (pcVar24 == (code *)0x0) {
                        bVar2 = false;
                        break;
                      }
                      (*pcVar24)(DAT_10081994,DAT_10081990,0x64c,*pbVar25,iVar32);
                    }
                    bVar2 = false;
                    break;
                  }
                  *puVar13 = (ushort)((uint)(iVar6 << 0x14) >> 0x14) | *puVar13 & 0x1000;
                  local_84[-4] = local_84[-4] + 1;
                }
                puVar13 = puVar13 + 1;
              }
            }
            iVar32 = iVar32 + 1;
            local_84 = local_84 + 0x424;
            pcVar38 = pcVar38 + 1;
          }
          iVar32 = *(int *)((uint)*DAT_10080eac * 0x1c + iVar15 + 0x34);
          while (*(short *)(pbVar25 + 4) != 0) {
            uVar31 = 0;
            uVar43 = 0xffffffff;
            psVar11 = DAT_10080ecc;
            pcVar38 = pcVar19;
            for (uVar17 = 0; uVar17 < *(byte *)((uint)*pbVar25 * 0x1c + param_1[3] + 0x30);
                uVar17 = uVar17 + 1) {
              if ((*pcVar38 == '\0') && ((uint)((int)*psVar11 + (int)psVar11[2]) < uVar43)) {
                uVar31 = uVar17;
                uVar43 = (int)*psVar11 + (int)psVar11[2];
              }
              psVar11 = psVar11 + 0x424;
              pcVar38 = pcVar38 + 1;
            }
            iVar42 = uVar31 * 0x424 + iVar32 + 0x100b +
                     (int)*(short *)(pbVar25 + uVar31 * 0x848 + 0x2014);
            if (*(int *)((uint)*pbVar25 * 0x1c + iVar15 + 0x38) <=
                (int)*(short *)(pbVar25 + uVar31 * 0x848 + 0x2014)) break;
            iVar6 = FUN_10080444(param_1);
            if (iVar6 == -1) {
              if ((*(char *)(*param_1 + 0x10) != '\0') &&
                 (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                (*pcVar24)(DAT_10080ed0,DAT_10080ec4,0x66b,*DAT_10080eac,uVar31);
              }
              break;
            }
            *(ushort *)(pbVar25 + iVar42 * 2) =
                 (ushort)((uint)(iVar6 << 0x14) >> 0x14) |
                 *(ushort *)(pbVar25 + iVar42 * 2) & 0x1000;
            *(short *)(pbVar25 + uVar31 * 0x848 + 0x2014) =
                 *(short *)(pbVar25 + uVar31 * 0x848 + 0x2014) + 1;
            *(short *)(pbVar25 + uVar31 * 0x848 + 0x2012) =
                 *(short *)(pbVar25 + uVar31 * 0x848 + 0x2012) + 1;
          }
          puVar36 = DAT_10081c54;
          if (bVar2) {
            iVar32 = 0;
            piVar29 = (int *)param_1[3];
            local_88 = DAT_10081c54;
            local_84 = (ushort *)DAT_10081c54;
            while( true ) {
              iVar15 = 1;
              if ((int)(uint)*(byte *)(piVar29 + (uint)*pbVar25 * 7 + 0xc) <= iVar32) break;
              if (*local_80 == '\0') {
                uVar45 = FUN_10122008(param_1,(uint)*pbVar25,iVar32);
                iVar42 = (int)uVar45;
                uVar21 = (undefined2)piVar29[iVar42 + 0x19];
                uVar22 = *(ushort *)((int)piVar29 + (iVar42 + 0x18) * 4 + 6) & 0xfff;
                uVar30 = 0;
                if (uVar22 != 0xfff) {
                  uVar30 = uVar22 + 4;
                }
                if (*(ushort *)((int)piVar29 + 0x10de) <= uVar30) {
                  iVar15 = FUN_10121fb8(param_1,(int)((ulonglong)uVar45 >> 0x20),uVar21);
                  if (iVar15 != 1) {
                    if ((*(char *)(*param_1 + 0x10) != '\0') &&
                       (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                      (*pcVar24)(PTR_s_Error___s__d_Failed_to_erase_zon_10081c5c,
                                 PTR_s_ScanWriteZoneTbls_10081c58,0x6ee,uVar21,*pbVar25,iVar15);
                    }
                    FUN_100803d8(param_1,*pbVar25,uVar21);
                    iVar15 = 0x8002;
                    goto LAB_10081a2c;
                  }
                  uVar30 = 0;
                }
                if ((3 < *(byte *)(*param_1 + 0x10)) &&
                   (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                  (*pcVar24)(PTR_s_Debug___s__d_write_zone_table_fo_10081c68,
                             PTR_s_ScanWriteZoneTbls_10081c58,0x6f8,iVar32,uVar21,uVar30,*pbVar25);
                }
                puVar39 = (undefined4 *)((int)piVar29 + 0xc6);
                FUN_1011ea48(puVar39,0x42,
                             (uint)*(byte *)(*piVar29 + 0xb) * (uint)*(byte *)(*piVar29 + 10) *
                             0x200);
                FUN_1011ea40(puVar39,(undefined1 *)((int)local_84 + 0x2016),0x7fe);
                uVar5 = FUN_10120ab0(puVar39,0x3ff);
                *(undefined2 *)(piVar29 + 0x231) = uVar5;
                FUN_1011ea48(&local_3c,0xff,0x10);
                local_3c = CONCAT13(0x55,(undefined3)local_3c);
                if (uVar30 == 0) {
                  uStack_38 = CONCAT22((short)(iVar32 << 10),(undefined2)uStack_38) | 0x80aa0000;
                }
                uVar31 = (uint)*(byte *)(*piVar29 + 10) * (uint)*(byte *)(*piVar29 + 0xb);
                if (uVar31 == 0x20) {
                  iVar15 = -1;
                }
                else {
                  iVar15 = (1 << (uVar31 & 0xff)) + -1;
                }
                iVar15 = FUN_10121fd8(param_1,*pbVar25,uVar21,uVar30,iVar15,puVar39,&local_3c);
                if (iVar15 != 1) {
                  if ((*(char *)(*param_1 + 0x10) != '\0') &&
                     (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                    (*pcVar24)(PTR_s_Error___s__d_Failed_to_write_zon_10081c6c,
                               PTR_s_ScanWriteZoneTbls_10081c58,0x715,uVar21,uVar30,*pbVar25,iVar15)
                    ;
                  }
                  FUN_100803d8(param_1,*pbVar25,uVar21);
                  iVar15 = 0x8002;
                  break;
                }
                puVar18 = puVar39;
                puVar27 = (undefined4 *)((int)local_84 + 0x2816);
                do {
                  puVar28 = puVar27 + 1;
                  *puVar18 = *puVar27;
                  puVar18 = puVar18 + 1;
                  puVar27 = puVar28;
                } while (puVar28 != (undefined4 *)((int)local_84 + 0x2856));
                uVar5 = FUN_10120ab0(puVar39,0x20);
                *(undefined2 *)(piVar29 + 0x231) = uVar5;
                uVar16 = FUN_1011ea48(&local_3c,0xff,0x10);
                local_3c = CONCAT13(0x55,(undefined3)local_3c);
                uVar31 = (uint)*(byte *)(*piVar29 + 10) * (uint)*(byte *)(*piVar29 + 0xb);
                if (uVar31 == 0x20) {
                  iVar15 = -1;
                }
                else {
                  iVar15 = (1 << (uVar31 & 0xff)) + -1;
                }
                iVar15 = FUN_10121fd8(param_1,*pbVar25,uVar21,uVar30 + 1,iVar15,puVar39,uVar16);
                if (iVar15 != 1) {
                  if ((*(char *)(*param_1 + 0x10) != '\0') &&
                     (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                    (*pcVar24)(PTR_s_Error___s__d_Failed_to_write_zon_10081c6c,
                               PTR_s_ScanWriteZoneTbls_10081c58,0x73b,uVar21,uVar30,*pbVar25,iVar15)
                    ;
                  }
                  FUN_100803d8(param_1,*pbVar25,uVar21);
                  break;
                }
                *(ushort *)((int)piVar29 + (iVar42 + 0x18) * 4 + 6) =
                     *(ushort *)((int)piVar29 + (iVar42 + 0x18) * 4 + 6) & 0xf000 | uVar30 & 0xfff;
              }
              iVar32 = iVar32 + 1;
              local_84 = (ushort *)((int)local_84 + 0x848);
              local_80 = local_80 + 1;
            }
            puVar7 = PTR_s_DbgDumpZoneTbls_10081c70;
            puVar4 = DAT_10081c54;
            if (iVar15 != 1) goto LAB_10081a2c;
            iVar15 = param_1[3];
            for (iVar32 = 0; iVar32 < (int)(uint)*(byte *)(iVar15 + 0x10d5); iVar32 = iVar32 + 1) {
              FUN_1008049c(param_1,iVar32);
              if ((2 < *(byte *)(*param_1 + 0x10)) &&
                 (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                (*pcVar24)(PTR_s_Info____s__d_zone_table__d_for_d_10081dd4,puVar7,0x449,iVar32,
                           *puVar4);
              }
              if ((2 < *(byte *)(*param_1 + 0x10)) &&
                 (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                (*pcVar24)(PTR_s_Info____s__d_data_block_table__10081dd8,puVar7,1099);
              }
              FUN_1007dca8(param_1,puVar36 + 0x2016,(uint)*(ushort *)(iVar15 + 0xc0) << 1,0,1);
              if ((2 < *(byte *)(*param_1 + 0x10)) &&
                 (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                (*pcVar24)(PTR_s_Info____s__d_free_block_table__10081ddc,puVar7,0x44e);
              }
              FUN_1007dca8(param_1,puVar4 + (iVar32 * 0x424 + *(ushort *)(iVar15 + 0xc0) + 0x100b) *
                                            2,
                           ((*(ushort *)(iVar15 + 0x10da) - 1) - (uint)*(ushort *)(iVar15 + 0xc0)) *
                           2,0,1);
              if ((2 < *(byte *)(*param_1 + 0x10)) &&
                 (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
                (*pcVar24)(PTR_s_Info____s__d_log_block_table__10081de0,puVar7,0x452);
              }
              FUN_1007dca8(param_1,puVar36 + 0x2816,0x40,0,1);
              puVar36 = puVar36 + 0x848;
            }
            iVar32 = param_1[3];
            for (uVar31 = 0; uVar31 < *(byte *)(iVar32 + 0x10d5); uVar31 = uVar31 + 1) {
              FUN_1008049c(param_1,uVar31);
              pcVar19 = local_88;
              for (uVar43 = 0; uVar43 < *(ushort *)(iVar32 + 0xc0); uVar43 = uVar43 + 1) {
                puVar13 = (ushort *)(pcVar19 + 0x2016);
                pcVar19 = pcVar19 + 2;
                if (*(ushort *)(iVar32 + 0x10d8) <= (*puVar13 & 0xfff)) {
                  if ((*(char *)(*param_1 + 0x10) == '\0') ||
                     (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 == (code *)0x0))
                  goto LAB_100817de;
                  uVar16 = 0x865;
                  bVar20 = *DAT_10081dec;
                  goto LAB_100817d8;
                }
              }
              local_88 = local_88 + 0x848;
            }
          }
          else if ((*(char *)(*param_1 + 0x10) != '\0') &&
                  (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
            uVar16 = 0x851;
            bVar20 = *DAT_10080eac;
LAB_100817d8:
            (*pcVar24)(PTR_s_Error___s__d_failed_for_die__d__r_10081980,
                       PTR_s_ScanRebuildZoneTbls_1008197c,uVar16,bVar20,0);
          }
          goto LAB_100817de;
        }
        if ((3 < *(byte *)(*param_1 + 0x10)) &&
           (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
          (*pcVar24)(PTR_s_Debug___s__d_Zonetbl_is_GOOD__Di_10081de8,
                     PTR_s_INIT_CreateBlkTbls_10081de4,0xb56,uVar9);
        }
      }
LAB_100817de:
    }
    uVar16 = 1;
  }
  return uVar16;
LAB_10081a2c:
  if ((*(char *)(*param_1 + 0x10) != '\0') &&
     (pcVar24 = *(code **)(*param_1 + 0xc), pcVar24 != (code *)0x0)) {
    (*pcVar24)(PTR_s_Error___s__d_failed_for_die__d__r_10081c64,PTR_s_ScanRebuildZoneTbls_10081c60,
               0x859,*pbVar25,iVar15);
  }
  if (iVar15 != 0x8002) goto LAB_100817de;
  goto LAB_10080c8a;
}


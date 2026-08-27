/* FUN_2c60d5dc @ 0x2c60d5dc */

void FUN_2c60d5dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  ushort uVar9;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  short *psVar14;
  uint *puVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte bVar19;
  uint uVar20;
  uint *puVar21;
  char cVar22;
  int iVar23;
  byte *pbVar24;
  undefined4 uVar25;
  uint uVar26;
  uint *puVar27;
  code *pcVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  byte *pbVar34;
  uint uVar35;
  uint uVar36;
  byte bVar37;
  uint uVar38;
  uint unaff_r9;
  byte *pbVar39;
  uint uVar40;
  uint *puVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  uint *local_78;
  byte *local_74;
  code *local_70;
  uint *local_68;
  int local_64;
  byte *local_5c;
  uint local_44;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  undefined1 auStack_38 [3];
  byte local_35;
  int local_34;
  ushort uVar10;
  
  local_34 = *DAT_2c60d854;
  iVar23 = param_2[3];
  if (iVar23 == 0) {
    cVar22 = *(char *)(param_2 + 4);
  }
  else {
    cVar22 = *(char *)(param_2 + 4);
    if (cVar22 == '\0') goto LAB_2c60d624;
  }
  if (cVar22 == '\x01') {
    iVar23 = 0;
  }
  sVar6 = ((short *)param_1[1])[2];
  sVar7 = *(short *)param_1[1];
  iVar12 = FUN_2c62a6b4(&local_40,*param_2,param_1[2]);
  if (iVar12 == 0) goto LAB_2c60d624;
  piVar13 = (int *)FUN_2c601b5c();
  puVar41 = (uint *)*param_1;
  iVar12 = (int)(short)((sVar6 + 1) - sVar7);
  if (*(int *)(*piVar13 + 0x1c) == 0) {
    sVar6 = ((short *)param_1[1])[1];
    sVar7 = *(short *)param_1[1];
    puVar41 = puVar41 + iVar12 * ((int)local_3e - (int)sVar6) + ((int)local_40 - (int)sVar7);
    local_68 = (uint *)param_2[1];
  }
  else {
    sVar6 = ((short *)param_1[1])[1];
    sVar7 = *(short *)param_1[1];
    local_68 = (uint *)param_2[1];
  }
  iVar31 = 0;
  if (local_68 != (uint *)0x0) {
    psVar14 = (short *)*param_2;
    iVar31 = (int)(short)((psVar14[2] + 1) - *psVar14);
    local_68 = local_68 +
               iVar31 * ((int)local_3e - (int)psVar14[1]) + ((int)local_40 - (int)*psVar14);
  }
  if (iVar23 == 0) {
    local_74 = (byte *)0x0;
    local_64 = 0;
  }
  else {
    psVar14 = (short *)param_2[5];
    local_64 = (int)(short)((psVar14[2] + 1) - *psVar14);
    local_74 = (byte *)(iVar23 + local_64 * ((int)local_3e - (int)psVar14[1]) +
                                 ((int)local_40 - (int)*psVar14));
  }
  FUN_2c62a690(&local_40,(int)-sVar7,(int)-sVar6);
  puVar27 = DAT_2c60e2c8;
  puVar21 = DAT_2c60e2c4;
  puVar15 = DAT_2c60e2a8;
  pbVar24 = DAT_2c60e2a4;
  if (*(int *)(*piVar13 + 0x1c) != 0) {
    if (param_2[1] == 0) {
      uVar1 = *(undefined1 *)(param_2 + 6);
      uVar25 = param_2[2];
      piVar13 = (int *)FUN_2c601b5c();
      if (local_74 == (byte *)0x0) {
        local_78 = (uint *)(int)local_3e;
        iVar23 = (int)local_3a;
        if ((int)local_78 <= iVar23) {
          iVar31 = (int)local_3c;
          do {
            iVar32 = (int)local_40;
            if (iVar32 <= iVar31) {
              do {
                sVar6 = (short)iVar32;
                iVar32 = iVar32 + 1;
                (**(code **)(*piVar13 + 0x1c))
                          (*piVar13,puVar41,iVar12,(int)sVar6,(int)(short)local_78,uVar25,uVar1);
                iVar31 = (int)local_3c;
              } while (iVar32 <= iVar31);
              iVar23 = (int)local_3a;
            }
            local_78 = (uint *)((int)local_78 + 1);
          } while ((int)local_78 <= iVar23);
        }
      }
      else {
        iVar23 = (int)(short)((local_3a + 1) - local_3e);
        iVar12 = (int)(short)((local_3c + 1) - local_40);
        if (0 < iVar23) {
          iVar31 = 0;
          do {
            if (0 < iVar12) {
              iVar32 = 0;
              pbVar24 = local_74 + -1;
              do {
                pbVar24 = pbVar24 + 1;
                if (*pbVar24 != 0) {
                  (**(code **)(*piVar13 + 0x1c))();
                }
                iVar32 = iVar32 + 1;
              } while (iVar12 != iVar32);
            }
            iVar31 = iVar31 + 1;
            local_74 = local_74 + local_64;
          } while (iVar23 != iVar31);
        }
      }
    }
    else {
      uVar1 = *(undefined1 *)(param_2 + 6);
      piVar13 = (int *)FUN_2c601b5c();
      iVar23 = (int)(short)((local_3c + 1) - local_40);
      pbVar24 = (byte *)(int)(short)((local_3a + 1) - local_3e);
      if (local_74 == (byte *)0x0) {
        if (0 < (int)pbVar24) {
          do {
            if (0 < iVar23) {
              iVar32 = 0;
              puVar15 = local_68;
              do {
                sVar6 = (short)iVar32;
                iVar32 = iVar32 + 1;
                (**(code **)(*piVar13 + 0x1c))
                          (*piVar13,puVar41,iVar12,(int)(short)(local_40 + sVar6),
                           (int)(short)(local_3e + (short)local_74),*puVar15,uVar1);
                puVar15 = puVar15 + 1;
              } while (iVar23 != iVar32);
            }
            local_68 = local_68 + iVar31;
            local_74 = local_74 + 1;
          } while (pbVar24 != local_74);
        }
      }
      else if (0 < (int)pbVar24) {
        pbVar39 = (byte *)0x0;
        do {
          if (0 < iVar23) {
            iVar12 = 0;
            local_78 = (uint *)(local_74 + -1);
            do {
              local_78 = (uint *)((int)local_78 + 1);
              if (*(byte *)local_78 != 0) {
                (**(code **)(*piVar13 + 0x1c))();
              }
              iVar12 = iVar12 + 1;
            } while (iVar23 != iVar12);
          }
          pbVar39 = pbVar39 + 1;
          local_74 = local_74 + local_64;
        } while (pbVar24 != pbVar39);
      }
    }
    goto LAB_2c60d624;
  }
  bVar2 = *(byte *)(*piVar13 + 0x10);
  bVar37 = bVar2 & 0x40;
  if ((bVar2 & 0x40) == 0) {
    cVar22 = *(char *)((int)param_2 + 0x19);
    if (cVar22 == '\0') {
      if (param_2[1] == 0) {
        bVar2 = *(byte *)(param_2 + 2);
        uVar44 = (uint)bVar2;
        uVar17 = param_2[2];
        iVar23 = (int)(short)((local_3c + 1) - local_40);
        bVar37 = *(byte *)((int)param_2 + 9);
        uVar43 = (uint)bVar37;
        iVar31 = (int)(short)((local_3a + 1) - local_3e);
        bVar4 = *(byte *)(param_2 + 6);
        uVar26 = (uint)bVar4;
        bVar3 = *(byte *)((int)param_2 + 10);
        uVar40 = (uint)bVar3;
        uVar9 = (ushort)bVar37;
        uVar10 = (ushort)bVar2;
        if (local_74 == (byte *)0x0) {
          if (uVar26 < 0xfd) {
            uVar8 = (ushort)bVar4;
            uVar33 = ~uVar26 & 0xff;
            uVar20 = ((int)(short)(ushort)bVar3 * (int)(short)uVar8 * 0x8081 & 0x7fffffffU) >> 0x17;
            uVar38 = ((int)(short)uVar8 * (int)(short)uVar9 * 0x8081 & 0x7fffffffU) >> 0x17;
            uVar17 = ((int)(short)uVar8 * (int)(short)uVar10 * 0x8081 & 0x7fffffffU) >> 0x17;
            if (0 < iVar31) {
              uVar35 = 0xff000000;
              iVar32 = 0;
              do {
                if (0 < iVar23) {
                  iVar29 = 0;
                  puVar15 = puVar41;
                  uVar36 = uVar35;
                  do {
                    uVar35 = *puVar15;
                    if (uVar35 != uVar36) {
                      uVar20 = ((*(byte *)((int)puVar15 + 2) * uVar33 + uVar40 * uVar26) * 0x8081 &
                               0x7fffffff) >> 0x17;
                      uVar38 = ((*(byte *)((int)puVar15 + 1) * uVar33 + uVar26 * uVar43) * 0x8081 &
                               0x7fffffff) >> 0x17;
                      uVar17 = (((byte)*puVar15 * uVar33 + uVar26 * uVar44) * 0x8081 & 0x7fffffff)
                               >> 0x17;
                    }
                    iVar29 = iVar29 + 1;
                    *(byte *)puVar15 = (byte)uVar17;
                    *(byte *)((int)puVar15 + 1) = (byte)uVar38;
                    *(byte *)((int)puVar15 + 2) = (byte)uVar20;
                    *(byte *)((int)puVar15 + 3) = 0xff;
                    puVar15 = puVar15 + 1;
                    uVar36 = uVar35;
                  } while (iVar23 != iVar29);
                }
                iVar32 = iVar32 + 1;
                puVar41 = puVar41 + iVar12;
              } while (iVar31 != iVar32);
            }
          }
          else if (0 < iVar31) {
            iVar32 = 0;
            do {
              iVar32 = iVar32 + 1;
              uVar17 = uVar17 & 0xff000000 | uVar44 | uVar43 << 8 | uVar40 << 0x10;
              FUN_2c62ecbc(puVar41,uVar17,iVar23);
              puVar41 = puVar41 + iVar12;
            } while (iVar31 != iVar32);
          }
        }
        else if (uVar26 < 0xfd) {
          uVar40 = *puVar41;
          if (0 < iVar31) {
            iVar32 = local_64 - iVar23;
            bVar19 = 0;
            uVar17 = 0;
            local_64 = 0;
            uVar43 = uVar40;
            do {
              pbVar24 = local_74;
              if (0 < iVar23) {
                pbVar24 = local_74 + iVar23;
                puVar15 = puVar41;
                do {
                  pbVar39 = local_74 + 1;
                  bVar5 = *local_74;
                  if (bVar5 != 0) {
                    if (bVar5 == bVar19) {
                      uVar44 = *puVar15;
                      if (uVar44 != uVar43) goto LAB_2c60f554;
                    }
                    else {
                      uVar17 = uVar26;
                      if (bVar5 != 0xff) {
                        uVar17 = (uint)((int)(short)(ushort)bVar5 * (int)(short)(ushort)bVar4) >> 8;
                      }
                      uVar44 = *puVar15;
LAB_2c60f554:
                      iVar29 = 0xff - uVar17;
                      sVar6 = (short)uVar17;
                      uVar40 = unaff_r9 & 0xff000000 |
                               (iVar29 * (uint)(byte)*puVar15 +
                               (int)sVar6 * (int)(short)(ushort)bVar2) * 0x8081 >> 0x17 & 0xff |
                               (((iVar29 * (uint)*(byte *)((int)puVar15 + 1) +
                                 (int)sVar6 * (int)(short)(ushort)bVar37) * 0x8081 & 0x7fffffff) >>
                               0x17) << 8 |
                               (((iVar29 * (uint)*(byte *)((int)puVar15 + 2) +
                                 (int)(short)(ushort)bVar3 * (int)sVar6) * 0x8081 & 0x7fffffff) >>
                               0x17) << 0x10 | 0xff000000;
                      uVar43 = uVar44;
                      unaff_r9 = uVar40;
                      bVar19 = bVar5;
                    }
                    *puVar15 = uVar40;
                  }
                  puVar15 = puVar15 + 1;
                  local_74 = pbVar39;
                } while (pbVar24 != pbVar39);
              }
              puVar41 = puVar41 + iVar12;
              local_64 = local_64 + 1;
              local_74 = pbVar24 + iVar32;
            } while (iVar31 != local_64);
          }
        }
        else {
          iVar32 = iVar23 + -4;
          if (0 < iVar31) {
            iVar29 = local_64 - iVar23;
            local_64 = 0;
            do {
              if (iVar23 < 1) {
                iVar30 = 0;
LAB_2c60e834:
                puVar15 = puVar41;
                if (iVar30 <= iVar32) goto LAB_2c60e564;
              }
              else {
                iVar30 = 0;
                if (((uint)local_74 & 3) != 0) {
                  iVar30 = 0;
                  pbVar39 = local_74 + iVar23;
                  pbVar24 = local_74;
                  puVar15 = puVar41;
                  do {
                    puVar41 = puVar15 + 1;
                    local_74 = pbVar24 + 1;
                    bVar2 = *pbVar24;
                    if (bVar2 == 0xff) {
                      uVar17 = uVar17 & 0xff000000 | uVar44 | uVar43 << 8 | uVar40 << 0x10;
                      *puVar15 = uVar17;
                    }
                    else {
                      iVar42 = 0xff - (uint)bVar2;
                      *(byte *)((int)puVar15 + 3) = 0xff;
                      *(byte *)((int)puVar15 + 2) =
                           (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 2) +
                                  (int)(short)(ushort)bVar3 * (int)(short)(ushort)bVar2) * 0x10102
                                 >> 0x18);
                      *(byte *)((int)puVar15 + 1) =
                           (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 1) +
                                  (int)(short)(ushort)bVar2 * (int)(short)uVar9) * 0x10102 >> 0x18);
                      *(byte *)puVar15 =
                           (byte)((iVar42 * (uint)(byte)*puVar15 +
                                  (int)(short)(ushort)bVar2 * (int)(short)uVar10) * 0x8081 >> 0x17);
                    }
                    iVar30 = iVar30 + 1;
                    if (pbVar39 == local_74) goto LAB_2c60e834;
                    pbVar24 = local_74;
                    puVar15 = puVar41;
                  } while (((uint)local_74 & 3) != 0);
                }
                pbVar24 = local_74;
                puVar15 = puVar41;
                if (iVar30 <= iVar32) {
LAB_2c60e564:
                  do {
                    puVar41 = puVar15 + 4;
                    pbVar24 = local_74 + 4;
                    if (*(int *)local_74 == -1) {
                      uVar17 = uVar17 & 0xff000000 | uVar44 | uVar43 << 8 | uVar40 << 0x10;
                      *puVar15 = uVar17;
                      puVar15[1] = uVar17;
                      puVar15[2] = uVar17;
                      puVar15[3] = uVar17;
                    }
                    else if (*(int *)local_74 != 0) {
                      bVar2 = *local_74;
                      uVar8 = (ushort)bVar3;
                      if (bVar2 == 0xff) {
                        uVar17 = uVar17 & 0xff000000 | uVar44 | uVar43 << 8 | uVar40 << 0x10;
                        *puVar15 = uVar17;
                      }
                      else {
                        iVar42 = 0xff - (uint)bVar2;
                        *(byte *)((int)puVar15 + 3) = 0xff;
                        *(byte *)((int)puVar15 + 2) =
                             (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 2) +
                                    (int)(short)uVar8 * (int)(short)(ushort)bVar2) * 0x10102 >> 0x18
                                   );
                        *(byte *)((int)puVar15 + 1) =
                             (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 1) +
                                    (int)(short)(ushort)bVar2 * (int)(short)uVar9) * 0x10102 >> 0x18
                                   );
                        *(byte *)puVar15 =
                             (byte)((iVar42 * (uint)(byte)*puVar15 +
                                    (int)(short)(ushort)bVar2 * (int)(short)uVar10) * 0x8081 >> 0x17
                                   );
                      }
                      bVar2 = local_74[1];
                      if (bVar2 == 0xff) {
                        uVar17 = uVar17 & 0xff000000 | uVar44 | uVar43 << 8 | uVar40 << 0x10;
                        puVar15[1] = uVar17;
                      }
                      else {
                        iVar42 = 0xff - (uint)bVar2;
                        *(byte *)((int)puVar15 + 7) = 0xff;
                        *(byte *)((int)puVar15 + 6) =
                             (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 6) +
                                    (int)(short)uVar8 * (int)(short)(ushort)bVar2) * 0x10102 >> 0x18
                                   );
                        *(byte *)((int)puVar15 + 5) =
                             (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 5) +
                                    (int)(short)(ushort)bVar2 * (int)(short)uVar9) * 0x10102 >> 0x18
                                   );
                        *(byte *)(puVar15 + 1) =
                             (byte)((iVar42 * (uint)(byte)puVar15[1] +
                                    (int)(short)(ushort)bVar2 * (int)(short)uVar10) * 0x8081 >> 0x17
                                   );
                      }
                      bVar2 = local_74[2];
                      if (bVar2 == 0xff) {
                        uVar17 = uVar17 & 0xff000000 | uVar44 | uVar43 << 8 | uVar40 << 0x10;
                        puVar15[2] = uVar17;
                      }
                      else {
                        iVar42 = 0xff - (uint)bVar2;
                        *(byte *)((int)puVar15 + 0xb) = 0xff;
                        *(byte *)((int)puVar15 + 10) =
                             (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 10) +
                                    (int)(short)uVar8 * (int)(short)(ushort)bVar2) * 0x10102 >> 0x18
                                   );
                        *(byte *)((int)puVar15 + 9) =
                             (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 9) +
                                    (int)(short)(ushort)bVar2 * (int)(short)uVar9) * 0x10102 >> 0x18
                                   );
                        *(byte *)(puVar15 + 2) =
                             (byte)((iVar42 * (uint)(byte)puVar15[2] +
                                    (int)(short)(ushort)bVar2 * (int)(short)uVar10) * 0x8081 >> 0x17
                                   );
                      }
                      bVar2 = local_74[3];
                      if (bVar2 == 0xff) {
                        uVar17 = uVar17 & 0xff000000 | uVar44 | uVar43 << 8 | uVar40 << 0x10;
                        puVar15[3] = uVar17;
                      }
                      else {
                        iVar42 = 0xff - (uint)bVar2;
                        *(byte *)((int)puVar15 + 0xf) = 0xff;
                        *(byte *)((int)puVar15 + 0xe) =
                             (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 0xe) +
                                    (int)(short)uVar8 * (int)(short)(ushort)bVar2) * 0x10102 >> 0x18
                                   );
                        *(byte *)((int)puVar15 + 0xd) =
                             (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 0xd) +
                                    (int)(short)(ushort)bVar2 * (int)(short)uVar9) * 0x10102 >> 0x18
                                   );
                        *(byte *)(puVar15 + 3) =
                             (byte)((iVar42 * (uint)(byte)puVar15[3] +
                                    (int)(short)(ushort)bVar2 * (int)(short)uVar10) * 0x8081 >> 0x17
                                   );
                      }
                    }
                    iVar30 = iVar30 + 4;
                    local_74 = pbVar24;
                    puVar15 = puVar41;
                  } while (iVar30 <= iVar32);
                  if (iVar23 <= iVar30) goto LAB_2c60e7a0;
                }
                pbVar39 = pbVar24;
                puVar15 = puVar41;
                do {
                  puVar41 = puVar15 + 1;
                  local_74 = pbVar39 + 1;
                  bVar2 = *pbVar39;
                  if (bVar2 == 0xff) {
                    uVar17 = uVar17 & 0xff000000 | uVar44 | uVar43 << 8 | uVar40 << 0x10;
                    *puVar15 = uVar17;
                  }
                  else {
                    iVar42 = 0xff - (uint)bVar2;
                    *(byte *)((int)puVar15 + 3) = 0xff;
                    *(byte *)((int)puVar15 + 2) =
                         (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 2) +
                                (int)(short)(ushort)bVar3 * (int)(short)(ushort)bVar2) * 0x10102 >>
                               0x18);
                    *(byte *)((int)puVar15 + 1) =
                         (byte)((iVar42 * (uint)*(byte *)((int)puVar15 + 1) +
                                (int)(short)(ushort)bVar2 * (int)(short)uVar9) * 0x10102 >> 0x18);
                    *(byte *)puVar15 =
                         (byte)((iVar42 * (uint)(byte)*puVar15 +
                                (int)(short)(ushort)bVar2 * (int)(short)uVar10) * 0x8081 >> 0x17);
                  }
                  pbVar39 = local_74;
                  puVar15 = puVar41;
                } while ((int)(local_74 + (iVar30 - (int)pbVar24)) < iVar23);
              }
LAB_2c60e7a0:
              puVar41 = puVar41 + (iVar12 - iVar23);
              local_64 = local_64 + 1;
              local_74 = local_74 + iVar29;
            } while (iVar31 != local_64);
          }
        }
      }
      else {
        bVar2 = *(byte *)(param_2 + 6);
        uVar26 = (uint)bVar2;
        iVar23 = (int)(short)((local_3c + 1) - local_40);
        pbVar24 = (byte *)(int)(short)((local_3a + 1) - local_3e);
        if (local_74 == (byte *)0x0) {
          if (uVar26 < 0xfd) {
            if (0 < (int)pbVar24) {
              iVar32 = 0xff - uVar26;
              pbVar39 = (byte *)((int)local_68 + 1);
              pbVar16 = (byte *)((int)local_68 + 2);
              do {
                if (0 < iVar23) {
                  iVar29 = 0;
                  puVar15 = puVar41;
                  do {
                    bVar2 = pbVar16[iVar29 * 4];
                    bVar37 = pbVar39[iVar29 * 4];
                    bVar4 = pbVar39[iVar29 * 4 + -1];
                    iVar29 = iVar29 + 1;
                    *(byte *)((int)puVar15 + 3) = 0xff;
                    *(byte *)((int)puVar15 + 2) =
                         (byte)((bVar2 * uVar26 + iVar32 * (uint)*(byte *)((int)puVar15 + 2)) *
                                0x10102 >> 0x18);
                    *(byte *)((int)puVar15 + 1) =
                         (byte)((bVar37 * uVar26 + iVar32 * (uint)*(byte *)((int)puVar15 + 1)) *
                                0x10102 >> 0x18);
                    *(byte *)puVar15 =
                         (byte)((bVar4 * uVar26 + iVar32 * (uint)(byte)*puVar15) * 0x8081 >> 0x17);
                    puVar15 = puVar15 + 1;
                  } while (iVar23 != iVar29);
                }
                puVar41 = puVar41 + iVar12;
                local_74 = local_74 + 1;
                pbVar39 = pbVar39 + iVar31 * 4;
                pbVar16 = pbVar16 + iVar31 * 4;
              } while (pbVar24 != local_74);
            }
          }
          else if (0 < (int)pbVar24) {
            pbVar39 = (byte *)0x0;
            do {
              pbVar39 = pbVar39 + 1;
              FUN_2c62c0d8(puVar41,local_68,iVar23 << 2);
              local_68 = local_68 + iVar31;
              puVar41 = puVar41 + iVar12;
            } while (pbVar24 != pbVar39);
          }
        }
        else if (uVar26 < 0xfe) {
          if (0 < (int)pbVar24) {
            pbVar16 = local_74 + iVar23;
            pbVar39 = (byte *)0x0;
            do {
              puVar15 = puVar41;
              puVar21 = local_68;
              pbVar18 = local_74;
              if (0 < iVar23) {
                do {
                  pbVar34 = pbVar18 + 1;
                  bVar37 = *pbVar18;
                  if (bVar37 != 0) {
                    uVar40 = uVar26;
                    if (bVar37 < 0xfd) {
                      uVar40 = (int)(short)(ushort)bVar2 * (int)(short)(ushort)bVar37 >> 8;
                    }
                    iVar32 = 0xff - uVar40;
                    bVar37 = *(byte *)((int)puVar21 + 2);
                    bVar4 = *(byte *)((int)puVar21 + 1);
                    uVar17 = *puVar21;
                    *(byte *)((int)puVar15 + 3) = 0xff;
                    *(byte *)((int)puVar15 + 2) =
                         (byte)((uVar40 * bVar37 + iVar32 * (uint)*(byte *)((int)puVar15 + 2)) *
                                0x10102 >> 0x18);
                    *(byte *)((int)puVar15 + 1) =
                         (byte)((uVar40 * bVar4 + iVar32 * (uint)*(byte *)((int)puVar15 + 1)) *
                                0x10102 >> 0x18);
                    *(byte *)puVar15 =
                         (byte)((uVar40 * (byte)uVar17 + iVar32 * (uint)(byte)*puVar15) * 0x8081 >>
                               0x17);
                  }
                  puVar15 = puVar15 + 1;
                  puVar21 = puVar21 + 1;
                  pbVar18 = pbVar34;
                } while (pbVar34 != pbVar16);
              }
              pbVar39 = pbVar39 + 1;
              puVar41 = puVar41 + iVar12;
              pbVar16 = pbVar16 + local_64;
              local_68 = local_68 + iVar31;
              local_74 = local_74 + local_64;
            } while (pbVar24 != pbVar39);
          }
        }
        else {
          iVar32 = iVar23 + -4;
          if (0 < (int)pbVar24) {
            local_70 = (code *)0x0;
            do {
              pbVar39 = local_74;
              if (iVar23 < 1) {
                iVar29 = 0;
LAB_2c60e9d0:
                if (iVar29 < iVar32) goto LAB_2c60e9d6;
              }
              else {
                if (((uint)local_74 & 3) == 0) {
                  iVar29 = 0;
                }
                else {
                  iVar29 = 0;
                  pbVar16 = local_74;
                  puVar15 = puVar41;
                  puVar21 = local_68;
                  do {
                    pbVar39 = pbVar16 + 1;
                    uVar26 = (uint)*pbVar16;
                    if (uVar26 != 0) {
                      if (uVar26 == 0xff) {
                        *puVar15 = *puVar21;
                      }
                      else {
                        iVar30 = 0xff - uVar26;
                        bVar2 = *(byte *)((int)puVar21 + 2);
                        bVar37 = *(byte *)((int)puVar21 + 1);
                        uVar40 = *puVar21;
                        *(byte *)((int)puVar15 + 3) = 0xff;
                        *(byte *)((int)puVar15 + 2) =
                             (byte)((bVar2 * uVar26 + iVar30 * (uint)*(byte *)((int)puVar15 + 2)) *
                                    0x10102 >> 0x18);
                        *(byte *)((int)puVar15 + 1) =
                             (byte)((bVar37 * uVar26 + iVar30 * (uint)*(byte *)((int)puVar15 + 1)) *
                                    0x10102 >> 0x18);
                        *(byte *)puVar15 =
                             (byte)(((byte)uVar40 * uVar26 + iVar30 * (uint)(byte)*puVar15) * 0x8081
                                   >> 0x17);
                      }
                    }
                    iVar29 = iVar29 + 1;
                    if (iVar23 == iVar29) goto LAB_2c60e9d0;
                    puVar21 = puVar21 + 1;
                    puVar15 = puVar15 + 1;
                    pbVar16 = pbVar39;
                  } while (((uint)pbVar39 & 3) != 0);
                }
                if (iVar29 < iVar32) {
LAB_2c60e9d6:
                  puVar15 = local_68 + iVar29;
                  puVar21 = puVar41 + iVar29;
                  pbVar16 = pbVar39;
                  do {
                    pbVar39 = pbVar16 + 4;
                    if (*(int *)pbVar16 != 0) {
                      if (*(int *)pbVar16 == -1) {
                        *puVar21 = *puVar15;
                        puVar21[1] = puVar15[1];
                        puVar21[2] = puVar15[2];
                        puVar21[3] = puVar15[3];
                      }
                      else {
                        uVar26 = (uint)*pbVar16;
                        if (uVar26 != 0) {
                          if (uVar26 == 0xff) {
                            *puVar21 = *puVar15;
                          }
                          else {
                            iVar30 = 0xff - uVar26;
                            bVar2 = *(byte *)((int)puVar15 + 2);
                            bVar37 = *(byte *)((int)puVar15 + 1);
                            uVar40 = *puVar15;
                            *(byte *)((int)puVar21 + 3) = 0xff;
                            *(byte *)((int)puVar21 + 2) =
                                 (byte)((bVar2 * uVar26 + iVar30 * (uint)*(byte *)((int)puVar21 + 2)
                                        ) * 0x10102 >> 0x18);
                            *(byte *)((int)puVar21 + 1) =
                                 (byte)((bVar37 * uVar26 +
                                        iVar30 * (uint)*(byte *)((int)puVar21 + 1)) * 0x10102 >>
                                       0x18);
                            *(byte *)puVar21 =
                                 (byte)(((byte)uVar40 * uVar26 + iVar30 * (uint)(byte)*puVar21) *
                                        0x8081 >> 0x17);
                          }
                        }
                        uVar26 = (uint)pbVar16[1];
                        if (uVar26 != 0) {
                          if (uVar26 == 0xff) {
                            puVar21[1] = puVar15[1];
                          }
                          else {
                            iVar30 = 0xff - uVar26;
                            bVar2 = *(byte *)((int)puVar15 + 6);
                            bVar37 = *(byte *)((int)puVar15 + 5);
                            uVar40 = puVar15[1];
                            *(byte *)((int)puVar21 + 7) = 0xff;
                            *(byte *)((int)puVar21 + 6) =
                                 (byte)((bVar2 * uVar26 + iVar30 * (uint)*(byte *)((int)puVar21 + 6)
                                        ) * 0x10102 >> 0x18);
                            *(byte *)((int)puVar21 + 5) =
                                 (byte)((bVar37 * uVar26 +
                                        iVar30 * (uint)*(byte *)((int)puVar21 + 5)) * 0x10102 >>
                                       0x18);
                            *(byte *)(puVar21 + 1) =
                                 (byte)(((byte)uVar40 * uVar26 + iVar30 * (uint)(byte)puVar21[1]) *
                                        0x8081 >> 0x17);
                          }
                        }
                        uVar26 = (uint)pbVar16[2];
                        if (uVar26 != 0) {
                          if (uVar26 == 0xff) {
                            puVar21[2] = puVar15[2];
                          }
                          else {
                            iVar30 = 0xff - uVar26;
                            bVar2 = *(byte *)((int)puVar15 + 10);
                            bVar37 = *(byte *)((int)puVar15 + 9);
                            uVar40 = puVar15[2];
                            *(byte *)((int)puVar21 + 0xb) = 0xff;
                            *(byte *)((int)puVar21 + 10) =
                                 (byte)((bVar2 * uVar26 +
                                        iVar30 * (uint)*(byte *)((int)puVar21 + 10)) * 0x10102 >>
                                       0x18);
                            *(byte *)((int)puVar21 + 9) =
                                 (byte)((bVar37 * uVar26 +
                                        iVar30 * (uint)*(byte *)((int)puVar21 + 9)) * 0x10102 >>
                                       0x18);
                            *(byte *)(puVar21 + 2) =
                                 (byte)(((byte)uVar40 * uVar26 + iVar30 * (uint)(byte)puVar21[2]) *
                                        0x8081 >> 0x17);
                          }
                        }
                        uVar26 = (uint)pbVar16[3];
                        if (uVar26 != 0) {
                          if (uVar26 == 0xff) {
                            puVar21[3] = puVar15[3];
                          }
                          else {
                            iVar30 = 0xff - uVar26;
                            bVar2 = *(byte *)((int)puVar15 + 0xe);
                            bVar37 = *(byte *)((int)puVar15 + 0xd);
                            uVar40 = puVar15[3];
                            *(byte *)((int)puVar21 + 0xf) = 0xff;
                            *(byte *)((int)puVar21 + 0xe) =
                                 (byte)((bVar2 * uVar26 +
                                        iVar30 * (uint)*(byte *)((int)puVar21 + 0xe)) * 0x10102 >>
                                       0x18);
                            *(byte *)((int)puVar21 + 0xd) =
                                 (byte)((bVar37 * uVar26 +
                                        iVar30 * (uint)*(byte *)((int)puVar21 + 0xd)) * 0x10102 >>
                                       0x18);
                            *(byte *)(puVar21 + 3) =
                                 (byte)(((byte)uVar40 * uVar26 + iVar30 * (uint)(byte)puVar21[3]) *
                                        0x8081 >> 0x17);
                          }
                        }
                      }
                    }
                    iVar29 = iVar29 + 4;
                    puVar15 = puVar15 + 4;
                    puVar21 = puVar21 + 4;
                    pbVar16 = pbVar39;
                  } while (iVar29 < iVar32);
                  if (iVar23 <= iVar29) goto LAB_2c60ec4a;
                }
                pbVar39 = pbVar39 + -1;
                puVar21 = local_68 + iVar29;
                puVar15 = puVar41 + iVar29;
                do {
                  pbVar39 = pbVar39 + 1;
                  uVar26 = (uint)*pbVar39;
                  if (uVar26 != 0) {
                    if (uVar26 == 0xff) {
                      *puVar15 = *puVar21;
                    }
                    else {
                      iVar30 = 0xff - uVar26;
                      bVar2 = *(byte *)((int)puVar21 + 2);
                      bVar37 = *(byte *)((int)puVar21 + 1);
                      uVar40 = *puVar21;
                      *(byte *)((int)puVar15 + 3) = 0xff;
                      *(byte *)((int)puVar15 + 2) =
                           (byte)((bVar2 * uVar26 + iVar30 * (uint)*(byte *)((int)puVar15 + 2)) *
                                  0x10102 >> 0x18);
                      *(byte *)((int)puVar15 + 1) =
                           (byte)((bVar37 * uVar26 + iVar30 * (uint)*(byte *)((int)puVar15 + 1)) *
                                  0x10102 >> 0x18);
                      *(byte *)puVar15 =
                           (byte)(((byte)uVar40 * uVar26 + iVar30 * (uint)(byte)*puVar15) * 0x8081
                                 >> 0x17);
                    }
                  }
                  iVar29 = iVar29 + 1;
                  puVar21 = puVar21 + 1;
                  puVar15 = puVar15 + 1;
                } while (iVar29 < iVar23);
              }
LAB_2c60ec4a:
              puVar41 = puVar41 + iVar12;
              local_68 = local_68 + iVar31;
              local_70 = local_70 + 1;
              local_74 = local_74 + local_64;
            } while ((code *)pbVar24 != local_70);
          }
        }
      }
    }
    else if (param_2[1] == 0) {
      bVar2 = *(byte *)(param_2 + 6);
      uVar26 = (uint)bVar2;
      uVar25 = param_2[2];
      if ((byte)(cVar22 - 1) < 3) {
        iVar31 = (int)(short)((local_3a + 1) - local_3e);
        iVar23 = (int)(short)((local_3c + 1) - local_40);
        pcVar28 = *(code **)(DAT_2c60e9e4 + (uint)(byte)(cVar22 - 1) * 4);
        if (local_74 == (byte *)0x0) {
          uVar17 = *puVar41;
          uVar40 = (*pcVar28)(uVar25,uVar17,uVar26);
          if (0 < iVar31) {
            iVar32 = 0;
            do {
              if (0 < iVar23) {
                iVar29 = 0;
                puVar15 = puVar41;
                uVar43 = uVar17;
                do {
                  uVar17 = *puVar15;
                  if (uVar43 != uVar17) {
                    uVar40 = (*pcVar28)(uVar25,uVar17,uVar26);
                  }
                  iVar29 = iVar29 + 1;
                  *puVar15 = uVar40;
                  puVar15 = puVar15 + 1;
                  uVar43 = uVar17;
                } while (iVar23 != iVar29);
              }
              iVar32 = iVar32 + 1;
              puVar41 = puVar41 + iVar12;
            } while (iVar31 != iVar32);
          }
        }
        else {
          uVar17 = *puVar41;
          uVar40 = uVar26;
          if (*local_74 < 0xfd) {
            uVar40 = (uint)((int)(short)(ushort)*local_74 * (int)(short)(ushort)bVar2) >> 8;
          }
          uVar40 = (*pcVar28)(uVar25,uVar17,uVar40);
          if (0 < iVar31) {
            local_74 = local_74 + iVar23;
            iVar32 = 0;
            do {
              pbVar24 = local_74 + -iVar23;
              puVar15 = puVar41;
              if (0 < iVar23) {
                do {
                  pbVar39 = pbVar24 + 1;
                  bVar4 = *pbVar24;
                  if (bVar4 != 0) {
                    if ((bVar37 != bVar4) || (uVar17 != *puVar15)) {
                      uVar40 = uVar26;
                      if (bVar4 < 0xfd) {
                        uVar40 = (uint)((int)(short)(ushort)bVar4 * (int)(short)(ushort)bVar2) >> 8;
                      }
                      uVar40 = (*pcVar28)(uVar25,*puVar15,uVar40);
                      bVar37 = *pbVar24;
                      uVar17 = *puVar15;
                    }
                    *puVar15 = uVar40;
                  }
                  puVar15 = puVar15 + 1;
                  pbVar24 = pbVar39;
                } while (pbVar39 != local_74);
              }
              iVar32 = iVar32 + 1;
              puVar41 = puVar41 + iVar12;
              local_74 = local_74 + local_64;
            } while (iVar31 != iVar32);
          }
        }
      }
    }
    else if ((byte)(cVar22 - 1) < 3) {
      bVar2 = *(byte *)(param_2 + 6);
      uVar26 = (uint)bVar2;
      iVar23 = (int)(short)((local_3c + 1) - local_40);
      pbVar24 = (byte *)(int)(short)((local_3a + 1) - local_3e);
      pcVar28 = *(code **)(DAT_2c60db84 + (uint)(byte)(cVar22 - 1) * 4);
      if (local_74 == (byte *)0x0) {
        uVar40 = *puVar41;
        uVar43 = *local_68;
        uVar17 = (*pcVar28)(uVar43,uVar40,uVar26);
        if (0 < (int)pbVar24) {
          local_78 = (uint *)local_74;
          do {
            if (0 < iVar23) {
              iVar32 = 0;
              puVar15 = local_68 + -1;
              uVar44 = uVar43;
              puVar21 = puVar41;
              do {
                puVar15 = puVar15 + 1;
                uVar43 = *puVar15;
                if (uVar44 == uVar43) {
                  uVar44 = *puVar21;
                  if (uVar40 != uVar44) goto LAB_2c60f434;
                }
                else {
                  uVar44 = *puVar21;
LAB_2c60f434:
                  uVar17 = (*pcVar28)(uVar43,uVar44,uVar26);
                  uVar40 = uVar44;
                }
                iVar32 = iVar32 + 1;
                *puVar21 = uVar17;
                uVar44 = uVar43;
                puVar21 = puVar21 + 1;
              } while (iVar23 != iVar32);
            }
            puVar41 = puVar41 + iVar12;
            local_78 = (uint *)((int)local_78 + 1);
            local_68 = local_68 + iVar31;
          } while ((uint *)pbVar24 != local_78);
        }
      }
      else {
        uVar40 = *puVar41;
        uVar43 = *local_68;
        uVar17 = uVar26;
        if (*local_74 < 0xfd) {
          uVar17 = (uint)((int)(short)(ushort)bVar2 * (int)(short)(ushort)*local_74) >> 8;
        }
        uVar44 = (*pcVar28)(uVar43,uVar40,uVar17);
        if (0 < (int)pbVar24) {
          pbVar39 = local_74 + iVar23;
          local_74 = (byte *)0x0;
          do {
            pbVar16 = pbVar39 + -iVar23;
            puVar15 = puVar41;
            puVar21 = local_68;
            uVar38 = uVar43;
            if (0 < iVar23) {
              do {
                pbVar18 = pbVar16 + 1;
                bVar37 = *pbVar16;
                uVar38 = uVar43;
                if (bVar37 != 0) {
                  if (bVar37 < 0xfd) {
                    uVar38 = *puVar21;
                    uVar20 = (uint)((int)(short)(ushort)bVar2 * (int)(short)(ushort)bVar37) >> 8;
                    if (uVar43 == uVar38) goto LAB_2c60da8a;
LAB_2c60da54:
                    uVar43 = *puVar15;
LAB_2c60da58:
                    uVar44 = (*pcVar28)(uVar38,uVar43);
                    uVar40 = uVar43;
                    uVar17 = uVar20;
                  }
                  else {
                    uVar38 = *puVar21;
                    uVar20 = uVar26;
                    if (uVar43 != uVar38) goto LAB_2c60da54;
LAB_2c60da8a:
                    uVar43 = *puVar15;
                    if ((uVar17 != uVar20) || (uVar40 != uVar43)) goto LAB_2c60da58;
                  }
                  *puVar15 = uVar44;
                }
                puVar15 = puVar15 + 1;
                pbVar16 = pbVar18;
                puVar21 = puVar21 + 1;
                uVar43 = uVar38;
              } while (pbVar18 != pbVar39);
            }
            puVar41 = puVar41 + iVar12;
            local_74 = local_74 + 1;
            local_68 = local_68 + iVar31;
            pbVar39 = pbVar39 + local_64;
            uVar43 = uVar38;
          } while (pbVar24 != local_74);
        }
      }
    }
    goto LAB_2c60d624;
  }
  if (param_2[1] == 0) {
    bVar2 = *(byte *)(param_2 + 6);
    uVar26 = (uint)bVar2;
    iVar23 = (int)(short)((local_3c + 1) - local_40);
    iVar31 = (int)(short)((local_3a + 1) - local_3e);
    local_44 = param_2[2];
    FUN_2c62c0d8(auStack_38,&local_44,4);
    puVar27 = DAT_2c60f3d4;
    puVar21 = DAT_2c60f0f4;
    puVar15 = DAT_2c60dfe4;
    local_35 = bVar2;
    if (local_74 == (byte *)0x0) {
      if (uVar26 < 0xfd) {
        if (0 < iVar31) {
          iVar32 = 0;
          do {
            if (0 < iVar23) {
              iVar30 = 0;
              iVar29 = 0xff - uVar26;
              puVar15 = puVar41;
              do {
                bVar37 = *(byte *)((int)puVar15 + 3);
                uVar40 = *puVar15;
                if (bVar37 < 3) {
                  *(byte *)((int)puVar15 + 3) = bVar2;
                  uVar17 = uVar26;
                  uVar40 = local_44;
LAB_2c60f228:
                  if (2 < uVar17) goto LAB_2c60f246;
                }
                else {
                  if (2 < uVar26) {
                    if (bVar37 < 0xfd) {
                      if ((((*DAT_2c60f3c4 == uVar26) && (*DAT_2c60f3c8 == bVar37)) &&
                          (local_44 == *DAT_2c60f3cc)) && (uVar40 == *DAT_2c60f3d0)) {
                        uVar17 = (uint)*DAT_2c60f3d8;
                      }
                      else {
                        *DAT_2c60f3c4 = bVar2;
                        *DAT_2c60f3c8 = bVar37;
                        *DAT_2c60f3cc = local_44;
                        *DAT_2c60f3d0 = uVar40;
                        *(undefined1 *)((int)puVar27 + 3) = 0xff;
                        uVar43 = (int)(short)(0xff - (ushort)bVar2) *
                                 (int)(short)(0xff - (ushort)bVar37) ^ 0xff00;
                        uVar17 = (uVar43 & 0xffff) >> 8;
                        *DAT_2c60f3d8 = (byte)(uVar43 >> 8);
                        uVar43 = (uVar26 * 0xff) / uVar17 & 0xff;
                        iVar42 = 0xff - uVar43;
                        *(char *)((int)puVar27 + 2) =
                             (char)((uVar43 * ((local_44 & 0xffffff) >> 0x10) +
                                    iVar42 * ((uVar40 & 0xffffff) >> 0x10)) * 0x10102 >> 0x18);
                        *(char *)((int)puVar27 + 1) =
                             (char)((uVar43 * ((local_44 & 0xffff) >> 8) +
                                    iVar42 * ((uVar40 & 0xffff) >> 8)) * 0x10102 >> 0x18);
                        *(char *)puVar27 =
                             (char)((uVar43 * (local_44 & 0xff) + iVar42 * (uVar40 & 0xff)) * 0x8081
                                   >> 0x17);
                      }
                      uVar40 = *puVar27;
                      *(byte *)((int)puVar15 + 3) = (byte)uVar17;
                      goto LAB_2c60f228;
                    }
                    *(byte *)((int)puVar15 + 3) = 0xff;
                    uVar40 = ((local_44 & 0xff) * uVar26 + iVar29 * (uVar40 & 0xff)) * 0x8081 >>
                             0x17 & 0xff |
                             (((((local_44 & 0xffff) >> 8) * uVar26 +
                               iVar29 * ((uVar40 & 0xffff) >> 8)) * 0x8081 & 0x7fffffff) >> 0x17) <<
                             8 | (((((local_44 & 0xffffff) >> 0x10) * uVar26 +
                                   iVar29 * ((uVar40 & 0xffffff) >> 0x10)) * 0x8081 & 0x7fffffff) >>
                                 0x17) << 0x10;
                  }
LAB_2c60f246:
                  *(byte *)puVar15 = (byte)uVar40;
                  *(byte *)((int)puVar15 + 1) = (byte)(uVar40 >> 8);
                  *(byte *)((int)puVar15 + 2) = (byte)(uVar40 >> 0x10);
                }
                iVar30 = iVar30 + 1;
                puVar15 = puVar15 + 1;
              } while (iVar23 != iVar30);
            }
            iVar32 = iVar32 + 1;
            puVar41 = puVar41 + iVar12;
          } while (iVar31 != iVar32);
        }
      }
      else {
        puVar15 = puVar41;
        if (0 < iVar23) {
          iVar32 = 0;
          do {
            iVar32 = iVar32 + 1;
            FUN_2c62c0d8(puVar15,auStack_38,4);
            puVar15 = puVar15 + 1;
          } while (iVar23 != iVar32);
          puVar15 = puVar41 + iVar23;
        }
        puVar15 = puVar15 + (iVar12 - iVar23);
        if (1 < iVar31) {
          iVar32 = 1;
          do {
            iVar32 = iVar32 + 1;
            FUN_2c62c0d8(puVar15,puVar41,iVar23 << 2);
            puVar15 = puVar15 + iVar12;
          } while (iVar31 != iVar32);
        }
      }
    }
    else if (uVar26 < 0xfd) {
      if (0 < iVar31) {
        iVar32 = 0;
        do {
          pbVar24 = local_74;
          if (0 < iVar23) {
            pbVar24 = local_74 + iVar23;
            puVar21 = puVar41;
            do {
              pbVar39 = local_74 + 1;
              bVar37 = *local_74;
              if (bVar37 != 0) {
                uVar40 = uVar26;
                if (bVar37 != 0xff) {
                  uVar40 = (uint)((int)(short)(ushort)bVar37 * (int)(short)(ushort)bVar2) >> 8;
                }
                bVar37 = *(byte *)((int)puVar21 + 3);
                uVar17 = *puVar21;
                if (bVar37 < 3) {
                  *(byte *)((int)puVar21 + 3) = (byte)uVar40;
                  uVar17 = local_44;
LAB_2c60dc88:
                  if (uVar40 < 3) goto LAB_2c60dc8c;
                }
                else if (2 < uVar40) {
                  if (bVar37 < 0xfd) {
                    if ((((*DAT_2c60dfd0 == uVar40) && (*DAT_2c60e53c == bVar37)) &&
                        (local_44 == *DAT_2c60e540)) && (uVar17 == *DAT_2c60e544)) {
                      uVar40 = (uint)*DAT_2c60e54c;
                    }
                    else {
                      *DAT_2c60dfd0 = (byte)uVar40;
                      *DAT_2c60dfd4 = bVar37;
                      *DAT_2c60dfd8 = local_44;
                      *DAT_2c60dfdc = uVar17;
                      *(undefined1 *)((int)puVar15 + 3) = 0xff;
                      uVar43 = uVar40 * 0xff;
                      uVar44 = (int)(short)(0xff - (short)uVar40) *
                               (int)(short)(0xff - (ushort)bVar37) ^ 0xff00;
                      uVar40 = (uVar44 & 0xffff) >> 8;
                      uVar43 = uVar43 / uVar40 & 0xff;
                      *DAT_2c60dfe0 = (char)(uVar44 >> 8);
                      iVar29 = 0xff - uVar43;
                      *(char *)((int)puVar15 + 2) =
                           (char)((uVar43 * ((local_44 & 0xffffff) >> 0x10) +
                                  iVar29 * ((uVar17 & 0xffffff) >> 0x10)) * 0x10102 >> 0x18);
                      *(char *)((int)puVar15 + 1) =
                           (char)((uVar43 * ((local_44 & 0xffff) >> 8) +
                                  iVar29 * ((uVar17 & 0xffff) >> 8)) * 0x10102 >> 0x18);
                      *(char *)puVar15 =
                           (char)((uVar43 * (local_44 & 0xff) + iVar29 * (uVar17 & 0xff)) * 0x8081
                                 >> 0x17);
                    }
                    uVar17 = *puVar15;
                    *(byte *)((int)puVar21 + 3) = (byte)uVar40;
                    goto LAB_2c60dc88;
                  }
                  iVar29 = 0xff - uVar40;
                  *(byte *)((int)puVar21 + 3) = 0xff;
                  uVar17 = ((local_44 & 0xff) * uVar40 + iVar29 * (uVar17 & 0xff)) * 0x8081 >> 0x17
                           & 0xff | (((((local_44 & 0xffff) >> 8) * uVar40 +
                                      iVar29 * ((uVar17 & 0xffff) >> 8)) * 0x8081 & 0x7fffffff) >>
                                    0x17) << 8 |
                           (((((local_44 & 0xffffff) >> 0x10) * uVar40 +
                             iVar29 * ((uVar17 & 0xffffff) >> 0x10)) * 0x8081 & 0x7fffffff) >> 0x17)
                           << 0x10;
                }
                *(byte *)puVar21 = (byte)uVar17;
                *(byte *)((int)puVar21 + 1) = (byte)(uVar17 >> 8);
                *(byte *)((int)puVar21 + 2) = (byte)(uVar17 >> 0x10);
              }
LAB_2c60dc8c:
              local_74 = pbVar39;
              puVar21 = puVar21 + 1;
            } while (pbVar24 != pbVar39);
          }
          iVar32 = iVar32 + 1;
          puVar41 = puVar41 + iVar12;
          local_74 = pbVar24 + (local_64 - iVar23);
        } while (iVar31 != iVar32);
      }
    }
    else if (0 < iVar31) {
      iVar32 = 0;
      do {
        pbVar24 = local_74;
        if (0 < iVar23) {
          pbVar24 = local_74 + iVar23;
          puVar15 = puVar41;
          do {
            pbVar39 = DAT_2c60f0d8;
            pbVar16 = local_74 + 1;
            bVar37 = *local_74;
            uVar40 = (uint)bVar37;
            bVar2 = *(byte *)((int)puVar15 + 3);
            uVar26 = *puVar15;
            if ((uVar40 < 0xfd) && (2 < bVar2)) {
              if (2 < uVar40) {
                if (bVar2 < 0xfd) {
                  if (((*DAT_2c60f0d8 == uVar40) && (*DAT_2c60f0dc == bVar2)) &&
                     ((local_44 == *DAT_2c60f0e0 && (uVar26 == *DAT_2c60f0e4)))) {
                    uVar40 = (uint)*DAT_2c60f0e8;
                  }
                  else {
                    *(undefined1 *)((int)puVar21 + 3) = 0xff;
                    *pbVar39 = bVar37;
                    *DAT_2c60f0dc = bVar2;
                    *DAT_2c60f0e0 = local_44;
                    *DAT_2c60f0e4 = uVar26;
                    uVar43 = (int)(short)(0xff - (ushort)bVar37) *
                             (int)(short)(0xff - (ushort)bVar2) ^ 0xff00;
                    uVar40 = (uVar43 & 0xffff) >> 8;
                    uVar17 = ((uint)bVar37 * 0xff) / uVar40 & 0xff;
                    *DAT_2c60f0e8 = (byte)(uVar43 >> 8);
                    iVar29 = 0xff - uVar17;
                    *(char *)((int)puVar21 + 2) =
                         (char)((uVar17 * ((local_44 & 0xffffff) >> 0x10) +
                                iVar29 * ((uVar26 & 0xffffff) >> 0x10)) * 0x10102 >> 0x18);
                    *(char *)((int)puVar21 + 1) =
                         (char)((uVar17 * ((local_44 & 0xffff) >> 8) +
                                iVar29 * ((uVar26 & 0xffff) >> 8)) * 0x10102 >> 0x18);
                    *(char *)puVar21 =
                         (char)((uVar17 * (local_44 & 0xff) + iVar29 * (uVar26 & 0xff)) * 0x8081 >>
                               0x17);
                  }
                  uVar26 = *puVar21;
                  *(byte *)((int)puVar15 + 3) = (byte)uVar40;
                  goto LAB_2c60ede6;
                }
                iVar29 = 0xff - uVar40;
                *(byte *)((int)puVar15 + 3) = 0xff;
                uVar26 = ((local_44 & 0xff) * uVar40 + iVar29 * (uVar26 & 0xff)) * 0x8081 >> 0x17 &
                         0xff | (((((local_44 & 0xffff) >> 8) * uVar40 +
                                  iVar29 * ((uVar26 & 0xffff) >> 8)) * 0x8081 & 0x7fffffff) >> 0x17)
                                << 8 |
                         (((((local_44 & 0xffffff) >> 0x10) * uVar40 +
                           iVar29 * ((uVar26 & 0xffffff) >> 0x10)) * 0x8081 & 0x7fffffff) >> 0x17)
                         << 0x10;
              }
LAB_2c60edb4:
              *(byte *)puVar15 = (byte)uVar26;
              *(byte *)((int)puVar15 + 1) = (byte)(uVar26 >> 8);
              *(byte *)((int)puVar15 + 2) = (byte)(uVar26 >> 0x10);
            }
            else {
              *(byte *)((int)puVar15 + 3) = bVar37;
              uVar26 = local_44;
LAB_2c60ede6:
              if (2 < uVar40) goto LAB_2c60edb4;
            }
            local_74 = pbVar16;
            puVar15 = puVar15 + 1;
          } while (pbVar24 != pbVar16);
        }
        iVar32 = iVar32 + 1;
        puVar41 = puVar41 + iVar12;
        local_74 = pbVar24;
      } while (iVar31 != iVar32);
    }
    goto LAB_2c60d624;
  }
  bVar2 = *(byte *)(param_2 + 6);
  uVar40 = (uint)bVar2;
  iVar23 = (int)(short)((local_3c + 1) - local_40);
  uVar26 = *(byte *)((int)param_2 + 0x19) - 1 & 0xff;
  pbVar39 = (byte *)(int)(short)((local_3a + 1) - local_3e);
  if (uVar26 < 3) {
    local_70 = *(code **)(DAT_2c60e2a0 + uVar26 * 4);
    if (local_74 == (byte *)0x0) {
      if (uVar40 < 0xfd) goto LAB_2c60ef32;
      if (local_70 != (code *)0x0) {
        if (0 < (int)pbVar39) {
          local_78 = (uint *)local_74;
          do {
            if (0 < iVar23) {
              iVar32 = 0;
              puVar11 = puVar41;
              do {
                if (2 < *(byte *)((int)puVar11 + 3)) {
                  uVar26 = local_68[iVar32];
                  if (((*puVar11 != *puVar27) || (*puVar15 != uVar26)) || (*puVar21 != 0xff)) {
                    *puVar27 = *puVar11;
                    *puVar15 = uVar26;
                    *puVar21 = 0xff;
                    uVar25 = (*local_70)();
                    *(undefined4 *)pbVar24 = uVar25;
                  }
                  *(byte *)puVar11 = *pbVar24;
                  *(byte *)((int)puVar11 + 1) = pbVar24[1];
                  *(byte *)((int)puVar11 + 2) = pbVar24[2];
                }
                iVar32 = iVar32 + 1;
                puVar11 = puVar11 + 1;
              } while (iVar23 != iVar32);
            }
            puVar41 = puVar41 + iVar12;
            local_78 = (uint *)((int)local_78 + 1);
            local_68 = local_68 + iVar31;
          } while ((uint *)pbVar39 != local_78);
        }
        goto LAB_2c60d624;
      }
      goto LAB_2c60ed56;
    }
  }
  else {
    local_70 = (code *)0x0;
    if (local_74 == (byte *)0x0) {
      local_70 = (code *)0x0;
      if (uVar40 < 0xfd) {
LAB_2c60ef32:
        if (0 < (int)pbVar39) {
          local_78 = (uint *)0x0;
          do {
            puVar21 = DAT_2c60f0fc;
            puVar15 = DAT_2c60f0f8;
            pbVar24 = DAT_2c60f0ec;
            if (local_70 == (code *)0x0) {
              if (0 < iVar23) {
                puVar15 = local_68 + -1;
                iVar29 = 0xff - uVar40;
                iVar32 = 0;
                puVar21 = puVar41;
                do {
                  bVar37 = *(byte *)((int)puVar21 + 3);
                  puVar15 = puVar15 + 1;
                  uVar17 = *puVar15;
                  uVar26 = *puVar21;
                  if (bVar37 < 3) {
                    *(byte *)((int)puVar21 + 3) = bVar2;
                    uVar43 = uVar40;
LAB_2c60f034:
                    uVar26 = uVar17;
                    if (2 < uVar43) goto LAB_2c60f052;
                  }
                  else {
                    if (2 < uVar40) {
                      if (bVar37 < 0xfd) {
                        if (((*DAT_2c60f3c4 == uVar40) && (*DAT_2c60f3c8 == bVar37)) &&
                           ((uVar17 == *DAT_2c60f3cc && (uVar26 == *DAT_2c60f3d0)))) {
                          uVar43 = (uint)*DAT_2c60f3d8;
                        }
                        else {
                          *DAT_2c60f3c4 = bVar2;
                          *DAT_2c60f3c8 = bVar37;
                          *DAT_2c60f3cc = uVar17;
                          *DAT_2c60f3d0 = uVar26;
                          *(undefined1 *)((int)DAT_2c60f3d4 + 3) = 0xff;
                          uVar44 = (int)(short)(0xff - (ushort)bVar2) *
                                   (int)(short)(0xff - (ushort)bVar37) ^ 0xff00;
                          uVar43 = (uVar44 & 0xffff) >> 8;
                          *DAT_2c60f3d8 = (byte)(uVar44 >> 8);
                          puVar27 = DAT_2c60f3d4;
                          uVar44 = (uVar40 * 0xff) / uVar43 & 0xff;
                          iVar30 = 0xff - uVar44;
                          *(char *)((int)DAT_2c60f3d4 + 2) =
                               (char)((uVar44 * ((uVar17 & 0xffffff) >> 0x10) +
                                      iVar30 * ((uVar26 & 0xffffff) >> 0x10)) * 0x10102 >> 0x18);
                          *(char *)((int)puVar27 + 1) =
                               (char)((uVar44 * ((uVar17 & 0xffff) >> 8) +
                                      iVar30 * ((uVar26 & 0xffff) >> 8)) * 0x10102 >> 0x18);
                          *(char *)puVar27 =
                               (char)((uVar44 * (uVar17 & 0xff) + iVar30 * (uVar26 & 0xff)) * 0x8081
                                     >> 0x17);
                        }
                        puVar27 = DAT_2c60f3d4;
                        *(byte *)((int)puVar21 + 3) = (byte)uVar43;
                        uVar17 = *puVar27;
                        goto LAB_2c60f034;
                      }
                      *(byte *)((int)puVar21 + 3) = 0xff;
                      uVar26 = ((uVar17 & 0xff) * uVar40 + iVar29 * (uVar26 & 0xff)) * 0x8081 >>
                               0x17 & 0xff |
                               (((((uVar17 & 0xffff) >> 8) * uVar40 +
                                 iVar29 * ((uVar26 & 0xffff) >> 8)) * 0x8081 & 0x7fffffff) >> 0x17)
                               << 8 | (((((uVar17 & 0xffffff) >> 0x10) * uVar40 +
                                        iVar29 * ((uVar26 & 0xffffff) >> 0x10)) * 0x8081 &
                                       0x7fffffff) >> 0x17) << 0x10;
                    }
LAB_2c60f052:
                    *(byte *)puVar21 = (byte)uVar26;
                    *(byte *)((int)puVar21 + 1) = (byte)(uVar26 >> 8);
                    *(byte *)((int)puVar21 + 2) = (byte)(uVar26 >> 0x10);
                  }
                  iVar32 = iVar32 + 1;
                  puVar21 = puVar21 + 1;
                } while (iVar23 != iVar32);
              }
            }
            else if (0 < iVar23) {
              iVar32 = 0;
              puVar27 = puVar41;
              do {
                if (2 < *(byte *)((int)puVar27 + 3)) {
                  uVar17 = *puVar27;
                  uVar26 = local_68[iVar32];
                  if (((uVar17 != *puVar15) || (*puVar21 != uVar26)) || (uVar40 != *DAT_2c60f0f0)) {
                    *DAT_2c60f0f0 = uVar40;
                    *puVar15 = uVar17;
                    *puVar21 = uVar26;
                    uVar25 = (*local_70)(uVar26,uVar17,uVar40);
                    *(undefined4 *)pbVar24 = uVar25;
                  }
                  *(byte *)puVar27 = *pbVar24;
                  *(byte *)((int)puVar27 + 1) = pbVar24[1];
                  *(byte *)((int)puVar27 + 2) = pbVar24[2];
                }
                iVar32 = iVar32 + 1;
                puVar27 = puVar27 + 1;
              } while (iVar23 != iVar32);
            }
            puVar41 = puVar41 + iVar12;
            local_78 = (uint *)((int)local_78 + 1);
            local_68 = local_68 + iVar31;
          } while ((uint *)pbVar39 != local_78);
        }
        goto LAB_2c60d624;
      }
LAB_2c60ed56:
      if (0 < (int)pbVar39) {
        pbVar24 = (byte *)0x0;
        do {
          pbVar24 = pbVar24 + 1;
          FUN_2c62c0d8(puVar41,local_68,iVar23 << 2);
          local_68 = local_68 + iVar31;
          puVar41 = puVar41 + iVar12;
        } while (pbVar39 != pbVar24);
      }
      goto LAB_2c60d624;
    }
  }
  if (uVar40 < 0xfe) {
    if (0 < (int)pbVar39) {
      local_78 = puVar41 + 1;
      pbVar24 = local_74 + iVar23;
      local_5c = (byte *)0x0;
      do {
        puVar41 = DAT_2c60db88;
        pbVar16 = DAT_2c60db78;
        if (local_70 == (code *)0x0) {
          pbVar16 = local_74;
          puVar41 = local_78;
          puVar15 = local_68;
          if (0 < iVar23) {
            do {
              pbVar18 = pbVar16 + 1;
              bVar37 = *pbVar16;
              if (bVar37 != 0) {
                uVar26 = uVar40;
                if (bVar37 < 0xfd) {
                  uVar26 = (uint)((int)(short)(ushort)bVar2 * (int)(short)(ushort)bVar37) >> 8;
                }
                uVar43 = *puVar15;
                bVar37 = *(byte *)((int)puVar41 + -1);
                uVar17 = puVar41[-1];
                if ((uVar26 < 0xfd) && (2 < bVar37)) {
                  if (2 < uVar26) {
                    if (bVar37 < 0xfd) {
                      if (((*DAT_2c60e2ac == uVar26) && (*DAT_2c60f3c8 == bVar37)) &&
                         ((uVar43 == *DAT_2c60f3cc && (uVar17 == *DAT_2c60f3d0)))) {
                        uVar26 = (uint)*DAT_2c60f3d8;
                      }
                      else {
                        *DAT_2c60e2ac = (byte)uVar26;
                        *DAT_2c60e2b0 = bVar37;
                        *DAT_2c60e2b4 = uVar43;
                        *DAT_2c60e2b8 = uVar17;
                        *(undefined1 *)((int)DAT_2c60e2bc + 3) = 0xff;
                        uVar38 = (int)(short)(0xff - (short)uVar26) *
                                 (int)(short)(0xff - (ushort)bVar37) ^ 0xff00;
                        uVar44 = uVar26 * 0xff;
                        uVar26 = (uVar38 & 0xffff) >> 8;
                        uVar44 = uVar44 / uVar26 & 0xff;
                        *DAT_2c60e2c0 = (char)(uVar38 >> 8);
                        puVar21 = DAT_2c60e2bc;
                        iVar32 = 0xff - uVar44;
                        *(char *)((int)DAT_2c60e2bc + 2) =
                             (char)((uVar44 * ((uVar43 & 0xffffff) >> 0x10) +
                                    iVar32 * ((uVar17 & 0xffffff) >> 0x10)) * 0x10102 >> 0x18);
                        *(char *)((int)puVar21 + 1) =
                             (char)((uVar44 * ((uVar43 & 0xffff) >> 8) +
                                    iVar32 * ((uVar17 & 0xffff) >> 8)) * 0x10102 >> 0x18);
                        *(char *)puVar21 =
                             (char)((uVar44 * (uVar43 & 0xff) + iVar32 * (uVar17 & 0xff)) * 0x8081
                                   >> 0x17);
                      }
                      puVar21 = DAT_2c60e2bc;
                      *(byte *)((int)puVar41 + -1) = (byte)uVar26;
                      uVar43 = *puVar21;
                      goto LAB_2c60de4c;
                    }
                    iVar32 = 0xff - uVar26;
                    *(byte *)((int)puVar41 + -1) = 0xff;
                    uVar17 = ((uVar43 & 0xff) * uVar26 + iVar32 * (uVar17 & 0xff)) * 0x8081 >> 0x17
                             & 0xff | (((((uVar43 & 0xffff) >> 8) * uVar26 +
                                        iVar32 * ((uVar17 & 0xffff) >> 8)) * 0x8081 & 0x7fffffff) >>
                                      0x17) << 8 |
                             (((((uVar43 & 0xffffff) >> 0x10) * uVar26 +
                               iVar32 * ((uVar17 & 0xffffff) >> 0x10)) * 0x8081 & 0x7fffffff) >>
                             0x17) << 0x10;
                  }
                }
                else {
                  *(byte *)((int)puVar41 + -1) = (byte)uVar26;
LAB_2c60de4c:
                  uVar17 = uVar43;
                  if (uVar26 < 3) goto LAB_2c60de28;
                }
                *(byte *)(puVar41 + -1) = (byte)uVar17;
                *(byte *)((int)puVar41 + -3) = (byte)(uVar17 >> 8);
                *(byte *)((int)puVar41 + -2) = (byte)(uVar17 >> 0x10);
              }
LAB_2c60de28:
              pbVar16 = pbVar18;
              puVar41 = puVar41 + 1;
              puVar15 = puVar15 + 1;
            } while (pbVar24 != pbVar18);
          }
        }
        else {
          puVar15 = local_78;
          pbVar18 = local_74;
          puVar21 = local_68;
          if (0 < iVar23) {
            do {
              pbVar34 = pbVar18 + 1;
              bVar37 = *pbVar18;
              if (bVar37 != 0) {
                uVar26 = uVar40;
                if (bVar37 < 0xfd) {
                  uVar26 = (uint)((int)(short)(ushort)bVar2 * (int)(short)(ushort)bVar37) >> 8;
                }
                if (2 < *(byte *)((int)puVar15 + -1)) {
                  uVar17 = puVar15[-1];
                  uVar43 = *puVar21;
                  puVar27 = DAT_2c60db7c;
                  if (((uVar17 != *puVar41) || (puVar27 = DAT_2c60dfcc, *DAT_2c60dfc8 != uVar43)) ||
                     (uVar26 != *DAT_2c60dfcc)) {
                    *puVar27 = uVar26;
                    puVar27 = DAT_2c60db80;
                    *puVar41 = uVar17;
                    *puVar27 = uVar43;
                    uVar25 = (*local_70)(uVar43);
                    *(undefined4 *)pbVar16 = uVar25;
                  }
                  *(byte *)(puVar15 + -1) = *pbVar16;
                  *(byte *)((int)puVar15 + -3) = pbVar16[1];
                  *(byte *)((int)puVar15 + -2) = pbVar16[2];
                }
              }
              puVar15 = puVar15 + 1;
              pbVar18 = pbVar34;
              puVar21 = puVar21 + 1;
            } while (pbVar24 != pbVar34);
          }
        }
        local_68 = local_68 + iVar31;
        local_5c = local_5c + 1;
        pbVar24 = pbVar24 + local_64;
        local_74 = local_74 + local_64;
        local_78 = local_78 + iVar12;
      } while (pbVar39 != local_5c);
    }
  }
  else if (0 < (int)pbVar39) {
    pbVar24 = local_74 + iVar23;
    local_5c = (byte *)0x0;
    do {
      puVar21 = DAT_2c60e2c8;
      puVar15 = DAT_2c60e2a8;
      pbVar16 = DAT_2c60e2a4;
      if (local_70 == (code *)0x0) {
        if (0 < iVar23) {
          puVar15 = local_68 + -1;
          puVar21 = puVar41;
          pbVar16 = local_74;
          do {
            pbVar18 = pbVar16 + 1;
            bVar37 = *pbVar16;
            uVar40 = (uint)bVar37;
            bVar2 = *(byte *)((int)puVar21 + 3);
            puVar15 = puVar15 + 1;
            uVar17 = *puVar15;
            uVar26 = *puVar21;
            if ((uVar40 < 0xfd) && (2 < bVar2)) {
              if (2 < uVar40) {
                if (bVar2 < 0xfd) {
                  if (((*DAT_2c60e538 == uVar40) && (*DAT_2c60e53c == bVar2)) &&
                     ((uVar17 == *DAT_2c60e540 && (uVar26 == *DAT_2c60e544)))) {
                    uVar40 = (uint)*DAT_2c60e54c;
                  }
                  else {
                    *DAT_2c60e538 = bVar37;
                    *DAT_2c60e53c = bVar2;
                    *DAT_2c60e540 = uVar17;
                    *DAT_2c60e544 = uVar26;
                    *(undefined1 *)((int)DAT_2c60e548 + 3) = 0xff;
                    uVar43 = (int)(short)(0xff - (ushort)bVar37) *
                             (int)(short)(0xff - (ushort)bVar2) ^ 0xff00;
                    uVar40 = (uVar43 & 0xffff) >> 8;
                    uVar44 = ((uint)bVar37 * 0xff) / uVar40 & 0xff;
                    *DAT_2c60e54c = (byte)(uVar43 >> 8);
                    puVar27 = DAT_2c60e548;
                    iVar32 = 0xff - uVar44;
                    *(char *)((int)DAT_2c60e548 + 2) =
                         (char)((uVar44 * ((uVar17 & 0xffffff) >> 0x10) +
                                iVar32 * ((uVar26 & 0xffffff) >> 0x10)) * 0x10102 >> 0x18);
                    *(char *)((int)puVar27 + 1) =
                         (char)((uVar44 * ((uVar17 & 0xffff) >> 8) +
                                iVar32 * ((uVar26 & 0xffff) >> 8)) * 0x10102 >> 0x18);
                    *(char *)puVar27 =
                         (char)((uVar44 * (uVar17 & 0xff) + iVar32 * (uVar26 & 0xff)) * 0x8081 >>
                               0x17);
                  }
                  puVar27 = DAT_2c60e548;
                  *(byte *)((int)puVar21 + 3) = (byte)uVar40;
                  uVar17 = *puVar27;
                  goto LAB_2c60e29a;
                }
                iVar32 = 0xff - uVar40;
                *(byte *)((int)puVar21 + 3) = 0xff;
                uVar26 = ((uVar17 & 0xff) * uVar40 + iVar32 * (uVar26 & 0xff)) * 0x8081 >> 0x17 &
                         0xff | (((((uVar17 & 0xffff) >> 8) * uVar40 +
                                  iVar32 * ((uVar26 & 0xffff) >> 8)) * 0x8081 & 0x7fffffff) >> 0x17)
                                << 8 |
                         (((((uVar17 & 0xffffff) >> 0x10) * uVar40 +
                           iVar32 * ((uVar26 & 0xffffff) >> 0x10)) * 0x8081 & 0x7fffffff) >> 0x17)
                         << 0x10;
              }
LAB_2c60e26a:
              *(byte *)puVar21 = (byte)uVar26;
              *(byte *)((int)puVar21 + 1) = (byte)(uVar26 >> 8);
              *(byte *)((int)puVar21 + 2) = (byte)(uVar26 >> 0x10);
            }
            else {
              *(byte *)((int)puVar21 + 3) = bVar37;
LAB_2c60e29a:
              uVar26 = uVar17;
              if (2 < uVar40) goto LAB_2c60e26a;
            }
            puVar21 = puVar21 + 1;
            pbVar16 = pbVar18;
          } while (pbVar24 != pbVar18);
        }
      }
      else if (0 < iVar23) {
        local_78 = local_68;
        pbVar18 = local_74;
        puVar27 = puVar41;
        do {
          if (2 < *(byte *)((int)puVar27 + 3)) {
            uVar40 = *puVar27;
            uVar26 = *local_78;
            if (((uVar40 != *puVar21) || (*puVar15 != uVar26)) || ((uint)*pbVar18 != *DAT_2c60e2c4))
            {
              *DAT_2c60e2c4 = (uint)*pbVar18;
              *puVar21 = uVar40;
              *puVar15 = uVar26;
              uVar25 = (*local_70)();
              *(undefined4 *)pbVar16 = uVar25;
            }
            *(byte *)puVar27 = *pbVar16;
            *(byte *)((int)puVar27 + 1) = pbVar16[1];
            *(byte *)((int)puVar27 + 2) = pbVar16[2];
          }
          pbVar18 = pbVar18 + 1;
          local_78 = local_78 + 1;
          puVar27 = puVar27 + 1;
        } while (pbVar24 != pbVar18);
      }
      puVar41 = puVar41 + iVar12;
      local_5c = local_5c + 1;
      local_68 = local_68 + iVar31;
      pbVar24 = pbVar24 + local_64;
      local_74 = local_74 + local_64;
    } while (pbVar39 != local_5c);
  }
LAB_2c60d624:
  if (*DAT_2c60d854 != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


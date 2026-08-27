/* FUN_2c618134 @ 0x2c618134 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c618134(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  short *psVar11;
  uint *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  ushort uVar26;
  byte bVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  byte bVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar34;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  short sStack_d8;
  undefined2 uStack_d6;
  short sStack_d4;
  short sStack_d2;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined2 uStack_ce;
  short sStack_cc;
  short sStack_c4;
  undefined2 uStack_c2;
  undefined1 auStack_ac [2];
  undefined2 uStack_aa;
  short sStack_94;
  short sStack_92;
  undefined4 uStack_90;
  int iStack_3c;
  
  iStack_3c = *DAT_2c6183e0;
  iVar8 = FUN_2c602110(_LAB_2c6183e4,param_2,param_3,0);
  if (iVar8 == 1) {
    iVar8 = FUN_2c602408(param_2);
    iVar9 = FUN_2c602400(param_2);
    if (iVar8 == 0x13) {
      sVar3 = FUN_2c6033b4(iVar9,0x30000,0x12);
      sVar6 = FUN_2c6033b4(iVar9,0x30000,0x13);
      sVar7 = FUN_2c6033b4(iVar9,0x30000,0x10);
      sVar4 = FUN_2c6033b4(iVar9,0x30000,0x11);
      psVar11 = (short *)FUN_2c602410(param_2);
      if (sVar3 < sVar6) {
        sVar3 = sVar6;
      }
      if (sVar3 < sVar7) {
        sVar3 = sVar7;
      }
      if (sVar3 < sVar4) {
        sVar3 = sVar4;
      }
      sVar6 = sVar3 + 2;
      if ((short)(sVar3 + 2) < *psVar11) {
        sVar6 = *psVar11;
      }
      *psVar11 = sVar6;
    }
    else {
      if (iVar8 != 0x29) {
        if (iVar8 == 0x2a) {
          if (*DAT_2c6183e0 != iStack_3c) goto LAB_2c618b38;
          goto code_r0x2c618014;
        }
        if (iVar8 != 0xd) {
          if (iVar8 != 1) {
            if (iVar8 == 2) {
              piVar13 = (int *)FUN_2c5ff4d8();
              if (piVar13 != (int *)0x0) {
                iVar8 = FUN_2c5ff4e4();
                if ((iVar8 == 4) || (iVar8 == 2)) {
                  sVar3 = *(short *)(iVar9 + 0x14);
                  iVar8 = FUN_2c6073ec(iVar9);
                  if (iVar8 < 0) {
                    iVar8 = iVar8 + 1;
                  }
                  sStack_c4 = sVar3 + (short)(iVar8 >> 1);
                  sVar3 = *(short *)(iVar9 + 0x16);
                  iVar8 = FUN_2c6073f8(iVar9);
                  if (iVar8 < 0) {
                    iVar8 = iVar8 + 1;
                  }
                  uStack_c2 = sVar3 + (short)(iVar8 >> 1);
                }
                else {
                  FUN_2c5ff5cc(piVar13,&sStack_c4);
                }
                iVar8 = (int)sStack_c4 - (int)*(short *)(iVar9 + 0x38);
                if (iVar8 < 0) {
                  iVar8 = -iVar8;
                }
                if ((int)(uint)*(byte *)(*piVar13 + 0x18) < iVar8) {
LAB_2c61843c:
                  uVar15 = FUN_2c629df4();
                  *(undefined4 *)(iVar9 + 0x34) = uVar15;
                  *(short *)(iVar9 + 0x38) = sStack_c4;
                  *(short *)(iVar9 + 0x3a) = uStack_c2;
                }
                else {
                  iVar8 = (int)uStack_c2 - (int)*(short *)(iVar9 + 0x3a);
                  if (iVar8 < 0) {
                    iVar8 = -iVar8;
                  }
                  if ((int)(uint)*(byte *)(*piVar13 + 0x18) < iVar8) goto LAB_2c61843c;
                }
                sStack_c4 = sStack_c4 - *(short *)(iVar9 + 0x14);
                uStack_c2 = uStack_c2 - *(short *)(iVar9 + 0x16);
                uVar5 = FUN_2c6073ec(iVar9);
                sVar6 = FUN_2c6033b4(iVar9,0,0x50);
                sStack_c4 = sStack_c4 - (uVar5 >> 1);
                uStack_c2 = uStack_c2 - (uVar5 >> 1);
                sVar3 = (uVar5 >> 1) - sVar6;
                iVar8 = (int)sVar3;
                if (0x41 < iVar8) {
                  iVar8 = (int)sVar6;
                  if (iVar8 < 0) {
                    iVar8 = iVar8 + 1;
                  }
                  iVar8 = (int)(short)(sVar3 - (short)(iVar8 >> 1));
                  if (iVar8 < 0x41) {
                    iVar8 = 0x41;
                  }
                }
                if ((int)sStack_c4 * (int)sStack_c4 + (int)uStack_c2 * (int)uStack_c2 <
                    iVar8 * iVar8) {
                  uVar28 = FUN_2c629e10(*(undefined4 *)(iVar9 + 0x34));
                  if (*(ushort *)(*piVar13 + 0x1c) < uVar28) {
                    bVar31 = *(byte *)(iVar9 + 0x3c);
                    if (-1 < (int)((uint)bVar31 << 0x1d)) {
                      *(byte *)(iVar9 + 0x3c) = bVar31 & 0xfc | (byte)(((bVar31 & 3) + 1) % 3);
                      FUN_2c618014(iVar9);
                      FUN_2c607df0(iVar9);
                      FUN_2c5ff4d8();
                      func_0x2c5ff660();
                    }
                  }
                }
                else {
                  FUN_2c629e10(*(undefined4 *)(iVar9 + 0x34));
                  uVar28 = func_0x2c62e3c0((int)sStack_c4,(int)uStack_c2);
                  uVar22 = (uint)*(ushort *)(iVar9 + 0x24);
                  bVar31 = *(byte *)(iVar9 + 0x26);
                  uVar19 = (uint)bVar31;
                  bVar27 = *(byte *)(iVar9 + 0x27);
                  uVar24 = (uint)bVar27;
                  bVar25 = *(byte *)(iVar9 + 0x3c) & 3;
                  uVar28 = uVar28 + (uint)((ulonglong)_LAB_2c618b54 * (ulonglong)(uVar28 >> 3) >>
                                          0x22) * -0x168 & 0xffff;
                  if (bVar25 == 1) {
                    uVar19 = ((uint)((ulonglong)_LAB_2c618b54 * (ulonglong)(uVar28 * 100 >> 3) >>
                                    0x20) & 0x3ff) >> 2;
LAB_2c618952:
                    bVar27 = (byte)uVar24;
                    bVar31 = (byte)uVar19;
                    if (uVar22 < 0x169) {
                      if (99 < uVar19) {
                        bVar31 = 100;
                      }
                      if (99 < uVar24) {
                        bVar27 = 100;
                      }
LAB_2c618ae2:
                      uStack_aa = CONCAT11(bVar27,bVar31);
                      uVar28 = uVar22;
                      if (uStack_aa == *(short *)(iVar9 + 0x26)) goto LAB_2c618154;
                    }
                    else {
                      if (99 < uVar19) {
                        bVar31 = 100;
                      }
                      if (99 < uVar24) {
                        bVar27 = 100;
                      }
                      uVar28 = uVar22 + (uint)((ulonglong)_LAB_2c618b54 *
                                               (ulonglong)(*(ushort *)(iVar9 + 0x24) >> 3) >> 0x22)
                                        * -0x168 & 0xffff;
                    }
                  }
                  else {
                    if (bVar25 == 2) {
                      uVar24 = ((uint)((ulonglong)_LAB_2c618b54 * (ulonglong)(uVar28 * 100 >> 3) >>
                                      0x20) & 0x3ff) >> 2;
                      goto LAB_2c618952;
                    }
                    if ((*(byte *)(iVar9 + 0x3c) & 3) != 0) goto LAB_2c618952;
                    if (99 < uVar19) {
                      bVar31 = 100;
                    }
                    if (99 < uVar24) {
                      bVar27 = 100;
                    }
                    if (uVar28 == uVar22) goto LAB_2c618ae2;
                  }
                  *(short *)(iVar9 + 0x24) = (short)uVar28;
                  *(byte *)(iVar9 + 0x26) = bVar31;
                  *(byte *)(iVar9 + 0x27) = bVar27;
                  FUN_2c618014(iVar9);
                  FUN_2c607df0(iVar9);
                  FUN_2c602340(iVar9,0x1c,0);
                }
              }
            }
            else if (iVar8 == 0x11) {
              puVar14 = (undefined4 *)FUN_2c602410(param_2);
              uVar2 = FUN_2c62a750(iVar9 + 0x14,*puVar14,0x7fff);
              *(undefined1 *)(puVar14 + 1) = uVar2;
            }
            else if (iVar8 == 0x15) {
              iVar8 = FUN_2c602400(param_2);
              uVar15 = FUN_2c602608(param_2);
              iVar9 = FUN_2c6073ec(iVar8);
              iVar16 = FUN_2c6073f8(iVar8);
              if (iVar9 < 0) {
                iVar9 = iVar9 + 1;
              }
              if (iVar16 < 0) {
                iVar16 = iVar16 + 1;
              }
              iVar32 = (iVar9 << 0xf) >> 0x10;
              sVar3 = *(short *)(iVar8 + 0x16) + (short)(iVar16 >> 1);
              sVar7 = (short)((uint)(iVar9 << 0xf) >> 0x10);
              sVar6 = *(short *)(iVar8 + 0x14) + sVar7;
              FUN_2c6120a0(&uStack_d0);
              FUN_2c600968(iVar8,0,&uStack_d0);
              sStack_cc = ((short)(int)((longlong)_LAB_2c6188ac * (longlong)(sVar7 * 0x274) >> 0x2c)
                          - (sVar7 >> 0xf)) + 2;
              sVar7 = FUN_2c6033b4(iVar8,0,0x50);
              FUN_2c6144a0(&sStack_c4,iVar8 + 0x14,0x7fff,0);
              uVar17 = FUN_2c613e5c(&sStack_c4,0);
              sStack_d8 = *(short *)(iVar8 + 0x14) + sVar7;
              uStack_d6 = *(short *)(iVar8 + 0x16) + sVar7;
              sStack_d4 = *(short *)(iVar8 + 0x18) - sVar7;
              sStack_d2 = *(short *)(iVar8 + 0x1a) - sVar7;
              FUN_2c6144a0(auStack_ac,&sStack_d8,0x7fff,1);
              uVar18 = FUN_2c613e5c(auStack_ac,0);
              iVar33 = iVar32 + sStack_cc;
              iVar16 = (iVar32 - sVar7) - (int)sStack_cc;
              uVar28 = 0;
              iVar9 = 0;
              do {
                uStack_db = 0;
                uStack_da = 0;
                uStack_d9 = 0;
                uVar22 = *(byte *)(iVar8 + 0x3c) & 3;
                bVar31 = (byte)(((uint)*(byte *)(iVar8 + 0x3c) << 0x1e) >> 0x1e);
                if (uVar22 == 1) {
                  if (*DAT_2c6188b0 == 1) {
                    uVar24 = (uint)*DAT_2c618b48;
                    uVar22 = (uint)*DAT_2c618b4c;
                  }
                  else {
                    uVar5 = *(ushort *)(iVar8 + 0x24);
                    *DAT_2c6188b0 = bVar31;
                    bVar31 = *(byte *)(iVar8 + 0x27);
                    uVar24 = (uint)((ulonglong)DAT_2c6188a8 * (ulonglong)((uint)uVar5 * 0xc0) >>
                                   0x20);
                    uVar22 = (uVar24 & 0x3ffff) >> 2;
                    *DAT_2c6188c4 = (short)((uVar24 << 0xe) >> 0x10);
                    uVar19 = (uint)((ulonglong)DAT_2c6188b4 * (ulonglong)((uint)bVar31 * 0x33) >>
                                   0x20);
                    uVar24 = (uVar19 & 0xfff) >> 4;
                    *DAT_2c6188bc = (byte)((uVar19 << 0x14) >> 0x18);
                  }
                  uVar2 = (undefined1)uVar24;
                  uVar19 = uVar28 & 0xff;
                  uVar23 = uVar28;
joined_r0x2c618892:
                  uVar1 = uVar2;
                  uVar21 = uVar2;
                  if (uVar23 != 0) {
LAB_2c6186f6:
                    FUN_2c617f84(uVar22,uVar19,uVar24,&uStack_db,&uStack_da,&uStack_d9);
                    uVar2 = uStack_d9;
                    uVar1 = uStack_da;
                    uVar21 = uStack_db;
                  }
                }
                else {
                  if (uVar22 == 2) {
                    if (*DAT_2c6188b0 == 2) {
                      uVar19 = (uint)*DAT_2c618b50;
                      uVar22 = (uint)*DAT_2c618b4c;
                    }
                    else {
                      uVar5 = *(ushort *)(iVar8 + 0x24);
                      bVar27 = *(byte *)(iVar8 + 0x26);
                      *DAT_2c6188b0 = bVar31;
                      uVar24 = (uint)((ulonglong)DAT_2c6188a8 * (ulonglong)((uint)uVar5 * 0xc0) >>
                                     0x20);
                      uVar22 = (uVar24 & 0x3ffff) >> 2;
                      *DAT_2c6188c4 = (short)((uVar24 << 0xe) >> 0x10);
                      uVar24 = (uint)((ulonglong)DAT_2c6188b4 * (ulonglong)((uint)bVar27 * 0x33) >>
                                     0x20);
                      uVar19 = (uVar24 & 0xfff) >> 4;
                      *DAT_2c6188b8 = (byte)((uVar24 << 0x14) >> 0x18);
                    }
                    uVar24 = uVar28 & 0xff;
                    uVar2 = (undefined1)uVar28;
                    uVar23 = uVar19;
                    goto joined_r0x2c618892;
                  }
                  if (*DAT_2c6188b0 == uVar22) {
                    uVar19 = (uint)*DAT_2c6188b8;
                    uVar24 = (uint)*DAT_2c6188bc;
                  }
                  else {
                    bVar27 = *(byte *)(iVar8 + 0x26);
                    *DAT_2c6188b0 = bVar31;
                    uVar22 = (uint)((ulonglong)DAT_2c6188b4 * (ulonglong)((uint)bVar27 * 0x33) >>
                                   0x20);
                    uVar19 = (uVar22 & 0xfff) >> 4;
                    uVar23 = (uint)((ulonglong)DAT_2c6188b4 *
                                    (ulonglong)((uint)*(byte *)(iVar8 + 0x27) * 0x33) >> 0x20);
                    uVar24 = (uVar23 & 0xfff) >> 4;
                    *DAT_2c6188b8 = (byte)((uVar22 << 0x14) >> 0x18);
                    *DAT_2c6188bc = (byte)((uVar23 << 0x14) >> 0x18);
                  }
                  uVar2 = (undefined1)uVar24;
                  uVar1 = uVar2;
                  uVar21 = uVar2;
                  if (uVar19 != 0) {
                    uVar22 = uVar28 * 6 & 0xffff;
                    goto LAB_2c6186f6;
                  }
                }
                uStack_cf = uVar1;
                iVar20 = (iVar9 << 8) >> 0x10;
                iVar29 = iVar9 + 0x438;
                uStack_ce = CONCAT11(0xff,uVar21);
                uStack_d0 = uVar2;
                iVar32 = FUN_2c62e208(iVar20);
                uVar28 = uVar28 + 3 & 0xffff;
                iVar30 = (int)(short)((short)((uint)iVar9 >> 8) + 0x5a);
                sStack_94 = sVar6 + (short)(iVar33 * iVar32 >> 0xf);
                iVar9 = FUN_2c62e208(iVar30);
                sStack_92 = sVar3 + (short)(iVar33 * iVar9 >> 0xf);
                iVar9 = FUN_2c62e208(iVar20);
                uStack_90 = CONCAT22(uStack_90._2_2_,sVar6 + (short)(iVar16 * iVar9 >> 0xf));
                iVar9 = FUN_2c62e208(iVar30);
                uStack_90 = CONCAT22(sVar3 + (short)(iVar16 * iVar9 >> 0xf),(undefined2)uStack_90);
                FUN_2c6120f4(uVar15,&uStack_d0,&sStack_94,&uStack_90);
                iVar9 = iVar29;
              } while (iVar29 != DAT_2c6188c0);
              FUN_2c613f44(&sStack_c4);
              FUN_2c613f44(auStack_ac);
              FUN_2c613ee4(uVar17);
              FUN_2c613ee4(uVar18);
              iVar8 = FUN_2c602400(param_2);
              uVar15 = FUN_2c602608(param_2);
              FUN_2c61314c(&sStack_94);
              FUN_2c6004cc(iVar8,0x30000,&sStack_94);
              sStack_94 = 0x7fff;
              if ((int)((uint)*(byte *)(iVar8 + 0x2c) << 0x1f) < 0) {
                uStack_90 = FUN_2c62ed70(*(undefined2 *)(iVar8 + 0x24),*(undefined1 *)(iVar8 + 0x26)
                                         ,*(undefined1 *)(iVar8 + 0x27));
              }
              FUN_2c617f00(auStack_ac,iVar8);
              FUN_2c61319c(uVar15,&sStack_94,auStack_ac);
            }
            else if ((iVar8 == 0x12) &&
                    (pcVar10 = (char *)FUN_2c602410(param_2), *pcVar10 != '\x02')) {
              *pcVar10 = '\x01';
            }
            goto LAB_2c618154;
          }
          uVar15 = FUN_2c629df4();
          *(undefined4 *)(iVar9 + 0x34) = uVar15;
          uVar15 = FUN_2c5ff4d8();
          FUN_2c5ff5cc(uVar15,iVar9 + 0x38);
          piVar13 = (int *)FUN_2c5ff4d8();
          uVar28 = FUN_2c629e10(*(undefined4 *)(iVar9 + 0x30));
          if (uVar28 < *(ushort *)(*piVar13 + 0x1c)) {
            bVar27 = *(byte *)(iVar9 + 0x26);
            bVar25 = *(byte *)(iVar9 + 0x3c) & 3;
            bVar31 = *(byte *)(iVar9 + 0x27);
            if (bVar25 == 1) {
              bVar27 = 100;
              if (99 < bVar31) {
                bVar31 = 100;
              }
LAB_2c618376:
              uVar5 = *(ushort *)(iVar9 + 0x24);
              uVar28 = (uint)uVar5;
              func_0x2c5ff660(piVar13);
              if (0x168 < uVar28) {
                uVar28 = uVar28 + (uint)((ulonglong)_LAB_2c6183e8 * (ulonglong)(uVar5 >> 3) >> 0x22)
                                  * -0x168 & 0xffff;
              }
            }
            else {
              if (bVar25 == 2) {
                bVar31 = 100;
                if (99 < bVar27) {
                  bVar27 = 100;
                }
                goto LAB_2c618376;
              }
              if ((*(byte *)(iVar9 + 0x3c) & 3) != 0) {
                if (99 < bVar27) {
                  bVar27 = 100;
                }
                if (99 < bVar31) {
                  bVar31 = 100;
                }
                goto LAB_2c618376;
              }
              uVar28 = 0;
              if (99 < bVar27) {
                bVar27 = 100;
              }
              if (99 < bVar31) {
                bVar31 = 100;
              }
              func_0x2c5ff660(piVar13);
            }
            if ((*(ushort *)(iVar9 + 0x24) != uVar28) ||
               (uStack_c2 = CONCAT11(bVar31,bVar27), uStack_c2 != *(short *)(iVar9 + 0x26))) {
              *(short *)(iVar9 + 0x24) = (short)uVar28;
              *(byte *)(iVar9 + 0x26) = bVar27;
              *(byte *)(iVar9 + 0x27) = bVar31;
              FUN_2c618014(iVar9);
              FUN_2c607df0(iVar9);
              iVar8 = FUN_2c602340(iVar9,0x1c,0);
              if (iVar8 != 1) goto LAB_2c618154;
            }
          }
          uVar15 = FUN_2c629df4();
          *(undefined4 *)(iVar9 + 0x30) = uVar15;
          goto LAB_2c618154;
        }
        puVar12 = (uint *)FUN_2c602410(param_2);
        uVar28 = *puVar12;
        if ((uVar28 & 0xfffffffd) == 0x11) {
          uVar5 = *(ushort *)(iVar9 + 0x24);
          uVar24 = (uint)uVar5;
          bVar25 = *(byte *)(iVar9 + 0x3c) & 3;
          bVar31 = *(byte *)(iVar9 + 0x26);
          uVar28 = (uint)bVar31;
          bVar27 = *(byte *)(iVar9 + 0x27);
          uVar22 = (uint)bVar27;
          if (bVar25 == 1) {
            uVar28 = uVar28 + 1 +
                     (uint)((ulonglong)_LAB_2c618b58 * (ulonglong)(uVar28 + 1) >> 0x25) * -100 &
                     0xff;
LAB_2c6182bc:
            bVar27 = (byte)uVar22;
            bVar31 = (byte)uVar28;
            if (uVar24 < 0x169) {
              if (99 < uVar28) {
                bVar31 = 100;
              }
              if (99 < uVar22) {
                bVar27 = 100;
              }
LAB_2c618a14:
              uStack_d6 = CONCAT11(bVar27,bVar31);
              uVar26 = uVar5;
              if (uStack_d6 == *(short *)(iVar9 + 0x26)) goto LAB_2c618154;
            }
            else {
              if (99 < uVar28) {
                bVar31 = 100;
              }
              if (99 < uVar22) {
                bVar27 = 100;
              }
              uVar26 = uVar5 + (short)(uint)((ulonglong)_LAB_2c6183e8 * (ulonglong)(uVar5 >> 3) >>
                                            0x22) * -0x168;
            }
          }
          else {
            if (bVar25 == 2) {
              uVar22 = uVar22 + 1 +
                       (uint)((ulonglong)_LAB_2c618b58 * (ulonglong)(uVar22 + 1) >> 0x25) * -100 &
                       0xff;
              goto LAB_2c6182bc;
            }
            if ((*(byte *)(iVar9 + 0x3c) & 3) != 0) goto LAB_2c6182bc;
            if (99 < uVar28) {
              bVar31 = 100;
            }
            if (99 < uVar22) {
              bVar27 = 100;
            }
            uVar28 = uVar24 + 1 +
                     (uint)((ulonglong)_LAB_2c618b54 * (ulonglong)(uVar24 + 1 >> 3) >> 0x22) *
                     -0x168;
            uVar26 = (ushort)uVar28;
            if ((uVar28 & 0xffff) == uVar24) goto LAB_2c618a14;
          }
          *(ushort *)(iVar9 + 0x24) = uVar26;
          *(byte *)(iVar9 + 0x26) = bVar31;
          *(byte *)(iVar9 + 0x27) = bVar27;
        }
        else {
          if ((uVar28 != 0x14) && (uVar28 != 0x12)) goto LAB_2c618154;
          uVar22 = (uint)*(ushort *)(iVar9 + 0x24);
          bVar25 = *(byte *)(iVar9 + 0x3c) & 3;
          bVar31 = *(byte *)(iVar9 + 0x26);
          bVar27 = *(byte *)(iVar9 + 0x27);
          uVar28 = uVar22;
          if (bVar25 == 1) {
            if (bVar31 == 0) {
              bVar31 = 100;
            }
            else {
              bVar31 = bVar31 - 1;
              if (99 < bVar31) {
                bVar31 = 100;
              }
            }
            if (99 < bVar27) {
              bVar27 = 100;
            }
LAB_2c618aac:
            if (0x168 < uVar22) {
LAB_2c618564:
              uVar28 = uVar28 + (uint)((ulonglong)DAT_2c6188a8 * (ulonglong)(uVar28 >> 3) >> 0x22) *
                                -0x168 & 0xffff;
              goto LAB_2c618578;
            }
LAB_2c618a62:
            uStack_ce = CONCAT11(bVar27,bVar31);
            uVar5 = *(ushort *)(iVar9 + 0x24);
            if (uStack_ce == *(short *)(iVar9 + 0x26)) goto LAB_2c618154;
          }
          else {
            if (bVar25 == 2) {
              if (bVar27 == 0) {
                bVar27 = 100;
              }
              else {
                bVar27 = bVar27 - 1;
                if (99 < bVar27) {
                  bVar27 = 100;
                }
              }
              if (99 < bVar31) {
                bVar31 = 100;
              }
              goto LAB_2c618aac;
            }
            if ((*(byte *)(iVar9 + 0x3c) & 3) != 0) {
LAB_2c618550:
              if (uVar28 < 0x169) goto LAB_2c618a7e;
              if (99 < bVar31) {
                bVar31 = 100;
              }
              if (99 < bVar27) {
                bVar27 = 100;
              }
              goto LAB_2c618564;
            }
            if (uVar22 != 0) {
              uVar28 = uVar22 - 1 & 0xffff;
              goto LAB_2c618550;
            }
            uVar28 = 0x168;
LAB_2c618a7e:
            if (99 < bVar31) {
              bVar31 = 100;
            }
            if (99 < bVar27) {
              bVar27 = 100;
            }
LAB_2c618578:
            uVar5 = (ushort)uVar28;
            if (uVar28 == uVar22) goto LAB_2c618a62;
          }
          *(ushort *)(iVar9 + 0x24) = uVar5;
          *(byte *)(iVar9 + 0x26) = bVar31;
          *(byte *)(iVar9 + 0x27) = bVar27;
        }
        FUN_2c618014(iVar9);
        FUN_2c607df0(iVar9);
        puVar14 = DAT_2c60239c;
        if (*DAT_2c6183e0 == iStack_3c) {
          uVar28 = *DAT_2c602398;
          if (iVar9 == 0) {
            uVar34 = 0x1c00000001;
          }
          else {
            uVar15 = *DAT_2c60239c;
            *DAT_2c60239c = &stack0xffffffcc;
            uVar34 = FUN_2c602140();
            *puVar14 = uVar15;
          }
          if ((*DAT_2c602398 ^ uVar28) == 0) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          stack_chk_fail((int)uVar34,(int)((ulonglong)uVar34 >> 0x20),*DAT_2c602398 ^ uVar28,0);
        }
        goto LAB_2c618b38;
      }
      psVar11 = (short *)FUN_2c602410(param_2);
      iVar8 = FUN_2c6073ec(iVar9);
      if ((iVar8 != (short)((psVar11[2] + 1) - *psVar11)) ||
         (iVar8 = FUN_2c6073f8(iVar9), iVar8 != (short)((psVar11[3] + 1) - psVar11[1]))) {
        if (*DAT_2c6183e0 != iStack_3c) goto LAB_2c618b38;
code_r0x2c618014:
        iVar32 = *DAT_2c6180d8;
        FUN_2c617f00(&stack0xffffffdc,iVar9,0,0);
        FUN_2c6078f0(iVar9,&stack0xffffffdc);
        iVar8 = FUN_2c6073ec(iVar9);
        sVar3 = FUN_2c6033b4(iVar9,0,0x50);
        bVar31 = *(byte *)(iVar9 + 0x3c) & 3;
        iVar16 = iVar8 - sVar3;
        if (iVar16 < 0) {
          iVar16 = iVar16 + 1;
        }
        if (bVar31 == 1) {
          bVar31 = *(byte *)(iVar9 + 0x26);
        }
        else {
          if (bVar31 != 2) {
            sVar3 = *(short *)(iVar9 + 0x24);
            goto LAB_2c618064;
          }
          bVar31 = *(byte *)(iVar9 + 0x27);
        }
        sVar3 = (short)(uint)((ulonglong)DAT_2c6180dc * (ulonglong)((uint)bVar31 * 0x168) >> 0x25);
LAB_2c618064:
        iVar33 = FUN_2c62e208((int)sVar3);
        *(short *)(iVar9 + 0x28) = (short)((iVar16 >> 1) * iVar33 >> 0xf);
        iVar33 = FUN_2c62e208((int)(short)(sVar3 + 0x5a));
        if (iVar8 < 0) {
          iVar8 = iVar8 + 1;
        }
        sVar3 = (short)((uint)(iVar8 << 0xf) >> 0x10);
        *(short *)(iVar9 + 0x2a) = sVar3 + (short)((iVar16 >> 1) * iVar33 >> 0xf);
        *(short *)(iVar9 + 0x28) = sVar3 + *(short *)(iVar9 + 0x28);
        FUN_2c617f00(&stack0xffffffdc,iVar9);
        FUN_2c6078f0(iVar9,&stack0xffffffdc);
        if (*DAT_2c6180d8 == iVar32) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
    }
  }
LAB_2c618154:
  if (*DAT_2c6183e0 == iStack_3c) {
    return;
  }
LAB_2c618b38:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


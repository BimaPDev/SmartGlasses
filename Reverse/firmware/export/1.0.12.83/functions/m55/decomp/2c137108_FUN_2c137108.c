/* FUN_2c137108 @ 0x2c137108 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c137108(uint param_1)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 extraout_r1;
  undefined1 uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 unaff_lr;
  int iVar25;
  
  iVar16 = iRam2c1371e4;
  iVar25 = iRam2c1371e4 + param_1 * 0x70;
  uVar6 = 0;
  if (*(char *)(iVar25 + 0xf) == '\0') {
SUB_2c137010:
    *(undefined1 *)(iVar25 + 0xf) = uVar6;
    *(undefined1 *)(iVar25 + 0xe) = *(undefined1 *)(iVar25 + 0xd);
    *(undefined1 *)(iVar25 + 0xc) = 1;
    puVar4 = _DAT_2c137054;
    iVar16 = 0;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      iVar16 = getBasePriority();
    }
    if (iVar16 != 0x40) {
      *_DAT_2c137054 = 0x2c13701e;
      puVar4[1] = unaff_lr;
    }
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(0x40);
    }
    uVar23 = (uint)*_DAT_2c137058 & ~(1 << (param_1 & 0xff));
    *_DAT_2c137058 = (byte)uVar23;
    if (uVar23 == 0) {
      uVar23 = func_0x2c13859c(2);
    }
    if (iVar16 == 0) {
      *_DAT_2c137054 = 0xffffffff;
    }
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(iVar16);
    }
    return uVar23;
  }
  uVar23 = (uint)*(byte *)(iVar25 + 0xe);
  if (1 < uVar23) {
    FUN_2c13635c(uRam2c1371f4,uRam2c1371f0,param_1,uVar23);
    iVar16 = _DAT_2c1374e4;
    uVar23 = 0x65;
    uVar5 = 10;
    iVar13 = 0;
    uVar6 = 0;
    iVar25 = _DAT_2c1374e4;
    pcVar21 = _DAT_2c1374e8;
    do {
      pcVar20 = pcVar21;
      if ((int)((*(uint *)(_DAT_2c1374d4 + ((uVar5 >> 5) + 0x80) * 4) >> (uVar5 & 0x1f)) << 0x1f) <
          0) {
        puVar7 = *(uint **)(pcVar21 + -0x16);
        cVar2 = *(char *)(iVar25 + 0xc);
        uVar5 = puVar7[0xb];
        uVar24 = (uint)*(byte *)(iVar25 + 0xe);
        uVar19 = puVar7[0x20];
        uVar23 = 0;
        if ((uVar5 & 0x40) != 0) {
          uVar8 = puVar7[1];
          if ((int)(uVar19 << 0x16) < 0) {
            *puVar7 = *puVar7 | 0x20;
            puVar7[1] = puVar7[1] & 0xfffff7ff;
            puVar7[1] = puVar7[1] & 0xfffffbff;
            uVar23 = 4;
            puVar7[1] = uVar8;
          }
          else {
            uVar23 = 4;
          }
        }
        if ((int)(uVar5 << 0x1c) < 0) {
          uVar23 = uVar23 | 0x10;
        }
        if ((int)(uVar5 << 0x1e) < 0) {
          uVar23 = uVar23 | 0x10;
        }
        if ((int)(uVar5 << 0x1f) < 0) {
          uVar23 = uVar23 | 0x10;
        }
        if (cVar2 == '\x02') {
          iVar18 = iVar13 * 0x70 + uVar24 * 0x30 + iVar16;
          uVar8 = *(uint *)(iVar18 + 0x28);
          uVar12 = uVar23 | uVar8;
          iVar9 = *(int *)(iVar18 + 0x2c);
          *(uint *)(iVar18 + 0x28) = uVar12;
          if (uVar23 == 0 && (uVar8 & 0x14) == 0) {
            uVar23 = uVar5 << 0x16;
            if ((int)uVar23 < 0) {
              *(uint *)(iVar18 + 0x28) = uVar12 | 2;
            }
            if ((int)(uVar5 << 0x15) < 0) {
              uVar23 = iVar13 * 0x70 + uVar24 * 0x30 + iVar16;
              *(uint *)(uVar23 + 0x28) = *(uint *)(uVar23 + 0x28) | 1;
            }
            if ((int)(uVar5 << 0x17) < 0) {
              uVar23 = iVar13 * 0x70 + uVar24 * 0x30 + iVar16;
              *(uint *)(uVar23 + 0x28) = *(uint *)(uVar23 + 0x28) | 8;
            }
            if (iVar9 == 1) {
              uVar23 = (uint)*(byte *)(iVar16 + iVar13 * 0x70 + 1) << 0x1e;
              if ((-1 < (int)uVar23) && ((int)(uVar5 << 0x1b) < 0)) {
                iVar9 = iVar16 + iVar13 * 0x70 + uVar24 * 0x30;
                uVar5 = (uint)*(ushort *)(iVar9 + 0x1c) * (uint)*(ushort *)(iVar9 + 0x18);
                if ((puVar7[0x1d] & 0xff) < 8) {
                  uVar23 = (uint)*(ushort *)(iVar9 + 0x1e);
                  if (uVar23 <= uVar5 && uVar5 - uVar23 != 0) {
                    uVar19 = (8 - (puVar7[0x1d] & 0xff) & 0xff) + uVar23;
                    do {
                      if (uVar5 - 1 == uVar23) {
                        if (*(char *)(iVar9 + 0x24) == '\0') {
                          uVar8 = 0;
                        }
                        else {
                          uVar8 = 0x200;
                        }
                      }
                      else {
                        uVar8 = 0;
                      }
                      uVar12 = uVar23;
                      if (*(short *)(iVar9 + 0x1c) != 1) {
                        uVar12 = uVar23 - (uint)*(ushort *)(iVar9 + 0x18) *
                                          (uVar23 / *(ushort *)(iVar9 + 0x18));
                      }
                      if (uVar23 == 0) {
                        uVar14 = 0;
                      }
                      else {
                        uVar14 = 0;
                        if (*(char *)(iVar9 + 0x25) != '\0') {
                          if (uVar12 == 0) {
                            uVar14 = 0x400;
                          }
                          else {
                            uVar14 = 0;
                          }
                        }
                      }
                      pbVar1 = (byte *)(*(int *)(iVar9 + 0x10) + uVar23);
                      uVar23 = uVar23 + 1;
                      puVar7[4] = *pbVar1 | uVar8 | uVar14;
                    } while ((uVar23 <= uVar5 && uVar5 - uVar23 != 0) && (uVar23 != uVar19));
                    uVar23 = uVar23 & 0xffff;
                  }
                }
                else {
                  uVar23 = (uint)*(ushort *)(iVar9 + 0x1e);
                }
                *(short *)(iVar13 * 0x70 + uVar24 * 0x30 + iVar16 + 0x1e) = (short)uVar23;
                if (uVar5 - uVar23 == 0) {
                  puVar7[0xc] = puVar7[0xc] & 0xffffffef;
                }
              }
              iVar9 = *(int *)(iVar13 * 0x70 + uVar24 * 0x30 + iVar16 + 0x28);
            }
            else {
              if (iVar9 != 2) goto LAB_2c13722c;
              if (-1 < (int)((uint)*(byte *)(iVar16 + iVar13 * 0x70 + 1) << 0x1e)) {
                if ((int)(uVar5 << 0x1d) < 0) {
                  iVar9 = iVar16 + iVar13 * 0x70 + uVar24 * 0x30;
                  uVar11 = *(ushort *)(iVar9 + 0x20);
                  uVar23 = (uint)uVar11;
                  uVar19 = (uint)*(ushort *)(iVar9 + 0x1c) * (uint)*(ushort *)(iVar9 + 0x1a);
                  if ((uVar23 <= uVar19 && uVar19 - uVar23 != 0) && ((puVar7[0x1e] & 0xff) != 0)) {
                    uVar12 = uVar23 + 1 + ((puVar7[0x1e] & 0xff) - 1 & 0xff);
                    uVar8 = uVar23 + 1;
                    while (uVar14 = uVar8,
                          *(char *)(*(int *)(iVar9 + 0x14) + uVar23) = (char)puVar7[4],
                          uVar14 <= uVar19 && uVar19 - uVar14 != 0) {
                      if (uVar12 == uVar14) {
                        uVar11 = (ushort)uVar12;
                        goto LAB_2c137382;
                      }
                      uVar23 = uVar14;
                      uVar8 = uVar14 + 1;
                    }
                    uVar11 = (ushort)uVar14;
                  }
LAB_2c137382:
                  *(ushort *)(iVar13 * 0x70 + uVar24 * 0x30 + iVar16 + 0x20) = uVar11;
                }
                if ((int)(uVar5 << 0x1b) < 0) {
                  iVar9 = iVar13 * 0x70 + uVar24 * 0x30 + iVar16;
                  uVar19 = (uint)*(ushort *)(iVar9 + 0x18);
                  uVar23 = (uint)*(ushort *)(iVar9 + 0x1c);
                  uVar5 = uVar23 * (*(ushort *)(iVar9 + 0x1a) + uVar19);
                  if ((puVar7[0x1d] & 0xff) < 8) {
                    uVar8 = 8 - (puVar7[0x1d] & 0xff) & 0xff;
                  }
                  else {
                    uVar8 = 0;
                  }
                  iVar9 = iVar13 * 0x70 + uVar24 * 0x30 + iVar16;
                  cVar2 = (char)*(undefined2 *)(iVar9 + 0x22) + '\x01';
                  if ((byte)(cVar2 - *(char *)(iVar9 + 0x20)) < 8) {
                    uVar14 = (uint)(byte)((*(char *)(iVar9 + 0x20) + '\b') - cVar2);
                    uVar11 = *(ushort *)(iVar9 + 0x1e);
                    uVar12 = (uint)uVar11;
                    if (uVar8 <= uVar14) {
                      uVar14 = uVar8;
                    }
                    if (uVar5 <= uVar12) goto LAB_2c1373fa;
                    if (uVar14 != 0) {
                      uVar8 = uVar12 + 1;
                      uVar14 = uVar8 + (uVar14 - 1 & 0xff);
                      if (uVar5 - 1 == uVar12) goto LAB_2c1376d2;
LAB_2c137684:
                      uVar17 = 0;
                      uVar10 = uVar12;
                      if (uVar23 == 1) goto LAB_2c1376e4;
LAB_2c13768c:
                      uVar15 = *(ushort *)(iVar9 + 0x1a) + uVar19;
                      uVar22 = uVar10 / uVar15;
                      uVar12 = uVar8;
                      uVar8 = uVar10 - uVar15 * uVar22;
                      do {
                        if ((uVar10 == 0) || (*(char *)(iVar9 + 0x25) == '\0')) {
LAB_2c1376a6:
                          if (uVar19 <= uVar8) goto LAB_2c1376f4;
                          iVar18 = *(int *)(iVar9 + 0x10);
                          if (uVar23 != 1) {
                            iVar18 = uVar19 * uVar22 + iVar18;
                          }
                          uVar23 = (uint)*(byte *)(iVar18 + uVar8);
                        }
                        else {
                          if (uVar8 == 0) {
                            uVar17 = uVar17 | 0x400;
                            goto LAB_2c1376a6;
                          }
                          if (uVar8 != uVar19) goto LAB_2c1376a6;
                          uVar17 = uVar17 | 0x400;
LAB_2c1376f4:
                          uVar23 = 0x100;
                          *(short *)(iVar9 + 0x22) = *(short *)(iVar9 + 0x22) + 1;
                        }
                        puVar7[4] = uVar23 | uVar17;
                        if (uVar5 <= uVar12) {
                          uVar11 = (ushort)uVar12;
                          uVar12 = uVar12 & 0xffff;
                          goto LAB_2c1373fa;
                        }
                        if (uVar14 == uVar12) {
                          uVar11 = (ushort)uVar14;
                          uVar12 = uVar14 & 0xffff;
                          goto LAB_2c1373fa;
                        }
                        uVar23 = (uint)*(ushort *)(iVar9 + 0x1c);
                        uVar19 = (uint)*(ushort *)(iVar9 + 0x18);
                        uVar8 = uVar12 + 1;
                        if (uVar5 - 1 != uVar12) goto LAB_2c137684;
LAB_2c1376d2:
                        if (*(char *)(iVar9 + 0x24) == '\0') {
                          uVar17 = 0;
                        }
                        else {
                          uVar17 = 0x200;
                        }
                        uVar10 = uVar12;
                        if (uVar23 != 1) goto LAB_2c13768c;
LAB_2c1376e4:
                        uVar22 = 0;
                        uVar12 = uVar8;
                        uVar8 = uVar10;
                      } while( true );
                    }
                  }
                  else {
                    uVar11 = *(ushort *)(iVar9 + 0x1e);
                    uVar12 = (uint)uVar11;
                    if (uVar5 <= uVar11) {
LAB_2c1373fa:
                      *(ushort *)(iVar13 * 0x70 + uVar24 * 0x30 + iVar16 + 0x1e) = uVar11;
                      if (uVar5 == uVar12) {
                        puVar7[0xc] = puVar7[0xc] & 0xffffffef;
                      }
                    }
                  }
                }
                uVar23 = iVar13 * 0x70 + uVar24 * 0x30 + iVar16;
                if (-1 < *(int *)(uVar23 + 0x28) << 0x1e) goto LAB_2c13722c;
                if (-1 < (int)((uint)*(byte *)(iVar13 * 0x70 + iVar16 + 1) << 0x1e)) {
                  uVar19 = puVar7[0x1e];
                  uVar11 = *(ushort *)(uVar23 + 0x20);
                  uVar5 = (uint)uVar11;
                  if ((uVar19 & 0xff) != 0) {
                    iVar9 = uVar5 + 1;
                    do {
                      if (*(ushort *)(uVar23 + 0x1a) <= uVar5) break;
                      *(char *)(*(int *)(uVar23 + 0x14) + uVar5) = (char)puVar7[4];
                      uVar5 = uVar5 + 1;
                    } while (uVar5 != iVar9 + ((uVar19 & 0xff) - 1 & 0xff));
                    uVar11 = (ushort)uVar5;
                  }
                  *(ushort *)(iVar13 * 0x70 + uVar24 * 0x30 + iVar16 + 0x20) = uVar11;
                }
                goto LAB_2c13755a;
              }
              iVar9 = *(int *)(iVar13 * 0x70 + uVar24 * 0x30 + iVar16 + 0x28);
            }
            if (-1 < iVar9 << 0x1e) goto LAB_2c13722c;
          }
          else {
            FUN_2c135988(4,0x495,_DAT_2c137740,_DAT_2c137744,_DAT_2c13773c,_DAT_2c137738,iVar13,
                         uVar12,uVar5,uVar19);
            *(uint *)(iVar18 + 0x38) = uVar19;
            if (*(int *)(iVar18 + 0x28) << 0x1b < 0) {
              *(uint *)(iVar18 + 0x38) = uVar19 | 0x20000000;
            }
          }
LAB_2c13755a:
          FUN_2c136bac(uVar6);
          uVar23 = FUN_2c137108(uVar6);
        }
        else {
          uVar23 = FUN_2c135988(4,0x483,_DAT_2c1374e0,_DAT_2c1374dc,_DAT_2c1374d8,iVar13,uVar5,
                                uVar19);
          puVar7[0xc] = 0;
          puVar7[0x1b] = puVar7[0x1b] & 0xfffffffe;
        }
      }
LAB_2c13722c:
      do {
        iVar25 = iVar25 + 0x70;
        pcVar21 = pcVar20 + 0xc;
        if (iVar13 == 4) {
          return uVar23;
        }
        uVar5 = (uint)*pcVar20;
        iVar13 = iVar13 + 1;
        uVar6 = (undefined1)iVar13;
        pcVar20 = pcVar21;
      } while ((int)uVar5 < 0);
    } while( true );
  }
  iVar13 = param_1 * 0x70 + uVar23 * 0x30 + iRam2c1371e4;
  puVar7 = *(uint **)(iRam2c1371e8 + param_1 * 0xc);
  cVar2 = *(char *)(iVar13 + 0x2c);
  if (*(int *)(iVar13 + 0x10) == 0) {
    uVar5 = (uint)*(byte *)(iVar25 + 1) << 0x1d;
    if ((int)uVar5 < 0) {
      iVar25 = 0x2c137197;
      param_1 = FUN_2c13635c(uRam2c1371ec,param_1);
      uVar6 = extraout_r1;
      goto SUB_2c137010;
    }
  }
  else {
    uVar5 = 2;
    puVar7[0xf] = 2;
  }
  if (cVar2 == '\x02') {
    puVar7[0xe] = 5;
  }
  puVar7[0xc] = 0xaff;
  if (-1 < (int)(puVar7[0x27] << 0x1f)) {
    *puVar7 = *puVar7 | 0x20;
    uVar5 = (uint)*(byte *)(iVar16 + param_1 * 0x70 + 1) << 0x1d;
    if ((int)uVar5 < 0) {
      uVar5 = (uint)*(ushort *)(iVar16 + param_1 * 0x70 + uVar23 * 0x30 + 0x26);
      if ((int)(uVar5 << 0x10) < 0) {
        uVar23 = puVar7[1] & 0xfffffc00 | uVar5 & 0x3ff | 0x1000;
      }
      else {
        uVar23 = puVar7[1] & 0xffffec00 | uVar5 & 0x3ff;
      }
      puVar7[1] = uVar23;
    }
    puVar7[0x1b] = puVar7[0x1b] | 1;
  }
  return uVar5;
}


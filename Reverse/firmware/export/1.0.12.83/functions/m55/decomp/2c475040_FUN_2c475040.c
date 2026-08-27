/* FUN_2c475040 @ 0x2c475040 */

int FUN_2c475040(int *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  ushort *unaff_pc;
  bool bVar23;
  undefined8 uVar24;
  uint local_38;
  int local_30;
  uint local_2c;
  
  iVar19 = *param_1;
  iVar21 = 0;
  if (*(int *)(iVar19 + 0x18) != 0) {
    iVar21 = 0;
    uVar16 = 0;
LAB_2c475064:
    do {
      while( true ) {
        iVar10 = uVar16 * 0x2c + *(int *)(iVar19 + 0x1c);
        iVar12 = *(int *)(iVar10 + 0x10);
        bVar7 = *(byte *)(iVar10 + 8);
        iVar2 = (int)param_1 + iVar12;
        if (bVar7 == 0) {
          iVar2 = FUN_2c474ba8(iVar10,iVar2,param_2 + iVar21);
          iVar19 = *param_1;
          iVar21 = iVar21 + iVar2;
          goto LAB_2c475152;
        }
        iVar17 = *(int *)(iVar10 + 0xc);
        if ((bVar7 & 0xfd) == 1) break;
        uVar22 = *(uint *)((int)param_1 + iVar17);
        uVar18 = *(uint *)(iVar10 + 0x1c) & 1;
        iVar2 = *(int *)((int)param_1 + iVar12);
        pbVar20 = (byte *)(param_2 + iVar21);
        if (uVar18 == 0) {
          bVar7 = *(byte *)(iVar10 + 9);
          if (0x10 < bVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_2c473f8c();
          }
          unaff_pc = (ushort *)
                     (&switchD_2c4752e6::switchdataD_2c4752ea +
                     (uint)(&switchD_2c4752e6::switchdataD_2c4752ea)[bVar7] * 2);
          switch(bVar7) {
          default:
            iVar12 = 4;
            break;
          case 3:
          case 4:
          case 5:
          case 8:
          case 9:
          case 0xb:
          case 0xf:
            iVar12 = 8;
          }
          if (uVar22 == 0) {
LAB_2c475152:
            uVar16 = uVar16 + 1;
            if (*(uint *)(iVar19 + 0x18) <= uVar16) goto LAB_2c47515e;
          }
          else {
            uVar18 = 0;
            iVar19 = 0;
            do {
              uVar18 = uVar18 + 1;
              iVar17 = FUN_2c474ba8(iVar10,iVar2,pbVar20 + iVar19);
              iVar2 = iVar2 + iVar12;
              iVar19 = iVar19 + iVar17;
            } while (uVar22 != uVar18);
            iVar21 = iVar21 + iVar19;
            iVar19 = *param_1;
            uVar16 = uVar16 + 1;
            if (*(uint *)(iVar19 + 0x18) <= uVar16) goto LAB_2c47515e;
          }
        }
        else {
          if (uVar22 == 0) goto LAB_2c475152;
          uVar8 = *(uint *)(iVar10 + 4);
          if (uVar8 < 0x20000000) {
            uVar9 = uVar8 * 8;
            if (uVar9 < 0x80) {
              *pbVar20 = (byte)uVar9;
              local_2c = uVar18;
            }
            else {
              *pbVar20 = (byte)uVar9 | 0x80;
              bVar7 = (byte)((uVar8 & 0x1fffffff) >> 4);
              if (uVar9 < 0x4000) {
                local_2c = 2;
                pbVar20[1] = bVar7;
              }
              else {
                pbVar20[1] = bVar7 | 0x80;
                bVar7 = (byte)((uVar8 & 0x1fffffff) >> 0xb);
                if (uVar9 < 0x200000) {
                  local_2c = 3;
                  pbVar20[2] = bVar7;
                }
                else {
                  pbVar20[2] = bVar7 | 0x80;
                  bVar7 = (byte)((uVar8 & 0x1fffffff) >> 0x12);
                  if (uVar9 < 0x10000000) {
                    local_2c = 4;
                    pbVar20[3] = bVar7;
                  }
                  else {
                    pbVar20[3] = bVar7 | 0x80;
                    local_2c = 5;
                    pbVar20[4] = ((byte)(uVar8 >> 0x18) & 0x1f) >> 1;
                  }
                }
              }
            }
          }
          else {
            local_2c = FUN_2c474338(uVar8,uVar8 | (int)unaff_pc << 3,pbVar20);
          }
          *pbVar20 = *pbVar20 | 2;
          uVar8 = (uint)*(byte *)(iVar10 + 9);
          if (((uVar8 & 0xf7) == 2) || (uVar8 == 7)) {
            uVar9 = uVar22 << 2;
          }
          else if (((uVar8 & 0xfd) == 9) || (uVar9 = uVar22, uVar8 == 5)) {
            uVar9 = uVar22 << 3;
          }
          local_38 = uVar18;
          if (0x7f < uVar9) {
            if (uVar9 < 0x4000) {
              local_38 = 2;
            }
            else if (uVar9 < 0x200000) {
              local_38 = 3;
            }
            else if (uVar9 < 0x10000000) {
              local_38 = 4;
            }
            else {
              local_38 = 5;
            }
          }
          local_30 = local_38 + local_2c;
          pbVar5 = pbVar20 + local_30;
          if (0xd < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_2c668484(DAT_2c4756cc,0x5aa,DAT_2c4756c8,DAT_2c4756d0);
          }
          unaff_pc = &switchD_2c475120::switchdataD_2c475124 +
                     (&switchD_2c475120::switchdataD_2c475124)[uVar8];
          pbVar11 = pbVar5;
          switch(uVar8) {
          case 0:
          case 0xd:
            puVar14 = (uint *)(iVar2 + -4);
            uVar8 = 0;
            do {
              puVar14 = puVar14 + 1;
              uVar9 = *puVar14;
              if ((int)uVar9 < 0) {
                pbVar11[8] = 0xff;
                pbVar11[7] = 0xff;
                pbVar11[6] = 0xff;
                pbVar11[5] = 0xff;
                pbVar11[1] = (byte)(uVar9 >> 7) | 0x80;
                pbVar11[9] = 1;
                pbVar11[2] = (byte)(uVar9 >> 0xe) | 0x80;
                pbVar11[3] = (byte)(uVar9 >> 0x15) | 0x80;
                *pbVar11 = (byte)uVar9 | 0x80;
                uVar3 = 10;
                pbVar11[4] = (byte)(uVar9 >> 0x1c) | 0xf0;
              }
              else {
                uVar3 = uVar18;
                pbVar1 = pbVar11;
                if (0x7f < uVar9) {
                  *pbVar11 = (byte)uVar9 | 0x80;
                  if (uVar9 < 0x4000) {
                    uVar3 = 2;
                    uVar9 = uVar9 >> 7;
                    pbVar1 = pbVar11 + 1;
                  }
                  else {
                    pbVar11[1] = (byte)(uVar9 >> 7) | 0x80;
                    if (uVar9 < 0x200000) {
                      uVar3 = 3;
                      uVar9 = uVar9 >> 0xe;
                      pbVar1 = pbVar11 + 2;
                    }
                    else {
                      pbVar11[2] = (byte)(uVar9 >> 0xe) | 0x80;
                      if (uVar9 < 0x10000000) {
                        uVar3 = 4;
                        uVar9 = uVar9 >> 0x15;
                        pbVar1 = pbVar11 + 3;
                      }
                      else {
                        pbVar11[3] = (byte)(uVar9 >> 0x15) | 0x80;
                        uVar3 = 5;
                        uVar9 = uVar9 >> 0x1c;
                        pbVar1 = pbVar11 + 4;
                      }
                    }
                  }
                }
                *pbVar1 = (byte)uVar9;
              }
              uVar8 = uVar8 + 1;
              pbVar11 = pbVar11 + uVar3;
            } while (uVar22 != uVar8);
            break;
          case 1:
            piVar15 = (int *)(iVar2 + -4);
            uVar8 = 0;
            do {
              piVar15 = piVar15 + 1;
              uVar3 = *piVar15 >> 0x1f ^ *piVar15 << 1;
              pbVar1 = pbVar11;
              uVar9 = uVar18;
              if (0x7f < uVar3) {
                *pbVar11 = (byte)uVar3 | 0x80;
                if (uVar3 < 0x4000) {
                  pbVar1 = pbVar11 + 1;
                  uVar9 = 2;
                  uVar3 = uVar3 >> 7;
                }
                else {
                  pbVar11[1] = (byte)(uVar3 >> 7) | 0x80;
                  if (uVar3 < 0x200000) {
                    pbVar1 = pbVar11 + 2;
                    uVar9 = 3;
                    uVar3 = uVar3 >> 0xe;
                  }
                  else {
                    pbVar11[2] = (byte)(uVar3 >> 0xe) | 0x80;
                    uVar4 = uVar3 >> 0x15;
                    if (uVar3 < 0x10000000) {
                      pbVar1 = pbVar11 + 3;
                      uVar9 = 4;
                      uVar3 = uVar4;
                    }
                    else {
                      uVar3 = uVar3 >> 0x1c;
                      pbVar11[3] = (byte)uVar4 | 0x80;
                      pbVar1 = pbVar11 + 4;
                      uVar9 = 5;
                    }
                  }
                }
              }
              uVar8 = uVar8 + 1;
              pbVar11 = pbVar11 + uVar9;
              *pbVar1 = (byte)uVar3;
            } while (uVar22 != uVar8);
            break;
          default:
            iVar19 = uVar22 << 2;
            goto LAB_2c47535c;
          case 3:
          case 8:
            uVar18 = 0;
            puVar13 = (undefined4 *)(iVar2 + -8);
            do {
              uVar18 = uVar18 + 1;
              iVar19 = FUN_2c474338(puVar13[2],puVar13[3],pbVar11);
              pbVar11 = pbVar11 + iVar19;
              puVar13 = puVar13 + 2;
            } while (uVar22 != uVar18);
            uVar18 = (int)pbVar11 - (int)pbVar5;
            goto joined_r0x2c475418;
          case 4:
            uVar18 = 0;
            puVar14 = (uint *)(iVar2 + -8);
            do {
              uVar9 = puVar14[2];
              uVar18 = uVar18 + 1;
              uVar8 = (int)puVar14[3] >> 0x1f;
              iVar19 = FUN_2c474338(uVar9 * 2 ^ uVar8,
                                    puVar14[3] * 2 + (uint)CARRY4(uVar9,uVar9) ^ uVar8,pbVar11);
              pbVar11 = pbVar11 + iVar19;
              puVar14 = puVar14 + 2;
            } while (uVar22 != uVar18);
            break;
          case 5:
          case 9:
          case 0xb:
            iVar19 = uVar22 << 3;
LAB_2c47535c:
            pbVar11 = pbVar5 + iVar19;
            FUN_2c674668(pbVar5,iVar2,iVar19);
            break;
          case 6:
            puVar14 = (uint *)(iVar2 + -4);
            uVar8 = 0;
            do {
              puVar14 = puVar14 + 1;
              uVar3 = *puVar14;
              pbVar1 = pbVar11;
              uVar9 = uVar18;
              if (0x7f < uVar3) {
                *pbVar11 = (byte)uVar3 | 0x80;
                if (uVar3 < 0x4000) {
                  pbVar1 = pbVar11 + 1;
                  uVar9 = 2;
                  uVar3 = uVar3 >> 7;
                }
                else {
                  pbVar11[1] = (byte)(uVar3 >> 7) | 0x80;
                  if (uVar3 < 0x200000) {
                    pbVar1 = pbVar11 + 2;
                    uVar9 = 3;
                    uVar3 = uVar3 >> 0xe;
                  }
                  else {
                    pbVar11[2] = (byte)(uVar3 >> 0xe) | 0x80;
                    uVar4 = uVar3 >> 0x15;
                    if (uVar3 < 0x10000000) {
                      pbVar1 = pbVar11 + 3;
                      uVar9 = 4;
                      uVar3 = uVar4;
                    }
                    else {
                      uVar3 = uVar3 >> 0x1c;
                      pbVar11[3] = (byte)uVar4 | 0x80;
                      pbVar1 = pbVar11 + 4;
                      uVar9 = 5;
                    }
                  }
                }
              }
              uVar8 = uVar8 + 1;
              pbVar11 = pbVar11 + uVar9;
              *pbVar1 = (byte)uVar3;
            } while (uVar22 != uVar8);
            break;
          case 0xc:
            piVar15 = (int *)(iVar2 + -4);
            pbVar11 = pbVar5 + uVar22;
            pbVar1 = pbVar5;
            do {
              piVar15 = piVar15 + 1;
              pbVar6 = pbVar1 + 1;
              *pbVar1 = *piVar15 != 0;
              pbVar1 = pbVar6;
            } while (pbVar6 != pbVar11);
          }
          uVar18 = (int)pbVar11 - (int)pbVar5;
joined_r0x2c475418:
          bVar7 = (byte)uVar18;
          if (uVar18 < 0x80) {
            if (local_38 != 1) {
LAB_2c475422:
                    /* WARNING: Subroutine does not return */
              FUN_2c668484(DAT_2c4756cc,0x5b0,DAT_2c4756c8,DAT_2c4756c4);
            }
            pbVar5 = pbVar20 + local_2c;
          }
          else {
            if (uVar18 < 0x4000) {
              uVar22 = 2;
            }
            else if (uVar18 < 0x200000) {
              uVar22 = 3;
            }
            else if (uVar18 < 0x10000000) {
              uVar22 = 4;
            }
            else {
              uVar22 = 5;
            }
            if (local_38 != uVar22) {
              if (local_38 + 1 != uVar22) goto LAB_2c475422;
              local_30 = local_30 + 1;
              FUN_2c673eb8(pbVar20 + local_30,pbVar5,uVar18);
            }
            pbVar20 = pbVar20 + local_2c;
            *pbVar20 = bVar7 | 0x80;
            bVar7 = (byte)(uVar18 >> 7);
            if (uVar18 < 0x4000) {
              pbVar5 = pbVar20 + 1;
            }
            else {
              pbVar20[1] = bVar7 | 0x80;
              bVar7 = (byte)(uVar18 >> 0xe);
              if (uVar18 < 0x200000) {
                pbVar5 = pbVar20 + 2;
              }
              else {
                pbVar20[2] = bVar7 | 0x80;
                bVar7 = (byte)(uVar18 >> 0x15);
                if (uVar18 < 0x10000000) {
                  pbVar5 = pbVar20 + 3;
                }
                else {
                  pbVar5 = pbVar20 + 4;
                  pbVar20[3] = bVar7 | 0x80;
                  bVar7 = (byte)(uVar18 >> 0x1c);
                }
              }
            }
          }
          *pbVar5 = bVar7;
          uVar16 = uVar16 + 1;
          iVar21 = local_30 + uVar18 + iVar21;
          iVar19 = *param_1;
          if (*(uint *)(iVar19 + 0x18) <= uVar16) goto LAB_2c47515e;
        }
      }
      if (*(int *)(iVar10 + 0x1c) << 0x1d < 0) {
        if (*(int *)((int)param_1 + iVar17) != *(int *)(iVar10 + 4)) goto LAB_2c475152;
        if ((*(char *)(iVar10 + 9) == '\x10') || (*(char *)(iVar10 + 9) == '\x0e'))
        goto LAB_2c475260;
LAB_2c4751f0:
        uVar16 = uVar16 + 1;
        iVar2 = FUN_2c474ba8(iVar10,iVar2,param_2 + iVar21);
        iVar19 = *param_1;
        iVar21 = iVar21 + iVar2;
        if (*(uint *)(iVar19 + 0x18) <= uVar16) break;
        goto LAB_2c475064;
      }
      if (bVar7 != 1) {
        uVar24 = FUN_2c473fa8(*(undefined1 *)(iVar10 + 9));
        iVar2 = (int)((ulonglong)uVar24 >> 0x20);
        if ((int)uVar24 != 0) goto LAB_2c475152;
        goto LAB_2c4751f0;
      }
      if ((*(char *)(iVar10 + 9) != '\x10') && (*(char *)(iVar10 + 9) != '\x0e')) {
        if (*(int *)((int)param_1 + iVar17) != 0) goto LAB_2c4751f0;
        uVar16 = uVar16 + 1;
        if (*(uint *)(iVar19 + 0x18) <= uVar16) break;
        goto LAB_2c475064;
      }
LAB_2c475260:
      if (*(int *)((int)param_1 + iVar12) == 0) goto LAB_2c475152;
      if (*(int *)((int)param_1 + iVar12) != *(int *)(iVar10 + 0x18)) goto LAB_2c4751f0;
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(iVar19 + 0x18));
  }
LAB_2c47515e:
  if (param_1[1] != 0) {
    uVar16 = 0;
    do {
      pbVar20 = (byte *)(param_2 + iVar21);
      uVar18 = *(uint *)(param_1[2] + uVar16 * 0x10);
      iVar19 = param_1[2] + uVar16 * 0x10;
      if (uVar18 < 0x20000000) {
        uVar22 = uVar18 * 8;
        if (uVar22 < 0x80) {
          iVar2 = 1;
          pbVar5 = pbVar20;
        }
        else {
          uVar8 = (uVar18 & 0x1fffffff) >> 4;
          *pbVar20 = (byte)uVar22 | 0x80;
          if (uVar22 < 0x4000) {
            iVar2 = 2;
            pbVar5 = pbVar20 + 1;
            uVar22 = uVar8;
          }
          else {
            uVar9 = (uVar18 & 0x1fffffff) >> 0xb;
            pbVar20[1] = (byte)uVar8 | 0x80;
            if (uVar22 < 0x200000) {
              iVar2 = 3;
              pbVar5 = pbVar20 + 2;
              uVar22 = uVar9;
            }
            else {
              bVar23 = uVar22 < 0x10000000;
              pbVar20[2] = (byte)uVar9 | 0x80;
              uVar22 = (uVar18 & 0x1fffffff) >> 0x12;
              if (bVar23) {
                iVar2 = 4;
                pbVar5 = pbVar20 + 3;
              }
              else {
                bVar7 = (byte)uVar22;
                uVar22 = (uVar18 & 0x1fffffff) >> 0x19;
                iVar2 = 5;
                pbVar20[3] = bVar7 | 0x80;
                pbVar5 = pbVar20 + 4;
              }
            }
          }
        }
        *pbVar5 = (byte)uVar22;
      }
      else {
        iVar2 = FUN_2c474338(uVar18,uVar18 | (int)unaff_pc << 3,pbVar20);
      }
      uVar16 = uVar16 + 1;
      *pbVar20 = *pbVar20 | *(byte *)(iVar19 + 4);
      FUN_2c674668(pbVar20 + iVar2,*(undefined4 *)(iVar19 + 0xc),*(undefined4 *)(iVar19 + 8));
      iVar21 = iVar21 + iVar2 + *(int *)(iVar19 + 8);
    } while (uVar16 < (uint)param_1[1]);
  }
  return iVar21;
}


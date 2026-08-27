/* FUN_2c6227a0 @ 0x2c6227a0 */

undefined4 FUN_2c6227a0(int param_1,byte *param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  short sVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  byte bVar25;
  byte *pbVar26;
  uint uVar27;
  byte *pbVar28;
  byte bVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbStack_a0;
  byte *pbStack_9c;
  byte *pbStack_90;
  int iStack_8c;
  uint uStack_88;
  int iStack_84;
  
  pbVar22 = (byte *)(param_5 * (param_3 >> 3) + (param_5 * (param_3 & 7) + 7 >> 3));
  pbVar8 = (byte *)(param_5 + 7U >> 3);
  pbVar23 = pbVar22 + 1;
  if (param_4 != 0) {
    uStack_88 = ~(uint)param_2;
    pbVar32 = param_2 + (int)pbVar22;
    pbVar30 = param_2 + (int)pbVar8;
    pbStack_a0 = (byte *)(param_1 + -1);
    iStack_8c = -param_1;
    pbStack_90 = (byte *)0x0;
    iStack_84 = 0;
    pbStack_9c = param_2;
    do {
      pbVar10 = pbStack_a0 + 1;
      pbVar34 = pbStack_9c + 1;
      switch(*pbStack_9c) {
      case 0:
        pbVar12 = pbStack_a0;
        pbVar34 = pbStack_9c;
        if (pbVar22 != (byte *)0x0) {
          do {
            pbVar34 = pbVar34 + 1;
            pbVar12[1] = *pbVar34;
            pbVar12 = pbVar12 + 1;
          } while (pbVar34 != pbVar32);
        }
        break;
      case 1:
        pbVar12 = pbStack_a0;
        pbVar34 = pbStack_9c;
        if (pbVar8 != (byte *)0x0) {
          do {
            pbVar34 = pbVar34 + 1;
            pbVar12[1] = *pbVar34;
            pbVar12 = pbVar12 + 1;
          } while (pbVar30 != pbVar34);
        }
        if (pbVar8 < pbVar22) {
          pbVar28 = pbVar8 + (int)pbStack_a0;
          pbVar12 = pbStack_a0;
          pbVar34 = pbVar30;
          do {
            pbVar34 = pbVar34 + 1;
            pbVar12 = pbVar12 + 1;
            pbVar28 = pbVar28 + 1;
            *pbVar28 = *pbVar34 + *pbVar12;
          } while (pbVar32 != pbVar34);
        }
        break;
      case 2:
        if (pbStack_90 == (byte *)0x0) {
          pbVar12 = pbStack_a0;
          pbVar34 = pbStack_9c;
          if (pbVar22 != (byte *)0x0) {
            do {
              pbVar34 = pbVar34 + 1;
              pbVar12[1] = *pbVar34;
              pbVar12 = pbVar12 + 1;
            } while (pbVar32 != pbVar34);
          }
        }
        else if (pbVar22 != (byte *)0x0) {
          pbStack_90 = pbStack_90 + -1;
          pbVar12 = pbStack_a0;
          pbVar34 = pbStack_9c;
          do {
            pbVar34 = pbVar34 + 1;
            pbStack_90 = pbStack_90 + 1;
            pbVar12 = pbVar12 + 1;
            *pbVar12 = *pbVar34 + *pbStack_90;
          } while (pbVar32 != pbVar34);
        }
        break;
      case 3:
        if (pbStack_90 == (byte *)0x0) {
          pbVar12 = pbStack_a0;
          pbVar34 = pbStack_9c;
          if (pbVar8 != (byte *)0x0) {
            do {
              pbVar34 = pbVar34 + 1;
              pbVar12[1] = *pbVar34;
              pbVar12 = pbVar12 + 1;
            } while (pbVar30 != pbVar34);
          }
          if (pbVar8 < pbVar22) {
            pbVar28 = pbVar8 + (int)pbStack_a0;
            pbVar12 = pbStack_a0;
            pbVar34 = pbVar30;
            do {
              pbVar34 = pbVar34 + 1;
              pbVar12 = pbVar12 + 1;
              pbVar28 = pbVar28 + 1;
              *pbVar28 = *pbVar34 + (*pbVar12 >> 1);
            } while (pbVar32 != pbVar34);
          }
        }
        else {
          if (pbVar8 != (byte *)0x0) {
            pbVar12 = pbStack_90 + -1;
            pbVar28 = pbStack_a0;
            pbVar34 = pbStack_9c;
            do {
              pbVar34 = pbVar34 + 1;
              pbVar12 = pbVar12 + 1;
              pbVar28 = pbVar28 + 1;
              *pbVar28 = *pbVar34 + (*pbVar12 >> 1);
            } while (pbVar30 != pbVar34);
          }
          if (pbVar8 < pbVar22) {
            pbStack_90 = pbStack_90 + (int)(pbVar8 + -1);
            pbVar28 = pbVar8 + (int)pbStack_a0;
            pbVar34 = pbStack_a0;
            pbVar12 = pbVar30;
            do {
              pbVar34 = pbVar34 + 1;
              pbStack_90 = pbStack_90 + 1;
              pbVar12 = pbVar12 + 1;
              pbVar28 = pbVar28 + 1;
              *pbVar28 = *pbVar12 + (char)((uint)*pbStack_90 + (uint)*pbVar34 >> 1);
            } while (pbVar32 != pbVar12);
          }
        }
        break;
      case 4:
        if (pbStack_90 == (byte *)0x0) {
          pbVar12 = pbStack_a0;
          pbVar34 = pbStack_9c;
          if (pbVar8 != (byte *)0x0) {
            do {
              pbVar34 = pbVar34 + 1;
              pbVar12[1] = *pbVar34;
              pbVar12 = pbVar12 + 1;
            } while (pbVar30 != pbVar34);
          }
          if (pbVar8 < pbVar22) {
            pbVar28 = pbVar8 + (int)pbStack_a0;
            pbVar12 = pbStack_a0;
            pbVar34 = pbVar30;
            do {
              pbVar34 = pbVar34 + 1;
              pbVar12 = pbVar12 + 1;
              pbVar28 = pbVar28 + 1;
              *pbVar28 = *pbVar34 + *pbVar12;
            } while (pbVar32 != pbVar34);
          }
        }
        else {
          pbVar12 = pbVar8;
          if (pbVar8 != (byte *)0x0) {
            pbVar5 = pbStack_90 + -1;
            pbVar26 = pbStack_a0;
            pbVar28 = pbStack_9c;
            do {
              pbVar28 = pbVar28 + 1;
              pbVar5 = pbVar5 + 1;
              uVar27 = (uint)(byte)(*pbVar28 + *pbVar5);
              pbVar26 = pbVar26 + 1;
              *pbVar26 = *pbVar28 + *pbVar5;
            } while (pbVar30 != pbVar28);
            if (pbVar8 < &Reset) {
              if (pbVar8 == (byte *)0x3) {
                if (&DAT_00000006 <= pbVar22) {
                  pbVar26 = pbStack_9c + 4;
                  pbVar5 = pbStack_a0 + 4;
                  pbVar28 = pbStack_90;
                  while( true ) {
                    uVar18 = (uint)*pbVar28;
                    bVar21 = pbVar5[-3];
                    bVar15 = pbVar28[3];
                    iVar6 = bVar21 - uVar18;
                    iVar9 = bVar15 - uVar18;
                    bVar29 = pbVar26[1];
                    if (iVar6 < 0) {
                      iVar6 = -iVar6;
                    }
                    iVar11 = (uint)bVar15 + (uint)bVar21 + uVar18 * -2;
                    bVar25 = pbVar26[2];
                    if (iVar9 < 0) {
                      iVar9 = -iVar9;
                    }
                    sVar7 = (short)iVar6;
                    bVar17 = pbVar28[5];
                    if (iVar11 < 0) {
                      iVar11 = -iVar11;
                    }
                    bVar14 = pbVar5[-2];
                    bVar20 = pbVar28[4];
                    bVar16 = pbVar28[1];
                    uVar24 = (uint)bVar16;
                    bVar4 = pbVar28[2];
                    uVar18 = (uint)bVar4;
                    if ((short)iVar9 <= sVar7) {
                      bVar15 = bVar21;
                      sVar7 = (short)iVar9;
                    }
                    iVar6 = bVar20 - uVar24;
                    iVar9 = bVar14 - uVar24;
                    bVar21 = *pbVar28;
                    if (sVar7 <= (short)iVar11) {
                      bVar21 = bVar15;
                    }
                    if (iVar6 < 0) {
                      iVar6 = -iVar6;
                    }
                    *pbVar5 = *pbVar26 + bVar21;
                    if (iVar9 < 0) {
                      iVar9 = -iVar9;
                    }
                    sVar7 = (short)iVar6;
                    iVar6 = (uint)bVar20 + (uint)bVar14 + uVar24 * -2;
                    if (iVar6 < 0) {
                      iVar6 = -iVar6;
                    }
                    if ((short)iVar9 < sVar7) {
                      bVar14 = bVar20;
                      sVar7 = (short)iVar9;
                    }
                    iVar9 = uVar27 - uVar18;
                    if (sVar7 <= (short)iVar6) {
                      bVar16 = bVar14;
                    }
                    iVar6 = bVar17 - uVar18;
                    pbVar5[1] = bVar29 + bVar16;
                    iVar11 = bVar17 + uVar27 + uVar18 * -2;
                    if (iVar6 < 0) {
                      iVar6 = -iVar6;
                    }
                    if (iVar9 < 0) {
                      iVar9 = -iVar9;
                    }
                    sVar7 = (short)iVar9;
                    if (iVar11 < 0) {
                      iVar11 = -iVar11;
                    }
                    if ((short)iVar6 <= sVar7) {
                      bVar17 = (byte)uVar27;
                      sVar7 = (short)iVar6;
                    }
                    if (sVar7 <= (short)iVar11) {
                      bVar4 = bVar17;
                    }
                    pbVar5[2] = bVar25 + bVar4;
                    pbVar12 = pbVar26 + uStack_88 + 3;
                    pbVar26 = pbVar26 + 3;
                    if (pbVar22 <= pbVar26 + (2 - (int)pbVar34)) break;
                    uVar27 = (uint)pbVar5[2];
                    pbVar5 = pbVar5 + 3;
                    pbVar28 = pbVar28 + 3;
                  }
                }
              }
              else if (pbVar8 == (byte *)0x2) {
                if (&Reset <= pbVar22) {
                  pbVar26 = (byte *)0x3;
                  pbVar5 = pbStack_a0 + 3;
                  pbVar28 = pbStack_90;
                  while( true ) {
                    uVar18 = (uint)*pbVar28;
                    bVar15 = pbVar5[-2];
                    bVar29 = pbVar28[2];
                    iVar6 = bVar15 - uVar18;
                    iVar9 = bVar29 - uVar18;
                    bVar21 = pbVar34[(int)pbVar26];
                    if (iVar6 < 0) {
                      iVar6 = -iVar6;
                    }
                    iVar11 = (uint)bVar29 + (uint)bVar15 + uVar18 * -2;
                    bVar25 = pbVar28[3];
                    if (iVar9 < 0) {
                      iVar9 = -iVar9;
                    }
                    sVar7 = (short)iVar6;
                    bVar17 = pbVar28[1];
                    uVar18 = (uint)bVar17;
                    if (iVar11 < 0) {
                      iVar11 = -iVar11;
                    }
                    if ((short)iVar9 <= sVar7) {
                      bVar29 = bVar15;
                      sVar7 = (short)iVar9;
                    }
                    iVar6 = bVar25 - uVar18;
                    iVar9 = uVar27 - uVar18;
                    bVar15 = *pbVar28;
                    if (sVar7 <= (short)iVar11) {
                      bVar15 = bVar29;
                    }
                    iVar11 = bVar25 + uVar27 + uVar18 * -2;
                    if (iVar6 < 0) {
                      iVar6 = -iVar6;
                    }
                    if (iVar9 < 0) {
                      iVar9 = -iVar9;
                    }
                    *pbVar5 = bVar15 + pbStack_9c[(int)pbVar26];
                    sVar7 = (short)iVar9;
                    if (iVar11 < 0) {
                      iVar11 = -iVar11;
                    }
                    if ((short)iVar6 <= sVar7) {
                      bVar25 = (byte)uVar27;
                      sVar7 = (short)iVar6;
                    }
                    pbVar12 = pbVar26 + 1;
                    pbVar26 = pbVar26 + 2;
                    if (sVar7 <= (short)iVar11) {
                      bVar17 = bVar25;
                    }
                    pbVar5[1] = bVar17 + bVar21;
                    if (pbVar22 <= pbVar26) break;
                    uVar27 = (uint)pbVar5[1];
                    pbVar5 = pbVar5 + 2;
                    pbVar28 = pbVar28 + 2;
                  }
                }
              }
              else {
                pbVar12 = (byte *)0x1;
              }
            }
            else if (pbVar8 + 3 < pbVar22) {
              pbVar26 = pbStack_90 + (int)pbVar8;
              pbVar31 = pbStack_a0 + (int)(pbVar8 + 1);
              pbVar33 = pbStack_9c + (int)(pbVar8 + 1);
              pbVar28 = pbStack_90;
              pbVar5 = pbVar10;
              do {
                bVar29 = pbVar33[1];
                uVar27 = (uint)*pbVar28;
                bVar25 = *pbVar5;
                bVar15 = pbVar33[2];
                iVar6 = bVar25 - uVar27;
                bVar17 = *pbVar26;
                bVar21 = pbVar33[3];
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                iVar9 = bVar17 - uVar27;
                sVar7 = (short)iVar6;
                bVar20 = pbVar5[2];
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                bVar14 = pbVar5[3];
                iVar6 = (uint)bVar17 + (uint)bVar25 + uVar27 * -2;
                bVar16 = pbVar5[1];
                bVar4 = pbVar26[1];
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                bVar1 = pbVar26[2];
                bVar19 = pbVar28[1];
                uVar24 = (uint)bVar19;
                bVar2 = pbVar26[3];
                bVar13 = pbVar28[2];
                uVar18 = (uint)bVar13;
                bVar3 = pbVar28[3];
                uVar27 = (uint)bVar3;
                if ((short)iVar9 <= sVar7) {
                  bVar17 = bVar25;
                  sVar7 = (short)iVar9;
                }
                iVar9 = bVar16 - uVar24;
                bVar25 = *pbVar28;
                if (sVar7 <= (short)iVar6) {
                  bVar25 = bVar17;
                }
                iVar6 = bVar4 - uVar24;
                *pbVar31 = *pbVar33 + bVar25;
                iVar11 = (uint)bVar4 + (uint)bVar16 + uVar24 * -2;
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                sVar7 = (short)iVar6;
                if (iVar11 < 0) {
                  iVar11 = -iVar11;
                }
                if ((short)iVar9 < sVar7) {
                  bVar16 = bVar4;
                  sVar7 = (short)iVar9;
                }
                if (sVar7 <= (short)iVar11) {
                  bVar19 = bVar16;
                }
                iVar9 = bVar20 - uVar18;
                iVar6 = bVar1 - uVar18;
                pbVar31[1] = bVar29 + bVar19;
                iVar11 = (uint)bVar1 + (uint)bVar20 + uVar18 * -2;
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                sVar7 = (short)iVar6;
                if (iVar11 < 0) {
                  iVar11 = -iVar11;
                }
                if ((short)iVar9 < sVar7) {
                  bVar20 = bVar1;
                  sVar7 = (short)iVar9;
                }
                if (sVar7 <= (short)iVar11) {
                  bVar13 = bVar20;
                }
                iVar9 = bVar14 - uVar27;
                iVar6 = bVar2 - uVar27;
                pbVar31[2] = bVar15 + bVar13;
                iVar11 = (uint)bVar2 + (uint)bVar14 + uVar27 * -2;
                if (iVar6 < 0) {
                  iVar6 = -iVar6;
                }
                if (iVar9 < 0) {
                  iVar9 = -iVar9;
                }
                sVar7 = (short)iVar6;
                if (iVar11 < 0) {
                  iVar11 = -iVar11;
                }
                if ((short)iVar9 < sVar7) {
                  bVar14 = bVar2;
                  sVar7 = (short)iVar9;
                }
                pbVar33 = pbVar33 + 4;
                if (sVar7 <= (short)iVar11) {
                  bVar3 = bVar14;
                }
                pbVar5 = pbVar5 + 4;
                pbVar26 = pbVar26 + 4;
                pbVar28 = pbVar28 + 4;
                pbVar31[3] = bVar21 + bVar3;
                pbVar12 = pbVar31 + iStack_8c + 4;
                pbVar31 = pbVar31 + 4;
              } while (pbVar31 + (3 - (int)pbVar10) < pbVar22);
            }
          }
          if (pbVar22 != pbVar12) {
            pbVar5 = pbVar12 + -1;
            pbVar34 = pbVar34 + (int)pbVar5;
            pbVar28 = pbStack_90 + (int)pbVar5;
            pbVar5 = pbVar5 + (int)pbVar10;
            pbVar26 = pbStack_90 + ((int)pbVar12 - (int)pbVar8);
            pbVar12 = pbVar10 + ((int)pbVar12 - (int)pbVar8);
            do {
              uVar27 = (uint)*pbVar26;
              bVar29 = *pbVar12;
              pbVar28 = pbVar28 + 1;
              bVar15 = *pbVar28;
              iVar6 = bVar29 - uVar27;
              iVar9 = bVar15 - uVar27;
              pbVar34 = pbVar34 + 1;
              iVar11 = (uint)bVar29 + (uint)bVar15 + uVar27 * -2;
              if (iVar6 < 0) {
                iVar6 = -iVar6;
              }
              if (iVar9 < 0) {
                iVar9 = -iVar9;
              }
              if (iVar11 < 0) {
                iVar11 = -iVar11;
              }
              sVar7 = (short)iVar9;
              if ((short)iVar6 < (short)iVar9) {
                bVar29 = bVar15;
                sVar7 = (short)iVar6;
              }
              bVar15 = *pbVar26;
              if (sVar7 <= (short)iVar11) {
                bVar15 = bVar29;
              }
              pbVar5 = pbVar5 + 1;
              *pbVar5 = bVar15 + *pbVar34;
              pbVar26 = pbVar26 + 1;
              pbVar12 = pbVar12 + 1;
            } while (pbVar32 != pbVar34);
          }
        }
        break;
      default:
        return 0x24;
      }
      pbVar32 = pbVar32 + (int)pbVar23;
      pbStack_9c = pbStack_9c + (int)pbVar23;
      pbVar30 = pbVar30 + (int)pbVar23;
      iStack_84 = iStack_84 + 1;
      pbStack_a0 = pbStack_a0 + (int)pbVar22;
      uStack_88 = uStack_88 - (int)pbVar23;
      iStack_8c = iStack_8c - (int)pbVar22;
      pbStack_90 = pbVar10;
    } while (param_4 != iStack_84);
  }
  return 0;
}


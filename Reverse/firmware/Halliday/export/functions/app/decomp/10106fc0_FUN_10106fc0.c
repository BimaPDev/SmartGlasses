/* FUN_10106fc0 @ 0x10106fc0 */

int FUN_10106fc0(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 uVar8;
  short *psVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  int *piVar21;
  short *psVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint uVar25;
  bool bVar26;
  int local_3c;
  int local_2c [2];
  
  puVar16 = *(undefined1 **)(param_1 + 0xc4);
  pbVar14 = *(byte **)(param_1 + 200);
  sVar3 = *(short *)(param_1 + 0x20);
  iVar15 = (int)sVar3;
  iVar13 = *(int *)(param_1 + 0xc);
  if (iVar15 == 0) {
    psVar9 = *(short **)(iVar13 + 0x44);
    if (pbVar14 < puVar16 + 2) {
      return 0x14;
    }
    sVar10 = CONCAT11(*puVar16,puVar16[1]);
    psVar22 = psVar9;
  }
  else {
    if ((*(uint *)(iVar13 + 8) <
         (uint)((int)*(short *)(iVar13 + 0x14) + (int)*(short *)(iVar13 + 0x38) + iVar15)) &&
       (iVar11 = FUN_100fb410(iVar13,0,iVar15), iVar11 != 0)) {
      return iVar11;
    }
    if (0xffe < iVar15) {
      return 0x14;
    }
    psVar9 = *(short **)(iVar13 + 0x44);
    if (pbVar14 < puVar16 + (iVar15 + 1) * 2) {
      return 0x14;
    }
    sVar10 = CONCAT11(*puVar16,puVar16[1]);
    psVar22 = psVar9 + iVar15;
    if (0 < iVar15) {
      *psVar9 = sVar10;
    }
  }
  if (-1 < sVar10) {
    do {
      psVar9 = psVar9 + 1;
      puVar16 = puVar16 + 2;
      if (psVar22 <= psVar9) {
        if (iVar15 < 1) {
          local_3c = 0;
        }
        else {
          local_3c = psVar9[-1] + 1;
          if (local_3c < 0) {
            return 0x14;
          }
        }
        if ((*(uint *)(iVar13 + 4) <
             (uint)((int)*(short *)(iVar13 + 0x16) + (int)*(short *)(iVar13 + 0x3a) + 4 + local_3c))
           && (iVar15 = FUN_100fb410(iVar13,local_3c + 4,0), iVar15 != 0)) {
          return iVar15;
        }
        iVar15 = *(int *)(param_1 + 8);
        pbVar18 = puVar16 + 2;
        *(undefined4 *)(iVar15 + 0x88) = 0;
        *(undefined4 *)(iVar15 + 0x8c) = 0;
        if (pbVar14 < pbVar18) {
          return 0x14;
        }
        uVar20 = (uint)CONCAT11(*puVar16,puVar16[1]);
        uVar12 = uVar20;
        if ((*(uint *)(param_1 + 0x10) & 2) == 0) {
          if ((int)pbVar14 - (int)pbVar18 < (int)uVar20) {
            return 0x16;
          }
          iVar11 = *(int *)(param_1 + 0x9c);
          uVar12 = *(uint *)(iVar11 + 0x188);
          if (uVar12 < uVar20) {
            uVar8 = FUN_100fb280(*(undefined4 *)(iVar11 + 8),1,uVar12,uVar20,
                                 *(undefined4 *)(iVar11 + 0x18c),local_2c);
            *(undefined4 *)(iVar11 + 0x18c) = uVar8;
            iVar11 = *(int *)(param_1 + 0x9c);
            if (local_2c[0] != 0) {
              *(uint *)(iVar11 + 0x188) = uVar12;
              return local_2c[0];
            }
            iVar15 = *(int *)(param_1 + 8);
            *(uint *)(iVar11 + 0x188) = uVar20;
          }
          else {
            *(uint *)(iVar11 + 0x188) = uVar12 & 0xffff;
          }
          uVar8 = *(undefined4 *)(iVar11 + 0x18c);
          *(undefined4 *)(iVar15 + 0x88) = uVar8;
          *(uint *)(iVar15 + 0x8c) = uVar20;
          uVar12 = 0;
          if (uVar20 != 0) {
            FUN_1011ea40(uVar8,pbVar18,uVar20);
            uVar12 = uVar20;
          }
        }
        pbVar18 = pbVar18 + uVar12;
        pbVar6 = *(byte **)(iVar13 + 0x40) + local_3c;
        pbVar19 = *(byte **)(iVar13 + 0x40);
        goto LAB_101070dc;
      }
      sVar4 = CONCAT11(*puVar16,puVar16[1]);
      *psVar9 = sVar4;
      bVar26 = sVar10 < sVar4;
      sVar10 = sVar4;
    } while (bVar26);
  }
  return 0x14;
LAB_101070dc:
  do {
    do {
      pbVar24 = pbVar19;
      if (pbVar6 <= pbVar24) {
        pbVar19 = *(byte **)(iVar13 + 0x40);
        if ((local_3c != 0) && ((int)((uint)*pbVar19 << 0x19) < 0)) {
          *(uint *)(iVar13 + 0x24) = *(uint *)(iVar13 + 0x24) | 0x40;
        }
        piVar7 = *(int **)(iVar13 + 0x3c);
        piVar21 = piVar7 + local_3c * 2;
        if (pbVar14 < pbVar18) {
          return 0x14;
        }
        if (piVar7 < piVar21) {
          pbVar24 = pbVar19 + -1;
          iVar15 = 0;
          pbVar6 = pbVar24;
          piVar5 = piVar7;
          do {
            pbVar6 = pbVar6 + 1;
            bVar2 = *pbVar6;
            pbVar17 = pbVar18 + 1;
            if ((bVar2 & 2) == 0) {
              pbVar17 = pbVar18;
              if ((bVar2 & 0x10) == 0) {
                if (pbVar14 < pbVar18 + 2) {
                  return 0x14;
                }
                iVar15 = iVar15 + CONCAT11(*pbVar18,pbVar18[1]);
                pbVar17 = pbVar18 + 2;
              }
            }
            else {
              if (pbVar14 < pbVar17) {
                return 0x14;
              }
              uVar12 = (uint)*pbVar18;
              if ((bVar2 & 0x10) == 0) {
                uVar12 = -uVar12;
              }
              iVar15 = iVar15 + uVar12;
            }
            *piVar5 = iVar15;
            pbVar18 = pbVar17;
            piVar5 = piVar5 + 2;
          } while (pbVar19 + (~(uint)piVar7 + (int)piVar21 >> 3) != pbVar6);
          iVar15 = 0;
          do {
            pbVar24 = pbVar24 + 1;
            bVar2 = *pbVar24;
            pbVar18 = pbVar17 + 1;
            if ((bVar2 & 4) == 0) {
              pbVar18 = pbVar17;
              if ((bVar2 & 0x20) == 0) {
                if (pbVar14 < pbVar17 + 2) {
                  return 0x14;
                }
                iVar15 = iVar15 + CONCAT11(*pbVar17,pbVar17[1]);
                pbVar18 = pbVar17 + 2;
              }
            }
            else {
              if (pbVar14 < pbVar18) {
                return 0x14;
              }
              uVar12 = (uint)*pbVar17;
              if ((bVar2 & 0x20) == 0) {
                uVar12 = -uVar12;
              }
              iVar15 = iVar15 + uVar12;
            }
            piVar7[1] = iVar15;
            piVar7 = piVar7 + 2;
            *pbVar24 = bVar2 & 1;
            pbVar17 = pbVar18;
          } while (piVar7 < piVar21);
        }
        *(short *)(iVar13 + 0x38) = sVar3;
        *(short *)(iVar13 + 0x3a) = (short)local_3c;
        *(byte **)(param_1 + 0xc4) = pbVar18;
        return 0;
      }
      pbVar17 = pbVar18 + 1;
      if (pbVar14 < pbVar17) {
        return 0x14;
      }
      bVar2 = *pbVar18;
      bVar26 = -1 < (int)((uint)bVar2 << 0x1c);
      if (bVar26) {
        pbVar18 = pbVar17;
      }
      pbVar19 = pbVar24 + 1;
      *pbVar24 = bVar2;
    } while (bVar26);
    pbVar18 = pbVar18 + 2;
    if (pbVar14 < pbVar18) {
      return 0x14;
    }
    bVar1 = *pbVar17;
    uVar12 = (uint)bVar1;
    if (pbVar6 < pbVar19 + uVar12) {
      return 0x14;
    }
  } while (uVar12 == 0);
  uVar20 = uVar12 - 1 & 0xff;
  pbVar17 = pbVar19;
  if (uVar20 < 3) {
LAB_1010725c:
    *pbVar17 = bVar2;
    if ((uVar12 != 1) && (pbVar17[1] = bVar2, uVar12 != 2)) {
      pbVar17[2] = bVar2;
    }
  }
  else {
    do {
      pbVar23 = pbVar17 + 4;
      *(uint *)pbVar17 = CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2)));
      pbVar17 = pbVar23;
    } while (pbVar24 + ((bVar1 >> 2) - 1 & 0xff) * 4 + 5 != pbVar23);
    uVar25 = uVar12 & 0xfc;
    bVar26 = uVar12 != uVar25;
    uVar12 = uVar12 - uVar25 & 0xff;
    pbVar17 = pbVar19 + uVar25;
    if (bVar26) goto LAB_1010725c;
  }
  pbVar19 = pbVar19 + uVar20 + 1;
  goto LAB_101070dc;
}


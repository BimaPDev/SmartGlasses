/* FUN_140dfe44 @ 0x140dfe44 */

byte * FUN_140dfe44(undefined4 param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                   uint param_6)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int extraout_r1;
  byte *extraout_r2;
  byte *extraout_r2_00;
  int extraout_r2_01;
  int iVar12;
  byte *extraout_r3;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  undefined8 uVar23;
  byte *local_50;
  uint *local_48;
  
  iVar12 = *DAT_140e0124;
  iVar5 = FUN_140dd3a4(iVar12);
  bVar2 = *(byte *)(iVar12 + iVar5 + -1);
  pbVar18 = (byte *)(*param_2 + 2);
  do {
    pbVar19 = pbVar18;
    local_50 = pbVar19 + (-2 - *param_2);
    pbVar18 = pbVar19 + 1;
  } while (*pbVar19 == 0x30);
  uVar23 = FUN_140dfe1a();
  uVar10 = (undefined4)((ulonglong)uVar23 >> 0x20);
  if ((int)uVar23 == 0) {
    iVar6 = FUN_140dd3b4(pbVar19,iVar12,iVar5);
    pbVar17 = pbVar19;
    if (iVar6 == 0) {
      pbVar16 = pbVar19 + iVar5;
      iVar6 = FUN_140dfe1a(pbVar19[iVar5]);
      pbVar18 = pbVar16;
      pbVar17 = pbVar16;
      if (iVar6 != 0) {
        do {
          pbVar19 = pbVar18;
          pbVar18 = pbVar19 + 1;
        } while (*pbVar19 == 0x30);
        uVar23 = FUN_140dfe1a();
        uVar10 = (undefined4)((ulonglong)uVar23 >> 0x20);
        bVar3 = (int)uVar23 == 0;
        local_50 = (byte *)0x1;
        pbVar18 = pbVar19;
        goto LAB_140dfed6;
      }
    }
    iVar6 = 0;
    bVar3 = true;
  }
  else {
    bVar3 = false;
    pbVar16 = (byte *)0x0;
    pbVar18 = pbVar19;
LAB_140dfed6:
    do {
      pbVar17 = pbVar18;
      uVar23 = FUN_140dfe1a(*pbVar17,uVar10,pbVar17 + 1);
      uVar10 = (undefined4)((ulonglong)uVar23 >> 0x20);
      pbVar18 = extraout_r2;
    } while ((int)uVar23 != 0);
    uVar23 = FUN_140dd3b4(pbVar17,iVar12,iVar5);
    uVar10 = (undefined4)((ulonglong)uVar23 >> 0x20);
    if ((int)uVar23 == 0) {
      if (pbVar16 == (byte *)0x0) {
        pbVar16 = pbVar17 + iVar5;
        pbVar18 = pbVar16;
        do {
          pbVar17 = pbVar18;
          uVar23 = FUN_140dfe1a(*pbVar17,uVar10,pbVar17 + 1);
          uVar10 = (undefined4)((ulonglong)uVar23 >> 0x20);
          pbVar18 = extraout_r2_00;
        } while ((int)uVar23 != 0);
      }
    }
    else {
      iVar6 = 0;
      if (pbVar16 == (byte *)0x0) goto LAB_140dff16;
    }
    iVar6 = ((int)pbVar16 - (int)pbVar17) * 4;
  }
LAB_140dff16:
  pbVar18 = pbVar17;
  if ((*pbVar17 & 0xdf) != 0x50) goto LAB_140dff5c;
  if (pbVar17[1] == 0x2b) {
    bVar4 = false;
LAB_140dff84:
    pbVar16 = pbVar17 + 2;
  }
  else {
    if (pbVar17[1] == 0x2d) {
      bVar4 = true;
      goto LAB_140dff84;
    }
    pbVar16 = pbVar17 + 1;
    bVar4 = false;
  }
  uVar23 = FUN_140dfe1a(*pbVar16);
  if (((int)uVar23 - 1U & 0xff) < 0x19) {
    while( true ) {
      puVar1 = (undefined1 *)((int)((ulonglong)uVar23 >> 0x20) + 1);
      uVar23 = FUN_140dfe1a(*puVar1,puVar1,(int)uVar23 + -0x10);
      pbVar18 = (byte *)((ulonglong)uVar23 >> 0x20);
      if (0x18 < ((int)uVar23 - 1U & 0xff)) break;
      uVar23 = CONCAT44(pbVar18,extraout_r2_01 * 10 + (int)uVar23);
    }
    iVar7 = extraout_r2_01;
    if (bVar4) {
      iVar7 = -extraout_r2_01;
    }
    iVar6 = iVar6 + iVar7;
  }
LAB_140dff5c:
  *param_2 = (int)pbVar18;
  if (bVar3) {
    if (local_50 == (byte *)0x0) {
      pbVar18 = (byte *)0x6;
    }
    else {
      pbVar18 = (byte *)0x0;
    }
    return pbVar18;
  }
  pbVar18 = pbVar17 + (-1 - (int)pbVar19);
  iVar7 = 0;
  do {
    if ((int)pbVar18 < 8) {
      iVar7 = FUN_140e05e4(param_1,iVar7);
      if (iVar7 != 0) {
        puVar20 = (uint *)(iVar7 + 0x14);
        uVar21 = 0;
        local_50 = (byte *)0x0;
        local_48 = puVar20;
        while (pbVar18 = pbVar17, pbVar19 < pbVar18) {
          if (((pbVar18[-1] != bVar2) || (pbVar17 = pbVar18 + -1 + (1 - iVar5), pbVar17 < pbVar19))
             || (iVar8 = FUN_140dd3b4(pbVar17,iVar12,iVar5), iVar8 != 0)) {
            if (uVar21 == 0x20) {
              *local_48 = (uint)local_50;
              uVar21 = 0;
              local_50 = (byte *)0x0;
              local_48 = local_48 + 1;
            }
            uVar9 = FUN_140dfe1a(pbVar18[-1]);
            uVar13 = uVar21 & 0xff;
            uVar21 = uVar21 + 4;
            local_50 = (byte *)((uint)local_50 | (uVar9 & 0xf) << uVar13);
            pbVar17 = pbVar18 + -1;
          }
        }
        *local_48 = (uint)local_50;
        iVar5 = (int)local_48 + (4 - (int)puVar20) >> 2;
        *(int *)(iVar7 + 0x10) = iVar5;
        iVar8 = FUN_140e07cc(local_50);
        iVar8 = iVar5 * 0x20 - iVar8;
        pbVar17 = (byte *)*param_3;
        if ((int)pbVar17 < iVar8) {
          iVar8 = iVar8 - (int)pbVar17;
          iVar5 = FUN_140e0f2c(iVar7,iVar8);
          uVar21 = 0;
          if (iVar5 != 0) {
            uVar13 = iVar8 - 1;
            uVar21 = 1;
            if ((1 << (uVar13 & 0x1f) & puVar20[(int)uVar13 >> 5]) != 0) {
              if (((int)uVar13 < 2) || (iVar5 = FUN_140e0f2c(iVar7,iVar8 + -2), iVar5 == 0)) {
                uVar21 = 2;
              }
              else {
                uVar21 = 3;
              }
            }
          }
          iVar6 = iVar6 + iVar8;
          FUN_140dfd78(iVar7,iVar8);
        }
        else {
          if (iVar8 < (int)pbVar17) {
            iVar6 = iVar6 - ((int)pbVar17 - iVar8);
            iVar7 = FUN_140e0a9c(param_1,iVar7,(int)pbVar17 - iVar8);
            puVar20 = (uint *)(iVar7 + 0x14);
          }
          uVar21 = 0;
        }
        iVar8 = iVar7;
        if (param_3[2] < iVar6) goto LAB_140e004c;
        if (iVar6 < param_3[1]) {
          pbVar18 = (byte *)(param_3[1] - iVar6);
          if ((int)pbVar17 <= (int)pbVar18) {
            iVar5 = param_3[3];
            if (iVar5 == 2) {
              if (param_6 != 0) goto LAB_140e013c;
            }
            else {
              if (iVar5 != 3) {
                if ((iVar5 != 1) || (pbVar17 != pbVar18)) goto LAB_140e013c;
                if (pbVar17 == (byte *)0x1) goto LAB_140e010c;
                param_6 = FUN_140e0f2c(iVar7,pbVar17 + -1);
              }
              if (param_6 == 0) {
LAB_140e013c:
                FUN_140e0664(param_1,iVar7);
                *param_5 = 0;
                return &DAT_00000050;
              }
            }
LAB_140e010c:
            *param_4 = param_3[1];
            *(undefined4 *)(iVar7 + 0x10) = 1;
            *puVar20 = 1;
            *param_5 = iVar7;
            return (byte *)0x62;
          }
          pbVar16 = pbVar18 + -1;
          if (uVar21 == 0) {
            if (pbVar16 != (byte *)0x0) {
              uVar21 = FUN_140e0f2c(iVar7,pbVar16);
            }
          }
          else {
            uVar21 = 1;
          }
          pbVar17 = pbVar17 + -(int)pbVar18;
          pbVar19 = (byte *)0x2;
          if ((1 << ((uint)pbVar16 & 0x1f) & puVar20[(int)pbVar16 >> 5]) != 0) {
            uVar21 = uVar21 | 2;
          }
          FUN_140dfd78(iVar7,pbVar18);
          iVar6 = param_3[1];
        }
        else {
          pbVar19 = (byte *)0x1;
        }
        if (uVar21 == 0) goto LAB_140e0236;
        iVar5 = param_3[3];
        if (iVar5 == 2) {
          param_6 = 1 - param_6;
          uVar13 = param_6;
joined_r0x140e01c6:
          if (uVar13 != 0) {
            iVar22 = *(int *)(iVar7 + 0x10);
            iVar5 = iVar22 * 4;
            piVar14 = (int *)(iVar7 + 0x14);
            do {
              piVar15 = piVar14 + 1;
              if (*piVar14 != -1) {
                *piVar14 = *piVar14 + 1;
                goto LAB_140e020a;
              }
              *piVar14 = 0;
              piVar14 = piVar15;
            } while (piVar15 < (int *)(iVar7 + 0x14) + iVar22);
            if (*(int *)(iVar7 + 8) <= iVar22) {
              iVar8 = FUN_140e05e4(param_1,*(int *)(iVar7 + 4) + 1);
              if (iVar8 == 0) {
                uVar11 = 0x84;
                uVar10 = DAT_140e02cc;
                goto LAB_140dffb8;
              }
              FUN_140e5278(iVar8 + 0xc,iVar7 + 0xc,(*(int *)(iVar7 + 0x10) + 2) * 4);
              FUN_140e0664(param_1,iVar7);
            }
            iVar12 = *(int *)(iVar8 + 0x10);
            *(int *)(iVar8 + 0x10) = iVar12 + 1;
            *(undefined4 *)(iVar8 + iVar12 * 4 + 0x14) = 1;
LAB_140e020a:
            if (pbVar19 == (byte *)0x2) {
              uVar21 = 2;
              if (((byte *)(*param_3 + -1) == pbVar17) &&
                 ((1 << ((uint)pbVar17 & 0x1f) & *(uint *)(iVar8 + 0x14 + ((int)pbVar17 >> 5) * 4))
                  != 0)) {
                uVar21 = 1;
              }
            }
            else {
              if ((iVar22 < *(int *)(iVar8 + 0x10)) ||
                 ((((uint)pbVar17 & 0x1f) != 0 &&
                  (iVar5 = FUN_140e07cc(*(undefined4 *)(iVar8 + 0x14 + iVar5 + -4)),
                  iVar5 < (int)(0x20 - ((uint)pbVar17 & 0x1f)))))) {
                FUN_140dfd78(iVar8,1);
                iVar6 = iVar6 + 1;
                if (param_3[2] < iVar6) {
LAB_140e004c:
                  FUN_140e0664(param_1,iVar8);
                  *param_5 = 0;
                  return (byte *)0xa3;
                }
              }
              uVar21 = 1;
            }
            pbVar19 = (byte *)(uVar21 | 0x20);
LAB_140e0236:
            *param_5 = iVar8;
            *param_4 = iVar6;
            return pbVar19;
          }
        }
        else {
          uVar13 = param_6;
          if (iVar5 == 3) goto joined_r0x140e01c6;
          if ((iVar5 == 1) && ((uVar21 & 2) != 0)) {
            uVar13 = (uVar21 | *puVar20) & 1;
            goto joined_r0x140e01c6;
          }
        }
        pbVar19 = (byte *)((uint)pbVar19 | 0x10);
        goto LAB_140e0236;
      }
      uVar11 = 0xde;
      uVar10 = DAT_140e0128;
LAB_140dffb8:
      FUN_140da8c8(DAT_140e012c,uVar11,0,uVar10);
      iVar7 = extraout_r1;
      pbVar18 = extraout_r3;
    }
    iVar7 = iVar7 + 1;
    pbVar18 = (byte *)((int)pbVar18 >> 1);
  } while( true );
}


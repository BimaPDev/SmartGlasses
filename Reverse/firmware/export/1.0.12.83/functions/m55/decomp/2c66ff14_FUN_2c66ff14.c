/* FUN_2c66ff14 @ 0x2c66ff14 */

uint FUN_2c66ff14(undefined4 param_1,int *param_2,uint *param_3,uint *param_4,int *param_5,
                 uint param_6)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *extraout_r2;
  byte *extraout_r2_00;
  int extraout_r2_01;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  byte *local_50;
  uint *local_48;
  
  iVar10 = *DAT_2c6701f4;
  iVar5 = FUN_2c66c4ec(iVar10);
  bVar2 = *(byte *)(iVar10 + iVar5 + -1);
  pbVar11 = (byte *)(*param_2 + 2);
  do {
    pbVar18 = pbVar11;
    local_50 = pbVar18 + (-2 - *param_2);
    pbVar11 = pbVar18 + 1;
  } while (*pbVar18 == 0x30);
  uVar23 = FUN_2c66feea();
  uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
  if ((int)uVar23 == 0) {
    iVar6 = FUN_2c66c540(pbVar18,iVar10,iVar5);
    pbVar13 = pbVar18;
    if (iVar6 == 0) {
      pbVar17 = pbVar18 + iVar5;
      iVar6 = FUN_2c66feea(pbVar18[iVar5]);
      pbVar11 = pbVar17;
      pbVar13 = pbVar17;
      if (iVar6 != 0) {
        do {
          pbVar18 = pbVar11;
          pbVar11 = pbVar18 + 1;
        } while (*pbVar18 == 0x30);
        uVar23 = FUN_2c66feea();
        uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
        bVar3 = (int)uVar23 == 0;
        local_50 = (byte *)0x1;
        pbVar11 = pbVar18;
        goto LAB_2c66ffa6;
      }
    }
    uVar16 = 0;
    bVar3 = true;
  }
  else {
    bVar3 = false;
    pbVar17 = (byte *)0x0;
    pbVar11 = pbVar18;
LAB_2c66ffa6:
    do {
      pbVar13 = pbVar11;
      uVar23 = FUN_2c66feea(*pbVar13,uVar8,pbVar13 + 1);
      uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
      pbVar11 = extraout_r2;
    } while ((int)uVar23 != 0);
    uVar23 = FUN_2c66c540(pbVar13,iVar10,iVar5);
    uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
    if ((int)uVar23 == 0) {
      if (pbVar17 == (byte *)0x0) {
        pbVar17 = pbVar13 + iVar5;
        pbVar11 = pbVar17;
        do {
          pbVar13 = pbVar11;
          uVar23 = FUN_2c66feea(*pbVar13,uVar8,pbVar13 + 1);
          uVar8 = (undefined4)((ulonglong)uVar23 >> 0x20);
          pbVar11 = extraout_r2_00;
        } while ((int)uVar23 != 0);
      }
    }
    else {
      uVar16 = 0;
      if (pbVar17 == (byte *)0x0) goto LAB_2c66ffe6;
    }
    uVar16 = ((int)pbVar17 - (int)pbVar13) * 4;
  }
LAB_2c66ffe6:
  pbVar11 = pbVar13;
  if ((*pbVar13 & 0xdf) == 0x50) {
    if (pbVar13[1] == 0x2b) {
      bVar4 = false;
LAB_2c670054:
      pbVar17 = pbVar13 + 2;
    }
    else {
      if (pbVar13[1] == 0x2d) {
        bVar4 = true;
        goto LAB_2c670054;
      }
      pbVar17 = pbVar13 + 1;
      bVar4 = false;
    }
    uVar23 = FUN_2c66feea(*pbVar17);
    if (((int)uVar23 - 1U & 0xff) < 0x19) {
      while( true ) {
        puVar1 = (undefined1 *)((int)((ulonglong)uVar23 >> 0x20) + 1);
        uVar23 = FUN_2c66feea(*puVar1,puVar1,(int)uVar23 + -0x10);
        pbVar11 = (byte *)((ulonglong)uVar23 >> 0x20);
        if (0x18 < ((int)uVar23 - 1U & 0xff)) break;
        uVar23 = CONCAT44(pbVar11,extraout_r2_01 * 10 + (int)uVar23);
      }
      iVar6 = extraout_r2_01;
      if (bVar4) {
        iVar6 = -extraout_r2_01;
      }
      uVar16 = uVar16 + iVar6;
    }
  }
  *param_2 = (int)pbVar11;
  if (bVar3) {
    if (local_50 == (byte *)0x0) {
      return 6;
    }
    return 0;
  }
  iVar6 = 0;
  for (pbVar11 = pbVar13 + (-1 - (int)pbVar18); 7 < (int)pbVar11;
      pbVar11 = (byte *)((int)pbVar11 >> 1)) {
    iVar6 = iVar6 + 1;
  }
  iVar6 = FUN_2c6706e0(param_1,iVar6);
  if (iVar6 == 0) {
    uVar9 = 0xde;
    uVar8 = DAT_2c6701f8;
    goto LAB_2c670088;
  }
  puVar20 = (uint *)(iVar6 + 0x14);
  uVar22 = 0;
  local_50 = (byte *)0x0;
  local_48 = puVar20;
  while (pbVar11 = pbVar13, pbVar18 < pbVar11) {
    if (((pbVar11[-1] != bVar2) || (pbVar13 = pbVar11 + -1 + (1 - iVar5), pbVar13 < pbVar18)) ||
       (iVar7 = FUN_2c66c540(pbVar13,iVar10,iVar5), iVar7 != 0)) {
      if (uVar22 == 0x20) {
        *local_48 = (uint)local_50;
        uVar22 = 0;
        local_50 = (byte *)0x0;
        local_48 = local_48 + 1;
      }
      uVar12 = FUN_2c66feea(pbVar11[-1]);
      uVar21 = uVar22 & 0xff;
      uVar22 = uVar22 + 4;
      local_50 = (byte *)((uint)local_50 | (uVar12 & 0xf) << uVar21);
      pbVar13 = pbVar11 + -1;
    }
  }
  *local_48 = (uint)local_50;
  iVar5 = (int)local_48 + (4 - (int)puVar20) >> 2;
  *(int *)(iVar6 + 0x10) = iVar5;
  iVar10 = FUN_2c6708c8(local_50);
  iVar10 = iVar5 * 0x20 - iVar10;
  uVar22 = *param_3;
  if ((int)uVar22 < iVar10) {
    iVar10 = iVar10 - uVar22;
    iVar5 = FUN_2c671022(iVar6,iVar10);
    uVar21 = 0;
    if (iVar5 != 0) {
      uVar12 = iVar10 - 1;
      uVar21 = 1;
      if ((1 << (uVar12 & 0x1f) & puVar20[(int)uVar12 >> 5]) != 0) {
        if (((int)uVar12 < 2) || (iVar5 = FUN_2c671022(iVar6,iVar10 + -2), iVar5 == 0)) {
          uVar21 = 2;
        }
        else {
          uVar21 = 3;
        }
      }
    }
    uVar16 = uVar16 + iVar10;
    FUN_2c66fe48(iVar6,iVar10);
  }
  else {
    if (iVar10 < (int)uVar22) {
      uVar16 = uVar16 - (uVar22 - iVar10);
      iVar6 = FUN_2c670b98(param_1,iVar6,uVar22 - iVar10);
      puVar20 = (uint *)(iVar6 + 0x14);
    }
    uVar21 = 0;
  }
  iVar5 = iVar6;
  if ((int)param_3[2] < (int)uVar16) goto LAB_2c67011c;
  if ((int)uVar16 < (int)param_3[1]) {
    uVar16 = param_3[1] - uVar16;
    if ((int)uVar22 <= (int)uVar16) {
      uVar21 = param_3[3];
      if (uVar21 == 2) {
        if (param_6 != 0) goto LAB_2c67020c;
      }
      else {
        if (uVar21 != 3) {
          if ((uVar21 != 1) || (uVar22 != uVar16)) goto LAB_2c67020c;
          if (uVar22 == 1) goto LAB_2c6701dc;
          param_6 = FUN_2c671022(iVar6,uVar22 - 1);
        }
        if (param_6 == 0) {
LAB_2c67020c:
          FUN_2c670760(param_1,iVar6);
          *param_5 = 0;
          return 0x50;
        }
      }
LAB_2c6701dc:
      *param_4 = param_3[1];
      *(undefined4 *)(iVar6 + 0x10) = 1;
      *puVar20 = 1;
      *param_5 = iVar6;
      return 0x62;
    }
    uVar19 = uVar16 - 1;
    if (uVar21 == 0) {
      if (uVar19 != 0) {
        uVar21 = FUN_2c671022(iVar6,uVar19);
      }
    }
    else {
      uVar21 = 1;
    }
    uVar22 = uVar22 - uVar16;
    uVar12 = 2;
    if ((1 << (uVar19 & 0x1f) & puVar20[(int)uVar19 >> 5]) != 0) {
      uVar21 = uVar21 | 2;
    }
    FUN_2c66fe48(iVar6,uVar16);
    uVar16 = param_3[1];
  }
  else {
    uVar12 = 1;
  }
  if (uVar21 == 0) goto LAB_2c670306;
  uVar19 = param_3[3];
  if (uVar19 == 2) {
    param_6 = 1 - param_6;
joined_r0x2c6702b4:
    if (param_6 != 0) {
      iVar10 = *(int *)(iVar6 + 0x10);
      piVar14 = (int *)(iVar6 + 0x14);
      do {
        piVar15 = piVar14 + 1;
        if (*piVar14 != -1) {
          *piVar14 = *piVar14 + 1;
          goto LAB_2c6702da;
        }
        *piVar14 = 0;
        piVar14 = piVar15;
      } while (piVar15 < (int *)(iVar6 + 0x14) + iVar10);
      if (*(int *)(iVar6 + 8) <= iVar10) {
        iVar5 = FUN_2c6706e0(param_1,*(int *)(iVar6 + 4) + 1);
        if (iVar5 == 0) {
          uVar9 = 0x84;
          uVar8 = DAT_2c67039c;
LAB_2c670088:
                    /* WARNING: Subroutine does not return */
          FUN_2c668484(DAT_2c6701fc,uVar9,0,uVar8);
        }
        FUN_2c674668(iVar5 + 0xc,iVar6 + 0xc,(*(int *)(iVar6 + 0x10) + 2) * 4);
        FUN_2c670760(param_1,iVar6);
      }
      iVar6 = *(int *)(iVar5 + 0x10);
      *(int *)(iVar5 + 0x10) = iVar6 + 1;
      *(undefined4 *)(iVar5 + iVar6 * 4 + 0x14) = 1;
LAB_2c6702da:
      if (uVar12 == 2) {
        uVar12 = 2;
        if ((*param_3 - 1 == uVar22) &&
           ((1 << (uVar22 & 0x1f) & *(uint *)(iVar5 + 0x14 + ((int)uVar22 >> 5) * 4)) != 0)) {
          uVar12 = 1;
        }
      }
      else {
        if ((iVar10 < *(int *)(iVar5 + 0x10)) ||
           (((uVar22 & 0x1f) != 0 &&
            (iVar10 = FUN_2c6708c8(*(undefined4 *)(iVar5 + 0x14 + iVar10 * 4 + -4)),
            iVar10 < (int)(0x20 - (uVar22 & 0x1f)))))) {
          FUN_2c66fe48(iVar5,1);
          uVar16 = uVar16 + 1;
          if ((int)param_3[2] < (int)uVar16) {
LAB_2c67011c:
            FUN_2c670760(param_1,iVar5);
            *param_5 = 0;
            return 0xa3;
          }
        }
        uVar12 = 1;
      }
      uVar12 = uVar12 | 0x20;
      goto LAB_2c670306;
    }
  }
  else {
    if (uVar19 == 3) goto joined_r0x2c6702b4;
    if ((uVar19 == 1) && ((uVar21 & 2) != 0)) {
      param_6 = (uVar21 | *puVar20) & 1;
      goto joined_r0x2c6702b4;
    }
  }
  uVar12 = uVar12 | 0x10;
LAB_2c670306:
  *param_5 = iVar5;
  *param_4 = uVar16;
  return uVar12;
}


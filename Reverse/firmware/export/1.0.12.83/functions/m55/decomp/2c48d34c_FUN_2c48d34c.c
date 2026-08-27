/* FUN_2c48d34c @ 0x2c48d34c */

undefined4 FUN_2c48d34c(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte bVar14;
  
  iVar8 = *param_2;
  iVar7 = param_2[2];
  pbVar12 = (byte *)(iVar8 + iVar7 + 1U);
  if ((*(char *)(iVar8 + iVar7) == '\"') && (uVar13 = param_2[1], iVar7 + 1U < uVar13)) {
    iVar2 = 0;
    pbVar11 = pbVar12;
    do {
      if (*pbVar11 == 0x22) {
        pbVar3 = (byte *)(*(code *)param_2[4])(pbVar11 + ((1 - iVar2) - (iVar7 + iVar8)));
        uVar13 = DAT_2c48d550;
        if (pbVar3 != (byte *)0x0) {
          pbVar10 = pbVar3;
          pbVar9 = pbVar3;
          if (pbVar12 < pbVar11) goto LAB_2c48d3d4;
          goto LAB_2c48d4f6;
        }
        break;
      }
      if (*pbVar11 == 0x5c) {
        pbVar11 = pbVar11 + 1;
        iVar2 = iVar2 + 1;
        if (uVar13 <= (uint)((int)pbVar11 - iVar8)) break;
      }
      pbVar11 = pbVar11 + 1;
    } while ((uint)((int)pbVar11 - iVar8) < uVar13);
  }
  if (pbVar12 == (byte *)0x0) {
    return 0;
  }
LAB_2c48d392:
  param_2[2] = (int)pbVar12 - *param_2;
  return 0;
LAB_2c48d3d4:
  bVar14 = *pbVar12;
  if (bVar14 != 0x5c) {
    pbVar12 = pbVar12 + 1;
    pbVar10 = pbVar9 + 1;
    *pbVar9 = bVar14;
    goto LAB_2c48d3ce;
  }
  if (((int)pbVar11 - (int)pbVar12 < 1) || (bVar14 = pbVar12[1], 0x75 < bVar14))
  goto switchD_2c48d3f2_caseD_5d;
  if (bVar14 < 0x5c) {
    if ((bVar14 != 0x22) && (bVar14 != 0x2f)) goto switchD_2c48d3f2_caseD_5d;
switchD_2c48d3f2_caseD_5c:
    pbVar10 = pbVar9 + 1;
    *pbVar9 = bVar14;
    pbVar12 = pbVar12 + 2;
  }
  else {
    switch(bVar14) {
    case 0x5c:
      goto switchD_2c48d3f2_caseD_5c;
    default:
switchD_2c48d3f2_caseD_5d:
      (*(code *)param_2[5])(pbVar3);
      goto LAB_2c48d392;
    case 0x62:
      pbVar10 = pbVar9 + 1;
      *pbVar9 = 8;
      pbVar12 = pbVar12 + 2;
      break;
    case 0x66:
      pbVar10 = pbVar9 + 1;
      *pbVar9 = 0xc;
      pbVar12 = pbVar12 + 2;
      break;
    case 0x6e:
      pbVar10 = pbVar9 + 1;
      *pbVar9 = 10;
      pbVar12 = pbVar12 + 2;
      break;
    case 0x72:
      pbVar10 = pbVar9 + 1;
      *pbVar9 = 0xd;
      pbVar12 = pbVar12 + 2;
      break;
    case 0x74:
      pbVar10 = pbVar9 + 1;
      *pbVar9 = 9;
      pbVar12 = pbVar12 + 2;
      break;
    case 0x75:
      if (((int)pbVar11 - (int)pbVar12 < 6) ||
         (uVar4 = FUN_2c48d300(pbVar12 + 2), uVar4 - 0xdc00 < 0x400))
      goto switchD_2c48d3f2_caseD_5d;
      if (uVar4 - 0xd800 < 0x400) {
        if (((((int)pbVar11 - (int)(pbVar12 + 6) < 6) || (pbVar12[6] != 0x5c)) ||
            (pbVar12[7] != 0x75)) || (uVar5 = FUN_2c48d300(pbVar12 + 8), 0x3ff < uVar5 - 0xdc00))
        goto switchD_2c48d3f2_caseD_5d;
        iVar7 = 0xc;
        uVar4 = (uVar13 & uVar4 << 10 | uVar5 & 0x3ff) + 0x10000;
LAB_2c48d47e:
        iVar8 = 4;
        bVar14 = 0xf0;
        iVar2 = 3;
LAB_2c48d488:
        pbVar10 = pbVar9 + iVar2;
        do {
          bVar1 = (byte)uVar4;
          uVar4 = uVar4 >> 6;
          pbVar6 = pbVar10 + -1;
          *pbVar10 = bVar1 & 0x3f | 0x80;
          pbVar10 = pbVar6;
        } while (pbVar6 != pbVar9);
        bVar14 = bVar14 | (byte)uVar4;
      }
      else {
        if (0x7f < uVar4) {
          if (uVar4 < 0x800) {
            iVar7 = 6;
            iVar8 = 2;
            bVar14 = 0xc0;
            iVar2 = 1;
          }
          else {
            if (0xffff < uVar4) {
              if (uVar4 < 0x110000) {
                iVar7 = 6;
                goto LAB_2c48d47e;
              }
              goto switchD_2c48d3f2_caseD_5d;
            }
            iVar7 = 6;
            iVar8 = 3;
            bVar14 = 0xe0;
            iVar2 = 2;
          }
          goto LAB_2c48d488;
        }
        bVar14 = (byte)uVar4;
        iVar7 = 6;
        iVar8 = 1;
      }
      *pbVar9 = bVar14;
      pbVar12 = pbVar12 + iVar7;
      pbVar10 = pbVar9 + iVar8;
    }
  }
LAB_2c48d3ce:
  pbVar9 = pbVar10;
  if (pbVar11 <= pbVar12) {
LAB_2c48d4f6:
    *pbVar10 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x10;
    *(byte **)(param_1 + 0x10) = pbVar3;
    param_2[2] = (int)(pbVar11 + (1 - *param_2));
    return 1;
  }
  goto LAB_2c48d3d4;
}


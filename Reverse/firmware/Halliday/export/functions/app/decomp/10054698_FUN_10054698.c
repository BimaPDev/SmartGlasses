/* FUN_10054698 @ 0x10054698 */

undefined4 FUN_10054698(int param_1,int *param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  iVar6 = *param_2;
  iVar8 = param_2[2];
  pbVar12 = (byte *)(iVar8 + 1 + iVar6);
  if (*(char *)(iVar6 + iVar8) == '\"') {
    iVar9 = 0;
    for (pbVar13 = pbVar12; (uint)((int)pbVar13 - iVar6) < (uint)param_2[1]; pbVar13 = pbVar13 + 1)
    {
      if (*pbVar13 == 0x22) {
        pbVar2 = (byte *)(*(code *)param_2[4])(pbVar13 + ((1 - iVar9) - (iVar6 + iVar8)));
        uVar1 = DAT_10054878;
        pbVar10 = pbVar2;
        if (pbVar2 != (byte *)0x0) goto LAB_10054704;
        break;
      }
      if (*pbVar13 == 0x5c) {
        pbVar13 = pbVar13 + 1;
        if ((uint)param_2[1] <= (uint)((int)pbVar13 - iVar6)) break;
        iVar9 = iVar9 + 1;
      }
    }
  }
  if (pbVar12 != (byte *)0x0) {
LAB_1005474e:
    param_2[2] = (int)pbVar12 - *param_2;
  }
  return 0;
LAB_10054704:
  while( true ) {
    if (pbVar13 <= pbVar12) {
      *pbVar10 = 0;
      *(undefined4 *)(param_1 + 0xc) = 0x10;
      *(byte **)(param_1 + 0x10) = pbVar2;
      param_2[2] = (int)(pbVar13 + (1 - *param_2));
      return 1;
    }
    bVar7 = *pbVar12;
    if (bVar7 == 0x5c) break;
    pbVar12 = pbVar12 + 1;
    *pbVar10 = bVar7;
    pbVar10 = pbVar10 + 1;
  }
  if (((int)pbVar13 - (int)pbVar12 < 1) || (bVar7 = pbVar12[1], 0x75 < bVar7))
  goto switchD_10054762_caseD_6f;
  if (bVar7 < 0x6e) {
    if (bVar7 == 0x62) {
      bVar7 = 8;
    }
    else if (bVar7 < 99) {
      if (((bVar7 != 0x2f) && (bVar7 != 0x5c)) && (bVar7 != 0x22)) goto switchD_10054762_caseD_6f;
    }
    else {
      if (bVar7 != 0x66) goto switchD_10054762_caseD_6f;
      bVar7 = 0xc;
    }
    goto LAB_10054792;
  }
  switch(bVar7) {
  case 0x6e:
    bVar7 = 10;
    break;
  default:
switchD_10054762_caseD_6f:
    (*(code *)param_2[5])(pbVar2);
    goto LAB_1005474e;
  case 0x72:
    bVar7 = 0xd;
    break;
  case 0x74:
    bVar7 = 9;
    break;
  case 0x75:
    if (((int)pbVar13 - (int)pbVar12 < 6) ||
       (uVar3 = FUN_1011a464(pbVar12 + 2), uVar3 - 0xdc00 < 0x400)) goto switchD_10054762_caseD_6f;
    if (uVar3 - 0xd800 < 0x400) {
      if ((((int)pbVar13 - (int)(pbVar12 + 6) < 6) || (pbVar12[6] != 0x5c)) ||
         ((pbVar12[7] != 0x75 || (uVar4 = FUN_1011a464(pbVar12 + 8), 0x3ff < uVar4 - 0xdc00))))
      goto switchD_10054762_caseD_6f;
      iVar8 = 0xc;
      uVar3 = (uVar4 & 0x3ff | uVar1 & uVar3 << 10) + 0x10000;
LAB_100547fe:
      bVar7 = 0xf0;
      iVar6 = 4;
    }
    else if (uVar3 < 0x80) {
      iVar8 = 6;
      bVar7 = 0;
      iVar6 = 1;
    }
    else if (uVar3 < 0x800) {
      iVar8 = 6;
      bVar7 = 0xc0;
      iVar6 = 2;
    }
    else {
      if (0xffff < uVar3) {
        if (uVar3 < 0x110000) {
          iVar8 = 6;
          goto LAB_100547fe;
        }
        goto switchD_10054762_caseD_6f;
      }
      iVar8 = 6;
      bVar7 = 0xe0;
      iVar6 = 3;
    }
    uVar4 = iVar6 - 1;
    pbVar11 = pbVar10 + uVar4;
    while( true ) {
      bVar5 = (byte)uVar3;
      if ((uVar4 & 0xff) == 0) break;
      uVar4 = (uVar4 & 0xff) - 1;
      *pbVar11 = bVar5 & 0x3f | 0x80;
      uVar3 = uVar3 >> 6;
      pbVar11 = pbVar11 + -1;
    }
    if (iVar6 == 1) {
      bVar5 = bVar5 & 0x7f;
    }
    else {
      bVar5 = bVar5 | bVar7;
    }
    *pbVar10 = bVar5;
    pbVar11 = pbVar10 + iVar6;
    goto LAB_10054798;
  }
LAB_10054792:
  pbVar11 = pbVar10 + 1;
  *pbVar10 = bVar7;
  iVar8 = 2;
LAB_10054798:
  pbVar12 = pbVar12 + iVar8;
  pbVar10 = pbVar11;
  goto LAB_10054704;
}


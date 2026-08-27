/* FUN_2c0198c4 @ 0x2c0198c4 */

void FUN_2c0198c4(byte *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  
  iVar5 = DAT_2c019b54;
  iVar15 = DAT_2c019b50;
  if (param_2 == 0) {
    pbVar13 = param_1 + 0x94;
    pbVar8 = param_1 + 0x14;
    uVar10 = (uint)param_1[5];
    if (param_1[3] == 1) goto LAB_2c019a0c;
LAB_2c0198e4:
    if (uVar10 == 0) {
      iVar15 = 1;
      goto LAB_2c01995a;
    }
    if (uVar10 == 4) {
      pbVar11 = param_1 + 0x84;
      bVar3 = 0;
      pbVar7 = pbVar8 + -1;
      do {
        pbVar6 = pbVar7 + 1;
        bVar4 = 0xfb;
        if (*pbVar6 == 0) {
          *pbVar11 = 0xfb;
        }
        else {
          bVar4 = *pbVar6 - pbVar7[iVar5 + (uint)param_1[1] * 4 + (1 - (int)pbVar8)];
          if ('\0' < (char)bVar4) {
            bVar4 = (char)bVar4 >> 1;
          }
          *pbVar11 = bVar4;
        }
        pbVar11 = pbVar11 + 1;
        if ((char)bVar3 < (char)bVar4) {
          bVar3 = bVar4;
        }
        pbVar7 = pbVar6;
      } while (pbVar8 + 3 != pbVar6);
    }
    else {
      pbVar11 = param_1 + 0x84;
      bVar3 = 0;
      pbVar7 = pbVar8 + -1;
      do {
        while( true ) {
          pbVar6 = pbVar7 + 1;
          if (*pbVar6 == 0) break;
          bVar4 = *pbVar6 - pbVar7[iVar15 + (uint)param_1[1] * 8 + (1 - (int)pbVar8)];
          if ('\0' < (char)bVar4) {
            bVar4 = (char)bVar4 >> 1;
          }
          *pbVar11 = bVar4;
          pbVar11 = pbVar11 + 1;
          if ((char)bVar3 < (char)bVar4) {
            bVar3 = bVar4;
          }
          pbVar7 = pbVar6;
          if (pbVar8 + (uVar10 - 1) == pbVar6) goto LAB_2c019954;
        }
        *pbVar11 = 0xfb;
        pbVar11 = pbVar11 + 1;
        if ((char)bVar3 < -5) {
          bVar3 = 0xfb;
        }
        pbVar7 = pbVar6;
      } while (pbVar8 + (uVar10 - 1) != pbVar6);
    }
  }
  else {
    pbVar13 = param_1 + 0x9c;
    pbVar8 = param_1 + 0x1c;
    uVar10 = (uint)param_1[5];
    if (param_1[3] != 1) goto LAB_2c0198e4;
LAB_2c019a0c:
    iVar15 = 1;
    if (uVar10 == 0) goto LAB_2c01995a;
    pbVar7 = param_1 + 0x83;
    bVar3 = 0;
    pbVar11 = pbVar8;
    do {
      pbVar6 = pbVar11 + 1;
      bVar4 = *pbVar11;
      pbVar7 = pbVar7 + 1;
      *pbVar7 = bVar4;
      if ((char)bVar3 < (char)bVar4) {
        bVar3 = bVar4;
      }
      pbVar11 = pbVar6;
    } while (pbVar6 != pbVar8 + uVar10);
  }
LAB_2c019954:
  iVar15 = (int)(char)(bVar3 + 1);
LAB_2c01995a:
  uVar2 = 0;
  uVar12 = (uint)*param_1;
  uVar14 = 0;
  do {
    cVar1 = (char)iVar15;
    uVar14 = uVar2 + uVar14 & 0xff;
    iVar15 = (int)(char)(cVar1 + -1);
    if (uVar10 == 0) {
      uVar2 = 0;
    }
    else {
      pbVar8 = param_1 + 0x83;
      uVar2 = 0;
      pbVar7 = pbVar8 + uVar10;
      do {
        while( true ) {
          pbVar8 = pbVar8 + 1;
          iVar5 = (int)(char)*pbVar8;
          if (iVar5 <= iVar15 + 1) break;
          bVar3 = (char)uVar2 + 1;
          if (iVar5 <= iVar15 + 0xf) {
LAB_2c019992:
            uVar2 = (uint)bVar3;
          }
          if (pbVar7 == pbVar8) goto LAB_2c0199ac;
        }
        bVar3 = (char)uVar2 + 2;
        if (iVar5 == iVar15 + 1) goto LAB_2c019992;
      } while (pbVar7 != pbVar8);
    }
LAB_2c0199ac:
  } while (uVar2 + uVar14 < uVar12);
  if (uVar2 + uVar14 == uVar12) {
    uVar14 = uVar2 + uVar14 & 0xff;
    iVar15 = (int)(char)(cVar1 + -2);
  }
  pbVar8 = (byte *)0x0;
  if (uVar10 != 0) {
    pbVar7 = param_1 + 0x83;
    pbVar11 = pbVar13;
    do {
      iVar5 = (int)(char)pbVar7[1];
      iVar9 = iVar5 - iVar15;
      if (iVar15 + 1 < iVar5) {
        bVar3 = 0x10;
        if (iVar9 < 0x10) {
          bVar3 = (byte)iVar9;
        }
        *pbVar11 = bVar3;
      }
      else {
        *pbVar11 = 0;
      }
      pbVar8 = (byte *)(uint)param_1[5];
      pbVar11 = pbVar11 + 1;
      pbVar6 = pbVar7 + (-0x82 - (int)param_1);
      pbVar7 = pbVar7 + 1;
    } while (pbVar6 < pbVar8);
    uVar12 = (uint)*param_1;
  }
  if (uVar14 < uVar12) {
    pbVar7 = pbVar13;
    for (pbVar11 = param_1 + 0x84; pbVar11 + (-0x84 - (int)param_1) < pbVar8; pbVar11 = pbVar11 + 1)
    {
      if (*pbVar7 - 2 < 0xe) {
        *pbVar7 = *pbVar7 + 1;
        uVar14 = uVar14 + 1 & 0xff;
        uVar12 = (uint)*param_1;
LAB_2c019a62:
        if (uVar12 <= uVar14) {
          return;
        }
      }
      else {
        if (((int)(char)*pbVar11 != iVar15 + 1) || (uVar12 <= uVar14 + 1)) goto LAB_2c019a62;
        *pbVar7 = 2;
        uVar14 = uVar14 + 2 & 0xff;
        uVar12 = (uint)*param_1;
        if (uVar12 <= uVar14) {
          return;
        }
      }
      pbVar7 = pbVar7 + 1;
      pbVar8 = (byte *)(uint)param_1[5];
    }
    if (uVar14 < uVar12) {
      for (pbVar7 = (byte *)0x0; pbVar7 < pbVar8; pbVar7 = pbVar7 + 1) {
        if (*pbVar13 < 0x10) {
          uVar14 = uVar14 + 1 & 0xff;
          *pbVar13 = *pbVar13 + 1;
          uVar12 = (uint)*param_1;
          if (uVar12 <= uVar14) {
            return;
          }
        }
        else if (uVar12 <= uVar14) {
          return;
        }
        pbVar13 = pbVar13 + 1;
        pbVar8 = (byte *)(uint)param_1[5];
      }
    }
  }
  return;
}


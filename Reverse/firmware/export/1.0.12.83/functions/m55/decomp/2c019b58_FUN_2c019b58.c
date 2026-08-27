/* FUN_2c019b58 @ 0x2c019b58 */

void FUN_2c019b58(byte *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  
  iVar14 = DAT_2c019ef0;
  iVar10 = DAT_2c019eec;
  pbVar11 = (byte *)(uint)param_1[5];
  if (param_1[3] == 1) {
    iVar10 = 1;
    if (pbVar11 == (byte *)0x0) goto LAB_2c019c2c;
    bVar3 = 0;
    pbVar6 = param_1 + 0x13;
    do {
      pbVar13 = pbVar6 + 1;
      bVar4 = *pbVar13;
      pbVar6[0x71] = bVar4;
      if ((char)bVar3 < (char)bVar4) {
        bVar3 = bVar4;
      }
      pbVar6 = pbVar13;
    } while (pbVar13 != param_1 + 0x13 + (int)pbVar11);
    pbVar6 = param_1 + 0x1b;
    do {
      pbVar13 = pbVar6 + 1;
      bVar4 = *pbVar13;
      pbVar6[0x71] = bVar4;
      if ((char)bVar3 < (char)bVar4) {
        bVar3 = bVar4;
      }
      pbVar6 = pbVar13;
    } while (pbVar13 != param_1 + 0x1b + (int)pbVar11);
  }
  else {
    if (pbVar11 == (byte *)0x0) {
      iVar10 = 1;
      goto LAB_2c019c2c;
    }
    pbVar6 = param_1 + 0x84;
    if (pbVar11 == (byte *)0x4) {
      bVar3 = 0;
      do {
        while( true ) {
          if (pbVar6[-0x70] == 0) break;
          pbVar13 = pbVar6 + 1;
          bVar4 = pbVar6[-0x70] - pbVar6[iVar14 + (uint)param_1[1] * 4 + (-0x84 - (int)param_1)];
          if ('\0' < (char)bVar4) {
            bVar4 = (char)bVar4 >> 1;
          }
          *pbVar6 = bVar4;
          if ((char)bVar3 < (char)bVar4) {
            bVar3 = bVar4;
          }
          pbVar6 = pbVar13;
          if (pbVar13 == param_1 + 0x88) goto LAB_2c019e98;
        }
        *pbVar6 = 0xfb;
        pbVar6 = pbVar6 + 1;
        if ((char)bVar3 < -5) {
          bVar3 = 0xfb;
        }
      } while (pbVar6 != param_1 + 0x88);
LAB_2c019e98:
      iVar10 = DAT_2c019ef0;
      pbVar6 = param_1 + 0x8c;
      do {
        bVar4 = 0xfb;
        if (pbVar6[-0x70] == 0) {
          *pbVar6 = 0xfb;
        }
        else {
          bVar4 = pbVar6[-0x70] - pbVar6[iVar10 + (uint)param_1[1] * 4 + (-0x8c - (int)param_1)];
          if ('\0' < (char)bVar4) {
            bVar4 = (char)bVar4 >> 1;
          }
          *pbVar6 = bVar4;
        }
        pbVar6 = pbVar6 + 1;
        if ((char)bVar3 < (char)bVar4) {
          bVar3 = bVar4;
        }
      } while (pbVar6 != param_1 + 0x90);
    }
    else {
      bVar3 = 0;
      pbVar13 = pbVar6 + (int)pbVar11;
      do {
        while( true ) {
          if (pbVar6[-0x70] == 0) break;
          bVar4 = pbVar6[-0x70] - pbVar6[iVar10 + (uint)param_1[1] * 8 + (-0x84 - (int)param_1)];
          if ('\0' < (char)bVar4) {
            bVar4 = (char)bVar4 >> 1;
          }
          *pbVar6 = bVar4;
          pbVar6 = pbVar6 + 1;
          if ((char)bVar3 < (char)bVar4) {
            bVar3 = bVar4;
          }
          if (pbVar13 == pbVar6) goto LAB_2c019bce;
        }
        *pbVar6 = 0xfb;
        pbVar6 = pbVar6 + 1;
        if ((char)bVar3 < -5) {
          bVar3 = 0xfb;
        }
      } while (pbVar13 != pbVar6);
LAB_2c019bce:
      iVar10 = DAT_2c019eec;
      pbVar6 = param_1 + 0x8c;
      pbVar13 = pbVar6 + (int)pbVar11;
      do {
        while( true ) {
          if (pbVar6[-0x70] == 0) break;
          bVar4 = pbVar6[-0x70] - pbVar6[iVar10 + (uint)param_1[1] * 8 + (-0x8c - (int)param_1)];
          if ('\0' < (char)bVar4) {
            bVar4 = (char)bVar4 >> 1;
          }
          *pbVar6 = bVar4;
          pbVar6 = pbVar6 + 1;
          if ((char)bVar3 < (char)bVar4) {
            bVar3 = bVar4;
          }
          if (pbVar6 == pbVar13) goto LAB_2c019c28;
        }
        *pbVar6 = 0xfb;
        pbVar6 = pbVar6 + 1;
        if ((char)bVar3 < -5) {
          bVar3 = 0xfb;
        }
      } while (pbVar6 != pbVar13);
    }
  }
LAB_2c019c28:
  iVar10 = (int)(char)(bVar3 + 1);
LAB_2c019c2c:
  uVar8 = 0;
  uVar12 = (uint)*param_1;
  uVar15 = 0;
  do {
    cVar2 = (char)iVar10;
    uVar15 = uVar8 + uVar15 & 0xff;
    iVar10 = (int)(char)(cVar2 + -1);
    if (pbVar11 == (byte *)0x0) {
      uVar8 = 0;
    }
    else {
      pbVar6 = param_1 + 0x83;
      iVar14 = iVar10 + 1;
      uVar8 = 0;
      pbVar13 = pbVar6 + (int)pbVar11;
      do {
        while( true ) {
          pbVar6 = pbVar6 + 1;
          iVar5 = (int)(char)*pbVar6;
          if (iVar5 <= iVar14) break;
          bVar3 = (char)uVar8 + 1;
          if (iVar5 <= iVar10 + 0xf) {
LAB_2c019c62:
            uVar8 = (uint)bVar3;
          }
          if (pbVar13 == pbVar6) goto LAB_2c019c7a;
        }
        bVar3 = (char)uVar8 + 2;
        if (iVar14 == iVar5) goto LAB_2c019c62;
      } while (pbVar13 != pbVar6);
LAB_2c019c7a:
      pbVar6 = param_1 + 0x8b;
      pbVar13 = pbVar6 + (int)pbVar11;
      do {
        while( true ) {
          pbVar6 = pbVar6 + 1;
          iVar5 = (int)(char)*pbVar6;
          if (iVar5 <= iVar14) break;
          bVar3 = (char)uVar8 + 1;
          if (iVar5 <= iVar10 + 0xf) {
LAB_2c019c8e:
            uVar8 = (uint)bVar3;
          }
          if (pbVar6 == pbVar13) goto LAB_2c019ca8;
        }
        bVar3 = (char)uVar8 + 2;
        if (iVar14 == iVar5) goto LAB_2c019c8e;
      } while (pbVar6 != pbVar13);
    }
LAB_2c019ca8:
    uVar7 = uVar8 + uVar15;
  } while (uVar12 != uVar7 && uVar7 <= uVar12);
  if (uVar12 == uVar7) {
    uVar15 = uVar8 + uVar15 & 0xff;
    iVar10 = (int)(char)(cVar2 + -2);
  }
  if (pbVar11 != (byte *)0x0) {
    pbVar9 = param_1 + 0x83;
    iVar14 = iVar10 + 1;
    pbVar13 = param_1 + 0x84;
    pbVar6 = pbVar9;
    do {
      while( true ) {
        pbVar1 = pbVar6 + 1;
        iVar5 = (char)*pbVar1 - iVar10;
        if ((char)*pbVar1 <= iVar14) break;
        bVar3 = 0x10;
        if (iVar5 < 0x10) {
          bVar3 = (byte)iVar5;
        }
        pbVar6[0x11] = bVar3;
        pbVar6 = pbVar1;
        if (pbVar9 + (int)pbVar11 == pbVar1) goto LAB_2c019cf0;
      }
      pbVar6[0x11] = 0;
      pbVar6 = pbVar1;
    } while (pbVar9 + (int)pbVar11 != pbVar1);
LAB_2c019cf0:
    pbVar9 = param_1 + 0x8b;
    pbVar6 = pbVar9;
    do {
      while( true ) {
        pbVar1 = pbVar6 + 1;
        iVar5 = (char)*pbVar1 - iVar10;
        if ((char)*pbVar1 <= iVar14) break;
        bVar3 = 0x10;
        if (iVar5 < 0x10) {
          bVar3 = (byte)iVar5;
        }
        pbVar6[0x11] = bVar3;
        pbVar6 = pbVar1;
        if (pbVar1 == pbVar9 + (int)pbVar11) goto LAB_2c019d26;
      }
      pbVar6[0x11] = 0;
      pbVar6 = pbVar1;
    } while (pbVar1 != pbVar9 + (int)pbVar11);
LAB_2c019d26:
    if (uVar15 < uVar12) {
      pbVar6 = pbVar13 + (int)pbVar11;
      do {
        if (pbVar13[0x10] - 2 < 0xe) {
          uVar15 = uVar15 + 1;
          pbVar13[0x10] = pbVar13[0x10] + 1;
joined_r0x2c019d40:
          uVar15 = uVar15 & 0xff;
          if (uVar12 <= uVar15) {
            return;
          }
        }
        else if (((char)*pbVar13 == iVar14) && (uVar15 + 1 < uVar12)) {
          uVar15 = uVar15 + 2;
          pbVar13[0x10] = 2;
          goto joined_r0x2c019d40;
        }
        if (pbVar13[0x18] - 2 < 0xe) {
          uVar15 = uVar15 + 1 & 0xff;
          pbVar13[0x18] = pbVar13[0x18] + 1;
        }
        else if (((char)pbVar13[8] == iVar14) && (uVar15 + 1 < uVar12)) {
          pbVar13[0x18] = 2;
          uVar15 = uVar15 + 2 & 0xff;
        }
        if (uVar12 <= uVar15) {
          return;
        }
        pbVar13 = pbVar13 + 1;
      } while (pbVar13 != pbVar6);
      pbVar6 = param_1 + 0x93;
      do {
        pbVar13 = pbVar6 + 1;
        if (*pbVar13 < 0x10) {
          uVar15 = uVar15 + 1 & 0xff;
          *pbVar13 = *pbVar13 + 1;
          if (uVar12 <= uVar15) {
            return;
          }
        }
        if (pbVar6[9] < 0x10) {
          uVar15 = uVar15 + 1 & 0xff;
          pbVar6[9] = pbVar6[9] + 1;
        }
      } while ((pbVar6 + (-0x92 - (int)param_1) < pbVar11) && (pbVar6 = pbVar13, uVar15 < uVar12));
    }
  }
  return;
}


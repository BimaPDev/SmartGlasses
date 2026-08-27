/* FUN_1400d7c4 @ 0x1400d7c4 */

void FUN_1400d7c4(byte *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar4 = DAT_1400db64;
  iVar13 = DAT_1400db60;
  uVar10 = (uint)param_1[5];
  if (param_1[3] == 1) {
    iVar9 = 1;
    if (uVar10 != 0) {
      bVar5 = 0;
      pbVar3 = param_1 + 0x13;
      do {
        pbVar12 = pbVar3 + 1;
        bVar6 = *pbVar12;
        if ((char)bVar5 < (char)bVar6) {
          bVar5 = bVar6;
        }
        pbVar3[0x71] = bVar6;
        pbVar3 = pbVar12;
      } while (pbVar12 != param_1 + 0x13 + uVar10);
      pbVar3 = param_1 + 0x1b;
      do {
        pbVar12 = pbVar3 + 1;
        bVar6 = *pbVar12;
        if ((char)bVar5 < (char)bVar6) {
          bVar5 = bVar6;
        }
        pbVar3[0x71] = bVar6;
        pbVar3 = pbVar12;
      } while (pbVar12 != param_1 + 0x1b + uVar10);
      iVar9 = (int)(char)(bVar5 + 1);
    }
  }
  else {
    iVar9 = 1;
    if (uVar10 != 0) {
      bVar5 = 0;
      if (uVar10 == 4) {
        pbVar3 = param_1 + 0x84;
        do {
          while (pbVar3[-0x70] != 0) {
            pbVar12 = pbVar3 + 1;
            bVar6 = pbVar3[-0x70] - pbVar3[iVar4 + (uint)param_1[1] * 4 + (-0x84 - (int)param_1)];
            if ('\0' < (char)bVar6) {
              bVar6 = (char)bVar6 >> 1;
            }
            *pbVar3 = bVar6;
            if ((char)bVar5 < (char)bVar6) {
              bVar5 = bVar6;
            }
            pbVar3 = pbVar12;
            if (pbVar12 == param_1 + 0x88) goto LAB_1400db0e;
          }
          *pbVar3 = 0xfb;
          pbVar3 = pbVar3 + 1;
          if ((char)bVar5 < -5) {
            bVar5 = 0xfb;
          }
        } while (pbVar3 != param_1 + 0x88);
LAB_1400db0e:
        iVar13 = DAT_1400db64;
        pbVar3 = param_1 + 0x8c;
        do {
          if (pbVar3[-0x70] == 0) {
            bVar6 = 0xfb;
            *pbVar3 = 0xfb;
          }
          else {
            bVar6 = pbVar3[-0x70] - pbVar3[iVar13 + (uint)param_1[1] * 4 + (-0x8c - (int)param_1)];
            if ('\0' < (char)bVar6) {
              bVar6 = (char)bVar6 >> 1;
            }
            *pbVar3 = bVar6;
          }
          pbVar3 = pbVar3 + 1;
          if ((char)bVar5 < (char)bVar6) {
            bVar5 = bVar6;
          }
        } while (pbVar3 != param_1 + 0x90);
      }
      else {
        pbVar3 = param_1 + 0x84;
        pbVar12 = pbVar3 + uVar10;
        do {
          while (pbVar3[-0x70] != 0) {
            bVar6 = pbVar3[-0x70] - pbVar3[iVar13 + (uint)param_1[1] * 8 + (-0x84 - (int)param_1)];
            if ('\0' < (char)bVar6) {
              bVar6 = (char)bVar6 >> 1;
            }
            *pbVar3 = bVar6;
            pbVar3 = pbVar3 + 1;
            if ((char)bVar5 < (char)bVar6) {
              bVar5 = bVar6;
            }
            if (pbVar12 == pbVar3) goto LAB_1400d83c;
          }
          *pbVar3 = 0xfb;
          pbVar3 = pbVar3 + 1;
          if ((char)bVar5 < -5) {
            bVar5 = 0xfb;
          }
        } while (pbVar12 != pbVar3);
LAB_1400d83c:
        iVar13 = DAT_1400db60;
        pbVar3 = param_1 + 0x8c;
        pbVar12 = pbVar3 + uVar10;
        do {
          while (pbVar3[-0x70] != 0) {
            bVar6 = pbVar3[-0x70] - pbVar3[iVar13 + (uint)param_1[1] * 8 + (-0x8c - (int)param_1)];
            if ('\0' < (char)bVar6) {
              bVar6 = (char)bVar6 >> 1;
            }
            *pbVar3 = bVar6;
            pbVar3 = pbVar3 + 1;
            if ((char)bVar5 < (char)bVar6) {
              bVar5 = bVar6;
            }
            if (pbVar3 == pbVar12) goto LAB_1400d896;
          }
          *pbVar3 = 0xfb;
          pbVar3 = pbVar3 + 1;
          if ((char)bVar5 < -5) {
            bVar5 = 0xfb;
          }
        } while (pbVar3 != pbVar12);
      }
LAB_1400d896:
      iVar9 = (int)(char)(bVar5 + 1);
    }
  }
  uVar7 = 0;
  uVar14 = 0;
  uVar11 = (uint)*param_1;
  do {
    cVar2 = (char)iVar9;
    iVar9 = (int)(char)(cVar2 + -1);
    uVar14 = uVar7 + uVar14 & 0xff;
    if (uVar10 == 0) {
      uVar7 = 0;
    }
    else {
      pbVar3 = param_1 + 0x83;
      uVar7 = 0;
      iVar13 = iVar9 + 1;
      pbVar12 = pbVar3 + uVar10;
      do {
        while( true ) {
          pbVar3 = pbVar3 + 1;
          iVar4 = (int)(char)*pbVar3;
          if (iVar13 < iVar4) break;
          if (iVar13 == iVar4) {
            uVar7 = uVar7 + 2 & 0xff;
          }
          if (pbVar12 == pbVar3) goto LAB_1400d8e8;
        }
        if (iVar4 <= iVar9 + 0xf) {
          uVar7 = uVar7 + 1 & 0xff;
        }
      } while (pbVar12 != pbVar3);
LAB_1400d8e8:
      pbVar3 = param_1 + 0x8b;
      pbVar12 = pbVar3 + uVar10;
      do {
        while( true ) {
          pbVar3 = pbVar3 + 1;
          iVar4 = (int)(char)*pbVar3;
          if (iVar13 < iVar4) break;
          if (iVar13 == iVar4) {
            uVar7 = uVar7 + 2 & 0xff;
          }
          if (pbVar3 == pbVar12) goto LAB_1400d916;
        }
        if (iVar4 <= iVar9 + 0xf) {
          uVar7 = uVar7 + 1 & 0xff;
        }
      } while (pbVar3 != pbVar12);
    }
LAB_1400d916:
  } while (uVar7 + uVar14 < uVar11);
  if (uVar7 + uVar14 == uVar11) {
    uVar14 = uVar7 + uVar14 & 0xff;
    iVar9 = (int)(char)(cVar2 + -2);
  }
  if (uVar10 != 0) {
    pbVar8 = param_1 + 0x83;
    iVar13 = iVar9 + 1;
    pbVar12 = param_1 + 0x84;
    pbVar3 = pbVar8;
    do {
      while( true ) {
        pbVar1 = pbVar3 + 1;
        iVar4 = (char)*pbVar1 - iVar9;
        if ((char)*pbVar1 <= iVar13) break;
        if (0xf < iVar4) {
          iVar4 = 0x10;
        }
        pbVar3[0x11] = (byte)iVar4;
        pbVar3 = pbVar1;
        if (pbVar8 + uVar10 == pbVar1) goto LAB_1400d962;
      }
      pbVar3[0x11] = 0;
      pbVar3 = pbVar1;
    } while (pbVar8 + uVar10 != pbVar1);
LAB_1400d962:
    pbVar8 = param_1 + 0x8b;
    pbVar3 = pbVar8;
    do {
      while( true ) {
        pbVar1 = pbVar3 + 1;
        iVar4 = (char)*pbVar1 - iVar9;
        if ((char)*pbVar1 <= iVar13) break;
        if (0xf < iVar4) {
          iVar4 = 0x10;
        }
        pbVar3[0x11] = (byte)iVar4;
        pbVar3 = pbVar1;
        if (pbVar1 == pbVar8 + uVar10) goto LAB_1400d99a;
      }
      pbVar3[0x11] = 0;
      pbVar3 = pbVar1;
    } while (pbVar1 != pbVar8 + uVar10);
LAB_1400d99a:
    if (uVar14 < uVar11) {
      pbVar3 = pbVar12 + uVar10;
      do {
        if (pbVar12[0x10] - 2 < 0xe) {
          uVar14 = uVar14 + 1;
          pbVar12[0x10] = pbVar12[0x10] + 1;
joined_r0x1400d9b4:
          uVar14 = uVar14 & 0xff;
          if (uVar11 <= uVar14) {
            return;
          }
        }
        else if (((char)*pbVar12 == iVar13) && (uVar14 + 1 < uVar11)) {
          uVar14 = uVar14 + 2;
          pbVar12[0x10] = 2;
          goto joined_r0x1400d9b4;
        }
        if (pbVar12[0x18] - 2 < 0xe) {
          pbVar12[0x18] = pbVar12[0x18] + 1;
          uVar14 = uVar14 + 1 & 0xff;
        }
        else if (((char)pbVar12[8] == iVar13) && (uVar14 + 1 < uVar11)) {
          pbVar12[0x18] = 2;
          uVar14 = uVar14 + 2 & 0xff;
        }
        if (uVar11 <= uVar14) {
          return;
        }
        pbVar12 = pbVar12 + 1;
      } while (pbVar12 != pbVar3);
      uVar7 = 1;
      pbVar3 = param_1 + 0x93;
      do {
        pbVar12 = pbVar3 + 1;
        if (*pbVar12 < 0x10) {
          uVar14 = uVar14 + 1 & 0xff;
          *pbVar12 = *pbVar12 + 1;
          if (uVar11 <= uVar14) {
            return;
          }
          bVar5 = pbVar3[9];
          if (bVar5 < 0x10) goto LAB_1400da86;
        }
        else {
          bVar5 = pbVar3[9];
          if (bVar5 < 0x10) {
LAB_1400da86:
            pbVar3[9] = bVar5 + 1;
            uVar14 = uVar14 + 1 & 0xff;
          }
          if (uVar11 <= uVar14) {
            return;
          }
        }
        bVar15 = uVar7 < uVar10;
        uVar7 = uVar7 + 1;
        pbVar3 = pbVar12;
      } while (bVar15);
    }
  }
  return;
}


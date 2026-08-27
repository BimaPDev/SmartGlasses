/* FUN_1400d52c @ 0x1400d52c */

void FUN_1400d52c(byte *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  
  iVar11 = DAT_1400d7c0;
  iVar4 = DAT_1400d7bc;
  if (param_2 == 0) {
    bVar5 = param_1[3];
    bVar10 = param_1[5];
    pbVar12 = param_1 + 0x94;
    pbVar6 = param_1 + 0x14;
  }
  else {
    bVar5 = param_1[3];
    bVar10 = param_1[5];
    pbVar12 = param_1 + 0x9c;
    pbVar6 = param_1 + 0x1c;
  }
  uVar2 = (uint)bVar10;
  if (bVar5 == 1) {
    iVar14 = 1;
    if (uVar2 != 0) {
      bVar10 = 0;
      pbVar15 = param_1 + 0x83;
      pbVar8 = pbVar6;
      do {
        pbVar7 = pbVar8 + 1;
        bVar5 = *pbVar8;
        if ((char)bVar10 < (char)bVar5) {
          bVar10 = bVar5;
        }
        pbVar15 = pbVar15 + 1;
        *pbVar15 = bVar5;
        pbVar8 = pbVar7;
      } while (pbVar7 != pbVar6 + uVar2);
      iVar14 = (int)(char)(bVar10 + 1);
    }
  }
  else {
    iVar14 = 1;
    if (uVar2 != 0) {
      bVar10 = 0;
      if (uVar2 == 4) {
        pbVar8 = param_1 + 0x84;
        pbVar15 = pbVar6 + -1;
        do {
          pbVar7 = pbVar15 + 1;
          if (*pbVar7 == 0) {
            bVar5 = 0xfb;
            *pbVar8 = 0xfb;
          }
          else {
            bVar5 = *pbVar7 - pbVar15[iVar11 + (uint)param_1[1] * 4 + (1 - (int)pbVar6)];
            if ('\0' < (char)bVar5) {
              bVar5 = (char)bVar5 >> 1;
            }
            *pbVar8 = bVar5;
          }
          if ((char)bVar10 < (char)bVar5) {
            bVar10 = bVar5;
          }
          pbVar8 = pbVar8 + 1;
          pbVar15 = pbVar7;
        } while (pbVar6 + 3 != pbVar7);
      }
      else {
        pbVar8 = param_1 + 0x84;
        pbVar15 = pbVar6 + -1;
        do {
          while( true ) {
            pbVar7 = pbVar15 + 1;
            if (*pbVar7 == 0) break;
            bVar5 = *pbVar7 - pbVar15[iVar4 + (uint)param_1[1] * 8 + (1 - (int)pbVar6)];
            if ('\0' < (char)bVar5) {
              bVar5 = (char)bVar5 >> 1;
            }
            if ((char)bVar10 < (char)bVar5) {
              bVar10 = bVar5;
            }
            *pbVar8 = bVar5;
            pbVar8 = pbVar8 + 1;
            pbVar15 = pbVar7;
            if (pbVar6 + (uVar2 - 1) == pbVar7) goto LAB_1400d5be;
          }
          if ((char)bVar10 < -5) {
            bVar10 = 0xfb;
          }
          *pbVar8 = 0xfb;
          pbVar8 = pbVar8 + 1;
          pbVar15 = pbVar7;
        } while (pbVar6 + (uVar2 - 1) != pbVar7);
      }
LAB_1400d5be:
      iVar14 = (int)(char)(bVar10 + 1);
    }
  }
  uVar3 = 0;
  uVar9 = 0;
  uVar13 = (uint)*param_1;
  do {
    cVar1 = (char)iVar14;
    iVar14 = (int)(char)(cVar1 + -1);
    uVar9 = uVar3 + uVar9 & 0xff;
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      pbVar6 = param_1 + 0x83;
      uVar3 = 0;
      pbVar15 = pbVar6 + uVar2;
      do {
        while( true ) {
          pbVar6 = pbVar6 + 1;
          iVar4 = (int)(char)*pbVar6;
          if (iVar14 + 1 < iVar4) break;
          if (iVar4 == iVar14 + 1) {
            uVar3 = uVar3 + 2 & 0xff;
          }
          if (pbVar15 == pbVar6) goto LAB_1400d618;
        }
        if (iVar4 <= iVar14 + 0xf) {
          uVar3 = uVar3 + 1 & 0xff;
        }
      } while (pbVar15 != pbVar6);
    }
LAB_1400d618:
  } while (uVar3 + uVar9 < uVar13);
  if (uVar3 + uVar9 == uVar13) {
    uVar9 = uVar3 + uVar9 & 0xff;
    iVar14 = (int)(char)(cVar1 + -2);
  }
  pbVar6 = (byte *)0x0;
  if (uVar2 != 0) {
    pbVar15 = param_1 + 0x83;
    pbVar8 = pbVar12;
    do {
      iVar4 = (int)(char)pbVar15[1];
      iVar11 = iVar4 - iVar14;
      if (iVar14 + 1 < iVar4) {
        if (iVar11 < 0x10) {
          bVar10 = (byte)iVar11;
        }
        else {
          bVar10 = 0x10;
        }
        *pbVar8 = bVar10;
      }
      else {
        *pbVar8 = 0;
      }
      pbVar6 = (byte *)(uint)param_1[5];
      pbVar7 = pbVar15 + (-0x82 - (int)param_1);
      pbVar8 = pbVar8 + 1;
      pbVar15 = pbVar15 + 1;
    } while (pbVar7 < pbVar6);
    uVar13 = (uint)*param_1;
  }
  if (uVar9 < uVar13) {
    pbVar15 = pbVar12;
    for (pbVar8 = param_1 + 0x84; pbVar8 + (-0x84 - (int)param_1) < pbVar6; pbVar8 = pbVar8 + 1) {
      if (*pbVar15 - 2 < 0xe) {
        *pbVar15 = *pbVar15 + 1;
        uVar13 = (uint)*param_1;
        uVar9 = uVar9 + 1 & 0xff;
LAB_1400d68a:
        if (uVar13 <= uVar9) {
          return;
        }
      }
      else {
        if (((int)(char)*pbVar8 != iVar14 + 1) || (uVar13 <= uVar9 + 1)) goto LAB_1400d68a;
        *pbVar15 = 2;
        uVar13 = (uint)*param_1;
        uVar9 = uVar9 + 2 & 0xff;
        if (uVar13 <= uVar9) {
          return;
        }
      }
      pbVar15 = pbVar15 + 1;
      pbVar6 = (byte *)(uint)param_1[5];
    }
    if (uVar9 < uVar13) {
      for (pbVar15 = (byte *)0x0; pbVar15 < pbVar6; pbVar15 = pbVar15 + 1) {
        if (*pbVar12 < 0x10) {
          *pbVar12 = *pbVar12 + 1;
          uVar13 = (uint)*param_1;
          uVar9 = uVar9 + 1 & 0xff;
          if (uVar13 <= uVar9) {
            return;
          }
        }
        else if (uVar13 <= uVar9) {
          return;
        }
        pbVar12 = pbVar12 + 1;
        pbVar6 = (byte *)(uint)param_1[5];
      }
    }
  }
  return;
}


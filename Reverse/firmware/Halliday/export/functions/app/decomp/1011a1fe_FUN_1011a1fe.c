/* FUN_1011a1fe @ 0x1011a1fe */

uint FUN_1011a1fe(char *param_1,byte *param_2,uint param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *extraout_r2;
  byte *pbVar6;
  byte *extraout_r2_00;
  byte *extraout_r2_01;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_4 == 0) {
    return 3;
  }
LAB_1011a22a:
  do {
    while( true ) {
      while( true ) {
        pcVar12 = param_1 + 1;
        uVar15 = FUN_10054680(*param_1,param_3);
        uVar3 = (uint)uVar15 & 0xff;
        uVar11 = (uint)*extraout_r2;
        if (uVar3 != 0x3f) break;
        if (uVar11 == 0) {
          return 1;
        }
        if (uVar11 == 0x2f) {
          param_1 = pcVar12;
          if ((int)(param_3 << 0x1e) < 0) {
            return 1;
          }
        }
        else {
          param_1 = pcVar12;
          if ((uVar11 == 0x2e) && ((param_3 & 4) != 0)) {
            if (extraout_r2 == param_2) {
              return 1;
            }
            if (((int)(param_3 << 0x1e) < 0) && (extraout_r2[-1] == 0x2f)) {
              return 1;
            }
          }
        }
      }
      pbVar6 = extraout_r2;
      if ((uVar15 & 0xc0) == 0) break;
      if (uVar3 == 0x5b) {
        if (uVar11 == 0) {
          return 1;
        }
        if ((uVar11 == 0x2f) && ((int)(param_3 << 0x1e) < 0)) {
          return 1;
        }
        uVar3 = FUN_10054680(uVar11,param_3);
        if (pcVar12 == (char *)0x0) {
          return 1;
        }
        if ((param_1[1] == '!') || (param_1[1] == '^')) {
          iVar4 = 1;
          pcVar9 = param_1 + 2;
        }
        else {
          iVar4 = 0;
          pcVar9 = pcVar12;
        }
        bVar7 = true;
        iVar14 = 0;
        do {
          param_1 = pcVar9 + 1;
          bVar2 = FUN_10054680(*pcVar9,param_3);
          uVar13 = (uint)bVar2;
          if (uVar13 == 0x5d) {
            if (!bVar7) goto code_r0x1011a3b4;
          }
          else {
            if (uVar13 == 0x2f) goto LAB_1011a3c6;
            if (uVar13 == 0x5c) {
              if ((param_3 & 1) != 0) goto LAB_1011a400;
              bVar2 = FUN_10054680(pcVar9[1],param_3);
              param_1 = pcVar9 + 2;
              uVar13 = (uint)bVar2;
            }
            if (uVar13 == 0) {
              return 1;
            }
          }
LAB_1011a400:
          pcVar9 = param_1;
          if (*pcVar9 == '-') {
            uVar5 = FUN_10054680(pcVar9[1],param_3);
            uVar5 = uVar5 & 0xff;
            if ((uVar5 == 0) || (uVar5 == 0x5d)) goto LAB_1011a448;
            pcVar8 = pcVar9 + 2;
            if ((uVar5 == 0x5c) && ((param_3 & 1) == 0)) {
              uVar5 = FUN_10054680(pcVar9[2]);
              uVar5 = uVar5 & 0xff;
              pcVar8 = pcVar9 + 3;
              if (uVar5 == 0) {
                return 1;
              }
            }
            pcVar9 = pcVar8;
            if (((int)uVar13 <= (int)uVar3) && ((int)uVar3 <= (int)uVar5)) {
              iVar14 = 1;
            }
          }
          else {
LAB_1011a448:
            if (uVar3 == uVar13) {
              iVar14 = 1;
            }
          }
          bVar7 = false;
        } while( true );
      }
      if ((uVar3 == 0x5c) && (-1 < (int)(param_3 << 0x1f))) {
        uVar3 = FUN_10054680(param_1[1]);
        uVar3 = uVar3 & 0xff;
        pbVar6 = extraout_r2_00;
        if (uVar3 != 0) {
          pcVar12 = param_1 + 2;
        }
      }
LAB_1011a24e:
      uVar11 = FUN_10054680(uVar11,param_3,pbVar6 + 1);
      param_1 = pcVar12;
      if (uVar3 != uVar11) {
        return 1;
      }
    }
    if ((uVar15 & 0xff) == 0) {
      if (((int)(param_3 << 0x1b) < 0) && (uVar11 == 0x2f)) {
        return 0;
      }
LAB_1011a286:
      return (uint)(uVar11 != 0);
    }
    if (uVar3 != 0x2a) goto LAB_1011a24e;
    cVar1 = param_1[1];
    uVar3 = (uint)(uVar15 >> 0x20);
    while (cVar1 = FUN_10054680(cVar1,uVar3), cVar1 == '*') {
      pcVar12 = pcVar12 + 1;
      cVar1 = *pcVar12;
      uVar3 = param_3;
    }
    if ((uVar11 == 0x2e) && ((param_3 & 4) != 0)) {
      if (extraout_r2_01 == param_2) {
        return 1;
      }
      if (((int)(param_3 << 0x1e) < 0) && (extraout_r2_01[-1] == 0x2f)) {
        return 1;
      }
    }
    if (cVar1 == '\0') {
      if ((param_3 & 2) == 0) {
        return 0;
      }
      if ((int)(param_3 << 0x1b) < 0) {
        return 0;
      }
      uVar11 = FUN_1011ea00(extraout_r2_01,0x2f);
      goto LAB_1011a286;
    }
    if ((cVar1 != '/') || (-1 < (int)(param_3 << 0x1e))) {
      pbVar6 = extraout_r2_01;
      while( true ) {
        cVar1 = FUN_10054680(*pbVar6,param_3);
        pbVar10 = pbVar6 + 1;
        if (cVar1 == '\0') {
          return 1;
        }
        uVar3 = FUN_1011a1fe(pcVar12,pbVar6,param_3 & 0xfffffffb,param_4 + -1);
        if (uVar3 != 1) break;
        pbVar6 = pbVar10;
        if ((cVar1 == '/') && ((param_3 & 2) != 0)) {
          return 1;
        }
      }
      return uVar3;
    }
    iVar4 = FUN_1011ea00(extraout_r2_01);
    param_1 = pcVar12;
    if (iVar4 == 0) {
      return 1;
    }
  } while( true );
code_r0x1011a3b4:
  if (iVar4 == iVar14) {
    return 1;
  }
  if (param_1 == (char *)0x0) {
    return 1;
  }
  if (pcVar9 == (char *)0xfffffffe) {
LAB_1011a3c6:
    param_1 = pcVar12;
    if (uVar11 != 0x5b) {
      return 1;
    }
  }
  goto LAB_1011a22a;
}


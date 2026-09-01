/* FUN_10054ed8 @ 0x10054ed8 */

undefined4 FUN_10054ed8(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  byte *pbVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  byte *local_64;
  byte local_60 [68];
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 == 0) {
    return 0;
  }
  if ((param_2[2] + 4U <= (uint)param_2[1]) &&
     (iVar3 = FUN_1011ea20(*param_2 + param_2[2],DAT_100551a0,4), iVar3 == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    iVar3 = param_2[2] + 4;
LAB_10054f0c:
    param_2[2] = iVar3;
    return 1;
  }
  if (((uint)param_2[1] < param_2[2] + 5U) ||
     (iVar3 = FUN_1011ea20(*param_2 + param_2[2],DAT_100551a4,5), iVar3 != 0)) {
    if (((uint)param_2[1] < param_2[2] + 4U) ||
       (iVar3 = FUN_1011ea20(*param_2 + param_2[2],DAT_100551a8,4), iVar3 != 0)) {
      uVar4 = param_2[1];
      uVar8 = param_2[2];
      if (uVar4 <= uVar8) {
        return 0;
      }
      iVar3 = *param_2;
      uVar6 = (uint)*(byte *)(iVar3 + uVar8);
      if (uVar6 == 0x22) {
        uVar5 = FUN_10054698(param_1,param_2);
        return uVar5;
      }
      if ((uVar6 == 0x2d) || (uVar6 - 0x30 < 10)) {
        iVar7 = 0;
        local_64 = (byte *)0x0;
        if (iVar3 == 0) {
          return 0;
        }
        pbVar11 = (byte *)(iVar3 + uVar8);
        do {
          bVar2 = *pbVar11;
          if (bVar2 < 0x3a) {
            switch(bVar2) {
            case 0x2b:
            case 0x2d:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              goto switchD_10054faa_caseD_2b;
            default:
              goto switchD_10054faa_caseD_2c;
            case 0x2e:
              local_60[iVar7] = 0x2e;
            }
          }
          else {
            if ((bVar2 & 0xdf) != 0x45) {
switchD_10054faa_caseD_2c:
              local_60[iVar7] = 0;
              uVar5 = FUN_10118c74(local_60,&local_64,10);
              uVar14 = FUN_10003a34();
              if (local_64 != local_60) {
                iVar3 = param_2[2];
                *(undefined8 *)(param_1 + 0x18) = uVar14;
                *(undefined4 *)(param_1 + 0x14) = uVar5;
                *(undefined4 *)(param_1 + 0xc) = 8;
                param_2[2] = (int)(local_64 + (iVar3 - (int)local_60));
                return 1;
              }
              return 0;
            }
switchD_10054faa_caseD_2b:
            local_60[iVar7] = bVar2;
          }
          iVar7 = iVar7 + 1;
          if ((iVar7 == 0x3f) || (pbVar11 = pbVar11 + 1, iVar7 == uVar4 - uVar8))
          goto switchD_10054faa_caseD_2c;
        } while( true );
      }
      if (uVar6 == 0x5b) {
        if (999 < (uint)param_2[3]) {
          return 0;
        }
        param_2[3] = param_2[3] + 1;
        if (*(char *)(iVar3 + uVar8) != '[') {
          return 0;
        }
        param_2[2] = uVar8 + 1;
        FUN_1011a4ae(param_2);
        uVar4 = param_2[2];
        if ((uint)param_2[1] <= uVar4) {
LAB_10055100:
          param_2[2] = uVar4 - 1;
          return 0;
        }
        if (*(char *)(*param_2 + uVar4) == ']') {
          piVar9 = (int *)0x0;
          piVar12 = (int *)0x0;
        }
        else {
          param_2[2] = uVar4 - 1;
          piVar10 = (int *)0x0;
          piVar13 = (int *)0x0;
          do {
            piVar9 = (int *)FUN_1011a5a2(param_2[4]);
            piVar12 = piVar13;
            if (piVar9 == (int *)0x0) goto LAB_10055190;
            piVar12 = piVar9;
            if (piVar13 != (int *)0x0) {
              *piVar10 = (int)piVar9;
              piVar9[1] = (int)piVar10;
              piVar12 = piVar13;
            }
            param_2[2] = param_2[2] + 1;
            FUN_1011a4ae(param_2);
            iVar3 = FUN_10054ed8(piVar9,param_2);
            if (iVar3 == 0) goto LAB_10055196;
            FUN_1011a4ae(param_2);
            if ((uint)param_2[1] <= (uint)param_2[2]) goto LAB_10055196;
            cVar1 = *(char *)(*param_2 + param_2[2]);
            piVar10 = piVar9;
            piVar13 = piVar12;
          } while (cVar1 == ',');
          if (cVar1 != ']') {
LAB_10055196:
            FUN_10054e90(piVar12);
            return 0;
          }
        }
        param_2[3] = param_2[3] + -1;
        if (piVar12 != (int *)0x0) {
          piVar12[1] = (int)piVar9;
        }
        uVar5 = 0x20;
      }
      else {
        if (uVar6 != 0x7b) {
          return 0;
        }
        if (999 < (uint)param_2[3]) {
          return 0;
        }
        param_2[3] = param_2[3] + 1;
        if (*(char *)(iVar3 + uVar8) != '{') {
          return 0;
        }
        param_2[2] = uVar8 + 1;
        FUN_1011a4ae(param_2);
        uVar4 = param_2[2];
        if ((uint)param_2[1] <= uVar4) goto LAB_10055100;
        if (*(char *)(*param_2 + uVar4) == '}') {
          piVar9 = (int *)0x0;
          piVar12 = (int *)0x0;
        }
        else {
          param_2[2] = uVar4 - 1;
          piVar10 = (int *)0x0;
          piVar13 = (int *)0x0;
          do {
            piVar9 = (int *)FUN_1011a5a2(param_2[4]);
            piVar12 = piVar13;
            if (piVar9 == (int *)0x0) goto LAB_10055190;
            piVar12 = piVar9;
            if (piVar13 != (int *)0x0) {
              *piVar10 = (int)piVar9;
              piVar9[1] = (int)piVar10;
              piVar12 = piVar13;
            }
            param_2[2] = param_2[2] + 1;
            FUN_1011a4ae(param_2);
            iVar3 = FUN_10054698(piVar9,param_2);
            if (iVar3 == 0) goto LAB_10055196;
            FUN_1011a4ae(param_2);
            iVar3 = piVar9[4];
            piVar9[4] = 0;
            piVar9[8] = iVar3;
            uVar4 = param_2[2];
            if (((uint)param_2[1] <= uVar4) || (*(char *)(*param_2 + uVar4) != ':'))
            goto LAB_10055196;
            param_2[2] = uVar4 + 1;
            FUN_1011a4ae(param_2);
            iVar3 = FUN_10054ed8(piVar9,param_2);
            if (iVar3 == 0) goto LAB_10055196;
            FUN_1011a4ae(param_2);
            if ((uint)param_2[1] <= (uint)param_2[2]) goto LAB_10055196;
            cVar1 = *(char *)(*param_2 + param_2[2]);
            piVar10 = piVar9;
            piVar13 = piVar12;
          } while (cVar1 == ',');
          if (cVar1 != '}') goto LAB_10055196;
        }
        param_2[3] = param_2[3] + -1;
        if (piVar12 != (int *)0x0) {
          piVar12[1] = (int)piVar9;
        }
        uVar5 = 0x40;
      }
      *(int **)(param_1 + 8) = piVar12;
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      iVar3 = param_2[2] + 1;
      goto LAB_10054f0c;
    }
    iVar3 = param_2[2];
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = 1;
    iVar3 = iVar3 + 4;
  }
  else {
    iVar3 = param_2[2];
    *(undefined4 *)(param_1 + 0xc) = 1;
    iVar3 = iVar3 + 5;
  }
  param_2[2] = iVar3;
  return 1;
LAB_10055190:
  if (piVar12 == (int *)0x0) {
    return 0;
  }
  goto LAB_10055196;
}


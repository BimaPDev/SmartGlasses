/* FUN_2c48def0 @ 0x2c48def0 */

void FUN_2c48def0(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  double dVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int *piVar6;
  int *extraout_r1;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  int *extraout_r1_03;
  int *extraout_r1_04;
  int *extraout_r1_05;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  undefined4 extraout_s1;
  undefined8 uVar17;
  byte *local_68;
  byte local_64 [64];
  uint local_24;
  
  uVar17 = CONCAT44(param_2,param_1);
  local_24 = *DAT_2c48e178;
  piVar7 = param_2;
  if ((param_2 == (int *)0x0) || (iVar14 = *param_2, iVar14 == 0)) goto LAB_2c48df68;
  uVar16 = param_2[1];
  uVar9 = param_2[2];
  if (uVar16 < uVar9 + 4) {
    if (uVar9 + 5 <= uVar16) {
      uVar17 = FUN_2c66c540(iVar14 + uVar9,DAT_2c48e184,5);
      piVar7 = (int *)((ulonglong)uVar17 >> 0x20);
      if ((int)uVar17 == 0) {
LAB_2c48df94:
        uVar4 = 1;
        *(undefined4 *)(param_1 + 0xc) = 1;
        param_2[2] = param_2[2] + 5;
        goto LAB_2c48df6a;
      }
    }
LAB_2c48df38:
    piVar7 = (int *)((ulonglong)uVar17 >> 0x20);
    if (uVar9 < uVar16) {
      uVar8 = (uint)*(byte *)(iVar14 + uVar9);
      if (uVar8 == 0x22) {
        uVar9 = *DAT_2c48e178 ^ local_24;
        if (uVar9 == 0) {
          FUN_2c48d34c(param_1,param_2,0,0);
          return;
        }
        goto LAB_2c48e26a;
      }
      if ((uVar8 - 0x30 < 10) || (uVar8 == 0x2d)) {
        iVar11 = 0;
        pbVar15 = (byte *)(iVar14 + (uVar9 - 1));
        local_68 = (byte *)0x0;
        pbVar5 = local_64;
        do {
          pbVar15 = pbVar15 + 1;
          bVar2 = *pbVar15;
          if (bVar2 < 0x46) {
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
            case 0x45:
              goto switchD_2c48e0d4_caseD_2b;
            default:
              goto switchD_2c48e0d4_caseD_2c;
            case 0x2e:
              *pbVar5 = 0x2e;
            }
          }
          else {
            if (bVar2 != 0x65) goto switchD_2c48e0d4_caseD_2c;
switchD_2c48e0d4_caseD_2b:
            *pbVar5 = bVar2;
          }
          iVar11 = iVar11 + 1;
          if ((iVar11 == 0x3f) || (pbVar5 = pbVar5 + 1, iVar11 == uVar16 - uVar9))
          goto switchD_2c48e0d4_caseD_2c;
        } while( true );
      }
      if (uVar8 == 0x5b) {
        if (((uint)param_2[3] < 1000) &&
           (param_2[3] = param_2[3] + 1, *(char *)(iVar14 + uVar9) == '[')) {
          param_2[2] = uVar9 + 1;
          FUN_2c48d554(param_2);
          uVar9 = param_2[2];
          piVar7 = extraout_r1_03;
          if ((uint)param_2[1] <= uVar9) goto LAB_2c48e242;
          piVar13 = (int *)0x0;
          if (*(char *)(*param_2 + uVar9) == ']') {
            param_2[3] = param_2[3] + -1;
          }
          else {
            param_2[2] = uVar9 - 1;
            piVar10 = piVar13;
            piVar12 = (int *)0x0;
            do {
              uVar17 = (*(code *)param_2[4])(0x28);
              piVar7 = (int *)((ulonglong)uVar17 >> 0x20);
              piVar6 = (int *)uVar17;
              if (piVar6 == (int *)0x0) {
                piVar13 = piVar10;
                if (piVar10 == (int *)0x0) goto LAB_2c48df68;
                goto LAB_2c48e20e;
              }
              FUN_2c674268(piVar6,0,0x28);
              piVar13 = piVar6;
              if (piVar10 != (int *)0x0) {
                *piVar12 = (int)piVar6;
                piVar6[1] = (int)piVar12;
                piVar13 = piVar10;
              }
              param_2[2] = param_2[2] + 1;
              FUN_2c48d554(param_2);
              iVar14 = FUN_2c48def0(piVar6,param_2);
              if (iVar14 == 0) goto LAB_2c48e20e;
              FUN_2c48d554(param_2);
              if ((uint)param_2[1] <= (uint)param_2[2]) goto LAB_2c48e20e;
              cVar1 = *(char *)(*param_2 + param_2[2]);
              piVar10 = piVar13;
              piVar12 = piVar6;
            } while (cVar1 == ',');
            if (cVar1 != ']') {
LAB_2c48e20e:
              FUN_2c48dea0(piVar13);
              uVar4 = 0;
              piVar7 = extraout_r1_05;
              goto LAB_2c48df6a;
            }
            param_2[3] = param_2[3] + -1;
            piVar13[1] = (int)piVar6;
            piVar7 = extraout_r1_04;
          }
          uVar4 = 0x20;
          *(int **)(param_1 + 8) = piVar13;
          goto LAB_2c48e25c;
        }
      }
      else if (((uVar8 == 0x7b) && ((uint)param_2[3] < 1000)) &&
              (param_2[3] = param_2[3] + 1, *(char *)(iVar14 + uVar9) == '{')) {
        param_2[2] = uVar9 + 1;
        FUN_2c48d554(param_2);
        uVar9 = param_2[2];
        piVar7 = extraout_r1;
        if ((uint)param_2[1] <= uVar9) {
LAB_2c48e242:
          param_2[2] = uVar9 - 1;
          uVar4 = 0;
          goto LAB_2c48df6a;
        }
        if (*(char *)(*param_2 + uVar9) == '}') {
          piVar13 = (int *)0x0;
          param_2[3] = param_2[3] + -1;
        }
        else {
          param_2[2] = uVar9 - 1;
          piVar10 = (int *)0x0;
          piVar12 = (int *)0x0;
          do {
            uVar17 = (*(code *)param_2[4])(0x28);
            piVar7 = (int *)((ulonglong)uVar17 >> 0x20);
            piVar6 = (int *)uVar17;
            if (piVar6 == (int *)0x0) {
              piVar13 = piVar12;
              if (piVar12 == (int *)0x0) goto LAB_2c48df68;
              goto LAB_2c48e0a6;
            }
            FUN_2c674268(piVar6,0,0x28);
            piVar13 = piVar6;
            if (piVar12 != (int *)0x0) {
              *piVar10 = (int)piVar6;
              piVar6[1] = (int)piVar10;
              piVar13 = piVar12;
            }
            param_2[2] = param_2[2] + 1;
            FUN_2c48d554(param_2);
            iVar14 = FUN_2c48d34c(piVar6,param_2);
            if (iVar14 == 0) goto LAB_2c48e0a6;
            FUN_2c48d554(param_2);
            iVar14 = piVar6[4];
            piVar6[4] = 0;
            piVar6[8] = iVar14;
            uVar9 = param_2[2];
            if (((uint)param_2[1] <= uVar9) || (*(char *)(*param_2 + uVar9) != ':'))
            goto LAB_2c48e0a6;
            param_2[2] = uVar9 + 1;
            FUN_2c48d554(param_2);
            iVar14 = FUN_2c48def0(piVar6,param_2);
            if (iVar14 == 0) goto LAB_2c48e0a6;
            FUN_2c48d554(param_2);
            if ((uint)param_2[1] <= (uint)param_2[2]) goto LAB_2c48e0a6;
            cVar1 = *(char *)(*param_2 + param_2[2]);
            piVar10 = piVar6;
            piVar12 = piVar13;
          } while (cVar1 == ',');
          if (cVar1 != '}') {
LAB_2c48e0a6:
            FUN_2c48dea0(piVar13);
            piVar7 = extraout_r1_01;
            goto LAB_2c48df68;
          }
          param_2[3] = param_2[3] + -1;
          piVar13[1] = (int)piVar6;
          piVar7 = extraout_r1_00;
        }
        uVar4 = 0x40;
        *(int **)(param_1 + 8) = piVar13;
LAB_2c48e25c:
        *(undefined4 *)(param_1 + 0xc) = uVar4;
        uVar4 = 1;
        param_2[2] = param_2[2] + 1;
        goto LAB_2c48df6a;
      }
    }
    goto LAB_2c48df68;
  }
  iVar11 = iVar14 + uVar9;
  uVar17 = FUN_2c66c540(iVar11,DAT_2c48e17c,4);
  piVar7 = (int *)((ulonglong)uVar17 >> 0x20);
  if ((int)uVar17 == 0) {
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0xc) = 4;
    param_2[2] = param_2[2] + 4;
  }
  else {
    if (uVar16 < uVar9 + 5) {
      uVar17 = FUN_2c66c540(iVar11,DAT_2c48e180,4);
    }
    else {
      uVar17 = FUN_2c66c540(iVar11,DAT_2c48e184,5);
      piVar7 = (int *)((ulonglong)uVar17 >> 0x20);
      if ((int)uVar17 == 0) goto LAB_2c48df94;
      uVar17 = FUN_2c66c540(iVar11,DAT_2c48e180,4);
    }
    piVar7 = (int *)((ulonglong)uVar17 >> 0x20);
    if ((int)uVar17 != 0) goto LAB_2c48df38;
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = 1;
    param_2[2] = param_2[2] + 4;
  }
LAB_2c48df6a:
  uVar17 = CONCAT44(piVar7,uVar4);
  uVar9 = *DAT_2c48e178 ^ local_24;
  if (uVar9 == 0) {
    return;
  }
LAB_2c48e26a:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),uVar9,0);
switchD_2c48e0d4_caseD_2c:
  local_64[iVar11] = 0;
  uVar4 = FUN_2c66d1b8(local_64,&local_68);
  dVar3 = DAT_2c48e170;
  piVar7 = extraout_r1_02;
  if (local_68 != local_64) {
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(extraout_s1,uVar4);
    if ((double)CONCAT44(extraout_s1,uVar4) < dVar3) {
      if (DAT_2c48e298 <= (double)CONCAT44(extraout_s1,uVar4) &&
          (double)CONCAT44(extraout_s1,uVar4) != DAT_2c48e298) {
        uVar4 = VectorFloatToSigned(CONCAT44(extraout_s1,uVar4),3);
        *(undefined4 *)(param_1 + 0x14) = uVar4;
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0x80000000;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 0x7fffffff;
    }
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0xc) = 8;
    param_2[2] = (int)(local_68 + (param_2[2] - (int)local_64));
    goto LAB_2c48df6a;
  }
LAB_2c48df68:
  uVar4 = 0;
  goto LAB_2c48df6a;
}


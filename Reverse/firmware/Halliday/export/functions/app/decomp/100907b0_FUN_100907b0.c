/* FUN_100907b0 @ 0x100907b0 */

void FUN_100907b0(int param_1,undefined4 param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_68;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 auStack_40 [20];
  
  if (((2 < param_4) && (param_3 != (int *)0x0)) &&
     (piVar1 = (int *)FUN_100942d8(param_4 * 8), piVar1 != (int *)0x0)) {
    iVar5 = param_3[1];
    uVar15 = 0;
    uVar7 = 0;
    *piVar1 = *param_3;
    piVar1[1] = iVar5;
    do {
      piVar9 = param_3 + uVar7 * 2;
      if ((param_3[uVar7 * 2] != param_3[uVar7 * 2 + 2]) || (piVar9[1] != param_3[uVar7 * 2 + 3])) {
        iVar5 = piVar9[1];
        piVar1[uVar15 * 2] = *piVar9;
        (piVar1 + uVar15 * 2)[1] = iVar5;
        uVar15 = uVar15 + 1 & 0xffff;
      }
      uVar7 = uVar7 + 1 & 0xffff;
    } while ((int)uVar7 < (int)(param_4 - 1));
    piVar9 = param_3 + param_4 * 2 + -2;
    if ((*param_3 != param_3[param_4 * 2 + -2]) || (param_3[1] != piVar9[1])) {
      iVar5 = piVar9[1];
      piVar1[uVar15 * 2] = *piVar9;
      (piVar1 + uVar15 * 2)[1] = iVar5;
      uVar15 = uVar15 + 1 & 0xffff;
    }
    if (2 < uVar15) {
      local_50 = *DAT_10090a34;
      local_4c = DAT_10090a34[1];
      local_48 = DAT_10090a34[2];
      local_44 = DAT_10090a34[3];
      uVar7 = uVar15 - 1;
      piVar9 = piVar1;
      do {
        iVar5 = *piVar9;
        iVar19 = piVar9[1];
        if (iVar5 <= local_50) {
          local_50 = iVar5;
        }
        if (iVar19 <= local_4c) {
          local_4c = iVar19;
        }
        if (local_48 < iVar5) {
          local_48 = iVar5;
        }
        piVar9 = piVar9 + 2;
        if (local_44 < iVar19) {
          local_44 = iVar19;
        }
      } while (piVar1 + (uVar7 & 0xffff) * 2 + 2 != piVar9);
      iVar5 = FUN_1012a896(auStack_40,&local_50,*(undefined4 *)(param_1 + 8));
      if (iVar5 != 0) {
        uVar10 = *(undefined4 *)(param_1 + 8);
        iVar5 = 0;
        iVar19 = piVar1[1];
        *(undefined1 **)(param_1 + 8) = auStack_40;
        uVar11 = 1;
        do {
          iVar2 = (piVar1 + 1)[uVar11 * 2];
          if (iVar2 < iVar19) {
            iVar5 = (int)(short)uVar11;
            iVar19 = iVar2;
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffff) < uVar15);
        iVar19 = FUN_100942d8(uVar15 * 0x38);
        iVar2 = iVar5 + -1;
        iVar12 = iVar5 + 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + uVar15;
        }
        if ((int)uVar7 < iVar12) {
          iVar12 = 0;
        }
        uVar11 = 0;
        iVar3 = piVar1[iVar5 * 2];
        iVar6 = piVar1[iVar5 * 2 + 1];
        iVar18 = piVar1[iVar2 * 2 + 1];
        iVar13 = piVar1[iVar12 * 2];
        iVar14 = piVar1[iVar2 * 2];
        iVar12 = piVar1[iVar12 * 2 + 1];
        iVar2 = iVar19;
        local_68 = iVar5;
        do {
          if ((iVar18 - iVar6) * (iVar13 - iVar3) < (iVar12 - iVar6) * (iVar14 - iVar3)) {
            iVar17 = local_68 + 1;
            if ((int)uVar7 < iVar17) {
              iVar17 = 0;
            }
            iVar16 = iVar5 + -1;
            if (iVar16 < 0) {
              iVar16 = iVar16 + uVar15;
            }
          }
          else {
            iVar17 = local_68 + -1;
            iVar16 = iVar5 + 1;
            if (iVar17 < 0) {
              iVar17 = iVar17 + uVar15;
            }
            if ((int)uVar7 < iVar16) {
              iVar16 = 0;
            }
          }
          iVar4 = piVar1[iVar17 * 2 + 1];
          iVar8 = piVar1[local_68 * 2 + 1];
          if (iVar8 <= iVar4) {
            if (iVar4 != iVar8) {
              if (piVar1[iVar17 * 2] != piVar1[local_68 * 2]) {
                FUN_1008cbec(iVar2,piVar1[local_68 * 2],iVar8,piVar1[iVar17 * 2],iVar4,1);
                FUN_1008ca4c(iVar2,iVar19);
                iVar2 = iVar2 + 0x38;
              }
            }
            uVar11 = uVar11 + 1;
            local_68 = iVar17;
          }
          if (uVar15 == uVar11) break;
          if (piVar1[iVar5 * 2 + 1] <= piVar1[iVar16 * 2 + 1]) {
            if ((piVar1[iVar16 * 2 + 1] != piVar1[iVar5 * 2 + 1]) &&
               (piVar1[iVar16 * 2] != piVar1[iVar5 * 2])) {
              FUN_1008cbec(iVar2);
              FUN_1008ca4c(iVar2,iVar19);
              iVar2 = iVar2 + 0x38;
            }
            uVar11 = uVar11 + 1;
            iVar5 = iVar16;
          }
        } while (uVar11 < uVar15);
        FUN_10128076(param_1,param_2,&local_50);
        FUN_1008cb00(iVar19);
        FUN_10094444(iVar19);
        FUN_10094444(piVar1);
        *(undefined4 *)(param_1 + 8) = uVar10;
        return;
      }
    }
    FUN_10094444(piVar1);
  }
  return;
}


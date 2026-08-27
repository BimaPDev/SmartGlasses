/* FUN_2c550fe0 @ 0x2c550fe0 */

void FUN_2c550fe0(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint local_30;
  int local_2c;
  
  piVar13 = DAT_2c551280;
  piVar11 = (int *)*param_1;
  piVar12 = (int *)param_1[1];
  local_2c = *DAT_2c551264;
  uVar9 = DAT_2c551268 * ((int)piVar12 - (int)piVar11 >> 3);
  if (uVar9 - DAT_2c55126c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(DAT_2c55127c);
  }
  uVar5 = uVar9;
  if (uVar9 == 0) {
    uVar5 = 1;
  }
  uVar10 = uVar9 + uVar5;
  if (CARRY4(uVar9,uVar5)) {
    iVar6 = (int)param_2 - (int)piVar11;
    iVar3 = DAT_2c551274;
    uVar10 = DAT_2c55126c;
LAB_2c5511f2:
    if (*DAT_2c551280 == 0) {
      FUN_2c4723c4();
      *piVar13 = 1;
    }
    iVar3 = FUN_2c47245c(0,iVar3);
  }
  else {
    iVar6 = (int)param_2 - (int)piVar11;
    if (uVar10 != 0) {
      if (DAT_2c55126c <= uVar10) {
        uVar10 = DAT_2c55126c;
      }
      iVar3 = uVar10 * 0x18;
      goto LAB_2c5511f2;
    }
    iVar3 = 0;
  }
  piVar13 = (int *)(iVar3 + iVar6);
  *(int **)(iVar3 + iVar6) = piVar13 + 2;
  puVar7 = (undefined1 *)*param_3;
  uVar9 = param_3[1];
  if ((puVar7 + uVar9 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c551278);
  }
  local_30 = uVar9;
  if (uVar9 < 0x10) {
    puVar1 = (undefined1 *)*piVar13;
    if (uVar9 != 1) {
      if (uVar9 == 0) {
        piVar13[1] = 0;
        *puVar1 = 0;
        goto joined_r0x2c551066;
      }
      goto LAB_2c551224;
    }
    *puVar1 = *puVar7;
    iVar6 = *piVar13;
  }
  else {
    puVar1 = (undefined1 *)FUN_2c54f538(&local_30,0);
    *piVar13 = (int)puVar1;
    piVar13[2] = local_30;
LAB_2c551224:
    FUN_2c674668(puVar1,puVar7,uVar9);
    iVar6 = *piVar13;
  }
  piVar13[1] = local_30;
  *(undefined1 *)(iVar6 + local_30) = 0;
joined_r0x2c551066:
  iVar6 = iVar3;
  if (param_2 != piVar11) {
    piVar2 = piVar11 + 2;
    piVar4 = (int *)(iVar3 + 8);
    piVar13 = piVar11;
    do {
      piVar8 = piVar13 + 6;
      piVar4[-2] = (int)piVar4;
      if ((int *)*piVar13 == piVar2) {
        iVar15 = piVar2[1];
        iVar14 = piVar2[2];
        iVar6 = piVar2[3];
        *piVar4 = *piVar2;
        piVar4[1] = iVar15;
        piVar4[2] = iVar14;
        piVar4[3] = iVar6;
      }
      else {
        piVar4[-2] = *piVar13;
        *piVar4 = piVar13[2];
      }
      piVar4[-1] = piVar13[1];
      *(undefined1 *)(piVar13 + 2) = 0;
      *piVar13 = (int)piVar2;
      piVar13[1] = 0;
      piVar2 = piVar2 + 6;
      piVar4 = piVar4 + 6;
      piVar13 = piVar8;
    } while (param_2 != piVar8);
    iVar6 = iVar3 + ((DAT_2c551270 * ((uint)((int)param_2 + (-0x18 - (int)piVar11)) >> 3) &
                     0x1fffffff) + 1) * 0x18;
  }
  iVar14 = iVar6 + 0x18;
  if (param_2 != piVar12) {
    piVar2 = param_2 + 2;
    piVar4 = (int *)(iVar6 + 0x20);
    piVar13 = param_2;
    do {
      piVar8 = piVar13 + 6;
      piVar4[-2] = (int)piVar4;
      if ((int *)*piVar13 == piVar2) {
        iVar16 = piVar2[1];
        iVar15 = piVar2[2];
        iVar6 = piVar2[3];
        *piVar4 = *piVar2;
        piVar4[1] = iVar16;
        piVar4[2] = iVar15;
        piVar4[3] = iVar6;
      }
      else {
        piVar4[-2] = *piVar13;
        *piVar4 = piVar13[2];
      }
      piVar4[-1] = piVar13[1];
      *(undefined1 *)(piVar13 + 2) = 0;
      *piVar13 = (int)piVar2;
      piVar13[1] = 0;
      piVar2 = piVar2 + 6;
      piVar4 = piVar4 + 6;
      piVar13 = piVar8;
    } while (piVar12 != piVar8);
    iVar14 = iVar14 + ((DAT_2c551270 * ((uint)((int)piVar12 + (-0x18 - (int)param_2)) >> 3) &
                       0x1fffffff) + 1) * 0x18;
  }
  piVar13 = DAT_2c551264;
  if (piVar11 != piVar12) {
    piVar2 = piVar11 + 2;
    piVar4 = piVar11;
    do {
      if ((int *)piVar2[-2] != piVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar4 = piVar4 + 6;
      piVar2 = piVar2 + 6;
    } while (piVar4 != piVar12);
  }
  if (piVar11 == (int *)0x0) {
    *param_1 = iVar3;
    param_1[1] = iVar14;
    param_1[2] = iVar3 + uVar10 * 0x18;
    if (*piVar13 != local_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0,piVar11);
}


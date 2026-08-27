/* FUN_2c4fd9cc @ 0x2c4fd9cc */

int * FUN_2c4fd9cc(int *param_1,uint *param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  char local_3c [4];
  uint local_38;
  int local_34;
  
  local_34 = *DAT_2c4fdc28;
  piVar4 = param_1 + 6;
  param_1[1] = 1;
  *param_1 = (int)piVar4;
  uVar5 = (int)param_3 - (int)param_2 >> 3;
  if (uVar5 < param_4) {
    uVar5 = param_4;
  }
  param_1[4] = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar5 = FUN_2c6586d0(param_1 + 4,uVar5);
  piVar1 = DAT_2c4fdc2c;
  if ((uint)param_1[1] < uVar5) {
    if (uVar5 == 1) {
      param_1[6] = 0;
      piVar1 = piVar4;
    }
    else {
      if (*DAT_2c4fdc2c == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      piVar1 = (int *)FUN_2c47245c(0,uVar5 << 2);
      FUN_2c674268(piVar1,0,uVar5 << 2);
    }
    *param_1 = (int)piVar1;
    param_1[1] = uVar5;
  }
  piVar1 = DAT_2c4fdc2c;
  if (param_2 != param_3) {
    do {
      puVar9 = param_2 + 2;
      uVar5 = *param_2;
      uVar10 = param_1[1];
      iVar6 = uVar5 - uVar10 * (uVar5 / uVar10);
      piVar12 = *(int **)(*param_1 + iVar6 * 4);
      iVar11 = iVar6 * 4;
      if (piVar12 != (int *)0x0) {
        uVar7 = ((int *)*piVar12)[1];
        piVar8 = (int *)*piVar12;
        while (uVar5 != uVar7) {
          piVar2 = (int *)*piVar8;
          if ((piVar2 == (int *)0x0) ||
             (uVar7 = piVar2[1], piVar12 = piVar8, piVar8 = piVar2,
             iVar6 != uVar7 - uVar10 * (uVar7 / uVar10))) goto LAB_2c4fdad0;
        }
        if (*piVar12 != 0) goto LAB_2c4fdaac;
      }
LAB_2c4fdad0:
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      piVar12 = (int *)FUN_2c47245c(0,0xc);
      *piVar12 = 0;
      uVar10 = param_2[1];
      piVar12[1] = *param_2;
      piVar12[2] = uVar10;
      FUN_2c658768(local_3c,param_1 + 4,param_1[1],param_1[3],1);
      uVar10 = local_38;
      if (local_3c[0] == '\0') {
        piVar8 = *(int **)(*param_1 + iVar11);
        if (piVar8 == (int *)0x0) goto LAB_2c4fdbb8;
LAB_2c4fdb18:
        *piVar12 = *piVar8;
        **(undefined4 **)(*param_1 + iVar11) = piVar12;
      }
      else {
        if (local_38 == 1) {
          param_1[6] = 0;
          piVar8 = piVar4;
        }
        else {
          if (*piVar1 == 0) {
            FUN_2c4723c4();
            *piVar1 = 1;
          }
          piVar8 = (int *)FUN_2c47245c(0,uVar10 << 2);
          FUN_2c674268(piVar8,0,uVar10 << 2);
        }
        piVar2 = (int *)param_1[2];
        param_1[2] = 0;
        if (piVar2 != (int *)0x0) {
          iVar6 = 0;
          do {
            while( true ) {
              piVar3 = (int *)*piVar2;
              iVar11 = piVar2[1] - uVar10 * ((uint)piVar2[1] / uVar10);
              if ((int *)piVar8[iVar11] == (int *)0x0) break;
              *piVar2 = *(int *)piVar8[iVar11];
              *(int **)piVar8[iVar11] = piVar2;
joined_r0x2c4fdbf4:
              piVar2 = piVar3;
              if (piVar3 == (int *)0x0) goto LAB_2c4fdb92;
            }
            *piVar2 = param_1[2];
            param_1[2] = (int)piVar2;
            piVar8[iVar11] = (int)(param_1 + 2);
            if (*piVar2 != 0) {
              piVar8[iVar6] = (int)piVar2;
              iVar6 = iVar11;
              goto joined_r0x2c4fdbf4;
            }
            piVar2 = piVar3;
            iVar6 = iVar11;
          } while (piVar3 != (int *)0x0);
        }
LAB_2c4fdb92:
        if (piVar4 != (int *)*param_1) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        *param_1 = (int)piVar8;
        param_1[1] = uVar10;
        iVar6 = uVar5 - uVar10 * (uVar5 / uVar10);
        iVar11 = iVar6 * 4;
        piVar8 = (int *)piVar8[iVar6];
        if (piVar8 != (int *)0x0) goto LAB_2c4fdb18;
LAB_2c4fdbb8:
        *piVar12 = param_1[2];
        param_1[2] = (int)piVar12;
        if (*piVar12 != 0) {
          uVar5 = *(uint *)(*piVar12 + 4);
          *(int **)(*param_1 + (uVar5 - param_1[1] * (uVar5 / (uint)param_1[1])) * 4) = piVar12;
        }
        *(int **)(*param_1 + iVar11) = param_1 + 2;
      }
      param_1[3] = param_1[3] + 1;
LAB_2c4fdaac:
      param_2 = puVar9;
    } while (param_3 != puVar9);
  }
  if (*DAT_2c4fdc28 != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return param_1;
}


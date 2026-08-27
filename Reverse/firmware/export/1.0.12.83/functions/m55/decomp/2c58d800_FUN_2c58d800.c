/* FUN_2c58d800 @ 0x2c58d800 */

int * FUN_2c58d800(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int *piVar12;
  int *piVar13;
  int local_40;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c58daac;
  if (*DAT_2c58daa8 == 0) {
    FUN_2c4723c4(param_1,param_2,0);
    *DAT_2c58daa8 = 1;
  }
  piVar2 = (int *)FUN_2c47245c(0,0x38);
  piVar4 = piVar2 + 3;
  *piVar2 = 0;
  piVar2[1] = (int)piVar4;
  puVar11 = (undefined1 *)*param_3;
  uVar9 = param_3[1];
  if ((puVar11 + uVar9 != (undefined1 *)0x0) && (puVar11 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c58dab4);
  }
  local_34 = uVar9;
  if (uVar9 < 0x10) {
    piVar13 = piVar4;
    if (uVar9 == 1) {
      *(undefined1 *)(piVar2 + 3) = *puVar11;
      goto LAB_2c58d858;
    }
    if (uVar9 == 0) goto LAB_2c58d858;
  }
  else {
    piVar13 = (int *)FUN_2c58d6c0(&local_34,0);
    piVar2[1] = (int)piVar13;
    piVar2[3] = local_34;
  }
  FUN_2c674668(piVar13,puVar11,uVar9);
  piVar13 = (int *)piVar2[1];
LAB_2c58d858:
  piVar2[2] = local_34;
  *(undefined1 *)((int)piVar13 + local_34) = 0;
  piVar2[7] = (int)(piVar2 + 9);
  if ((undefined4 *)param_3[6] == param_3 + 8) {
    iVar3 = param_3[9];
    iVar8 = param_3[10];
    iVar7 = param_3[0xb];
    piVar2[9] = param_3[8];
    piVar2[10] = iVar3;
    piVar2[0xb] = iVar8;
    piVar2[0xc] = iVar7;
  }
  else {
    piVar2[7] = (int)param_3[6];
    piVar2[9] = param_3[8];
  }
  param_3[6] = param_3 + 8;
  uVar1 = DAT_2c58dab0;
  piVar2[8] = param_3[7];
  param_3[7] = 0;
  *(undefined1 *)(param_3 + 8) = 0;
  uVar9 = FUN_2c64c9f4(piVar2[1],piVar2[2],uVar1);
  uVar10 = param_2[1];
  local_40 = uVar9 - uVar10 * (uVar9 / uVar10);
  piVar13 = *(int **)(*param_2 + local_40 * 4);
  if (piVar13 == (int *)0x0) {
LAB_2c58d936:
    FUN_2c658768(&local_34,param_2 + 4,uVar10,param_2[3],1);
    if ((char)local_34 != '\0') {
      if (local_30 == 1) {
        piVar4 = param_2 + 6;
        *piVar4 = 0;
      }
      else {
        if (*DAT_2c58daa8 == 0) {
          FUN_2c4723c4();
          *DAT_2c58daa8 = 1;
        }
        piVar4 = (int *)FUN_2c47245c(0,local_30 << 2);
        FUN_2c674268(piVar4,0,local_30 << 2);
      }
      piVar13 = (int *)param_2[2];
      param_2[2] = 0;
      if (piVar13 != (int *)0x0) {
        iVar3 = 0;
        do {
          piVar12 = (int *)*piVar13;
          iVar8 = piVar13[0xd] - local_30 * ((uint)piVar13[0xd] / local_30);
          if ((int *)piVar4[iVar8] == (int *)0x0) {
            *piVar13 = param_2[2];
            param_2[2] = (int)piVar13;
            piVar4[iVar8] = (int)(param_2 + 2);
            if (*piVar13 != 0) {
              piVar4[iVar3] = (int)piVar13;
            }
          }
          else {
            *piVar13 = *(int *)piVar4[iVar8];
            *(int **)piVar4[iVar8] = piVar13;
            iVar8 = iVar3;
          }
          piVar13 = piVar12;
          iVar3 = iVar8;
        } while (piVar12 != (int *)0x0);
      }
      if ((int *)*param_2 != param_2 + 6) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      *param_2 = (int)piVar4;
      param_2[1] = local_30;
      local_40 = uVar9 - local_30 * (uVar9 / local_30);
    }
    local_40 = local_40 * 4;
    piVar2[0xd] = uVar9;
    if (*(int **)(*param_2 + local_40) == (int *)0x0) {
      *piVar2 = param_2[2];
      param_2[2] = (int)piVar2;
      if (*piVar2 != 0) {
        uVar9 = *(uint *)(*piVar2 + 0x34);
        *(int **)(*param_2 + (uVar9 - param_2[1] * (uVar9 / (uint)param_2[1])) * 4) = piVar2;
      }
      *(int **)(*param_2 + local_40) = param_2 + 2;
    }
    else {
      *piVar2 = **(int **)(*param_2 + local_40);
      **(undefined4 **)(*param_2 + local_40) = piVar2;
    }
    iVar3 = param_2[3];
    *param_1 = (int)piVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    param_2[3] = iVar3 + 1;
    if (*DAT_2c58daac != local_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return param_1;
  }
  uVar6 = ((int *)*piVar13)[0xd];
  piVar12 = (int *)*piVar13;
  do {
    piVar5 = piVar12;
    if (uVar9 == uVar6) {
      piVar12 = (int *)piVar2[1];
      iVar3 = FUN_2c66b624(piVar12,piVar5[1]);
      if (iVar3 == 0) {
        if (*piVar13 != 0) {
          piVar5 = (int *)piVar2[7];
          *param_1 = *piVar13;
          *(undefined1 *)(param_1 + 1) = 0;
          if (piVar2 + 9 != piVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680();
          }
          if (piVar4 == piVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,piVar2);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,piVar12);
        }
        goto LAB_2c58d936;
      }
    }
    piVar12 = (int *)*piVar5;
    if ((piVar12 == (int *)0x0) ||
       (uVar6 = piVar12[0xd], piVar13 = piVar5, local_40 != uVar6 - uVar10 * (uVar6 / uVar10)))
    goto LAB_2c58d936;
  } while( true );
}


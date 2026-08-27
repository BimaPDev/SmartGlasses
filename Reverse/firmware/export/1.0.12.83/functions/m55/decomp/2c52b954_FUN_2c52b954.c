/* FUN_2c52b954 @ 0x2c52b954 */

int * FUN_2c52b954(int *param_1,int *param_2,undefined1 *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int local_40;
  uint local_34;
  uint local_30;
  int local_2c;
  
  local_2c = *DAT_2c52bbcc;
  if (*DAT_2c52bbd0 == 0) {
    FUN_2c4723c4();
    *DAT_2c52bbd0 = 1;
  }
  piVar1 = (int *)FUN_2c47245c(0,0x38);
  piVar3 = piVar1 + 3;
  *piVar1 = 0;
  piVar1[1] = (int)piVar3;
  uVar2 = FUN_2c66c4ec(param_3);
  local_34 = uVar2;
  if (uVar2 < 0x10) {
    piVar10 = piVar3;
    if (uVar2 == 1) {
      *(undefined1 *)(piVar1 + 3) = *param_3;
      goto LAB_2c52b9aa;
    }
    if (uVar2 == 0) goto LAB_2c52b9aa;
  }
  else {
    piVar10 = (int *)FUN_2c52b5c0(&local_34,0);
    piVar1[1] = (int)piVar10;
    piVar1[3] = local_34;
  }
  FUN_2c674668(piVar10,param_3,uVar2);
  piVar10 = (int *)piVar1[1];
LAB_2c52b9aa:
  piVar1[2] = local_34;
  *(undefined1 *)((int)piVar10 + local_34) = 0;
  iVar4 = *param_4;
  iVar6 = param_4[1];
  piVar1[7] = (int)(piVar1 + 9);
  FUN_2c52b630(piVar1 + 7,iVar4,iVar6 + iVar4);
  uVar2 = FUN_2c64c9f4(piVar1[1],piVar1[2],DAT_2c52bbd4);
  uVar8 = param_2[1];
  local_40 = uVar2 - uVar8 * (uVar2 / uVar8);
  piVar10 = *(int **)(*param_2 + local_40 * 4);
  if (piVar10 == (int *)0x0) {
LAB_2c52ba76:
    FUN_2c658768(&local_34,param_2 + 4,uVar8,param_2[3],1);
    if ((char)local_34 != '\0') {
      if (local_30 == 1) {
        piVar3 = param_2 + 6;
        *piVar3 = 0;
      }
      else {
        if (*DAT_2c52bbd0 == 0) {
          FUN_2c4723c4();
          *DAT_2c52bbd0 = 1;
        }
        piVar3 = (int *)FUN_2c47245c(0,local_30 << 2);
        FUN_2c674268(piVar3,0,local_30 << 2);
      }
      piVar10 = (int *)param_2[2];
      param_2[2] = 0;
      if (piVar10 != (int *)0x0) {
        iVar4 = 0;
        do {
          piVar9 = (int *)*piVar10;
          iVar6 = piVar10[0xd] - local_30 * ((uint)piVar10[0xd] / local_30);
          if ((int *)piVar3[iVar6] == (int *)0x0) {
            *piVar10 = param_2[2];
            param_2[2] = (int)piVar10;
            piVar3[iVar6] = (int)(param_2 + 2);
            if (*piVar10 != 0) {
              piVar3[iVar4] = (int)piVar10;
            }
          }
          else {
            *piVar10 = *(int *)piVar3[iVar6];
            *(int **)piVar3[iVar6] = piVar10;
            iVar6 = iVar4;
          }
          piVar10 = piVar9;
          iVar4 = iVar6;
        } while (piVar9 != (int *)0x0);
      }
      if ((int *)*param_2 != param_2 + 6) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      *param_2 = (int)piVar3;
      param_2[1] = local_30;
      local_40 = uVar2 - local_30 * (uVar2 / local_30);
    }
    local_40 = local_40 * 4;
    piVar1[0xd] = uVar2;
    if (*(int **)(*param_2 + local_40) == (int *)0x0) {
      *piVar1 = param_2[2];
      param_2[2] = (int)piVar1;
      if (*piVar1 != 0) {
        uVar2 = *(uint *)(*piVar1 + 0x34);
        *(int **)(*param_2 + (uVar2 - param_2[1] * (uVar2 / (uint)param_2[1])) * 4) = piVar1;
      }
      *(int **)(*param_2 + local_40) = param_2 + 2;
    }
    else {
      *piVar1 = **(int **)(*param_2 + local_40);
      **(undefined4 **)(*param_2 + local_40) = piVar1;
    }
    iVar4 = param_2[3];
    *param_1 = (int)piVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    param_2[3] = iVar4 + 1;
    if (*DAT_2c52bbcc != local_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return param_1;
  }
  uVar7 = ((int *)*piVar10)[0xd];
  piVar9 = (int *)*piVar10;
  do {
    piVar5 = piVar9;
    if (uVar2 == uVar7) {
      piVar9 = (int *)piVar1[1];
      iVar4 = FUN_2c66b624(piVar9,piVar5[1]);
      if (iVar4 == 0) {
        if (*piVar10 != 0) {
          piVar5 = (int *)piVar1[7];
          *param_1 = *piVar10;
          *(undefined1 *)(param_1 + 1) = 0;
          if (piVar1 + 9 != piVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680();
          }
          if (piVar3 == piVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0,piVar1);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,piVar9);
        }
        goto LAB_2c52ba76;
      }
    }
    piVar9 = (int *)*piVar5;
    if ((piVar9 == (int *)0x0) ||
       (uVar7 = piVar9[0xd], piVar10 = piVar5, local_40 != uVar7 - uVar8 * (uVar7 / uVar8)))
    goto LAB_2c52ba76;
  } while( true );
}

